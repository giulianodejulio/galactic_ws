// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from odri_ros2_interfaces:msg/DriverCommand.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "odri_ros2_interfaces/msg/detail/driver_command__rosidl_typesupport_introspection_c.h"
#include "odri_ros2_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "odri_ros2_interfaces/msg/detail/driver_command__functions.h"
#include "odri_ros2_interfaces/msg/detail/driver_command__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `motor1`
// Member `motor2`
#include "odri_ros2_interfaces/msg/motor_command.h"
// Member `motor1`
// Member `motor2`
#include "odri_ros2_interfaces/msg/detail/motor_command__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void DriverCommand__rosidl_typesupport_introspection_c__DriverCommand_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  odri_ros2_interfaces__msg__DriverCommand__init(message_memory);
}

void DriverCommand__rosidl_typesupport_introspection_c__DriverCommand_fini_function(void * message_memory)
{
  odri_ros2_interfaces__msg__DriverCommand__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember DriverCommand__rosidl_typesupport_introspection_c__DriverCommand_message_member_array[3] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(odri_ros2_interfaces__msg__DriverCommand, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "motor1",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(odri_ros2_interfaces__msg__DriverCommand, motor1),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "motor2",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(odri_ros2_interfaces__msg__DriverCommand, motor2),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers DriverCommand__rosidl_typesupport_introspection_c__DriverCommand_message_members = {
  "odri_ros2_interfaces__msg",  // message namespace
  "DriverCommand",  // message name
  3,  // number of fields
  sizeof(odri_ros2_interfaces__msg__DriverCommand),
  DriverCommand__rosidl_typesupport_introspection_c__DriverCommand_message_member_array,  // message members
  DriverCommand__rosidl_typesupport_introspection_c__DriverCommand_init_function,  // function to initialize message memory (memory has to be allocated)
  DriverCommand__rosidl_typesupport_introspection_c__DriverCommand_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t DriverCommand__rosidl_typesupport_introspection_c__DriverCommand_message_type_support_handle = {
  0,
  &DriverCommand__rosidl_typesupport_introspection_c__DriverCommand_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_odri_ros2_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, odri_ros2_interfaces, msg, DriverCommand)() {
  DriverCommand__rosidl_typesupport_introspection_c__DriverCommand_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  DriverCommand__rosidl_typesupport_introspection_c__DriverCommand_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, odri_ros2_interfaces, msg, MotorCommand)();
  DriverCommand__rosidl_typesupport_introspection_c__DriverCommand_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, odri_ros2_interfaces, msg, MotorCommand)();
  if (!DriverCommand__rosidl_typesupport_introspection_c__DriverCommand_message_type_support_handle.typesupport_identifier) {
    DriverCommand__rosidl_typesupport_introspection_c__DriverCommand_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &DriverCommand__rosidl_typesupport_introspection_c__DriverCommand_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
