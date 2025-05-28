# ~/ros2_ws/src/my_launch_pkg/my_launch_pkg/launch/all_nodes_launch.py

import os
from launch import LaunchDescription
from launch.actions import IncludeLaunchDescription, TimerAction, ExecuteProcess
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch_ros.actions import Node
from ament_index_python.packages import get_package_share_directory

def generate_launch_description():
    # Path to optitrack2.launch.py from mocap4r2_optitrack_driver
    optitrack_launch_file_path = os.path.join(
        get_package_share_directory('mocap4r2_optitrack_driver'),
        'launch',
        'optitrack2.launch.py'
    )

    return LaunchDescription([
        # Include the OptiTrack launch file
        IncludeLaunchDescription(
            PythonLaunchDescriptionSource(optitrack_launch_file_path)
        ),

        # Custom marker pose publisher node
        Node(
            package='marker_pose_bridge',
            executable='marker_pose_publisher',
            name='marker_pose_publisher',
            output='screen'
        ),

        # Custom pose follower node
        Node(
            package='marker_pose_follow',
            executable='pose_follower',
            name='pose_follower',
            output='screen'
        ),

        # Custom transform node
	Node(
            package='tf2_ros',
            executable='static_transform_publisher',
            name='static_transform_publisher_map_to_world',
            arguments=['0', '0', '0', '0', '0', '0', 'map', 'world'],
            output='screen'
        ),
        
        	
        # Timer to delay lifecycle activation to ensure node is ready
        TimerAction(
            period=5.0,
            actions=[
                ExecuteProcess(
                    cmd=['ros2', 'lifecycle', 'set', '/mocap4r2_optitrack_driver_node', 'activate'],
                    output='screen'
                )
            ]
        ),
    ])

