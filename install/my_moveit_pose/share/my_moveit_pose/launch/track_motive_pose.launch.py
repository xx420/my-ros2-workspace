from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        Node(
            package='my_moveit_pose',
            executable='track_motive_pose',
            name='track_motive_pose',
            output='screen',
	    remappings=[
    		('/joint_states', '/lbr/joint_states'),
    		('/plan_kinematic_path', '/lbr/plan_kinematic_path'),
	    ]
        ),
    ])
