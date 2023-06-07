// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from odri_ros2_interfaces:msg/RobotCommand.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "odri_ros2_interfaces/msg/detail/robot_command__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace odri_ros2_interfaces
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void RobotCommand_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) odri_ros2_interfaces::msg::RobotCommand(_init);
}

void RobotCommand_fini_function(void * message_memory)
{
  auto typed_message = static_cast<odri_ros2_interfaces::msg::RobotCommand *>(message_memory);
  typed_message->~RobotCommand();
}

size_t size_function__RobotCommand__motor_commands(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<odri_ros2_interfaces::msg::MotorCommand> *>(untyped_member);
  return member->size();
}

const void * get_const_function__RobotCommand__motor_commands(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<odri_ros2_interfaces::msg::MotorCommand> *>(untyped_member);
  return &member[index];
}

void * get_function__RobotCommand__motor_commands(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<odri_ros2_interfaces::msg::MotorCommand> *>(untyped_member);
  return &member[index];
}

void resize_function__RobotCommand__motor_commands(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<odri_ros2_interfaces::msg::MotorCommand> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember RobotCommand_message_member_array[2] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(odri_ros2_interfaces::msg::RobotCommand, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "motor_commands",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<odri_ros2_interfaces::msg::MotorCommand>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(odri_ros2_interfaces::msg::RobotCommand, motor_commands),  // bytes offset in struct
    nullptr,  // default value
    size_function__RobotCommand__motor_commands,  // size() function pointer
    get_const_function__RobotCommand__motor_commands,  // get_const(index) function pointer
    get_function__RobotCommand__motor_commands,  // get(index) function pointer
    resize_function__RobotCommand__motor_commands  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers RobotCommand_message_members = {
  "odri_ros2_interfaces::msg",  // message namespace
  "RobotCommand",  // message name
  2,  // number of fields
  sizeof(odri_ros2_interfaces::msg::RobotCommand),
  RobotCommand_message_member_array,  // message members
  RobotCommand_init_function,  // function to initialize message memory (memory has to be allocated)
  RobotCommand_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t RobotCommand_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &RobotCommand_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace odri_ros2_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<odri_ros2_interfaces::msg::RobotCommand>()
{
  return &::odri_ros2_interfaces::msg::rosidl_typesupport_introspection_cpp::RobotCommand_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, odri_ros2_interfaces, msg, RobotCommand)() {
  return &::odri_ros2_interfaces::msg::rosidl_typesupport_introspection_cpp::RobotCommand_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
