// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from hidro_ros2_utils:srv/TransitionCommand.idl
// generated code does not contain a copyright notice

#ifndef HIDRO_ROS2_UTILS__SRV__DETAIL__TRANSITION_COMMAND__TRAITS_HPP_
#define HIDRO_ROS2_UTILS__SRV__DETAIL__TRANSITION_COMMAND__TRAITS_HPP_

#include "hidro_ros2_utils/srv/detail/transition_command__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const hidro_ros2_utils::srv::TransitionCommand_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: command
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "command: ";
    value_to_yaml(msg.command, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const hidro_ros2_utils::srv::TransitionCommand_Request & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<hidro_ros2_utils::srv::TransitionCommand_Request>()
{
  return "hidro_ros2_utils::srv::TransitionCommand_Request";
}

template<>
inline const char * name<hidro_ros2_utils::srv::TransitionCommand_Request>()
{
  return "hidro_ros2_utils/srv/TransitionCommand_Request";
}

template<>
struct has_fixed_size<hidro_ros2_utils::srv::TransitionCommand_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<hidro_ros2_utils::srv::TransitionCommand_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<hidro_ros2_utils::srv::TransitionCommand_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

inline void to_yaml(
  const hidro_ros2_utils::srv::TransitionCommand_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: accepted
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accepted: ";
    value_to_yaml(msg.accepted, out);
    out << "\n";
  }

  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result: ";
    value_to_yaml(msg.result, out);
    out << "\n";
  }

  // member: message
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "message: ";
    value_to_yaml(msg.message, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const hidro_ros2_utils::srv::TransitionCommand_Response & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<hidro_ros2_utils::srv::TransitionCommand_Response>()
{
  return "hidro_ros2_utils::srv::TransitionCommand_Response";
}

template<>
inline const char * name<hidro_ros2_utils::srv::TransitionCommand_Response>()
{
  return "hidro_ros2_utils/srv/TransitionCommand_Response";
}

template<>
struct has_fixed_size<hidro_ros2_utils::srv::TransitionCommand_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<hidro_ros2_utils::srv::TransitionCommand_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<hidro_ros2_utils::srv::TransitionCommand_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<hidro_ros2_utils::srv::TransitionCommand>()
{
  return "hidro_ros2_utils::srv::TransitionCommand";
}

template<>
inline const char * name<hidro_ros2_utils::srv::TransitionCommand>()
{
  return "hidro_ros2_utils/srv/TransitionCommand";
}

template<>
struct has_fixed_size<hidro_ros2_utils::srv::TransitionCommand>
  : std::integral_constant<
    bool,
    has_fixed_size<hidro_ros2_utils::srv::TransitionCommand_Request>::value &&
    has_fixed_size<hidro_ros2_utils::srv::TransitionCommand_Response>::value
  >
{
};

template<>
struct has_bounded_size<hidro_ros2_utils::srv::TransitionCommand>
  : std::integral_constant<
    bool,
    has_bounded_size<hidro_ros2_utils::srv::TransitionCommand_Request>::value &&
    has_bounded_size<hidro_ros2_utils::srv::TransitionCommand_Response>::value
  >
{
};

template<>
struct is_service<hidro_ros2_utils::srv::TransitionCommand>
  : std::true_type
{
};

template<>
struct is_service_request<hidro_ros2_utils::srv::TransitionCommand_Request>
  : std::true_type
{
};

template<>
struct is_service_response<hidro_ros2_utils::srv::TransitionCommand_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // HIDRO_ROS2_UTILS__SRV__DETAIL__TRANSITION_COMMAND__TRAITS_HPP_
