#include <rclcpp/rclcpp.hpp>
#include <std_msgs/msg/string.hpp> // For receiving recognized speech from vosk_ros
#include <voice_turtlesim_controller/msg/arvr_control.hpp> // Your custom message

class VoiceControlNode : public rclcpp::Node
{
public:
  VoiceControlNode() : Node("voice_control_node")
  {
    // Subscribe to the recognized speech topic from vosk_ros
    speech_subscription_ = this->create_subscription<std_msgs::msg::String>(
        "/vosk/result", 10, std::bind(&VoiceControlNode::speech_callback, this, std::placeholders::_1));

    // Publisher for AR/VR control messages (velocity commands for Turtlesim)
    arvr_control_publisher_ = this->create_publisher<voice_turtlesim_controller::msg::ARVRControl>("/arvr_control", 10);

    RCLCPP_INFO(this->get_logger(), "Voice control node started. Listening for commands on /vosk/result...");
  }

private:
  void speech_callback(const std_msgs::msg::String::SharedPtr msg)
  {
    // The /vosk/result topic publishes a JSON string. We need to extract the "text" field.
    // Example: {"text" : "forward"} or {"text" : "turn left"}
    std::string recognized_text = "";
    size_t text_start = msg->data.find("\"text\" : \"");
    if (text_start != std::string::npos) {
      text_start += 10; // Move past "\"text\" : \""
      size_t text_end = msg->data.find("\"", text_start);
      if (text_end != std::string::npos) {
        recognized_text = msg->data.substr(text_start, text_end - text_start);
      }
    }

    // Convert to lowercase for consistent matching
    std::transform(recognized_text.begin(), recognized_text.end(), recognized_text.begin(),
                   [](unsigned char c){ return std::tolower(c); });


    RCLCPP_INFO(this->get_logger(), "Vosk Heard: '%s'", recognized_text.c_str());

    auto control_msg = voice_turtlesim_controller::msg::ARVRControl();
    control_msg.linear_x = 0.0;
    control_msg.linear_y = 0.0;
    control_msg.angular_z = 0.0;
    control_msg.gripper_open = false; // Not used in Turtlesim for now

    if (recognized_text.find("forward") != std::string::npos) { // Use find for robustness
      control_msg.linear_x = 2.0;
    } else if (recognized_text.find("backward") != std::string::npos) {
      control_msg.linear_x = -2.0;
    } else if (recognized_text.find("stop") != std::string::npos) {
      control_msg.linear_x = 0.0;
      control_msg.angular_z = 0.0;
    } else if (recognized_text.find("turn left") != std::string::npos) {
      control_msg.angular_z = 1.0;
    } else if (recognized_text.find("turn right") != std::string::npos) {
      control_msg.angular_z = -1.0;
    }

    arvr_control_publisher_->publish(control_msg);
  }

  rclcpp::Subscription<std_msgs::msg::String>::SharedPtr speech_subscription_;
  rclcpp::Publisher<voice_turtlesim_controller::msg::ARVRControl>::SharedPtr arvr_control_publisher_;
};

int main(int argc, char * argv[])
{
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<VoiceControlNode>());
  rclcpp::shutdown();
  return 0;
}
