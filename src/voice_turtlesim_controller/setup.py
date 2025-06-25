from setuptools import find_packages, setup

package_name = 'voice_turtlesim_controller'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools','SpeechRecognition', 'PyAudio' ],
    zip_safe=True,
    maintainer='ym',
    maintainer_email='ym@todo.todo',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'voice_command_node = voice_turtlesim_controller.voice_command_node:main',
            'turtle_pose_to_rviz = voice_turtlesim_controller.turtle_pose_to_rviz:main',
        ],
    },
)
