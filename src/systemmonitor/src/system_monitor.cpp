#include <rclcpp/rclcpp.hpp>
#include <std_msgs/msg/float64_multi_array.hpp>
#include <std_msgs/msg/float64.hpp>

#include <unistd.h>      // For CPU usage
#include <iostream>      // For output

#include <systemmonitor/include.cpp>




class SystemMonitorNode : public rclcpp::Node
{
public:
    SystemMonitorNode() : Node("system_monitor")
    {
        cpu_pub_ = this->create_publisher<std_msgs::msg::Float64MultiArray>("cpu_usage", 10);
        ram_pub_ = this->create_publisher<std_msgs::msg::Float64>("ram_usage", 10);
        temp_pub_ = this->create_publisher<std_msgs::msg::Float64>("cpu_temperature", 10);
        timer_ = this->create_wall_timer(std::chrono::milliseconds(1000), std::bind(&SystemMonitorNode::publishStats, this));
    }

private:
    rclcpp::Publisher<std_msgs::msg::Float64MultiArray>::SharedPtr cpu_pub_;
    rclcpp::Publisher<std_msgs::msg::Float64>::SharedPtr ram_pub_;
    rclcpp::Publisher<std_msgs::msg::Float64>::SharedPtr temp_pub_;
    rclcpp::TimerBase::SharedPtr timer_;

    void publishStats()
    {
        // Get CPU usage
        std::vector<double> cpu_percent = getCpuUsage();
        auto cpu_msg = std_msgs::msg::Float64MultiArray();
        cpu_msg.data = cpu_percent;
        cpu_pub_->publish(cpu_msg);

        // Get RAM usage
        double mem_percent = getRamUsage();
        auto ram_msg = std_msgs::msg::Float64();
        ram_msg.data = mem_percent;
        ram_pub_->publish(ram_msg);

        // Get CPU temperature
        double cpu_temp = getCpuTemperature();
        auto temp_msg = std_msgs::msg::Float64();
        temp_msg.data = cpu_temp;
        temp_pub_->publish(temp_msg);
    }

    

    std::vector<double> getCpuUsage()
    {
        std::vector<double> cpu_percent;
        

        return cpu_percent;
    }   

    double getRamUsage()
    { 
        return calculateRamUsage();
    }

    double getCpuTemperature()
    {
        return calculateCPUTemp();
    }
};

int main(int argc, char **argv)
{
    rclcpp::init(argc, argv);
    auto node = std::make_shared<SystemMonitorNode>();
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}
