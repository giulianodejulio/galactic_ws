// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from odri_ros2_interfaces:msg/MotorCommand.idl
// generated code does not contain a copyright notice

#ifndef ODRI_ROS2_INTERFACES__MSG__DETAIL__MOTOR_COMMAND__TRAITS_HPP_
#define ODRI_ROS2_INTERFACES__MSG__DETAIL__MOTOR_COMMAND__TRAITS_HPP_

#include "odri_ros2_interfaces/msg/detail/motor_command__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const odri_ros2_interfaces::msg::MotorCommand & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: position_ref
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "position_ref: ";
    value_to_yaml(msg.position_ref, out);
    out << "\n";
  }

  // member: velocity_ref
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "velocity_ref: ";
    value_to_yaml(msg.velocity_ref, out);
    out << "\n";
  }

  // member: torque_ref
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "torque_ref: ";
    value_to_yaml(msg.torque_ref, out);
    out << "\n";
  }

  // member: kp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "kp: ";
    value_to_yaml(msg.kp, out);
    out << "\n";
  }

  // member: kd
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "kd: ";
    value_to_yaml(msg.kd, out);
    out << "\n";
  }

  // member: i_sat
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "i_sat: ";
    value_to_yaml(msg.i_sat, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const odri_ros2_interfaces::msg::MotorCommand & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<odri_ros2_interfaces::msg::MotorCommand>()
{
  return "odri_ros2_interfaces::msg::MotorCommand";
}

template<>
inline const char * name<odri_ros2_interfaces::msg::MotorCommand>()
{
  return "odri_ros2_interfaces/msg/MotorCommand";
}

template<>
struct has_fixed_size<odri_ros2_interfaces::msg::MotorCommand>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<odri_ros2_interfaces::msg::MotorCommand>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<odri_ros2_interfaces::msg::MotorCommand>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ODRI_ROS2_INTERFACES__MSG__DETAIL__MOTOR_COMMAND__TRAITS_HPP_
