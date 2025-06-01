#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from pymoveit2 import MoveIt2
from rclpy.executors import SingleThreadedExecutor
from geometry_msgs.msg import PoseStamped

class MarkerRobotFollower(Node):
    def __init__(self):
        super().__init__('marker_robot_follower')
        self.moveit2 = MoveIt2(
            node=self,
            joint_names=[
                "lbr_A1",
                "lbr_A2",
                "lbr_A3",
                "lbr_A4",
                "lbr_A5",
                "lbr_A6",
                "lbr_A7"
            ],
            base_link_name="lbr_link_0",
            end_effector_name="lbr_link_ee",
            group_name="arm"  # Or "arm" if your MoveIt config uses that
        )
        self.subscription = self.create_subscription(
            PoseStamped,
            '/marker_pose',  # Change this if your pose topic is different
            self.pose_callback,
            10
        )
        self.get_logger().info("MarkerRobotFollower initialized and subscribed to /marker_pose")

    def pose_callback(self, msg):
        position = [
            msg.pose.position.x,
            msg.pose.position.y,
            msg.pose.position.z,
        ]
        quat_xyzw = [
            msg.pose.orientation.x,
            msg.pose.orientation.y,
            msg.pose.orientation.z,
            msg.pose.orientation.w,
        ]
        self.get_logger().info(f"Received new pose: {position} {quat_xyzw} — moving robot...")
        self.moveit2.move_to_pose(
            position=position,
            quat_xyzw=quat_xyzw
        )
        self.moveit2.wait_until_executed()

def main():
    rclpy.init()
    node = MarkerRobotFollower()
    executor = SingleThreadedExecutor()
    executor.add_node(node)
    try:
        executor.spin()
    finally:
        node.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()
