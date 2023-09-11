// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from system_monitor_msgs:msg/SystemMonitor.idl
// generated code does not contain a copyright notice

#ifndef SYSTEM_MONITOR_MSGS__MSG__DETAIL__SYSTEM_MONITOR__STRUCT_HPP_
#define SYSTEM_MONITOR_MSGS__MSG__DETAIL__SYSTEM_MONITOR__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'ethernet'
#include "system_monitor_msgs/msg/detail/ethernet__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__system_monitor_msgs__msg__SystemMonitor __attribute__((deprecated))
#else
# define DEPRECATED__system_monitor_msgs__msg__SystemMonitor __declspec(deprecated)
#endif

namespace system_monitor_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SystemMonitor_
{
  using Type = SystemMonitor_<ContainerAllocator>;

  explicit SystemMonitor_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : ethernet(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->cpu = 0.0;
      this->ram = 0.0;
    }
  }

  explicit SystemMonitor_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : ethernet(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->cpu = 0.0;
      this->ram = 0.0;
    }
  }

  // field types and members
  using _cpu_type =
    double;
  _cpu_type cpu;
  using _ram_type =
    double;
  _ram_type ram;
  using _ethernet_type =
    system_monitor_msgs::msg::Ethernet_<ContainerAllocator>;
  _ethernet_type ethernet;

  // setters for named parameter idiom
  Type & set__cpu(
    const double & _arg)
  {
    this->cpu = _arg;
    return *this;
  }
  Type & set__ram(
    const double & _arg)
  {
    this->ram = _arg;
    return *this;
  }
  Type & set__ethernet(
    const system_monitor_msgs::msg::Ethernet_<ContainerAllocator> & _arg)
  {
    this->ethernet = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    system_monitor_msgs::msg::SystemMonitor_<ContainerAllocator> *;
  using ConstRawPtr =
    const system_monitor_msgs::msg::SystemMonitor_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<system_monitor_msgs::msg::SystemMonitor_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<system_monitor_msgs::msg::SystemMonitor_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      system_monitor_msgs::msg::SystemMonitor_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<system_monitor_msgs::msg::SystemMonitor_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      system_monitor_msgs::msg::SystemMonitor_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<system_monitor_msgs::msg::SystemMonitor_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<system_monitor_msgs::msg::SystemMonitor_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<system_monitor_msgs::msg::SystemMonitor_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__system_monitor_msgs__msg__SystemMonitor
    std::shared_ptr<system_monitor_msgs::msg::SystemMonitor_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__system_monitor_msgs__msg__SystemMonitor
    std::shared_ptr<system_monitor_msgs::msg::SystemMonitor_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SystemMonitor_ & other) const
  {
    if (this->cpu != other.cpu) {
      return false;
    }
    if (this->ram != other.ram) {
      return false;
    }
    if (this->ethernet != other.ethernet) {
      return false;
    }
    return true;
  }
  bool operator!=(const SystemMonitor_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SystemMonitor_

// alias to use template instance with default allocator
using SystemMonitor =
  system_monitor_msgs::msg::SystemMonitor_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace system_monitor_msgs

#endif  // SYSTEM_MONITOR_MSGS__MSG__DETAIL__SYSTEM_MONITOR__STRUCT_HPP_
