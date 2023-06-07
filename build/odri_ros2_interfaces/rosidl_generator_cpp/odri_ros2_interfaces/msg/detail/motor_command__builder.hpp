// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from odri_ros2_interfaces:msg/MotorCommand.idl
// generated code does not contain a copyright notice

#ifndef ODRI_ROS2_INTERFACES__MSG__DETAIL__MOTOR_COMMAND__BUILDER_HPP_
#define ODRI_ROS2_INTERFACES__MSG__DETAIL__MOTOR_COMMAND__BUILDER_HPP_

#include "odri_ros2_interfaces/msg/detail/motor_command__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace odri_ros2_interfaces
{

namespace msg
{

namespace builder
{

class Init_MotorCommand_i_sat
{
public:
  explicit Init_MotorCommand_i_sat(::odri_ros2_interfaces::msg::MotorCommand & msg)
  : msg_(msg)
  {}
  ::odri_ros2_interfaces::msg::MotorCommand i_sat(::odri_ros2_interfaces::msg::MotorCommand::_i_sat_type arg)
  {
    msg_.i_sat = std::move(arg);
    return std::move(msg_);
  }

private:
  ::odri_ros2_interfaces::msg::MotorCommand msg_;
};

class Init_MotorCommand_kd
{
public:
  explicit Init_MotorCommand_kd(::odri_ros2_interfaces::msg::MotorCommand & msg)
  : msg_(msg)
  {}
  Init_MotorCommand_i_sat kd(::odri_ros2_interfaces::msg::MotorCommand::_kd_type arg)
  {
    msg_.kd = std::move(arg);
    return Init_MotorCommand_i_sat(msg_);
  }

private:
  ::odri_ros2_interfaces::msg::MotorCommand msg_;
};

class Init_MotorCommand_kp
{
public:
  explicit Init_MotorCommand_kp(::odri_ros2_interfaces::msg::MotorCommand & msg)
  : msg_(msg)
  {}
  Init_MotorCommand_kd kp(::odri_ros2_interfaces::msg::MotorCommand::_kp_type arg)
  {
    msg_.kp = std::move(arg);
    return Init_MotorCommand_kd(msg_);
  }

private:
  ::odri_ros2_interfaces::msg::MotorCommand msg_;
};

class Init_MotorCommand_torque_ref
{
public:
  explicit Init_MotorCommand_torque_ref(::odri_ros2_interfaces::msg::MotorCommand & msg)
  : msg_(msg)
  {}
  Init_MotorCommand_kp torque_ref(::odri_ros2_interfaces::msg::MotorCommand::_torque_ref_type arg)
  {
    msg_.torque_ref = std::move(arg);
    return Init_MotorCommand_kp(msg_);
  }

private:
  ::odri_ros2_interfaces::msg::MotorCommand msg_;
};

class Init_MotorCommand_velocity_ref
{
public:
  explicit Init_MotorCommand_velocity_ref(::odri_ros2_interfaces::msg::MotorCommand & msg)
  : msg_(msg)
  {}
  Init_MotorCommand_torque_ref velocity_ref(::odri_ros2_interfaces::msg::MotorCommand::_velocity_ref_type arg)
  {
    msg_.velocity_ref = std::move(arg);
    return Init_MotorCommand_torque_ref(msg_);
  }

private:
  ::odri_ros2_interfaces::msg::MotorCommand msg_;
};

class Init_MotorCommand_position_ref
{
public:
  Init_MotorCommand_position_ref()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MotorCommand_velocity_ref position_ref(::odri_ros2_interfaces::msg::MotorCommand::_position_ref_type arg)
  {
    msg_.position_ref = std::move(arg);
    return Init_MotorCommand_velocity_ref(msg_);
  }

private:
  ::odri_ros2_interfaces::msg::MotorCommand msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::odri_ros2_interfaces::msg::MotorCommand>()
{
  return odri_ros2_interfaces::msg::builder::Init_MotorCommand_position_ref();
}

}  // namespace odri_ros2_interfaces

#endif  // ODRI_ROS2_INTERFACES__MSG__DETAIL__MOTOR_COMMAND__BUILDER_HPP_
