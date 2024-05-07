#Node for controlling camera angle and Light brightness (NO LONGER IN USE)
import rclpy
from rclpy.node import Node
from mavros_msgs.msg import OverrideRCIn
from stingray_msg.msg import StingrayControl


class CamLightNode(Node):
    def __init__(self):
        super().__init__('cam_light_control')
        self.subscription = self.create_subscription(
            StingrayControl,                                                  #Subsribe to singray/control
            '/stingray/control',
            self.control_callback,
            10
        )
        
        self.publisher = self.create_publisher(
            OverrideRCIn,
            '/mavros/rc/override',
            10
        )

    def control_callback(self, msg):                                             #Should include in RcControlNode
        

        # Mapping for light levels
        light_level = msg.light_step
        

        # Mapping for up/down on dpad
        camera_tilt_speed = msg.camera_angle

        # Create OverrideRCIn message
        override_msg = OverrideRCIn()
        #override_msg.channels = [0] * 18  # Assuming 16 channels
        override_msg.channels[8] = light_level
        override_msg.channels[9] = camera_tilt_speed  # Channel 11 for camera tilt     Range: 1300-1700

        # Publish OverrideRCIn message
        self.publisher.publish(override_msg)


def main(args=None):
    rclpy.init(args=args)
    CamLight = CamLightNode()
    rclpy.spin(CamLight)
    CamLight.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
