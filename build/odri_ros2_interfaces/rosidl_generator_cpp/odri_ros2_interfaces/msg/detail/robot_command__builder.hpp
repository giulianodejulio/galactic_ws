// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from odri_ros2_interfaces:msg/RobotCommand.idl
// generated code does not contain a copyright notice

#ifndef ODRI_ROS2_INTERFACES__MSG__DETAIL__ROBOT_COMMAND__BUILDER_HPP_
#define ODRI_ROS2_INTERFACES__MSG__DETAIL__ROBOT_COMMAND__BUILDER_HPP_

#include "odri_ros2_interfaces/msg/detail/robot_command__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace odri_ros2_interfaces
{

namespace msg
{

namespace builder
{

class Init_RobotCommand_motor_commands
{
public:
  explicit Init_RobotCommand_motor_commands(::odri_ros2_interfaces::msg::RobotCommand & msg)
  : msg_(msg)
  {}
  ::odri_ros2_interfaces::msg::RobotCommand motor_commands(::odri_ros2_interfaces::msg::RobotCommand::_motor_commands_type arg)
  {
    msg_.motor_commands = std::move(arg);
    return std::move(msg_);
  }

private:
  ::odri_ros2_interfaces::msg::RobotCommand msg_;
};

class Init_RobotCommand_header
{
public:
  Init_RobotCommand_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RobotCommand_motor_commands header(::odri_ros2_interfaces::msg::RobotCommand::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_RobotCommand_motor_commands(msg_);
  }

private:
  ::odri_ros2_interfaces::msg::RobotCommand msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::odri_ros2_interfaces::msg::RobotCommand>()
{
  return odri_ros2_interfaces::msg::builder::Init_RobotCommand_header();
}

}  // namespace odri_ros2_interfaces

#endif  // ODRI_ROS2_INTERFACES__MSG__DETAIL__ROBOT_COMMAND__BUILDER_HPP_
