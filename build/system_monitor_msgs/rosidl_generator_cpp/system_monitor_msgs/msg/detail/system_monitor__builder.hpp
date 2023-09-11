// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from system_monitor_msgs:msg/SystemMonitor.idl
// generated code does not contain a copyright notice

#ifndef SYSTEM_MONITOR_MSGS__MSG__DETAIL__SYSTEM_MONITOR__BUILDER_HPP_
#define SYSTEM_MONITOR_MSGS__MSG__DETAIL__SYSTEM_MONITOR__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "system_monitor_msgs/msg/detail/system_monitor__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace system_monitor_msgs
{

namespace msg
{

namespace builder
{

class Init_SystemMonitor_ethernet
{
public:
  explicit Init_SystemMonitor_ethernet(::system_monitor_msgs::msg::SystemMonitor & msg)
  : msg_(msg)
  {}
  ::system_monitor_msgs::msg::SystemMonitor ethernet(::system_monitor_msgs::msg::SystemMonitor::_ethernet_type arg)
  {
    msg_.ethernet = std::move(arg);
    return std::move(msg_);
  }

private:
  ::system_monitor_msgs::msg::SystemMonitor msg_;
};

class Init_SystemMonitor_ram
{
public:
  explicit Init_SystemMonitor_ram(::system_monitor_msgs::msg::SystemMonitor & msg)
  : msg_(msg)
  {}
  Init_SystemMonitor_ethernet ram(::system_monitor_msgs::msg::SystemMonitor::_ram_type arg)
  {
    msg_.ram = std::move(arg);
    return Init_SystemMonitor_ethernet(msg_);
  }

private:
  ::system_monitor_msgs::msg::SystemMonitor msg_;
};

class Init_SystemMonitor_cpu
{
public:
  Init_SystemMonitor_cpu()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SystemMonitor_ram cpu(::system_monitor_msgs::msg::SystemMonitor::_cpu_type arg)
  {
    msg_.cpu = std::move(arg);
    return Init_SystemMonitor_ram(msg_);
  }

private:
  ::system_monitor_msgs::msg::SystemMonitor msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::system_monitor_msgs::msg::SystemMonitor>()
{
  return system_monitor_msgs::msg::builder::Init_SystemMonitor_cpu();
}

}  // namespace system_monitor_msgs

#endif  // SYSTEM_MONITOR_MSGS__MSG__DETAIL__SYSTEM_MONITOR__BUILDER_HPP_
