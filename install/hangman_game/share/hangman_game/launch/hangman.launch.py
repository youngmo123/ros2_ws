import os

from ament_index_python.packages import get_package_share_directory
from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument
from launch.substitutions import LaunchConfiguration
from launch_ros.actions import Node, PushRosNamespace


def generate_launch_description():
    # param/word.yaml 경로 설정
    param_dir = LaunchConfiguration(
        'param_dir',
        default=os.path.join(
            get_package_share_directory('hangman_game'),
            'param',
            'word.yaml'))

    # 네임스페이스 고정
    return LaunchDescription([
        PushRosNamespace('bym'),

        DeclareLaunchArgument(
            'param_dir',
            default_value=param_dir,
            description='Full path of parameter file'),

        Node(
            package='hangman_game',
            executable='word_service',
            name='word_service',
            parameters=[param_dir],
            output='screen'),

        Node(
            package='hangman_game',
            executable='letter_publisher',
            name='letter_publisher',
            parameters=[param_dir],
            output='screen'),
        
        Node(
            package='hangman_game',
            executable='progress_action_client',
            name='progress_action_client',
            parameters=[param_dir],
            output='screen'),
        
        Node(
            package='hangman_game',
            executable='progress_action_server',
            name='progress_action_server',
            parameters=[param_dir],
            output='screen'),
        
    ])
