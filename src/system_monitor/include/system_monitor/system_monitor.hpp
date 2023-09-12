#include <chrono>
#include <memory>

#include "rclcpp/rclcpp.hpp"

#include "system_monitor_msgs/msg/system_monitor.hpp"
#include "system_monitor_core/system_monitor_core.hpp"

using namespace std::chrono_literals;

class SystemMonitorNode
    : public rclcpp::Node
{
public:
    SystemMonitorNode()
        : Node("system_monitor"), count_(0)
    {
        publisher_ = this->create_publisher<system_monitor_msgs::msg::SystemMonitor>("system_monitor", 10);
        timer_ = this->create_wall_timer(
            500ms, std::bind(&SystemMonitorNode::timer_callback, this));
    }

private:
    void timer_callback()
    {
        system_monitor_core::NetworkInterface ethernet_data = ethernet_using.reader("wlp5s0");
        auto message = system_monitor_msgs::msg::SystemMonitor();
        message.cpu = cpu_using.reader("/proc/stat");
        message.ram = ram_using.reader("/proc/meminfo");
        message.temp = temp_using.reader("/sys/class/thermal/thermal_zone0/temp");

        double rxKB = static_cast<double>(ethernet_data.rxBytes - prevNetwork.rxBytes) / 1024;
        double txKB = static_cast<double>(ethernet_data.txBytes - prevNetwork.txBytes) / 1024;
        message.ethernet.rx = rxKB;
        message.ethernet.tx = txKB;

        publisher_->publish(message);
        prevNetwork = ethernet_data;
    }
    rclcpp::TimerBase::SharedPtr timer_;
    rclcpp::Publisher<system_monitor_msgs::msg::SystemMonitor>::SharedPtr publisher_;
    system_monitor_core::EthernetUsing ethernet_using;
    system_monitor_core::CpuUsing cpu_using;
    system_monitor_core::RamUsing ram_using;
    system_monitor_core::TempUsing temp_using;
    system_monitor_core::NetworkInterface prevNetwork;

    size_t count_;
};