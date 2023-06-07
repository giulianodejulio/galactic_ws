// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from odri_ros2_interfaces:msg/StateCommand.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "odri_ros2_interfaces/msg/detail/state_command__rosidl_typesupport_introspection_c.h"
#include "odri_ros2_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "odri_ros2_interfaces/msg/detail/state_command__functions.h"
#include "odri_ros2_interfaces/msg/detail/state_command__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `state_name`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void StateCommand__rosidl_typesupport_introspection_c__StateCommand_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  odri_ros2_interfaces__msg__StateCommand__init(message_memory);
}

void StateCommand__rosidl_typesupport_introspection_c__StateCommand_fini_function(void * message_memory)
{
  odri_ros2_interfaces__msg__StateCommand__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember StateCommand__rosidl_typesupport_introspection_c__StateCommand_message_member_array[3] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(odri_ros2_interfaces__msg__StateCommand, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "state_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(odri_ros2_interfaces__msg__StateCommand, state_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "state_name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(odri_ros2_interfaces__msg__StateCommand, state_name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers StateCommand__rosidl_typesupport_introspection_c__StateCommand_message_members = {
  "odri_ros2_interfaces__msg",  // message namespace
  "StateCommand",  // message name
  3,  // number of fields
  sizeof(odri_ros2_interfaces__msg__StateCommand),
  StateCommand__rosidl_typesupport_introspection_c__StateCommand_message_member_array,  // message members
  StateCommand__rosidl_typesupport_introspection_c__StateCommand_init_function,  // function to initialize message memory (memory has to be allocated)
  StateCommand__rosidl_typesupport_introspection_c__StateCommand_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t StateCommand__rosidl_typesupport_introspection_c__StateCommand_message_type_support_handle = {
  0,
  &StateCommand__rosidl_typesupport_introspection_c__StateCommand_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_odri_ros2_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, odri_ros2_interfaces, msg, StateCommand)() {
  StateCommand__rosidl_typesupport_introspection_c__StateCommand_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  if (!StateCommand__rosidl_typesupport_introspection_c__StateCommand_message_type_support_handle.typesupport_identifier) {
    StateCommand__rosidl_typesupport_introspection_c__StateCommand_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &StateCommand__rosidl_typesupport_introspection_c__StateCommand_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
