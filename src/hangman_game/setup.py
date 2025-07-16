from setuptools import find_packages, setup
import glob
import os

package_name = 'hangman_game'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
        ('share/' + package_name + '/launch', glob.glob(os.path.join('launch', '*.launch.py'))),
        ('share/' + package_name + '/param', glob.glob(os.path.join('param', '*.yaml'))),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='youngmo',
    maintainer_email='youngmo123@hanmail.net',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'letter_publisher = hangman_game.letter_publisher:main',
            'progress_action_client = hangman_game.progress_action_client:main',
            'progress_action_server = hangman_game.progress_action_server:main',
            'user_input = hangman_game.user_input:main',
            'word_service = hangman_game.word_service:main',
        ],
    },
)
