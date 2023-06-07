// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from odri_ros2_interfaces:msg/RobotState.idl
// generated code does not contain a copyright notice

#ifndef ODRI_ROS2_INTERFACES__MSG__DETAIL__ROBOT_STATE__BUILDER_HPP_
#define ODRI_ROS2_INTERFACES__MSG__DETAIL__ROBOT_STATE__BUILDER_HPP_

#include "odri_ros2_interfaces/msg/detail/robot_state__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace odri_ros2_interfaces
{

namespace msg
{

namespace builder
{

class Init_RobotState_motor_states
{
public:
  explicit Init_RobotState_motor_states(::odri_ros2_interfaces::msg::RobotState & msg)
  : msg_(msg)
  {}
  ::odri_ros2_interfaces::msg::RobotState motor_states(::odri_ros2_interfaces::msg::RobotState::_motor_states_type arg)
  {
    msg_.motor_states = std::move(arg);
    return std::move(msg_);
  }

private:
  ::odri_ros2_interfaces::msg::RobotState msg_;
};

class Init_RobotState_header
{
public:
  Init_RobotState_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RobotState_motor_states header(::odri_ros2_interfaces::msg::RobotState::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_RobotState_motor_states(msg_);
  }

private:
  ::odri_ros2_interfaces::msg::RobotState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::odri_ros2_interfaces::msg::RobotState>()
{
  return odri_ros2_interfaces::msg::builder::Init_RobotState_header();
}

}  // namespace odri_ros2_interfaces

#endif  // ODRI_ROS2_INTERFACES__MSG__DETAIL__ROBOT_STATE__BUILDER_HPP_
