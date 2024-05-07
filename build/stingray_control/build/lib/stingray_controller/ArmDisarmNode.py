#Node for arming and dissarming the ROv
import rclpy
from rclpy.node import Node
from stingray_msg.msg import StingrayControl
from mavros_msgs.srv import CommandBool                                 #Service type for mavros/cmd/arming

class ModeControlNode(Node):
    def __init__(self):
        super().__init__('ModeControl')                                     #Subscribe to stingray/control for controller input (settings and select)
        self.subscription = self.create_subscription(
            StingrayControl,
            '/stingray/control',
            self.ControlLog,
            10
        )
        self.client = self.create_client(CommandBool, '/mavros/cmd/arming')
        while not self.client.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('Arming not available, waiting again...')

    def ControlLog(self, msg):
        if msg.arm:
            self.arm_rov()                                          #Call the corresponding method when arm or dissarm = 1
        elif msg.dissarm:
            self.disarm_rov()

    def arm_rov(self):
        request = CommandBool.Request()
        request.value = True                                  # Set the value to True to arm the ROV
        future = self.client.call_async(request)
        future.add_done_callback(self.callbackArm)

    def disarm_rov(self):
        request = CommandBool.Request()
        request.value = False                                 # Set the value to False to disarm the ROV
        future = self.client.call_async(request)
        future.add_done_callback(self.callbackDisarm)

    def callbackDisarm(self, future):
        try:
            response = future.result()
                                                                                         #Add delay 
            if response.success:
                self.get_logger().info('ROV Disarmed successfully')
            else:
                self.get_logger().error('Failed to disarm the ROV')                                #Give feedback on result
        except Exception as e:
            self.get_logger().error(f'Failed to disarm the ROV with ERROR: {str(e)}')

    def callbackArm(self, future):
        try:
            response = future.result()
            if response.success:                                                                          #Add delay
                self.get_logger().info('ROV Armed successfully')
            else:
                self.get_logger().error('Failed to arm the ROV')                              #Give feedback
        except Exception as e:
            self.get_logger().error(f'Failed to arm the ROV with ERROR: {str(e)}')


def main(args=None):
    rclpy.init(args=args)
    node = ModeControlNode()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
