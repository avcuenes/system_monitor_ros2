
#include "rclcpp/rclcpp.hpp"

#include "system_monitor/system_monitor.hpp"

int main(int argc, char *argv[])
{
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<SystemMonitorNode>());
    rclcpp::shutdown();
    
    return 0;
}

