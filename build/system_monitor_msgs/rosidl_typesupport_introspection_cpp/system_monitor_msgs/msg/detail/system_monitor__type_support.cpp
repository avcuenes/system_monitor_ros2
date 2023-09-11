// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from system_monitor_msgs:msg/SystemMonitor.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "system_monitor_msgs/msg/detail/system_monitor__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace system_monitor_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void SystemMonitor_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) system_monitor_msgs::msg::SystemMonitor(_init);
}

void SystemMonitor_fini_function(void * message_memory)
{
  auto typed_message = static_cast<system_monitor_msgs::msg::SystemMonitor *>(message_memory);
  typed_message->~SystemMonitor();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember SystemMonitor_message_member_array[3] = {
  {
    "cpu",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(system_monitor_msgs::msg::SystemMonitor, cpu),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "ram",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(system_monitor_msgs::msg::SystemMonitor, ram),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "ethernet",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<system_monitor_msgs::msg::Ethernet>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(system_monitor_msgs::msg::SystemMonitor, ethernet),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers SystemMonitor_message_members = {
  "system_monitor_msgs::msg",  // message namespace
  "SystemMonitor",  // message name
  3,  // number of fields
  sizeof(system_monitor_msgs::msg::SystemMonitor),
  SystemMonitor_message_member_array,  // message members
  SystemMonitor_init_function,  // function to initialize message memory (memory has to be allocated)
  SystemMonitor_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t SystemMonitor_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &SystemMonitor_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace system_monitor_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<system_monitor_msgs::msg::SystemMonitor>()
{
  return &::system_monitor_msgs::msg::rosidl_typesupport_introspection_cpp::SystemMonitor_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, system_monitor_msgs, msg, SystemMonitor)() {
  return &::system_monitor_msgs::msg::rosidl_typesupport_introspection_cpp::SystemMonitor_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
