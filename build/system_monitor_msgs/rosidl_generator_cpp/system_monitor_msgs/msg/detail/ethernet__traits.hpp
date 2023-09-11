// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from system_monitor_msgs:msg/Ethernet.idl
// generated code does not contain a copyright notice

#ifndef SYSTEM_MONITOR_MSGS__MSG__DETAIL__ETHERNET__TRAITS_HPP_
#define SYSTEM_MONITOR_MSGS__MSG__DETAIL__ETHERNET__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "system_monitor_msgs/msg/detail/ethernet__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace system_monitor_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Ethernet & msg,
  std::ostream & out)
{
  out << "{";
  // member: rx
  {
    out << "rx: ";
    rosidl_generator_traits::value_to_yaml(msg.rx, out);
    out << ", ";
  }

  // member: tx
  {
    out << "tx: ";
    rosidl_generator_traits::value_to_yaml(msg.tx, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Ethernet & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: rx
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rx: ";
    rosidl_generator_traits::value_to_yaml(msg.rx, out);
    out << "\n";
  }

  // member: tx
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tx: ";
    rosidl_generator_traits::value_to_yaml(msg.tx, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Ethernet & msg, bool use_flow_style = false)
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
  const system_monitor_msgs::msg::Ethernet & msg,
  std::ostream & out, size_t indentation = 0)
{
  system_monitor_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use system_monitor_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const system_monitor_msgs::msg::Ethernet & msg)
{
  return system_monitor_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<system_monitor_msgs::msg::Ethernet>()
{
  return "system_monitor_msgs::msg::Ethernet";
}

template<>
inline const char * name<system_monitor_msgs::msg::Ethernet>()
{
  return "system_monitor_msgs/msg/Ethernet";
}

template<>
struct has_fixed_size<system_monitor_msgs::msg::Ethernet>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<system_monitor_msgs::msg::Ethernet>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<system_monitor_msgs::msg::Ethernet>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SYSTEM_MONITOR_MSGS__MSG__DETAIL__ETHERNET__TRAITS_HPP_
