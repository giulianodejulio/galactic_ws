// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from odri_ros2_interfaces:msg/MotorState.idl
// generated code does not contain a copyright notice

#ifndef ODRI_ROS2_INTERFACES__MSG__DETAIL__MOTOR_STATE__BUILDER_HPP_
#define ODRI_ROS2_INTERFACES__MSG__DETAIL__MOTOR_STATE__BUILDER_HPP_

#include "odri_ros2_interfaces/msg/detail/motor_state__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace odri_ros2_interfaces
{

namespace msg
{

namespace builder
{

class Init_MotorState_index_toogle_bit
{
public:
  explicit Init_MotorState_index_toogle_bit(::odri_ros2_interfaces::msg::MotorState & msg)
  : msg_(msg)
  {}
  ::odri_ros2_interfaces::msg::MotorState index_toogle_bit(::odri_ros2_interfaces::msg::MotorState::_index_toogle_bit_type arg)
  {
    msg_.index_toogle_bit = std::move(arg);
    return std::move(msg_);
  }

private:
  ::odri_ros2_interfaces::msg::MotorState msg_;
};

class Init_MotorState_has_index_been_detected
{
public:
  explicit Init_MotorState_has_index_been_detected(::odri_ros2_interfaces::msg::MotorState & msg)
  : msg_(msg)
  {}
  Init_MotorState_index_toogle_bit has_index_been_detected(::odri_ros2_interfaces::msg::MotorState::_has_index_been_detected_type arg)
  {
    msg_.has_index_been_detected = std::move(arg);
    return Init_MotorState_index_toogle_bit(msg_);
  }

private:
  ::odri_ros2_interfaces::msg::MotorState msg_;
};

class Init_MotorState_is_enabled
{
public:
  explicit Init_MotorState_is_enabled(::odri_ros2_interfaces::msg::MotorState & msg)
  : msg_(msg)
  {}
  Init_MotorState_has_index_been_detected is_enabled(::odri_ros2_interfaces::msg::MotorState::_is_enabled_type arg)
  {
    msg_.is_enabled = std::move(arg);
    return Init_MotorState_has_index_been_detected(msg_);
  }

private:
  ::odri_ros2_interfaces::msg::MotorState msg_;
};

class Init_MotorState_torque
{
public:
  explicit Init_MotorState_torque(::odri_ros2_interfaces::msg::MotorState & msg)
  : msg_(msg)
  {}
  Init_MotorState_is_enabled torque(::odri_ros2_interfaces::msg::MotorState::_torque_type arg)
  {
    msg_.torque = std::move(arg);
    return Init_MotorState_is_enabled(msg_);
  }

private:
  ::odri_ros2_interfaces::msg::MotorState msg_;
};

class Init_MotorState_velocity
{
public:
  explicit Init_MotorState_velocity(::odri_ros2_interfaces::msg::MotorState & msg)
  : msg_(msg)
  {}
  Init_MotorState_torque velocity(::odri_ros2_interfaces::msg::MotorState::_velocity_type arg)
  {
    msg_.velocity = std::move(arg);
    return Init_MotorState_torque(msg_);
  }

private:
  ::odri_ros2_interfaces::msg::MotorState msg_;
};

class Init_MotorState_position
{
public:
  Init_MotorState_position()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MotorState_velocity position(::odri_ros2_interfaces::msg::MotorState::_position_type arg)
  {
    msg_.position = std::move(arg);
    return Init_MotorState_velocity(msg_);
  }

private:
  ::odri_ros2_interfaces::msg::MotorState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::odri_ros2_interfaces::msg::MotorState>()
{
  return odri_ros2_interfaces::msg::builder::Init_MotorState_position();
}

}  // namespace odri_ros2_interfaces

#endif  // ODRI_ROS2_INTERFACES__MSG__DETAIL__MOTOR_STATE__BUILDER_HPP_
