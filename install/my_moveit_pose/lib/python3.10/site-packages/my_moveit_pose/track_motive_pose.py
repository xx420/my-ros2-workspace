import rclpy
from rclpy.node import Node
from geometry_msgs.msg import PoseStamped
from pymoveit2 import MoveIt2

class MotivePoseFollower(Node):
    def __init__(self):
        super().__init__("track_motive_pose")
        self.moveit2 = MoveIt2(
            node=self,
            base_link_name="lbr_link_0",
            end_effector_name="lbr_link_ee",
            joint_names=[
                "lbr_A2", "lbr_A3", "lbr_A4", "lbr_A6", "lbr_A1", "lbr_A5", "lbr_A7"
            ],
            group_name="arm"       # <--- YOUR CORRECT GROUP NAME
        )
        self.subscription = self.create_subscription(
            PoseStamped,
            "/marker_pose",
            self.pose_callback,
            1
        )
        self.get_logger().info("Motive pose follower node started.")

    def pose_callback(self, msg):
        self.get_logger().info(
            f"Received marker pose: ({msg.pose.position.x:.3f}, {msg.pose.position.y:.3f}, {msg.pose.position.z:.3f})"
        )
        try:
            result = self.moveit2.move_to_pose(msg.pose)
            self.get_logger().info(f"Sent move_to_pose command, result: {result}")
        except Exception as e:
            self.get_logger().error(f"Exception in move_to_pose: {e}")

def main():
    rclpy.init()
    node = MotivePoseFollower()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    node.destroy_node()
    rclpy.shutdown()

if __name__ == "__main__":
    main()



