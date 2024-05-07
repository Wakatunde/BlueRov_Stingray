# MIT License
#
# Copyright (c) 2022 Clyde McQueen
#
# Permission is hereby granted, free of charge, to any person obtaining a copy
# of this software and associated documentation files (the "Software"), to deal
# in the Software without restriction, including without limitation the rights
# to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
# copies of the Software, and to permit persons to whom the Software is
# furnished to do so, subject to the following conditions:
#
# The above copyright notice and this permission notice shall be included in all
# copies or substantial portions of the Software.
#
# THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
# IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
# FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
# AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
# LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
# OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
# SOFTWARE.




import os

from ament_index_python.packages import get_package_share_directory
from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument, ExecuteProcess, IncludeLaunchDescription
from launch.conditions import IfCondition, UnlessCondition
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch.substitutions import LaunchConfiguration


from launch import LaunchDescription
from launch_ros.actions import Node
from launch.actions import ExecuteProcess

def generate_launch_description():

    """stingray_simulation_dir = get_package_share_directory('stingray_simulation')
    
    
    #ardusub_params_file = os.path.join(stingray_simulation_dir, 'config', 'sub.parm')
    ardusub_params_file = "/home/michael/Stingray2_ws/src/stingray_simulation/config/sub.param"
    
    mavros_params_file = "/home/michael/Stingray2_ws/src/stingray_simulation/config/sim_mavros_params.yaml"
    #mavros_params_file = os.path.join(stingray_simulation_dir, 'config', 'sim_mavros_params.yaml')  
    
    #world_file = os.path.join(stingray_simulation_dir, 'worlds', 'sand.world')  
    world_file = "/home/michael/Stingray2_ws/src/stingray_simulation/worlds/sand.world"

    rviz_file = os.path.join(stingray_simulation_dir, 'config', 'sim_launch.rviz')"""

    stingray_simulation_dir = get_package_share_directory('stingray_simulation')
    
    ardusub_params_file = "/home/michael/Stingray2_ws/src/stingray_simulation/config/sub.parm"
    mavros_params_file = "/home/michael/Stingray2_ws/src/stingray_simulation/config/sim_mavros_params.yaml"
    world_file = "/home/michael/Stingray2_ws/src/stingray_simulation/worlds/sand.world"
    rviz_file = os.path.join(stingray_simulation_dir, 'config', 'sim_launch.rviz')

    # Print out the paths for verification
    print("Ardusub Params File:", ardusub_params_file)
    print("Mavros Params File:", mavros_params_file)
    print("World File:", world_file)
    print("RViz File:", rviz_file)


    
    return LaunchDescription([

        DeclareLaunchArgument(
            'ardusub',
            default_value='True',
            description='Launch ArduSUB with SIM_JSON?'
        ),

        DeclareLaunchArgument(
        'mavros',
            default_value='True',
            description='Launch mavros?',
            ),
        DeclareLaunchArgument(
            'mavros_params_file',
            default_value=os.path.join(stingray_simulation_dir, 'params', 'sim_mavros_params.yaml'),
            description='Full path to the ROS2 parameters file to use for mavros nodes',
        ),
        DeclareLaunchArgument(
            'gzclient',
            default_value='True',
            description='Launch Gazebo UI?'
        ),
        DeclareLaunchArgument(
            'rviz',
            default_value='True',
            description='Launch rviz?',
        ),



        

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



        
        # Launch ArduSub w/ SIM_JSON (wipe eeprom w/ -w)
        # ardusub must be on the $PATH, see src/orca4/setup.bash
        ExecuteProcess(
            cmd=['ardusub', '-S', '-w', '-M', 'JSON', '--defaults', ardusub_params_file,
                 '-I0', '--home', '33.810313,-118.39386700000001,0.0,270.0'],
            output='screen',
            condition=IfCondition(LaunchConfiguration('ardusub')),
        ),

        # Launch Gazebo Sim
        # gz must be on the $PATH
        # libArduPilotPlugin.so must be on the GZ_SIM_SYSTEM_PLUGIN_PATH
        ExecuteProcess(
            cmd=['gz', 'sim', '-v', '3', '-r', world_file],
            output='screen',
            condition=IfCondition(LaunchConfiguration('gzclient')),
        ),

        # Launch rviz
        ExecuteProcess(
            cmd=['rviz2', '-d', rviz_file],
            output='screen',
            condition=IfCondition(LaunchConfiguration('rviz')),
        ),
        # Launch Gazebo Sim server-only
        ExecuteProcess(
            cmd=['gz', 'sim', '-v', '3', '-r', '-s', world_file],
            output='screen',
            condition=UnlessCondition(LaunchConfiguration('gzclient')),
        ),
        # Translate messages MAV <-> ROS
        Node(
            package='mavros',
            executable='mavros_node',
            output='screen',
            # mavros_node is actually many nodes, so we can't override the name
            # name='mavros_node',
            parameters=[mavros_params_file],
            condition=IfCondition(LaunchConfiguration('mavros')),
        ),



    ])
