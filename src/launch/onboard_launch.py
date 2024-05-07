from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        Node(
            package='usb_cam',
            namespace='Topside1',
            executable='usb_cam_node_exe',
            name='Top'
        ),
    ])