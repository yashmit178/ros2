import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/ym/ros2_voice_ws/install/voice_turtlesim_controller'
