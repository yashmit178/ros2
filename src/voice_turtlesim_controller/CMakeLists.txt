cmake_minimum_required(VERSION 3.8)
project(voice_turtlesim_controller)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# Find necessary ROS 2 packages
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(geometry_msgs REQUIRED) # For Twist and Pose messages
find_package(sensor_msgs REQUIRED)   # For Range message in RobotState.msg
find_package(std_msgs REQUIRED)      # For String messages (voskros result)
find_package(rosidl_default_generators REQUIRED)
find_package(Python3 REQUIRED COMPONENTS Interpreter)

# --- Custom Messages ---
# Generate custom message interfaces
rosidl_generate_interfaces(
  ${PROJECT_NAME}
  "msg/ARVRControl.msg"
  "msg/RobotState.msg"
  "msg/ObjectPose.msg"
)

# --- Python Node ---
# Install the Python package files
ament_python_install_package(${PROJECT_NAME})

# Make sure the Python node executable is installed (though `ament_python_install_package` usually handles this)
# This explicitly creates a setup.py entry point, which is useful for colcon build
install(PROGRAMS
  scripts/voice_command_node.py # Assuming you might move it to scripts if you wanted to keep it
  DESTINATION lib/${PROJECT_NAME}
)

# --- C++ Nodes ---
# Executable for Voice Control Node
add_executable(voice_control_node src/voice_control_node.cpp)
# Link against required ROS 2 libraries and your custom message interfaces
ament_target_dependencies(voice_control_node rclcpp std_msgs ${PROJECT_NAME}_interfaces)
install(TARGETS
  voice_control_node
  DESTINATION lib/${PROJECT_NAME}
)

# Executable for Turtle Control Node
add_executable(turtle_control_node src/turtle_control_node.cpp)
# Link against required ROS 2 libraries and your custom message interfaces
ament_target_dependencies(turtle_control_node rclcpp geometry_msgs sensor_msgs ${PROJECT_NAME}_interfaces)
install(TARGETS
  turtle_control_node
  DESTINATION lib/${PROJECT_NAME}
)

# --- Testing (Optional but good practice) ---
if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  set(ament_cmake_copyright_FOUND TRUE)
  set(ament_cmake_cpplint_FOUND TRUE)
  ament_lint_auto_find_test_dependencies()
endif()

ament_package()
