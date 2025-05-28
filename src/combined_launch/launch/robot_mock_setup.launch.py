from launch import LaunchDescription
from launch.actions import IncludeLaunchDescription
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch_ros.actions import Node
import os

def generate_launch_description():
    lbr_bringup_launch_dir = '/home/rosuser/ros2_ws/src/lbr_fri_ros2_stack/lbr_bringup/launch'

    return LaunchDescription([
        IncludeLaunchDescription(
            PythonLaunchDescriptionSource(os.path.join(lbr_bringup_launch_dir, 'mock.launch.py')),
            launch_arguments={'model': 'iiwa14'}.items(),
        ),
        IncludeLaunchDescription(
            PythonLaunchDescriptionSource(os.path.join(lbr_bringup_launch_dir, 'move_group.launch.py')),
            launch_arguments={
                'mode': 'mock',
                'rviz': 'true',
                'model': 'iiwa14'
            }.items(),
        ),
    ])

