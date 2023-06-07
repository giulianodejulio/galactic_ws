// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from hidro_ros2_utils:msg/StateMachineStatus.idl
// generated code does not contain a copyright notice

#ifndef HIDRO_ROS2_UTILS__MSG__DETAIL__STATE_MACHINE_STATUS__BUILDER_HPP_
#define HIDRO_ROS2_UTILS__MSG__DETAIL__STATE_MACHINE_STATUS__BUILDER_HPP_

#include "hidro_ros2_utils/msg/detail/state_machine_status__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace hidro_ros2_utils
{

namespace msg
{

namespace builder
{

class Init_StateMachineStatus_status
{
public:
  explicit Init_StateMachineStatus_status(::hidro_ros2_utils::msg::StateMachineStatus & msg)
  : msg_(msg)
  {}
  ::hidro_ros2_utils::msg::StateMachineStatus status(::hidro_ros2_utils::msg::StateMachineStatus::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::hidro_ros2_utils::msg::StateMachineStatus msg_;
};

class Init_StateMachineStatus_header
{
public:
  Init_StateMachineStatus_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_StateMachineStatus_status header(::hidro_ros2_utils::msg::StateMachineStatus::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_StateMachineStatus_status(msg_);
  }

private:
  ::hidro_ros2_utils::msg::StateMachineStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::hidro_ros2_utils::msg::StateMachineStatus>()
{
  return hidro_ros2_utils::msg::builder::Init_StateMachineStatus_header();
}

}  // namespace hidro_ros2_utils

#endif  // HIDRO_ROS2_UTILS__MSG__DETAIL__STATE_MACHINE_STATUS__BUILDER_HPP_
