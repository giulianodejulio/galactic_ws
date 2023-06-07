// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from odri_ros2_interfaces:msg/StateCommand.idl
// generated code does not contain a copyright notice

#ifndef ODRI_ROS2_INTERFACES__MSG__DETAIL__STATE_COMMAND__TRAITS_HPP_
#define ODRI_ROS2_INTERFACES__MSG__DETAIL__STATE_COMMAND__TRAITS_HPP_

#include "odri_ros2_interfaces/msg/detail/state_command__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const odri_ros2_interfaces::msg::StateCommand & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_yaml(msg.header, out, indentation + 2);
  }

  // member: state_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "state_id: ";
    value_to_yaml(msg.state_id, out);
    out << "\n";
  }

  // member: state_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "state_name: ";
    value_to_yaml(msg.state_name, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const odri_ros2_interfaces::msg::StateCommand & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<odri_ros2_interfaces::msg::StateCommand>()
{
  return "odri_ros2_interfaces::msg::StateCommand";
}

template<>
inline const char * name<odri_ros2_interfaces::msg::StateCommand>()
{
  return "odri_ros2_interfaces/msg/StateCommand";
}

template<>
struct has_fixed_size<odri_ros2_interfaces::msg::StateCommand>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<odri_ros2_interfaces::msg::StateCommand>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<odri_ros2_interfaces::msg::StateCommand>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ODRI_ROS2_INTERFACES__MSG__DETAIL__STATE_COMMAND__TRAITS_HPP_
