// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from system_monitor_msgs:msg/Ethernet.idl
// generated code does not contain a copyright notice

#ifndef SYSTEM_MONITOR_MSGS__MSG__DETAIL__ETHERNET__BUILDER_HPP_
#define SYSTEM_MONITOR_MSGS__MSG__DETAIL__ETHERNET__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "system_monitor_msgs/msg/detail/ethernet__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace system_monitor_msgs
{

namespace msg
{

namespace builder
{

class Init_Ethernet_tx
{
public:
  explicit Init_Ethernet_tx(::system_monitor_msgs::msg::Ethernet & msg)
  : msg_(msg)
  {}
  ::system_monitor_msgs::msg::Ethernet tx(::system_monitor_msgs::msg::Ethernet::_tx_type arg)
  {
    msg_.tx = std::move(arg);
    return std::move(msg_);
  }

private:
  ::system_monitor_msgs::msg::Ethernet msg_;
};

class Init_Ethernet_rx
{
public:
  Init_Ethernet_rx()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Ethernet_tx rx(::system_monitor_msgs::msg::Ethernet::_rx_type arg)
  {
    msg_.rx = std::move(arg);
    return Init_Ethernet_tx(msg_);
  }

private:
  ::system_monitor_msgs::msg::Ethernet msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::system_monitor_msgs::msg::Ethernet>()
{
  return system_monitor_msgs::msg::builder::Init_Ethernet_rx();
}

}  // namespace system_monitor_msgs

#endif  // SYSTEM_MONITOR_MSGS__MSG__DETAIL__ETHERNET__BUILDER_HPP_
