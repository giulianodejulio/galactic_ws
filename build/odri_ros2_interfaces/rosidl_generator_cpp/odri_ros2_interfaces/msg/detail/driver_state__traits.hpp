// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from odri_ros2_interfaces:msg/DriverState.idl
// generated code does not contain a copyright notice

#ifndef ODRI_ROS2_INTERFACES__MSG__DETAIL__DRIVER_STATE__TRAITS_HPP_
#define ODRI_ROS2_INTERFACES__MSG__DETAIL__DRIVER_STATE__TRAITS_HPP_

#include "odri_ros2_interfaces/msg/detail/driver_state__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'motor1'
// Member 'motor2'
#include "odri_ros2_interfaces/msg/detail/motor_state__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const odri_ros2_interfaces::msg::DriverState & msg,
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

  // member: motor1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "motor1:\n";
    to_yaml(msg.motor1, out, indentation + 2);
  }

  // member: motor2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "motor2:\n";
    to_yaml(msg.motor2, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const odri_ros2_interfaces::msg::DriverState & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<odri_ros2_interfaces::msg::DriverState>()
{
  return "odri_ros2_interfaces::msg::DriverState";
}

template<>
inline const char * name<odri_ros2_interfaces::msg::DriverState>()
{
  return "odri_ros2_interfaces/msg/DriverState";
}

template<>
struct has_fixed_size<odri_ros2_interfaces::msg::DriverState>
  : std::integral_constant<bool, has_fixed_size<odri_ros2_interfaces::msg::MotorState>::value && has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<odri_ros2_interfaces::msg::DriverState>
  : std::integral_constant<bool, has_bounded_size<odri_ros2_interfaces::msg::MotorState>::value && has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<odri_ros2_interfaces::msg::DriverState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ODRI_ROS2_INTERFACES__MSG__DETAIL__DRIVER_STATE__TRAITS_HPP_
