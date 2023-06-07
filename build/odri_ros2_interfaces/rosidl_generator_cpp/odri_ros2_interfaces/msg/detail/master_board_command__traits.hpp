// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from odri_ros2_interfaces:msg/MasterBoardCommand.idl
// generated code does not contain a copyright notice

#ifndef ODRI_ROS2_INTERFACES__MSG__DETAIL__MASTER_BOARD_COMMAND__TRAITS_HPP_
#define ODRI_ROS2_INTERFACES__MSG__DETAIL__MASTER_BOARD_COMMAND__TRAITS_HPP_

#include "odri_ros2_interfaces/msg/detail/master_board_command__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'drivers'
#include "odri_ros2_interfaces/msg/detail/driver_command__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const odri_ros2_interfaces::msg::MasterBoardCommand & msg,
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

  // member: drivers
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.drivers.size() == 0) {
      out << "drivers: []\n";
    } else {
      out << "drivers:\n";
      for (auto item : msg.drivers) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const odri_ros2_interfaces::msg::MasterBoardCommand & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<odri_ros2_interfaces::msg::MasterBoardCommand>()
{
  return "odri_ros2_interfaces::msg::MasterBoardCommand";
}

template<>
inline const char * name<odri_ros2_interfaces::msg::MasterBoardCommand>()
{
  return "odri_ros2_interfaces/msg/MasterBoardCommand";
}

template<>
struct has_fixed_size<odri_ros2_interfaces::msg::MasterBoardCommand>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<odri_ros2_interfaces::msg::MasterBoardCommand>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<odri_ros2_interfaces::msg::MasterBoardCommand>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ODRI_ROS2_INTERFACES__MSG__DETAIL__MASTER_BOARD_COMMAND__TRAITS_HPP_
