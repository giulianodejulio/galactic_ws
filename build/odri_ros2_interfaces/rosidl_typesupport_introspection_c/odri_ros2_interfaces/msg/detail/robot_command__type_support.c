// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from odri_ros2_interfaces:msg/RobotCommand.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "odri_ros2_interfaces/msg/detail/robot_command__rosidl_typesupport_introspection_c.h"
#include "odri_ros2_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "odri_ros2_interfaces/msg/detail/robot_command__functions.h"
#include "odri_ros2_interfaces/msg/detail/robot_command__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `motor_commands`
#include "odri_ros2_interfaces/msg/motor_command.h"
// Member `motor_commands`
#include "odri_ros2_interfaces/msg/detail/motor_command__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void RobotCommand__rosidl_typesupport_introspection_c__RobotCommand_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  odri_ros2_interfaces__msg__RobotCommand__init(message_memory);
}

void RobotCommand__rosidl_typesupport_introspection_c__RobotCommand_fini_function(void * message_memory)
{
  odri_ros2_interfaces__msg__RobotCommand__fini(message_memory);
}

size_t RobotCommand__rosidl_typesupport_introspection_c__size_function__MotorCommand__motor_commands(
  const void * untyped_member)
{
  const odri_ros2_interfaces__msg__MotorCommand__Sequence * member =
    (const odri_ros2_interfaces__msg__MotorCommand__Sequence *)(untyped_member);
  return member->size;
}

const void * RobotCommand__rosidl_typesupport_introspection_c__get_const_function__MotorCommand__motor_commands(
  const void * untyped_member, size_t index)
{
  const odri_ros2_interfaces__msg__MotorCommand__Sequence * member =
    (const odri_ros2_interfaces__msg__MotorCommand__Sequence *)(untyped_member);
  return &member->data[index];
}

void * RobotCommand__rosidl_typesupport_introspection_c__get_function__MotorCommand__motor_commands(
  void * untyped_member, size_t index)
{
  odri_ros2_interfaces__msg__MotorCommand__Sequence * member =
    (odri_ros2_interfaces__msg__MotorCommand__Sequence *)(untyped_member);
  return &member->data[index];
}

bool RobotCommand__rosidl_typesupport_introspection_c__resize_function__MotorCommand__motor_commands(
  void * untyped_member, size_t size)
{
  odri_ros2_interfaces__msg__MotorCommand__Sequence * member =
    (odri_ros2_interfaces__msg__MotorCommand__Sequence *)(untyped_member);
  odri_ros2_interfaces__msg__MotorCommand__Sequence__fini(member);
  return odri_ros2_interfaces__msg__MotorCommand__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember RobotCommand__rosidl_typesupport_introspection_c__RobotCommand_message_member_array[2] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(odri_ros2_interfaces__msg__RobotCommand, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "motor_commands",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(odri_ros2_interfaces__msg__RobotCommand, motor_commands),  // bytes offset in struct
    NULL,  // default value
    RobotCommand__rosidl_typesupport_introspection_c__size_function__MotorCommand__motor_commands,  // size() function pointer
    RobotCommand__rosidl_typesupport_introspection_c__get_const_function__MotorCommand__motor_commands,  // get_const(index) function pointer
    RobotCommand__rosidl_typesupport_introspection_c__get_function__MotorCommand__motor_commands,  // get(index) function pointer
    RobotCommand__rosidl_typesupport_introspection_c__resize_function__MotorCommand__motor_commands  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers RobotCommand__rosidl_typesupport_introspection_c__RobotCommand_message_members = {
  "odri_ros2_interfaces__msg",  // message namespace
  "RobotCommand",  // message name
  2,  // number of fields
  sizeof(odri_ros2_interfaces__msg__RobotCommand),
  RobotCommand__rosidl_typesupport_introspection_c__RobotCommand_message_member_array,  // message members
  RobotCommand__rosidl_typesupport_introspection_c__RobotCommand_init_function,  // function to initialize message memory (memory has to be allocated)
  RobotCommand__rosidl_typesupport_introspection_c__RobotCommand_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t RobotCommand__rosidl_typesupport_introspection_c__RobotCommand_message_type_support_handle = {
  0,
  &RobotCommand__rosidl_typesupport_introspection_c__RobotCommand_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_odri_ros2_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, odri_ros2_interfaces, msg, RobotCommand)() {
  RobotCommand__rosidl_typesupport_introspection_c__RobotCommand_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  RobotCommand__rosidl_typesupport_introspection_c__RobotCommand_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, odri_ros2_interfaces, msg, MotorCommand)();
  if (!RobotCommand__rosidl_typesupport_introspection_c__RobotCommand_message_type_support_handle.typesupport_identifier) {
    RobotCommand__rosidl_typesupport_introspection_c__RobotCommand_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &RobotCommand__rosidl_typesupport_introspection_c__RobotCommand_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
