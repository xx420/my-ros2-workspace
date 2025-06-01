import rclpy
from pymoveit2 import MoveIt2
from geometry_msgs.msg import Pose

def main():
    rclpy.init()
    node = rclpy.create_node("move_iiwa14_to_pose")

    moveit2 = MoveIt2(
        node=node,
        base_link_name="lbr_link_0",         # Base link from your URDF
        end_effector_name="lbr_link_ee",     # EE link from your URDF
        joint_names=[
            "lbr_A1",
            "lbr_A2",
            "lbr_A3",
            "lbr_A4",
            "lbr_A5",
            "lbr_A6",
            "lbr_A7",
        ],
    )

    goal_pose = Pose()
    goal_pose.position.x = 0.5   # Set your desired x
    goal_pose.position.y = 0.0   # Set your desired y
    goal_pose.position.z = 0.8   # Set your desired z
    goal_pose.orientation.x = 0.0
    goal_pose.orientation.y = 0.0
    goal_pose.orientation.z = 0.0
    goal_pose.orientation.w = 1.0

    print("Moving to goal pose...")
    moveit2.move_to_pose(goal_pose)
    print("Motion completed!")

    node.destroy_node()
    rclpy.shutdown()

if __name__ == "__main__":
    main()
