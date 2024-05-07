from launch import LaunchDescription
from launch_ros.actions import Node
from launch.actions import ExecuteProcess

def generate_launch_description():
    return LaunchDescription([
        # Start joystick node publishing to /joy topic
        Node(
            package='joy',
            executable='joy_node',
            name='joy_node',
            output='screen'
        ),

        # Start stingray control node publishing to stingray/control
        Node(
            package='stingray_controller',
            executable='control_data',
            name='control_data',
            output='screen'
        ),
        # Start RC control node
        Node(
            package='stingray_controller',
            executable='RcControlNode',
            name='RcControlNode',
            output='screen'
        ),

        # Start Mode control node
        Node(
            package='stingray_controller',
            executable='ModeControl',
            name='ModeControl',
            output='screen'
        ),

        # Start Arm/Disarm node
        Node(
            package='stingray_controller',
            executable='ArmDisarmNode',
            name='ArmDisarmNode',
            output='screen'
        ),
        ExecuteProcess(
            cmd=['gst-launch-1.0', '-v', 'udpsrc', 'port=5600', '!', 'application/x-rtp,', 'encoding-name=H264,', 'payload=96', '!', 'rtph264depay', '!', 'h264parse', '!', 'avdec_h264', '!', 'videoconvert', '!', 'autovideosink'],
            output='screen'        
            )


        
    ])
