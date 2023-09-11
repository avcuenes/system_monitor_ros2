// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from system_monitor_msgs:msg/Ethernet.idl
// generated code does not contain a copyright notice
#include "system_monitor_msgs/msg/detail/ethernet__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
system_monitor_msgs__msg__Ethernet__init(system_monitor_msgs__msg__Ethernet * msg)
{
  if (!msg) {
    return false;
  }
  // rx
  // tx
  return true;
}

void
system_monitor_msgs__msg__Ethernet__fini(system_monitor_msgs__msg__Ethernet * msg)
{
  if (!msg) {
    return;
  }
  // rx
  // tx
}

bool
system_monitor_msgs__msg__Ethernet__are_equal(const system_monitor_msgs__msg__Ethernet * lhs, const system_monitor_msgs__msg__Ethernet * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // rx
  if (lhs->rx != rhs->rx) {
    return false;
  }
  // tx
  if (lhs->tx != rhs->tx) {
    return false;
  }
  return true;
}

bool
system_monitor_msgs__msg__Ethernet__copy(
  const system_monitor_msgs__msg__Ethernet * input,
  system_monitor_msgs__msg__Ethernet * output)
{
  if (!input || !output) {
    return false;
  }
  // rx
  output->rx = input->rx;
  // tx
  output->tx = input->tx;
  return true;
}

system_monitor_msgs__msg__Ethernet *
system_monitor_msgs__msg__Ethernet__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  system_monitor_msgs__msg__Ethernet * msg = (system_monitor_msgs__msg__Ethernet *)allocator.allocate(sizeof(system_monitor_msgs__msg__Ethernet), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(system_monitor_msgs__msg__Ethernet));
  bool success = system_monitor_msgs__msg__Ethernet__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
system_monitor_msgs__msg__Ethernet__destroy(system_monitor_msgs__msg__Ethernet * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    system_monitor_msgs__msg__Ethernet__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
system_monitor_msgs__msg__Ethernet__Sequence__init(system_monitor_msgs__msg__Ethernet__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  system_monitor_msgs__msg__Ethernet * data = NULL;

  if (size) {
    data = (system_monitor_msgs__msg__Ethernet *)allocator.zero_allocate(size, sizeof(system_monitor_msgs__msg__Ethernet), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = system_monitor_msgs__msg__Ethernet__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        system_monitor_msgs__msg__Ethernet__fini(&data[i - 1]);
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
system_monitor_msgs__msg__Ethernet__Sequence__fini(system_monitor_msgs__msg__Ethernet__Sequence * array)
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
      system_monitor_msgs__msg__Ethernet__fini(&array->data[i]);
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

system_monitor_msgs__msg__Ethernet__Sequence *
system_monitor_msgs__msg__Ethernet__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  system_monitor_msgs__msg__Ethernet__Sequence * array = (system_monitor_msgs__msg__Ethernet__Sequence *)allocator.allocate(sizeof(system_monitor_msgs__msg__Ethernet__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = system_monitor_msgs__msg__Ethernet__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
system_monitor_msgs__msg__Ethernet__Sequence__destroy(system_monitor_msgs__msg__Ethernet__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    system_monitor_msgs__msg__Ethernet__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
system_monitor_msgs__msg__Ethernet__Sequence__are_equal(const system_monitor_msgs__msg__Ethernet__Sequence * lhs, const system_monitor_msgs__msg__Ethernet__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!system_monitor_msgs__msg__Ethernet__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
system_monitor_msgs__msg__Ethernet__Sequence__copy(
  const system_monitor_msgs__msg__Ethernet__Sequence * input,
  system_monitor_msgs__msg__Ethernet__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(system_monitor_msgs__msg__Ethernet);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    system_monitor_msgs__msg__Ethernet * data =
      (system_monitor_msgs__msg__Ethernet *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!system_monitor_msgs__msg__Ethernet__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          system_monitor_msgs__msg__Ethernet__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!system_monitor_msgs__msg__Ethernet__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
