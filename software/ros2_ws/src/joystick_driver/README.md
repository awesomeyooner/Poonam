[![License: MIT](https://img.shields.io/badge/License-MIT-green.svg)](https://opensource.org/licenses/MIT)
[![ubuntu22](https://img.shields.io/badge/-UBUNTU_22.04-orange?style=flat-square&logo=ubuntu&logoColor=white)](https://releases.ubuntu.com/jammy/)
[![humble](https://img.shields.io/badge/-HUMBLE-blue?style=flat-square&logo=ros)](https://docs.ros.org/en/humble/index.html)

# joystick_driver
ROS 2 package that acts as an abstraction layer for the standard `joy` node

## Usage

Please create a configuration `.yaml` file in the `\config` folder. Here is an example:

`joystick.yaml`

```yaml
joy_node:
  ros__parameters:
    deadzone: 0.05

joystick_teleop:
  ros__parameters:
    use_sim_time: true
    joystick_type: "ps4" # implemented ones are: "ps4", "gamesir", "xbox" so far

    max_tangential_velocity: 1.0 # 1.0
    max_angular_velocity: 3.14 # 3.14
```

To launch, create a `.launch.py` file in the `\launch` folder

`joystick.launch.py`

```python
from launch import LaunchDescription
from launch_ros.actions import Node
from launch.substitutions import LaunchConfiguration
from launch.actions import DeclareLaunchArgument
import launch
import launch_ros

import os
from ament_index_python.packages import get_package_share_directory

def generate_launch_description():

    joy_params = os.path.join(get_package_share_directory('joystick_driver'),'config','joystick.yaml')

    return launch.LaunchDescription([

        # The base `joy` node
        launch_ros.actions.Node(
            package='joy',
            executable='joy_node',
            name='joy_node',
            parameters=[joy_params]
            ),

        # joystick driver node
        launch_ros.actions.Node(
            package='joystick_driver',
            executable='joystick_teleop',
            name='joystick_teleop',
            parameters=[joy_params]
            )

            # If you want to change the mapping for the Twist message, use this line
            #('/cmd_vel', '/diffbot_base_controller/cmd_vel')
  ])
```

and launch with `ros2 launch joystick_driver joystick.launch.py`