import math
import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Twist
from std_msgs.msg import Float64  
import speech_recognition as sr
import threading
import time

class VoiceTurtlesimController(Node):

    def __init__(self):
        super().__init__('voice_turtlesim_controller')
        self.publisher_ = self.create_publisher(Twist, '/turtle1/cmd_vel', 10)
        
        self.latency_publisher_ = self.create_publisher(Float64, 'processing_latency', 10)
        
        self.get_logger().info('Voice Turtlesim Controller Node has been started.')
        self.get_logger().info('Say "move forward", "stop", "turn left", or "turn right".')

        # Initialize speech recognition
        self.r = sr.Recognizer()
        self.mic = sr.Microphone()
	#setup
        self.get_logger().info("Calibrating microphone... Please wait.")
        with self.mic as source:
            self.r.adjust_for_ambient_noise(source, duration=5)
        self.get_logger().info("Calibration complete. Say a command!")

        # Start the voice listening thread
        self._listening_thread = threading.Thread(target=self._listen_continuously)
        self._listening_thread.daemon = True
        self._listening_thread.start()

    def _listen_continuously(self):
        """Listens to the microphone and processes commands."""
        with self.mic as source:
            while rclpy.ok():
                self.get_logger().info("Listening for command...")
                try:
                    audio = self.r.listen(source, timeout=5, phrase_time_limit=5)

                    self.get_logger().info("Recognizing...")
                    command = self.r.recognize_google(audio).lower()
                    
                    #Capture start time after recognition
                    start_time = self.get_clock().now()

                    self.get_logger().info(f"Heard: {command}")
                    #Pass start_time to the processing function
                    self._process_command(command, start_time)

                except sr.UnknownValueError:
                    self.get_logger().warn("Could not understand audio.")
                except sr.RequestError as e:
                    self.get_logger().error(f"Could not request results from speech recognition service; {e}")
                except sr.WaitTimeoutError:
                    pass
                except Exception as e:
                    self.get_logger().error(f"An unexpected error occurred: {e}")

                time.sleep(0.1)

    def _process_command(self, command, start_time):
        """Processes the recognized text command."""
        twist_msg = Twist()
        linear_speed = 1.0
        angular_speed = 1.0

        if "move forward" in command or "forward" in command:
            self.get_logger().info("Command: Move Forward")
            twist_msg.linear.x = linear_speed
        elif "move fast" in command or "fast" in command:
            self.get_logger().info("Command: Move Fast")
            twist_msg.linear.x = 3.0
        elif "stop" in command:
            self.get_logger().info("Command: Stop")
            pass
        elif "turn left" in command or "left" in command:
            self.get_logger().info("Command: Turn Left")
            twist_msg.angular.z = angular_speed
        elif "turn right" in command or "right" in command:
            self.get_logger().info("Command: Turn Right")
            twist_msg.angular.z = -angular_speed
        elif "turn around" in command or "around" in command:
            self.get_logger().info("Command: Turn Around")
            angular_speed = 1.0
            twist_msg.angular.z = angular_speed
            angle = math.pi
            duration = angle / angular_speed
            end_time = time.time() + duration
            while time.time() < end_time:
                self.publisher_.publish(twist_msg)
                time.sleep(0.1)
            twist_msg.angular.z = 0.0
            self.publisher_.publish(twist_msg)
        else:
            self.get_logger().info(f"Unknown command: {command}")
            pass

        
        if not ("turn around" in command or "around" in command):
            #Calculate and publish latency
            end_time = self.get_clock().now()
            latency_duration = end_time - start_time
            latency_ms = latency_duration.nanoseconds / 1e6
            
            latency_msg = Float64()
            latency_msg.data = latency_ms
            self.latency_publisher_.publish(latency_msg)
            
            self.publisher_.publish(twist_msg)
            self.get_logger().info(f"Published Twist command: Linear X={twist_msg.linear.x}, Angular Z={twist_msg.angular.z}")

def main(args=None):
    rclpy.init(args=args)
    node = VoiceTurtlesimController()

    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.get_logger().info("Shutting down Voice Turtlesim Controller node.")
        node.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()
