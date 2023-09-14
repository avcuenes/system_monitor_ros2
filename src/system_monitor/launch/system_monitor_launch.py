from launch import LaunchDescription
from launch.actions import SetEnvironmentVariable,ExecuteProcess
from launch_ros.actions import Node
import launch

def generate_launch_description()->LaunchDescription:
    
    system_monitor_node:Node= Node(
            package='system_monitor',
            executable='system_monitor',
            name='system_monitor',
        )
    
    return LaunchDescription([
        SetEnvironmentVariable(name='ROS_DOMAIN_ID', value='1'),
        system_monitor_node
    ])
