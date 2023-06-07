// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from hidro_ros2_utils:msg/StateMachineStatus.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "hidro_ros2_utils/msg/detail/state_machine_status__rosidl_typesupport_introspection_c.h"
#include "hidro_ros2_utils/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "hidro_ros2_utils/msg/detail/state_machine_status__functions.h"
#include "hidro_ros2_utils/msg/detail/state_machine_status__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `status`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void StateMachineStatus__rosidl_typesupport_introspection_c__StateMachineStatus_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  hidro_ros2_utils__msg__StateMachineStatus__init(message_memory);
}

void StateMachineStatus__rosidl_typesupport_introspection_c__StateMachineStatus_fini_function(void * message_memory)
{
  hidro_ros2_utils__msg__StateMachineStatus__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember StateMachineStatus__rosidl_typesupport_introspection_c__StateMachineStatus_message_member_array[2] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hidro_ros2_utils__msg__StateMachineStatus, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hidro_ros2_utils__msg__StateMachineStatus, status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers StateMachineStatus__rosidl_typesupport_introspection_c__StateMachineStatus_message_members = {
  "hidro_ros2_utils__msg",  // message namespace
  "StateMachineStatus",  // message name
  2,  // number of fields
  sizeof(hidro_ros2_utils__msg__StateMachineStatus),
  StateMachineStatus__rosidl_typesupport_introspection_c__StateMachineStatus_message_member_array,  // message members
  StateMachineStatus__rosidl_typesupport_introspection_c__StateMachineStatus_init_function,  // function to initialize message memory (memory has to be allocated)
  StateMachineStatus__rosidl_typesupport_introspection_c__StateMachineStatus_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t StateMachineStatus__rosidl_typesupport_introspection_c__StateMachineStatus_message_type_support_handle = {
  0,
  &StateMachineStatus__rosidl_typesupport_introspection_c__StateMachineStatus_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_hidro_ros2_utils
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hidro_ros2_utils, msg, StateMachineStatus)() {
  StateMachineStatus__rosidl_typesupport_introspection_c__StateMachineStatus_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  if (!StateMachineStatus__rosidl_typesupport_introspection_c__StateMachineStatus_message_type_support_handle.typesupport_identifier) {
    StateMachineStatus__rosidl_typesupport_introspection_c__StateMachineStatus_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &StateMachineStatus__rosidl_typesupport_introspection_c__StateMachineStatus_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
