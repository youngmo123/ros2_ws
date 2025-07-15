import os

from ament_index_python.packages import get_package_share_directory
from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument
from launch.substitutions import LaunchConfiguration
from launch_ros.actions import Node
from launch_ros.actions import PushRosNamespace


def generate_launch_description():
    param_dir = LaunchConfiguration(
        'param_dir',
        default=os.path.join(
            get_package_share_directory('ex_calculator_py'),
            'param',
            'arithmetic_config.yaml'))

    return LaunchDescription([
        PushRosNamespace('bym'),
        DeclareLaunchArgument(
            'param_dir',
            default_value=param_dir,
            description='Full path of parameter file'),

        Node(
            package='ex_calculator_py',
            executable='argument',
            name='argument',
            parameters=[param_dir],
            output='screen'),

        Node(
            package='ex_calculator_py',
            executable='calculator',
            name='calculator',
            parameters=[param_dir],
            output='screen'),
    ])