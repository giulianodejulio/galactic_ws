// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from odri_ros2_interfaces:msg/StateCommand.idl
// generated code does not contain a copyright notice

#ifndef ODRI_ROS2_INTERFACES__MSG__DETAIL__STATE_COMMAND__BUILDER_HPP_
#define ODRI_ROS2_INTERFACES__MSG__DETAIL__STATE_COMMAND__BUILDER_HPP_

#include "odri_ros2_interfaces/msg/detail/state_command__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace odri_ros2_interfaces
{

namespace msg
{

namespace builder
{

class Init_StateCommand_state_name
{
public:
  explicit Init_StateCommand_state_name(::odri_ros2_interfaces::msg::StateCommand & msg)
  : msg_(msg)
  {}
  ::odri_ros2_interfaces::msg::StateCommand state_name(::odri_ros2_interfaces::msg::StateCommand::_state_name_type arg)
  {
    msg_.state_name = std::move(arg);
    return std::move(msg_);
  }

private:
  ::odri_ros2_interfaces::msg::StateCommand msg_;
};

class Init_StateCommand_state_id
{
public:
  explicit Init_StateCommand_state_id(::odri_ros2_interfaces::msg::StateCommand & msg)
  : msg_(msg)
  {}
  Init_StateCommand_state_name state_id(::odri_ros2_interfaces::msg::StateCommand::_state_id_type arg)
  {
    msg_.state_id = std::move(arg);
    return Init_StateCommand_state_name(msg_);
  }

private:
  ::odri_ros2_interfaces::msg::StateCommand msg_;
};

class Init_StateCommand_header
{
public:
  Init_StateCommand_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_StateCommand_state_id header(::odri_ros2_interfaces::msg::StateCommand::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_StateCommand_state_id(msg_);
  }

private:
  ::odri_ros2_interfaces::msg::StateCommand msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::odri_ros2_interfaces::msg::StateCommand>()
{
  return odri_ros2_interfaces::msg::builder::Init_StateCommand_header();
}

}  // namespace odri_ros2_interfaces

#endif  // ODRI_ROS2_INTERFACES__MSG__DETAIL__STATE_COMMAND__BUILDER_HPP_
