// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from system_monitor_msgs:msg/SystemMonitor.idl
// generated code does not contain a copyright notice
#include "system_monitor_msgs/msg/detail/system_monitor__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `ethernet`
#include "system_monitor_msgs/msg/detail/ethernet__functions.h"

bool
system_monitor_msgs__msg__SystemMonitor__init(system_monitor_msgs__msg__SystemMonitor * msg)
{
  if (!msg) {
    return false;
  }
  // cpu
  // ram
  // ethernet
  if (!system_monitor_msgs__msg__Ethernet__init(&msg->ethernet)) {
    system_monitor_msgs__msg__SystemMonitor__fini(msg);
    return false;
  }
  return true;
}

void
system_monitor_msgs__msg__SystemMonitor__fini(system_monitor_msgs__msg__SystemMonitor * msg)
{
  if (!msg) {
    return;
  }
  // cpu
  // ram
  // ethernet
  system_monitor_msgs__msg__Ethernet__fini(&msg->ethernet);
}

bool
system_monitor_msgs__msg__SystemMonitor__are_equal(const system_monitor_msgs__msg__SystemMonitor * lhs, const system_monitor_msgs__msg__SystemMonitor * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // cpu
  if (lhs->cpu != rhs->cpu) {
    return false;
  }
  // ram
  if (lhs->ram != rhs->ram) {
    return false;
  }
  // ethernet
  if (!system_monitor_msgs__msg__Ethernet__are_equal(
      &(lhs->ethernet), &(rhs->ethernet)))
  {
    return false;
  }
  return true;
}

bool
system_monitor_msgs__msg__SystemMonitor__copy(
  const system_monitor_msgs__msg__SystemMonitor * input,
  system_monitor_msgs__msg__SystemMonitor * output)
{
  if (!input || !output) {
    return false;
  }
  // cpu
  output->cpu = input->cpu;
  // ram
  output->ram = input->ram;
  // ethernet
  if (!system_monitor_msgs__msg__Ethernet__copy(
      &(input->ethernet), &(output->ethernet)))
  {
    return false;
  }
  return true;
}

system_monitor_msgs__msg__SystemMonitor *
system_monitor_msgs__msg__SystemMonitor__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  system_monitor_msgs__msg__SystemMonitor * msg = (system_monitor_msgs__msg__SystemMonitor *)allocator.allocate(sizeof(system_monitor_msgs__msg__SystemMonitor), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(system_monitor_msgs__msg__SystemMonitor));
  bool success = system_monitor_msgs__msg__SystemMonitor__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
system_monitor_msgs__msg__SystemMonitor__destroy(system_monitor_msgs__msg__SystemMonitor * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    system_monitor_msgs__msg__SystemMonitor__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
system_monitor_msgs__msg__SystemMonitor__Sequence__init(system_monitor_msgs__msg__SystemMonitor__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  system_monitor_msgs__msg__SystemMonitor * data = NULL;

  if (size) {
    data = (system_monitor_msgs__msg__SystemMonitor *)allocator.zero_allocate(size, sizeof(system_monitor_msgs__msg__SystemMonitor), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = system_monitor_msgs__msg__SystemMonitor__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        system_monitor_msgs__msg__SystemMonitor__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
system_monitor_msgs__msg__SystemMonitor__Sequence__fini(system_monitor_msgs__msg__SystemMonitor__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      system_monitor_msgs__msg__SystemMonitor__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

system_monitor_msgs__msg__SystemMonitor__Sequence *
system_monitor_msgs__msg__SystemMonitor__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  system_monitor_msgs__msg__SystemMonitor__Sequence * array = (system_monitor_msgs__msg__SystemMonitor__Sequence *)allocator.allocate(sizeof(system_monitor_msgs__msg__SystemMonitor__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = system_monitor_msgs__msg__SystemMonitor__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
system_monitor_msgs__msg__SystemMonitor__Sequence__destroy(system_monitor_msgs__msg__SystemMonitor__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    system_monitor_msgs__msg__SystemMonitor__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
system_monitor_msgs__msg__SystemMonitor__Sequence__are_equal(const system_monitor_msgs__msg__SystemMonitor__Sequence * lhs, const system_monitor_msgs__msg__SystemMonitor__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!system_monitor_msgs__msg__SystemMonitor__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
system_monitor_msgs__msg__SystemMonitor__Sequence__copy(
  const system_monitor_msgs__msg__SystemMonitor__Sequence * input,
  system_monitor_msgs__msg__SystemMonitor__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(system_monitor_msgs__msg__SystemMonitor);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    system_monitor_msgs__msg__SystemMonitor * data =
      (system_monitor_msgs__msg__SystemMonitor *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!system_monitor_msgs__msg__SystemMonitor__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          system_monitor_msgs__msg__SystemMonitor__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!system_monitor_msgs__msg__SystemMonitor__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
