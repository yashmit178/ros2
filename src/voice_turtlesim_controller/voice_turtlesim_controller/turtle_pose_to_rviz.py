import rclpy
from rclpy.node import Node
from turtlesim.msg import Pose
from geometry_msgs.msg import PoseStamped
from nav_msgs.msg import Path
import math

class TurtlePoseToRViz(Node):
    def __init__(self):
        super().__init__('turtle_pose_to_rviz')
        self.sub = self.create_subscription(Pose, '/turtle1/pose', self.pose_callback, 10)
        self.pose_pub = self.create_publisher(PoseStamped, '/turtle1/pose_stamped', 10)
        self.path_pub = self.create_publisher(Path, '/turtle1/path', 10)
        self.path = Path()
        self.path.header.frame_id = 'world'

    def pose_callback(self, msg):
        pose_stamped = PoseStamped()
        pose_stamped.header.stamp = self.get_clock().now().to_msg()
        pose_stamped.header.frame_id = 'world'
        pose_stamped.pose.position.x = msg.x
        pose_stamped.pose.position.y = msg.y
        pose_stamped.pose.position.z = 0.0
        pose_stamped.pose.orientation.z = math.sin(msg.theta / 2.0)
        pose_stamped.pose.orientation.w = math.cos(msg.theta / 2.0)
        self.pose_pub.publish(pose_stamped)

        # Added pose to path and published
        self.path.header.stamp = pose_stamped.header.stamp
        self.path.poses.append(pose_stamped)
        self.path_pub.publish(self.path)

def main(args=None):
    rclpy.init(args=args)
    node = TurtlePoseToRViz()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()