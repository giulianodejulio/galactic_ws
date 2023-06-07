// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from odri_ros2_interfaces:msg/MasterBoardState.idl
// generated code does not contain a copyright notice

#ifndef ODRI_ROS2_INTERFACES__MSG__DETAIL__MASTER_BOARD_STATE__BUILDER_HPP_
#define ODRI_ROS2_INTERFACES__MSG__DETAIL__MASTER_BOARD_STATE__BUILDER_HPP_

#include "odri_ros2_interfaces/msg/detail/master_board_state__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace odri_ros2_interfaces
{

namespace msg
{

namespace builder
{

class Init_MasterBoardState_drivers
{
public:
  explicit Init_MasterBoardState_drivers(::odri_ros2_interfaces::msg::MasterBoardState & msg)
  : msg_(msg)
  {}
  ::odri_ros2_interfaces::msg::MasterBoardState drivers(::odri_ros2_interfaces::msg::MasterBoardState::_drivers_type arg)
  {
    msg_.drivers = std::move(arg);
    return std::move(msg_);
  }

private:
  ::odri_ros2_interfaces::msg::MasterBoardState msg_;
};

class Init_MasterBoardState_header
{
public:
  Init_MasterBoardState_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MasterBoardState_drivers header(::odri_ros2_interfaces::msg::MasterBoardState::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_MasterBoardState_drivers(msg_);
  }

private:
  ::odri_ros2_interfaces::msg::MasterBoardState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::odri_ros2_interfaces::msg::MasterBoardState>()
{
  return odri_ros2_interfaces::msg::builder::Init_MasterBoardState_header();
}

}  // namespace odri_ros2_interfaces

#endif  // ODRI_ROS2_INTERFACES__MSG__DETAIL__MASTER_BOARD_STATE__BUILDER_HPP_
