import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Twist
import speech_recognition as sr
import threading
import time

class VoiceTurtlesimController(Node):

    def __init__(self):
        super().__init__('voice_turtlesim_controller')
        self.publisher_ = self.create_publisher(Twist, '/turtle1/cmd_vel', 10)
        self.get_logger().info('Voice Turtlesim Controller Node has been started.')
        self.get_logger().info('Say "move forward", "stop", "turn left", or "turn right".')

        # Initialize speech recognition
        self.r = sr.Recognizer()
        self.mic = sr.Microphone()

        # --- Speech Recognition Setup ---
        # Adjust for ambient noise for a few seconds to calibrate the recognizer
        # This helps in distinguishing speech from background noise.
        self.get_logger().info("Calibrating microphone... Please wait.")
        with self.mic as source:
             # listen for 5 seconds and create the ambient noise energy level
            self.r.adjust_for_ambient_noise(source, duration=5)
        self.get_logger().info("Calibration complete. Say a command!")

        # Start the voice listening thread
        self._listening_thread = threading.Thread(target=self._listen_continuously)
        self._listening_thread.daemon = True # Allow the main program to exit even if thread is running
        self._listening_thread.start()

    def _listen_continuously(self):
        """Listens to the microphone and processes commands."""
        with self.mic as source:
            # Using listen_in_background or a loop with listen is necessary
            # listen_in_background is non-blocking but requires callbacks
            # A simple loop with listen is blocking, so it needs a separate thread
            # Let's use a loop with listen in a thread for simplicity now.
            while rclpy.ok(): # Continue as long as the ROS context is valid
                self.get_logger().info("Listening for command...")
                try:
                    # listen for the first phrase and extract it into audio data
                    audio = self.r.listen(source, timeout=5, phrase_time_limit=5) # Listen for up to 5 seconds

                    # recognize speech using Google Web Speech API
                    # Requires internet connection
                    self.get_logger().info("Recognizing...")
                    command = self.r.recognize_google(audio).lower()
                    self.get_logger().info(f"Heard: {command}")
                    self._process_command(command)

                except sr.UnknownValueError:
                    # API was unable to understand the speech
                    self.get_logger().warn("Could not understand audio.")
                except sr.RequestError as e:
                    # API was unreachable or unresponsive
                    self.get_logger().error(f"Could not request results from speech recognition service; {e}")
                    # This could happen if there's no internet connection or API issues.
                except sr.WaitTimeoutError:
                     # No speech detected within the timeout period
                     # self.get_logger().info("No speech detected.") # Suppress this message to reduce spam
                     pass # Just continue listening if no speech

                except Exception as e:
                    self.get_logger().error(f"An unexpected error occurred: {e}")

                time.sleep(0.1) # Small sleep to prevent high CPU usage if errors occur rapidly


    def _process_command(self, command):
        """Processes the recognized text command."""
        twist_msg = Twist()
        linear_speed = 1.0
        angular_speed = 1.0

        if "move forward" in command or "forward" in command:
            self.get_logger().info("Command: Move Forward")
            twist_msg.linear.x = linear_speed
        elif "stop" in command:
            self.get_logger().info("Command: Stop")
            # Twist message defaults to all zeros, so we do nothing here.
            pass # twist_msg is already zero
        elif "turn left" in command or "left" in command:
            self.get_logger().info("Command: Turn Left")
            twist_msg.angular.z = angular_speed
        elif "turn right" in command or "right" in command:
            self.get_logger().info("Command: Turn Right")
            twist_msg.angular.z = -angular_speed # Negative for right turn
        else:
            self.get_logger().info(f"Unknown command: {command}")
            # For unknown commands, we can just send a stop command
            pass # twist_msg is already zero

        # Publish the command
        self.publisher_.publish(twist_msg)
        self.get_logger().info(f"Published Twist command: Linear X={twist_msg.linear.x}, Angular Z={twist_msg.angular.z}")

def main(args=None):
    rclpy.init(args=args)
    node = VoiceTurtlesimController()

    try:
        # Use a MultiThreadedExecutor to allow the ROS spinner
        # to run callbacks while the listening thread is active.
        # However, listen() is blocking, so the listening thread is needed.
        # The main thread will just spin.
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass # Handle Ctrl+C
    finally:
        node.get_logger().info("Shutting down Voice Turtlesim Controller node.")
        node.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()
