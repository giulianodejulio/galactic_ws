// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from odri_ros2_interfaces:msg/DriverCommand.idl
// generated code does not contain a copyright notice

#ifndef ODRI_ROS2_INTERFACES__MSG__DETAIL__DRIVER_COMMAND__BUILDER_HPP_
#define ODRI_ROS2_INTERFACES__MSG__DETAIL__DRIVER_COMMAND__BUILDER_HPP_

#include "odri_ros2_interfaces/msg/detail/driver_command__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace odri_ros2_interfaces
{

namespace msg
{

namespace builder
{

class Init_DriverCommand_motor2
{
public:
  explicit Init_DriverCommand_motor2(::odri_ros2_interfaces::msg::DriverCommand & msg)
  : msg_(msg)
  {}
  ::odri_ros2_interfaces::msg::DriverCommand motor2(::odri_ros2_interfaces::msg::DriverCommand::_motor2_type arg)
  {
    msg_.motor2 = std::move(arg);
    return std::move(msg_);
  }

private:
  ::odri_ros2_interfaces::msg::DriverCommand msg_;
};

class Init_DriverCommand_motor1
{
public:
  explicit Init_DriverCommand_motor1(::odri_ros2_interfaces::msg::DriverCommand & msg)
  : msg_(msg)
  {}
  Init_DriverCommand_motor2 motor1(::odri_ros2_interfaces::msg::DriverCommand::_motor1_type arg)
  {
    msg_.motor1 = std::move(arg);
    return Init_DriverCommand_motor2(msg_);
  }

private:
  ::odri_ros2_interfaces::msg::DriverCommand msg_;
};

class Init_DriverCommand_header
{
public:
  Init_DriverCommand_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DriverCommand_motor1 header(::odri_ros2_interfaces::msg::DriverCommand::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_DriverCommand_motor1(msg_);
  }

private:
  ::odri_ros2_interfaces::msg::DriverCommand msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::odri_ros2_interfaces::msg::DriverCommand>()
{
  return odri_ros2_interfaces::msg::builder::Init_DriverCommand_header();
}

}  // namespace odri_ros2_interfaces

#endif  // ODRI_ROS2_INTERFACES__MSG__DETAIL__DRIVER_COMMAND__BUILDER_HPP_
