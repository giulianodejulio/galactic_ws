// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from hidro_ros2_utils:msg/StateMachineStatus.idl
// generated code does not contain a copyright notice

#ifndef HIDRO_ROS2_UTILS__MSG__DETAIL__STATE_MACHINE_STATUS__TRAITS_HPP_
#define HIDRO_ROS2_UTILS__MSG__DETAIL__STATE_MACHINE_STATUS__TRAITS_HPP_

#include "hidro_ros2_utils/msg/detail/state_machine_status__struct.hpp"
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
  const hidro_ros2_utils::msg::StateMachineStatus & msg,
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

  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    value_to_yaml(msg.status, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const hidro_ros2_utils::msg::StateMachineStatus & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<hidro_ros2_utils::msg::StateMachineStatus>()
{
  return "hidro_ros2_utils::msg::StateMachineStatus";
}

template<>
inline const char * name<hidro_ros2_utils::msg::StateMachineStatus>()
{
  return "hidro_ros2_utils/msg/StateMachineStatus";
}

template<>
struct has_fixed_size<hidro_ros2_utils::msg::StateMachineStatus>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<hidro_ros2_utils::msg::StateMachineStatus>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<hidro_ros2_utils::msg::StateMachineStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // HIDRO_ROS2_UTILS__MSG__DETAIL__STATE_MACHINE_STATUS__TRAITS_HPP_
