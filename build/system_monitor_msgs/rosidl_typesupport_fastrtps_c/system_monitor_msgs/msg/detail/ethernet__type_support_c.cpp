// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from system_monitor_msgs:msg/Ethernet.idl
// generated code does not contain a copyright notice
#include "system_monitor_msgs/msg/detail/ethernet__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "system_monitor_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "system_monitor_msgs/msg/detail/ethernet__struct.h"
#include "system_monitor_msgs/msg/detail/ethernet__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _Ethernet__ros_msg_type = system_monitor_msgs__msg__Ethernet;

static bool _Ethernet__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Ethernet__ros_msg_type * ros_message = static_cast<const _Ethernet__ros_msg_type *>(untyped_ros_message);
  // Field name: rx
  {
    cdr << ros_message->rx;
  }

  // Field name: tx
  {
    cdr << ros_message->tx;
  }

  return true;
}

static bool _Ethernet__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Ethernet__ros_msg_type * ros_message = static_cast<_Ethernet__ros_msg_type *>(untyped_ros_message);
  // Field name: rx
  {
    cdr >> ros_message->rx;
  }

  // Field name: tx
  {
    cdr >> ros_message->tx;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_system_monitor_msgs
size_t get_serialized_size_system_monitor_msgs__msg__Ethernet(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Ethernet__ros_msg_type * ros_message = static_cast<const _Ethernet__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name rx
  {
    size_t item_size = sizeof(ros_message->rx);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name tx
  {
    size_t item_size = sizeof(ros_message->tx);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _Ethernet__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_system_monitor_msgs__msg__Ethernet(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_system_monitor_msgs
size_t max_serialized_size_system_monitor_msgs__msg__Ethernet(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: rx
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: tx
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _Ethernet__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_system_monitor_msgs__msg__Ethernet(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_Ethernet = {
  "system_monitor_msgs::msg",
  "Ethernet",
  _Ethernet__cdr_serialize,
  _Ethernet__cdr_deserialize,
  _Ethernet__get_serialized_size,
  _Ethernet__max_serialized_size
};

static rosidl_message_type_support_t _Ethernet__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Ethernet,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, system_monitor_msgs, msg, Ethernet)() {
  return &_Ethernet__type_support;
}

#if defined(__cplusplus)
}
#endif
