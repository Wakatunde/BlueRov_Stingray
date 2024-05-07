#Node for converting joy messages to scaled outputs published to Stingray/control
import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Joy
from stingray_msg.msg import StingrayControl


class JoyToStingrayNode(Node):
    def __init__(self):
        super().__init__('JoyToStingray')
        self.subscriber = self.create_subscription(
            Joy,
            '/joy',
            self.joy_callback,
            10
        )
        self.publisher = self.create_publisher(
            StingrayControl,
            '/stingray/control',
            10
        )
        self.light_level = 1100  # Initialize light level

    def joy_callback(self, msg):
        # Xbox one controller configuration:

        # Mapping for joystick and dpad axes:
        forward_backward = self.scale_input(msg.axes[1], -1.0, 1.0, 1100, 1900)  # Left stick Up/down
        left_right = self.scale_input(msg.axes[0], -1.0, 1.0, 1900, 1100)  # Left stick left/right  (inverted)
        increase_altitude = self.scale_input(msg.axes[5], 1.0, -1.0, 1500, 1900) #Right trigger
        decrease_altitude = self.scale_input(msg.axes[2], 1.0, -1.0, 1500, 1100)  #left trigger
        horizontal_rotation = self.scale_input(msg.axes[3], -1.0, 1.0, 1900, 1100)  # Right stick left/right (inverted)
        vertical_rotation = self.scale_input(msg.axes[4], -1.0, 1.0, 1100, 1900)  # Right stick Up/down

        #Possible to impliment gain/power manipulation by using left/right dpad axis

        camera_angle = int(self.scale_input(msg.axes[7], -1, 1, 1900, 1100)) #Up/DOwn on dpad maxMin values = (1100 and 1900)

        # Mapping for joystick buttons:
        light_brighter = msg.buttons[5]        #right bumper
        light_dimmer = msg.buttons[4]          # left bumper
        manual_mode_toggle = msg.buttons[1]         #B button
        althold_mode_toggle = msg.buttons[0]        #A button
        arm = msg.buttons[7]                        #start
        dissarm = msg.buttons[6]                    #select
        stabilize = msg.buttons[2]
        acro = msg.buttons[3]

      #Increase light brightness by 1 when increase or decrease is pressed
        if light_brighter and not self.prev_light_brighter and self.light_level < 1900:
            self.light_level += 100

        if light_dimmer and not self.prev_light_dimmer and self.light_level > 1100:
            self.light_level -= 100

        self.prev_light_brighter = light_brighter
        self.prev_light_dimmer = light_dimmer

        # Create StingrayControl message
        control_msg = StingrayControl()
        control_msg.forward_backward = forward_backward
        control_msg.left_right = left_right
        control_msg.horizontal_rotation = horizontal_rotation
        control_msg.vertical_rotation = vertical_rotation
        control_msg.camera_angle = camera_angle

        control_msg.increase_altitude = increase_altitude
        control_msg.decrease_altitude = decrease_altitude
        
        #control_msg.light_brighter = light_brighter
        #control_msg.light_dimmer = light_dimmer
        control_msg.light_step = self.light_level
        control_msg.manual_mode_toggle = manual_mode_toggle
        control_msg.althold_mode_toggle = althold_mode_toggle
        control_msg.arm = arm
        control_msg.dissarm = dissarm

        # Publish StingrayControl message
        self.publisher.publish(control_msg)

    def scale_input(self, input_val, in_min, in_max, out_min, out_max):                       #Method to scale controll input to desired range
        
        return (input_val - in_min) * (out_max - out_min) / (in_max - in_min) + out_min



def main(args = None):
    rclpy.init(args=args)
    JoyToStingray = JoyToStingrayNode()
    rclpy.spin(JoyToStingray)
    JoyToStingray.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
