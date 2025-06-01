from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        Node(
            package='my_moveit_pose',           # Your package name
            executable='move_to_pose',          # Entry point, see setup.py 'console_scripts'
            name='move_iiwa14_to_pose',
            output='screen',
            remappings=[
                ('/joint_states', '/lbr/joint_states'),
                ('/plan_kinematic_path', '/lbr/plan_kinematic_path'),
            ]
        ),
    ])
    
    
    
    





