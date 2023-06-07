// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from odri_ros2_interfaces:msg/MotorState.idl
// generated code does not contain a copyright notice

#ifndef ODRI_ROS2_INTERFACES__MSG__DETAIL__MOTOR_STATE__STRUCT_HPP_
#define ODRI_ROS2_INTERFACES__MSG__DETAIL__MOTOR_STATE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__odri_ros2_interfaces__msg__MotorState __attribute__((deprecated))
#else
# define DEPRECATED__odri_ros2_interfaces__msg__MotorState __declspec(deprecated)
#endif

namespace odri_ros2_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MotorState_
{
  using Type = MotorState_<ContainerAllocator>;

  explicit MotorState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->position = 0.0;
      this->velocity = 0.0;
      this->torque = 0.0;
      this->is_enabled = false;
      this->has_index_been_detected = false;
      this->index_toogle_bit = false;
    }
  }

  explicit MotorState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->position = 0.0;
      this->velocity = 0.0;
      this->torque = 0.0;
      this->is_enabled = false;
      this->has_index_been_detected = false;
      this->index_toogle_bit = false;
    }
  }

  // field types and members
  using _position_type =
    double;
  _position_type position;
  using _velocity_type =
    double;
  _velocity_type velocity;
  using _torque_type =
    double;
  _torque_type torque;
  using _is_enabled_type =
    bool;
  _is_enabled_type is_enabled;
  using _has_index_been_detected_type =
    bool;
  _has_index_been_detected_type has_index_been_detected;
  using _index_toogle_bit_type =
    bool;
  _index_toogle_bit_type index_toogle_bit;

  // setters for named parameter idiom
  Type & set__position(
    const double & _arg)
  {
    this->position = _arg;
    return *this;
  }
  Type & set__velocity(
    const double & _arg)
  {
    this->velocity = _arg;
    return *this;
  }
  Type & set__torque(
    const double & _arg)
  {
    this->torque = _arg;
    return *this;
  }
  Type & set__is_enabled(
    const bool & _arg)
  {
    this->is_enabled = _arg;
    return *this;
  }
  Type & set__has_index_been_detected(
    const bool & _arg)
  {
    this->has_index_been_detected = _arg;
    return *this;
  }
  Type & set__index_toogle_bit(
    const bool & _arg)
  {
    this->index_toogle_bit = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    odri_ros2_interfaces::msg::MotorState_<ContainerAllocator> *;
  using ConstRawPtr =
    const odri_ros2_interfaces::msg::MotorState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<odri_ros2_interfaces::msg::MotorState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<odri_ros2_interfaces::msg::MotorState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      odri_ros2_interfaces::msg::MotorState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<odri_ros2_interfaces::msg::MotorState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      odri_ros2_interfaces::msg::MotorState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<odri_ros2_interfaces::msg::MotorState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<odri_ros2_interfaces::msg::MotorState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<odri_ros2_interfaces::msg::MotorState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__odri_ros2_interfaces__msg__MotorState
    std::shared_ptr<odri_ros2_interfaces::msg::MotorState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__odri_ros2_interfaces__msg__MotorState
    std::shared_ptr<odri_ros2_interfaces::msg::MotorState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MotorState_ & other) const
  {
    if (this->position != other.position) {
      return false;
    }
    if (this->velocity != other.velocity) {
      return false;
    }
    if (this->torque != other.torque) {
      return false;
    }
    if (this->is_enabled != other.is_enabled) {
      return false;
    }
    if (this->has_index_been_detected != other.has_index_been_detected) {
      return false;
    }
    if (this->index_toogle_bit != other.index_toogle_bit) {
      return false;
    }
    return true;
  }
  bool operator!=(const MotorState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MotorState_

// alias to use template instance with default allocator
using MotorState =
  odri_ros2_interfaces::msg::MotorState_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace odri_ros2_interfaces

#endif  // ODRI_ROS2_INTERFACES__MSG__DETAIL__MOTOR_STATE__STRUCT_HPP_
