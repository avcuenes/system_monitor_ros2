#include <chrono>
#include <memory>

#include "rclcpp/rclcpp.hpp"
#include "system_monitor_msgs/msg/system_monitor.hpp"

#include <systemmonitor/include.cpp>

using namespace std::chrono_literals;

class SystemMonitorNode
    : public rclcpp::Node
{
public:
    SystemMonitorNode()
        : Node("system_monitor")
    {
        publisher_ = this->create_publisher<system_monitor_msgs::msg::SystemMonitor>("system_monitor", 10);
        timer_ = this->create_wall_timer(
            500ms, std::bind(&SystemMonitorNode::timer_callback, this));
    }

private:
    void timer_callback()
    {
        auto iface = ethernet_reader("wlp5s0");
        auto message = system_monitor_msgs::msg::SystemMonitor();
        message.cpu = getCpuUsage("/proc/stat");
        message.ram = calculateRamUsage();

        double rxKB = static_cast<double>(iface.rxBytes - prevNetwork.rxBytes) / 1024;
        double txKB = static_cast<double>(iface.txBytes - prevNetwork.txBytes) / 1024;
        message.ethernet.rx = rxKB;
        message.ethernet.tx = txKB;
        message.temp = calculateCPUTemp();
        prevNetwork = iface;
        publisher_->publish(message);
    }
    rclcpp::TimerBase::SharedPtr timer_;
    rclcpp::Publisher<system_monitor_msgs::msg::SystemMonitor>::SharedPtr publisher_;
    NetworkInterface prevNetwork;
};

int main(int argc, char *argv[])
{
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<SystemMonitorNode>());
    rclcpp::shutdown();
    return 0;
}