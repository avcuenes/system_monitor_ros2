// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from system_monitor_msgs:msg/SystemMonitor.idl
// generated code does not contain a copyright notice

#ifndef SYSTEM_MONITOR_MSGS__MSG__DETAIL__SYSTEM_MONITOR__STRUCT_H_
#define SYSTEM_MONITOR_MSGS__MSG__DETAIL__SYSTEM_MONITOR__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'ethernet'
#include "system_monitor_msgs/msg/detail/ethernet__struct.h"

/// Struct defined in msg/SystemMonitor in the package system_monitor_msgs.
typedef struct system_monitor_msgs__msg__SystemMonitor
{
  double cpu;
  double ram;
  system_monitor_msgs__msg__Ethernet ethernet;
} system_monitor_msgs__msg__SystemMonitor;

// Struct for a sequence of system_monitor_msgs__msg__SystemMonitor.
typedef struct system_monitor_msgs__msg__SystemMonitor__Sequence
{
  system_monitor_msgs__msg__SystemMonitor * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} system_monitor_msgs__msg__SystemMonitor__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SYSTEM_MONITOR_MSGS__MSG__DETAIL__SYSTEM_MONITOR__STRUCT_H_
