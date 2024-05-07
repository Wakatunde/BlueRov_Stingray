import rclpy
from rclpy.node import Node
from stingray_msg.msg import StingrayControl
from mavros_msgs.srv import SetMode  # Service type for MAVROS set_mode
import time

class ModeControlNode(Node):
    def __init__(self):
        super().__init__('ModeControl')
        self.subscription = self.create_subscription(
            StingrayControl,
            '/stingray/control',
            self.mode_checker,
            10
        )
        
        self.client = self.create_client(SetMode, '/mavros/set_mode')
        while not self.client.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('SetMode service not available, waiting again...')

    def mode_checker(self, msg):
        if msg.manual_mode_toggle:
            self.set_flight_mode("MANUAL")

        elif msg.althold_mode_toggle:
            self.set_flight_mode("STABILIZE")

        elif msg.acro:
            self.set_flight_mode("ACRO")

        elif msg.stabilize:
            self.set_flight_mode("ALT_HOLD")


    def set_flight_mode(self, mode):
        request = SetMode.Request()
        request.custom_mode = mode
        future = self.client.call_async(request)
        future.add_done_callback(self.set_mode_callback)

    def set_mode_callback(self, future):
        try:
            response = future.result()
            if response.mode_sent:
                self.get_logger().info(f'Flight mode changed successfully')   #Look into including a better interface or sound feedback
                time.sleep(2)
            else:
                self.get_logger().error('Failed to change flight mode')
                time.sleep(2)
        except Exception as e:
            self.get_logger().error(f'Failed to change mode with ERROR: {str(e)}')
            time.sleep(2)



def main(args=None):
    rclpy.init(args=args)
    node = ModeControlNode()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()






# Type of service:
#
# Known custom modes listed here:
# http://wiki.ros.org/mavros/CustomModes

# basic modes from MAV_MODE
"""
uint8 MAV_MODE_PREFLIGHT		= 0
uint8 MAV_MODE_STABILIZE_DISARMED	= 80
uint8 MAV_MODE_STABILIZE_ARMED		= 208
uint8 MAV_MODE_MANUAL_DISARMED		= 64
uint8 MAV_MODE_MANUAL_ARMED		= 192
uint8 MAV_MODE_GUIDED_DISARMED		= 88
uint8 MAV_MODE_GUIDED_ARMED		= 216
uint8 MAV_MODE_AUTO_DISARMED		= 92
uint8 MAV_MODE_AUTO_ARMED		= 220
uint8 MAV_MODE_TEST_DISARMED		= 66
uint8 MAV_MODE_TEST_ARMED		= 194

uint8 base_mode		# filled by MAV_MODE enum value or 0 if custom_mode != ''
string custom_mode	# string mode representation or integer
---
bool mode_sent		# Mode known/parsed correctly and SET_MODE are sent
"""