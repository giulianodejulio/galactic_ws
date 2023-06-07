// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from odri_ros2_interfaces:msg/DriverState.idl
// generated code does not contain a copyright notice

#ifndef ODRI_ROS2_INTERFACES__MSG__DETAIL__DRIVER_STATE__BUILDER_HPP_
#define ODRI_ROS2_INTERFACES__MSG__DETAIL__DRIVER_STATE__BUILDER_HPP_

#include "odri_ros2_interfaces/msg/detail/driver_state__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace odri_ros2_interfaces
{

namespace msg
{

namespace builder
{

class Init_DriverState_motor2
{
public:
  explicit Init_DriverState_motor2(::odri_ros2_interfaces::msg::DriverState & msg)
  : msg_(msg)
  {}
  ::odri_ros2_interfaces::msg::DriverState motor2(::odri_ros2_interfaces::msg::DriverState::_motor2_type arg)
  {
    msg_.motor2 = std::move(arg);
    return std::move(msg_);
  }

private:
  ::odri_ros2_interfaces::msg::DriverState msg_;
};

class Init_DriverState_motor1
{
public:
  explicit Init_DriverState_motor1(::odri_ros2_interfaces::msg::DriverState & msg)
  : msg_(msg)
  {}
  Init_DriverState_motor2 motor1(::odri_ros2_interfaces::msg::DriverState::_motor1_type arg)
  {
    msg_.motor1 = std::move(arg);
    return Init_DriverState_motor2(msg_);
  }

private:
  ::odri_ros2_interfaces::msg::DriverState msg_;
};

class Init_DriverState_header
{
public:
  Init_DriverState_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DriverState_motor1 header(::odri_ros2_interfaces::msg::DriverState::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_DriverState_motor1(msg_);
  }

private:
  ::odri_ros2_interfaces::msg::DriverState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::odri_ros2_interfaces::msg::DriverState>()
{
  return odri_ros2_interfaces::msg::builder::Init_DriverState_header();
}

}  // namespace odri_ros2_interfaces

#endif  // ODRI_ROS2_INTERFACES__MSG__DETAIL__DRIVER_STATE__BUILDER_HPP_
