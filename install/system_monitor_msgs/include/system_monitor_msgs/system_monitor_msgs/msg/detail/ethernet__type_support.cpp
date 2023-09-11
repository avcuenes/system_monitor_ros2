// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from system_monitor_msgs:msg/Ethernet.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "system_monitor_msgs/msg/detail/ethernet__struct.hpp"
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

void Ethernet_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) system_monitor_msgs::msg::Ethernet(_init);
}

void Ethernet_fini_function(void * message_memory)
{
  auto typed_message = static_cast<system_monitor_msgs::msg::Ethernet *>(message_memory);
  typed_message->~Ethernet();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Ethernet_message_member_array[2] = {
  {
    "rx",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(system_monitor_msgs::msg::Ethernet, rx),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "tx",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(system_monitor_msgs::msg::Ethernet, tx),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Ethernet_message_members = {
  "system_monitor_msgs::msg",  // message namespace
  "Ethernet",  // message name
  2,  // number of fields
  sizeof(system_monitor_msgs::msg::Ethernet),
  Ethernet_message_member_array,  // message members
  Ethernet_init_function,  // function to initialize message memory (memory has to be allocated)
  Ethernet_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Ethernet_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Ethernet_message_members,
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
get_message_type_support_handle<system_monitor_msgs::msg::Ethernet>()
{
  return &::system_monitor_msgs::msg::rosidl_typesupport_introspection_cpp::Ethernet_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, system_monitor_msgs, msg, Ethernet)() {
  return &::system_monitor_msgs::msg::rosidl_typesupport_introspection_cpp::Ethernet_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
