// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from odri_ros2_interfaces:msg/MotorState.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "odri_ros2_interfaces/msg/detail/motor_state__rosidl_typesupport_introspection_c.h"
#include "odri_ros2_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "odri_ros2_interfaces/msg/detail/motor_state__functions.h"
#include "odri_ros2_interfaces/msg/detail/motor_state__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void MotorState__rosidl_typesupport_introspection_c__MotorState_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  odri_ros2_interfaces__msg__MotorState__init(message_memory);
}

void MotorState__rosidl_typesupport_introspection_c__MotorState_fini_function(void * message_memory)
{
  odri_ros2_interfaces__msg__MotorState__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember MotorState__rosidl_typesupport_introspection_c__MotorState_message_member_array[6] = {
  {
    "position",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(odri_ros2_interfaces__msg__MotorState, position),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "velocity",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(odri_ros2_interfaces__msg__MotorState, velocity),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "torque",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(odri_ros2_interfaces__msg__MotorState, torque),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "is_enabled",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(odri_ros2_interfaces__msg__MotorState, is_enabled),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "has_index_been_detected",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(odri_ros2_interfaces__msg__MotorState, has_index_been_detected),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "index_toogle_bit",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(odri_ros2_interfaces__msg__MotorState, index_toogle_bit),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers MotorState__rosidl_typesupport_introspection_c__MotorState_message_members = {
  "odri_ros2_interfaces__msg",  // message namespace
  "MotorState",  // message name
  6,  // number of fields
  sizeof(odri_ros2_interfaces__msg__MotorState),
  MotorState__rosidl_typesupport_introspection_c__MotorState_message_member_array,  // message members
  MotorState__rosidl_typesupport_introspection_c__MotorState_init_function,  // function to initialize message memory (memory has to be allocated)
  MotorState__rosidl_typesupport_introspection_c__MotorState_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t MotorState__rosidl_typesupport_introspection_c__MotorState_message_type_support_handle = {
  0,
  &MotorState__rosidl_typesupport_introspection_c__MotorState_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_odri_ros2_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, odri_ros2_interfaces, msg, MotorState)() {
  if (!MotorState__rosidl_typesupport_introspection_c__MotorState_message_type_support_handle.typesupport_identifier) {
    MotorState__rosidl_typesupport_introspection_c__MotorState_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &MotorState__rosidl_typesupport_introspection_c__MotorState_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
