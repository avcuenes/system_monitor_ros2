// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from system_monitor_msgs:msg/SystemMonitor.idl
// generated code does not contain a copyright notice

#ifndef SYSTEM_MONITOR_MSGS__MSG__DETAIL__SYSTEM_MONITOR__TRAITS_HPP_
#define SYSTEM_MONITOR_MSGS__MSG__DETAIL__SYSTEM_MONITOR__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "system_monitor_msgs/msg/detail/system_monitor__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'ethernet'
#include "system_monitor_msgs/msg/detail/ethernet__traits.hpp"

namespace system_monitor_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const SystemMonitor & msg,
  std::ostream & out)
{
  out << "{";
  // member: cpu
  {
    out << "cpu: ";
    rosidl_generator_traits::value_to_yaml(msg.cpu, out);
    out << ", ";
  }

  // member: ram
  {
    out << "ram: ";
    rosidl_generator_traits::value_to_yaml(msg.ram, out);
    out << ", ";
  }

  // member: ethernet
  {
    out << "ethernet: ";
    to_flow_style_yaml(msg.ethernet, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SystemMonitor & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: cpu
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cpu: ";
    rosidl_generator_traits::value_to_yaml(msg.cpu, out);
    out << "\n";
  }

  // member: ram
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ram: ";
    rosidl_generator_traits::value_to_yaml(msg.ram, out);
    out << "\n";
  }

  // member: ethernet
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ethernet:\n";
    to_block_style_yaml(msg.ethernet, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SystemMonitor & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace system_monitor_msgs

namespace rosidl_generator_traits
{

[[deprecated("use system_monitor_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const system_monitor_msgs::msg::SystemMonitor & msg,
  std::ostream & out, size_t indentation = 0)
{
  system_monitor_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use system_monitor_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const system_monitor_msgs::msg::SystemMonitor & msg)
{
  return system_monitor_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<system_monitor_msgs::msg::SystemMonitor>()
{
  return "system_monitor_msgs::msg::SystemMonitor";
}

template<>
inline const char * name<system_monitor_msgs::msg::SystemMonitor>()
{
  return "system_monitor_msgs/msg/SystemMonitor";
}

template<>
struct has_fixed_size<system_monitor_msgs::msg::SystemMonitor>
  : std::integral_constant<bool, has_fixed_size<system_monitor_msgs::msg::Ethernet>::value> {};

template<>
struct has_bounded_size<system_monitor_msgs::msg::SystemMonitor>
  : std::integral_constant<bool, has_bounded_size<system_monitor_msgs::msg::Ethernet>::value> {};

template<>
struct is_message<system_monitor_msgs::msg::SystemMonitor>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SYSTEM_MONITOR_MSGS__MSG__DETAIL__SYSTEM_MONITOR__TRAITS_HPP_
