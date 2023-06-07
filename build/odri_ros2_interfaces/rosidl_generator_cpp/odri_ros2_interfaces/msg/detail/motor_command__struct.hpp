// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from odri_ros2_interfaces:msg/MotorCommand.idl
// generated code does not contain a copyright notice

#ifndef ODRI_ROS2_INTERFACES__MSG__DETAIL__MOTOR_COMMAND__STRUCT_HPP_
#define ODRI_ROS2_INTERFACES__MSG__DETAIL__MOTOR_COMMAND__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__odri_ros2_interfaces__msg__MotorCommand __attribute__((deprecated))
#else
# define DEPRECATED__odri_ros2_interfaces__msg__MotorCommand __declspec(deprecated)
#endif

namespace odri_ros2_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MotorCommand_
{
  using Type = MotorCommand_<ContainerAllocator>;

  explicit MotorCommand_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->position_ref = 0.0;
      this->velocity_ref = 0.0;
      this->torque_ref = 0.0;
      this->kp = 0.0;
      this->kd = 0.0;
      this->i_sat = 0.0;
    }
  }

  explicit MotorCommand_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->position_ref = 0.0;
      this->velocity_ref = 0.0;
      this->torque_ref = 0.0;
      this->kp = 0.0;
      this->kd = 0.0;
      this->i_sat = 0.0;
    }
  }

  // field types and members
  using _position_ref_type =
    double;
  _position_ref_type position_ref;
  using _velocity_ref_type =
    double;
  _velocity_ref_type velocity_ref;
  using _torque_ref_type =
    double;
  _torque_ref_type torque_ref;
  using _kp_type =
    double;
  _kp_type kp;
  using _kd_type =
    double;
  _kd_type kd;
  using _i_sat_type =
    double;
  _i_sat_type i_sat;

  // setters for named parameter idiom
  Type & set__position_ref(
    const double & _arg)
  {
    this->position_ref = _arg;
    return *this;
  }
  Type & set__velocity_ref(
    const double & _arg)
  {
    this->velocity_ref = _arg;
    return *this;
  }
  Type & set__torque_ref(
    const double & _arg)
  {
    this->torque_ref = _arg;
    return *this;
  }
  Type & set__kp(
    const double & _arg)
  {
    this->kp = _arg;
    return *this;
  }
  Type & set__kd(
    const double & _arg)
  {
    this->kd = _arg;
    return *this;
  }
  Type & set__i_sat(
    const double & _arg)
  {
    this->i_sat = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    odri_ros2_interfaces::msg::MotorCommand_<ContainerAllocator> *;
  using ConstRawPtr =
    const odri_ros2_interfaces::msg::MotorCommand_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<odri_ros2_interfaces::msg::MotorCommand_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<odri_ros2_interfaces::msg::MotorCommand_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      odri_ros2_interfaces::msg::MotorCommand_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<odri_ros2_interfaces::msg::MotorCommand_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      odri_ros2_interfaces::msg::MotorCommand_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<odri_ros2_interfaces::msg::MotorCommand_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<odri_ros2_interfaces::msg::MotorCommand_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<odri_ros2_interfaces::msg::MotorCommand_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__odri_ros2_interfaces__msg__MotorCommand
    std::shared_ptr<odri_ros2_interfaces::msg::MotorCommand_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__odri_ros2_interfaces__msg__MotorCommand
    std::shared_ptr<odri_ros2_interfaces::msg::MotorCommand_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MotorCommand_ & other) const
  {
    if (this->position_ref != other.position_ref) {
      return false;
    }
    if (this->velocity_ref != other.velocity_ref) {
      return false;
    }
    if (this->torque_ref != other.torque_ref) {
      return false;
    }
    if (this->kp != other.kp) {
      return false;
    }
    if (this->kd != other.kd) {
      return false;
    }
    if (this->i_sat != other.i_sat) {
      return false;
    }
    return true;
  }
  bool operator!=(const MotorCommand_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MotorCommand_

// alias to use template instance with default allocator
using MotorCommand =
  odri_ros2_interfaces::msg::MotorCommand_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace odri_ros2_interfaces

#endif  // ODRI_ROS2_INTERFACES__MSG__DETAIL__MOTOR_COMMAND__STRUCT_HPP_
