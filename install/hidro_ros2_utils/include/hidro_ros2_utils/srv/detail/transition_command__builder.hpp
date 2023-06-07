// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from hidro_ros2_utils:srv/TransitionCommand.idl
// generated code does not contain a copyright notice

#ifndef HIDRO_ROS2_UTILS__SRV__DETAIL__TRANSITION_COMMAND__BUILDER_HPP_
#define HIDRO_ROS2_UTILS__SRV__DETAIL__TRANSITION_COMMAND__BUILDER_HPP_

#include "hidro_ros2_utils/srv/detail/transition_command__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace hidro_ros2_utils
{

namespace srv
{

namespace builder
{

class Init_TransitionCommand_Request_command
{
public:
  Init_TransitionCommand_Request_command()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::hidro_ros2_utils::srv::TransitionCommand_Request command(::hidro_ros2_utils::srv::TransitionCommand_Request::_command_type arg)
  {
    msg_.command = std::move(arg);
    return std::move(msg_);
  }

private:
  ::hidro_ros2_utils::srv::TransitionCommand_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::hidro_ros2_utils::srv::TransitionCommand_Request>()
{
  return hidro_ros2_utils::srv::builder::Init_TransitionCommand_Request_command();
}

}  // namespace hidro_ros2_utils


namespace hidro_ros2_utils
{

namespace srv
{

namespace builder
{

class Init_TransitionCommand_Response_message
{
public:
  explicit Init_TransitionCommand_Response_message(::hidro_ros2_utils::srv::TransitionCommand_Response & msg)
  : msg_(msg)
  {}
  ::hidro_ros2_utils::srv::TransitionCommand_Response message(::hidro_ros2_utils::srv::TransitionCommand_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::hidro_ros2_utils::srv::TransitionCommand_Response msg_;
};

class Init_TransitionCommand_Response_result
{
public:
  explicit Init_TransitionCommand_Response_result(::hidro_ros2_utils::srv::TransitionCommand_Response & msg)
  : msg_(msg)
  {}
  Init_TransitionCommand_Response_message result(::hidro_ros2_utils::srv::TransitionCommand_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return Init_TransitionCommand_Response_message(msg_);
  }

private:
  ::hidro_ros2_utils::srv::TransitionCommand_Response msg_;
};

class Init_TransitionCommand_Response_accepted
{
public:
  Init_TransitionCommand_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TransitionCommand_Response_result accepted(::hidro_ros2_utils::srv::TransitionCommand_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_TransitionCommand_Response_result(msg_);
  }

private:
  ::hidro_ros2_utils::srv::TransitionCommand_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::hidro_ros2_utils::srv::TransitionCommand_Response>()
{
  return hidro_ros2_utils::srv::builder::Init_TransitionCommand_Response_accepted();
}

}  // namespace hidro_ros2_utils

#endif  // HIDRO_ROS2_UTILS__SRV__DETAIL__TRANSITION_COMMAND__BUILDER_HPP_
