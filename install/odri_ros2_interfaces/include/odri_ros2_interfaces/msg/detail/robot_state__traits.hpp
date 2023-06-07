// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from odri_ros2_interfaces:msg/RobotState.idl
// generated code does not contain a copyright notice

#ifndef ODRI_ROS2_INTERFACES__MSG__DETAIL__ROBOT_STATE__TRAITS_HPP_
#define ODRI_ROS2_INTERFACES__MSG__DETAIL__ROBOT_STATE__TRAITS_HPP_

#include "odri_ros2_interfaces/msg/detail/robot_state__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'motor_states'
#include "odri_ros2_interfaces/msg/detail/motor_state__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const odri_ros2_interfaces::msg::RobotState & msg,
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

  // member: motor_states
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.motor_states.size() == 0) {
      out << "motor_states: []\n";
    } else {
      out << "motor_states:\n";
      for (auto item : msg.motor_states) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const odri_ros2_interfaces::msg::RobotState & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<odri_ros2_interfaces::msg::RobotState>()
{
  return "odri_ros2_interfaces::msg::RobotState";
}

template<>
inline const char * name<odri_ros2_interfaces::msg::RobotState>()
{
  return "odri_ros2_interfaces/msg/RobotState";
}

template<>
struct has_fixed_size<odri_ros2_interfaces::msg::RobotState>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<odri_ros2_interfaces::msg::RobotState>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<odri_ros2_interfaces::msg::RobotState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ODRI_ROS2_INTERFACES__MSG__DETAIL__ROBOT_STATE__TRAITS_HPP_
