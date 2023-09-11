// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from system_monitor_msgs:msg/Ethernet.idl
// generated code does not contain a copyright notice

#ifndef SYSTEM_MONITOR_MSGS__MSG__DETAIL__ETHERNET__STRUCT_H_
#define SYSTEM_MONITOR_MSGS__MSG__DETAIL__ETHERNET__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/Ethernet in the package system_monitor_msgs.
typedef struct system_monitor_msgs__msg__Ethernet
{
  double rx;
  double tx;
} system_monitor_msgs__msg__Ethernet;

// Struct for a sequence of system_monitor_msgs__msg__Ethernet.
typedef struct system_monitor_msgs__msg__Ethernet__Sequence
{
  system_monitor_msgs__msg__Ethernet * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} system_monitor_msgs__msg__Ethernet__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SYSTEM_MONITOR_MSGS__MSG__DETAIL__ETHERNET__STRUCT_H_
