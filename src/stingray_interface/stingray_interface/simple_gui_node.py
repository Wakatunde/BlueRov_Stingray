import rclpy
from rclpy.node import Node
from stingray_msg.msg import StingrayControl
from mavros_msgs.msg import State
from sensor_msgs.msg import BatteryState



class MyGuiNode(Node):
    def __init__(self):
        super().__init__('my_gui_node')

        self.subscription_control = self.create_subscription(
            StingrayControl,
            '/stingray/control',
            self.control_display,
            10
        )

        self.subscription_battery = self.create_subscription(
            BatteryState,
            '/mavros/battery',
            self.battery_display,
            10
        )

        self.subscription_state = self.create_subscription(
            State,
            '/mavros/state',
            self.state_display,
            10
        )

    def line(self):
        self.get_logger().info("------------------------------------------------")
    
    def battery_display(self, msg):
        if msg.percentage:
            self.line()
            self.get_logger().info(f'Battery Percent: {msg.percentage * 100} %')

    def state_display(self, msg):
        self.line()
        self.get_logger().info(f'Flight Mode: {msg.mode}')
        self.get_logger().info(f'Connection Status: {msg.connected}')
        self.get_logger().info(f'Arm Status: {msg.armed}')
        self.line()

    def control_display(self, msg):
        if msg.light_level:
            self.line()
            self.get_logger().info(f'Light Level: {msg.light_level}')


def main(args=None):
    rclpy.init(args=args)
    node = MyGuiNode()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
