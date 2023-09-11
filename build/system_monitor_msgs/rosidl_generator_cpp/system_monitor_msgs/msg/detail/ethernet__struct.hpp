// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from system_monitor_msgs:msg/Ethernet.idl
// generated code does not contain a copyright notice

#ifndef SYSTEM_MONITOR_MSGS__MSG__DETAIL__ETHERNET__STRUCT_HPP_
#define SYSTEM_MONITOR_MSGS__MSG__DETAIL__ETHERNET__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__system_monitor_msgs__msg__Ethernet __attribute__((deprecated))
#else
# define DEPRECATED__system_monitor_msgs__msg__Ethernet __declspec(deprecated)
#endif

namespace system_monitor_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Ethernet_
{
  using Type = Ethernet_<ContainerAllocator>;

  explicit Ethernet_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->rx = 0.0;
      this->tx = 0.0;
    }
  }

  explicit Ethernet_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->rx = 0.0;
      this->tx = 0.0;
    }
  }

  // field types and members
  using _rx_type =
    double;
  _rx_type rx;
  using _tx_type =
    double;
  _tx_type tx;

  // setters for named parameter idiom
  Type & set__rx(
    const double & _arg)
  {
    this->rx = _arg;
    return *this;
  }
  Type & set__tx(
    const double & _arg)
  {
    this->tx = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    system_monitor_msgs::msg::Ethernet_<ContainerAllocator> *;
  using ConstRawPtr =
    const system_monitor_msgs::msg::Ethernet_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<system_monitor_msgs::msg::Ethernet_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<system_monitor_msgs::msg::Ethernet_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      system_monitor_msgs::msg::Ethernet_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<system_monitor_msgs::msg::Ethernet_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      system_monitor_msgs::msg::Ethernet_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<system_monitor_msgs::msg::Ethernet_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<system_monitor_msgs::msg::Ethernet_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<system_monitor_msgs::msg::Ethernet_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__system_monitor_msgs__msg__Ethernet
    std::shared_ptr<system_monitor_msgs::msg::Ethernet_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__system_monitor_msgs__msg__Ethernet
    std::shared_ptr<system_monitor_msgs::msg::Ethernet_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Ethernet_ & other) const
  {
    if (this->rx != other.rx) {
      return false;
    }
    if (this->tx != other.tx) {
      return false;
    }
    return true;
  }
  bool operator!=(const Ethernet_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Ethernet_

// alias to use template instance with default allocator
using Ethernet =
  system_monitor_msgs::msg::Ethernet_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace system_monitor_msgs

#endif  // SYSTEM_MONITOR_MSGS__MSG__DETAIL__ETHERNET__STRUCT_HPP_
