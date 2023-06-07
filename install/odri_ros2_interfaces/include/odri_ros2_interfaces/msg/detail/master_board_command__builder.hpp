// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from odri_ros2_interfaces:msg/MasterBoardCommand.idl
// generated code does not contain a copyright notice

#ifndef ODRI_ROS2_INTERFACES__MSG__DETAIL__MASTER_BOARD_COMMAND__BUILDER_HPP_
#define ODRI_ROS2_INTERFACES__MSG__DETAIL__MASTER_BOARD_COMMAND__BUILDER_HPP_

#include "odri_ros2_interfaces/msg/detail/master_board_command__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace odri_ros2_interfaces
{

namespace msg
{

namespace builder
{

class Init_MasterBoardCommand_drivers
{
public:
  explicit Init_MasterBoardCommand_drivers(::odri_ros2_interfaces::msg::MasterBoardCommand & msg)
  : msg_(msg)
  {}
  ::odri_ros2_interfaces::msg::MasterBoardCommand drivers(::odri_ros2_interfaces::msg::MasterBoardCommand::_drivers_type arg)
  {
    msg_.drivers = std::move(arg);
    return std::move(msg_);
  }

private:
  ::odri_ros2_interfaces::msg::MasterBoardCommand msg_;
};

class Init_MasterBoardCommand_header
{
public:
  Init_MasterBoardCommand_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MasterBoardCommand_drivers header(::odri_ros2_interfaces::msg::MasterBoardCommand::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_MasterBoardCommand_drivers(msg_);
  }

private:
  ::odri_ros2_interfaces::msg::MasterBoardCommand msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::odri_ros2_interfaces::msg::MasterBoardCommand>()
{
  return odri_ros2_interfaces::msg::builder::Init_MasterBoardCommand_header();
}

}  // namespace odri_ros2_interfaces

#endif  // ODRI_ROS2_INTERFACES__MSG__DETAIL__MASTER_BOARD_COMMAND__BUILDER_HPP_
