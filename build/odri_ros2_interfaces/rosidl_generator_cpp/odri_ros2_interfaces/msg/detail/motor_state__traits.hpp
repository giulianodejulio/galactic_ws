// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from odri_ros2_interfaces:msg/MotorState.idl
// generated code does not contain a copyright notice

#ifndef ODRI_ROS2_INTERFACES__MSG__DETAIL__MOTOR_STATE__TRAITS_HPP_
#define ODRI_ROS2_INTERFACES__MSG__DETAIL__MOTOR_STATE__TRAITS_HPP_

#include "odri_ros2_interfaces/msg/detail/motor_state__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const odri_ros2_interfaces::msg::MotorState & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "position: ";
    value_to_yaml(msg.position, out);
    out << "\n";
  }

  // member: velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "velocity: ";
    value_to_yaml(msg.velocity, out);
    out << "\n";
  }

  // member: torque
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "torque: ";
    value_to_yaml(msg.torque, out);
    out << "\n";
  }

  // member: is_enabled
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_enabled: ";
    value_to_yaml(msg.is_enabled, out);
    out << "\n";
  }

  // member: has_index_been_detected
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "has_index_been_detected: ";
    value_to_yaml(msg.has_index_been_detected, out);
    out << "\n";
  }

  // member: index_toogle_bit
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "index_toogle_bit: ";
    value_to_yaml(msg.index_toogle_bit, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const odri_ros2_interfaces::msg::MotorState & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<odri_ros2_interfaces::msg::MotorState>()
{
  return "odri_ros2_interfaces::msg::MotorState";
}

template<>
inline const char * name<odri_ros2_interfaces::msg::MotorState>()
{
  return "odri_ros2_interfaces/msg/MotorState";
}

template<>
struct has_fixed_size<odri_ros2_interfaces::msg::MotorState>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<odri_ros2_interfaces::msg::MotorState>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<odri_ros2_interfaces::msg::MotorState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ODRI_ROS2_INTERFACES__MSG__DETAIL__MOTOR_STATE__TRAITS_HPP_
