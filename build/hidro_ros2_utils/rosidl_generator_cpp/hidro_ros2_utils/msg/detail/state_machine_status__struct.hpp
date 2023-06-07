// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from hidro_ros2_utils:msg/StateMachineStatus.idl
// generated code does not contain a copyright notice

#ifndef HIDRO_ROS2_UTILS__MSG__DETAIL__STATE_MACHINE_STATUS__STRUCT_HPP_
#define HIDRO_ROS2_UTILS__MSG__DETAIL__STATE_MACHINE_STATUS__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__hidro_ros2_utils__msg__StateMachineStatus __attribute__((deprecated))
#else
# define DEPRECATED__hidro_ros2_utils__msg__StateMachineStatus __declspec(deprecated)
#endif

namespace hidro_ros2_utils
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct StateMachineStatus_
{
  using Type = StateMachineStatus_<ContainerAllocator>;

  explicit StateMachineStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = "";
    }
  }

  explicit StateMachineStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    status(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = "";
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _status_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _status_type status;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__status(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->status = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    hidro_ros2_utils::msg::StateMachineStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const hidro_ros2_utils::msg::StateMachineStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<hidro_ros2_utils::msg::StateMachineStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<hidro_ros2_utils::msg::StateMachineStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      hidro_ros2_utils::msg::StateMachineStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<hidro_ros2_utils::msg::StateMachineStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      hidro_ros2_utils::msg::StateMachineStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<hidro_ros2_utils::msg::StateMachineStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<hidro_ros2_utils::msg::StateMachineStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<hidro_ros2_utils::msg::StateMachineStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__hidro_ros2_utils__msg__StateMachineStatus
    std::shared_ptr<hidro_ros2_utils::msg::StateMachineStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__hidro_ros2_utils__msg__StateMachineStatus
    std::shared_ptr<hidro_ros2_utils::msg::StateMachineStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const StateMachineStatus_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->status != other.status) {
      return false;
    }
    return true;
  }
  bool operator!=(const StateMachineStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct StateMachineStatus_

// alias to use template instance with default allocator
using StateMachineStatus =
  hidro_ros2_utils::msg::StateMachineStatus_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace hidro_ros2_utils

#endif  // HIDRO_ROS2_UTILS__MSG__DETAIL__STATE_MACHINE_STATUS__STRUCT_HPP_
