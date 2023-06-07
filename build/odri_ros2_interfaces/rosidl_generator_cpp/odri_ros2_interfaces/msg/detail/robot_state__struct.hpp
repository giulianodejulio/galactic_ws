// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from odri_ros2_interfaces:msg/RobotState.idl
// generated code does not contain a copyright notice

#ifndef ODRI_ROS2_INTERFACES__MSG__DETAIL__ROBOT_STATE__STRUCT_HPP_
#define ODRI_ROS2_INTERFACES__MSG__DETAIL__ROBOT_STATE__STRUCT_HPP_

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
// Member 'motor_states'
#include "odri_ros2_interfaces/msg/detail/motor_state__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__odri_ros2_interfaces__msg__RobotState __attribute__((deprecated))
#else
# define DEPRECATED__odri_ros2_interfaces__msg__RobotState __declspec(deprecated)
#endif

namespace odri_ros2_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RobotState_
{
  using Type = RobotState_<ContainerAllocator>;

  explicit RobotState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    (void)_init;
  }

  explicit RobotState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _motor_states_type =
    std::vector<odri_ros2_interfaces::msg::MotorState_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<odri_ros2_interfaces::msg::MotorState_<ContainerAllocator>>>;
  _motor_states_type motor_states;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__motor_states(
    const std::vector<odri_ros2_interfaces::msg::MotorState_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<odri_ros2_interfaces::msg::MotorState_<ContainerAllocator>>> & _arg)
  {
    this->motor_states = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    odri_ros2_interfaces::msg::RobotState_<ContainerAllocator> *;
  using ConstRawPtr =
    const odri_ros2_interfaces::msg::RobotState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<odri_ros2_interfaces::msg::RobotState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<odri_ros2_interfaces::msg::RobotState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      odri_ros2_interfaces::msg::RobotState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<odri_ros2_interfaces::msg::RobotState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      odri_ros2_interfaces::msg::RobotState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<odri_ros2_interfaces::msg::RobotState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<odri_ros2_interfaces::msg::RobotState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<odri_ros2_interfaces::msg::RobotState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__odri_ros2_interfaces__msg__RobotState
    std::shared_ptr<odri_ros2_interfaces::msg::RobotState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__odri_ros2_interfaces__msg__RobotState
    std::shared_ptr<odri_ros2_interfaces::msg::RobotState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RobotState_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->motor_states != other.motor_states) {
      return false;
    }
    return true;
  }
  bool operator!=(const RobotState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RobotState_

// alias to use template instance with default allocator
using RobotState =
  odri_ros2_interfaces::msg::RobotState_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace odri_ros2_interfaces

#endif  // ODRI_ROS2_INTERFACES__MSG__DETAIL__ROBOT_STATE__STRUCT_HPP_
