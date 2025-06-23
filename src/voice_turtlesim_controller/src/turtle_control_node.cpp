#include <rclcpp/rclcpp.hpp>
#include <geometry_msgs/msg/twist.hpp> // For controlling Turtlesim
#include <voice_turtlesim_controller/msg/arvr_control.hpp> // Your custom message
#include <voice_turtlesim_controller/msg/robot_state.hpp> // Your custom message (for publishing robot state)

class TurtleControlNode : public rclcpp::Node
{
public:
  TurtleControlNode() : Node("turtle_control_node")
  {
    // Subscribe to AR/VR control commands (now interpreted as velocity commands)
    arvr_control_subscription_ = this->create_subscription<voice_turtlesim_controller::msg::ARVRControl>(
        "/arvr_control", 10, std::bind(&TurtleControlNode::arvr_control_callback, this, std::placeholders::_1));

    // Publisher for Turtlesim velocity commands
    velocity_publisher_ = this->create_publisher<geometry_msgs::msg::Twist>("/turtle1/cmd_vel", 10);

    // Publisher for robot state (optional, for monitoring)
    robot_state_publisher_ = this->create_publisher<voice_turtlesim_controller::msg::RobotState>("/robot_state", 10);

    // Initialize robot state (example - Turtlesim doesn't directly give this)
    robot_state_.pose.position.x = 0.0;
    robot_state_.pose.position.y = 0.0;
    robot_state_.pose.orientation.w = 1.0; // No rotation initially (quaternion for identity)
    robot_state_.gripper_open = false; // Initial gripper state
    robot_state_.battery_level = 100.0; // Initial battery
  }

private:
  void arvr_control_callback(const voice_turtlesim_controller::msg::ARVRControl & msg)
  {
    auto twist_msg = geometry_msgs::msg::Twist();
    twist_msg.linear.x = msg.linear_x;
    twist_msg.angular.z = msg.angular_z;
    velocity_publisher_->publish(twist_msg);

    RCLCPP_INFO(this->get_logger(), "Applied control: Linear X: %.2f, Angular Z: %.2f", twist_msg.linear.x, twist_msg.angular.z);

    // Update and publish robot state (optional, simplified for Turtlesim)
    // This is a very basic kinematic model; for actual robots, you'd get this from encoders/sensors
    robot_state_.pose.position.x += twist_msg.linear.x * 0.02; // Small step based on time (adjust)
    robot_state_.pose.orientation.z += twist_msg.angular.z * 0.02; // Small step based on time (adjust)
    robot_state_.gripper_open = msg.gripper_open; // Update gripper state from control message
    // Battery level might degrade over time or be fixed for simulation
    robot_state_.battery_level -= 0.001; // Simulate slight drain

    robot_state_publisher_->publish(robot_state_);
  }

  rclcpp::Subscription<voice_turtlesim_controller::msg::ARVRControl>::SharedPtr arvr_control_subscription_;
  rclcpp::Publisher<geometry_msgs::msg::Twist>::SharedPtr velocity_publisher_;
  rclcpp::Publisher<voice_turtlesim_controller::msg::RobotState>::SharedPtr robot_state_publisher_;
  voice_turtlesim_controller::msg::RobotState robot_state_;
};

int main(int argc, char * argv[])
{
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<TurtleControlNode>());
  rclcpp::shutdown();
  return 0;
}
