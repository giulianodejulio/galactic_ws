// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from odri_ros2_interfaces:msg/MasterBoardState.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "odri_ros2_interfaces/msg/detail/master_board_state__rosidl_typesupport_introspection_c.h"
#include "odri_ros2_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "odri_ros2_interfaces/msg/detail/master_board_state__functions.h"
#include "odri_ros2_interfaces/msg/detail/master_board_state__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `drivers`
#include "odri_ros2_interfaces/msg/driver_state.h"
// Member `drivers`
#include "odri_ros2_interfaces/msg/detail/driver_state__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void MasterBoardState__rosidl_typesupport_introspection_c__MasterBoardState_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  odri_ros2_interfaces__msg__MasterBoardState__init(message_memory);
}

void MasterBoardState__rosidl_typesupport_introspection_c__MasterBoardState_fini_function(void * message_memory)
{
  odri_ros2_interfaces__msg__MasterBoardState__fini(message_memory);
}

size_t MasterBoardState__rosidl_typesupport_introspection_c__size_function__DriverState__drivers(
  const void * untyped_member)
{
  const odri_ros2_interfaces__msg__DriverState__Sequence * member =
    (const odri_ros2_interfaces__msg__DriverState__Sequence *)(untyped_member);
  return member->size;
}

const void * MasterBoardState__rosidl_typesupport_introspection_c__get_const_function__DriverState__drivers(
  const void * untyped_member, size_t index)
{
  const odri_ros2_interfaces__msg__DriverState__Sequence * member =
    (const odri_ros2_interfaces__msg__DriverState__Sequence *)(untyped_member);
  return &member->data[index];
}

void * MasterBoardState__rosidl_typesupport_introspection_c__get_function__DriverState__drivers(
  void * untyped_member, size_t index)
{
  odri_ros2_interfaces__msg__DriverState__Sequence * member =
    (odri_ros2_interfaces__msg__DriverState__Sequence *)(untyped_member);
  return &member->data[index];
}

bool MasterBoardState__rosidl_typesupport_introspection_c__resize_function__DriverState__drivers(
  void * untyped_member, size_t size)
{
  odri_ros2_interfaces__msg__DriverState__Sequence * member =
    (odri_ros2_interfaces__msg__DriverState__Sequence *)(untyped_member);
  odri_ros2_interfaces__msg__DriverState__Sequence__fini(member);
  return odri_ros2_interfaces__msg__DriverState__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember MasterBoardState__rosidl_typesupport_introspection_c__MasterBoardState_message_member_array[2] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(odri_ros2_interfaces__msg__MasterBoardState, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "drivers",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(odri_ros2_interfaces__msg__MasterBoardState, drivers),  // bytes offset in struct
    NULL,  // default value
    MasterBoardState__rosidl_typesupport_introspection_c__size_function__DriverState__drivers,  // size() function pointer
    MasterBoardState__rosidl_typesupport_introspection_c__get_const_function__DriverState__drivers,  // get_const(index) function pointer
    MasterBoardState__rosidl_typesupport_introspection_c__get_function__DriverState__drivers,  // get(index) function pointer
    MasterBoardState__rosidl_typesupport_introspection_c__resize_function__DriverState__drivers  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers MasterBoardState__rosidl_typesupport_introspection_c__MasterBoardState_message_members = {
  "odri_ros2_interfaces__msg",  // message namespace
  "MasterBoardState",  // message name
  2,  // number of fields
  sizeof(odri_ros2_interfaces__msg__MasterBoardState),
  MasterBoardState__rosidl_typesupport_introspection_c__MasterBoardState_message_member_array,  // message members
  MasterBoardState__rosidl_typesupport_introspection_c__MasterBoardState_init_function,  // function to initialize message memory (memory has to be allocated)
  MasterBoardState__rosidl_typesupport_introspection_c__MasterBoardState_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t MasterBoardState__rosidl_typesupport_introspection_c__MasterBoardState_message_type_support_handle = {
  0,
  &MasterBoardState__rosidl_typesupport_introspection_c__MasterBoardState_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_odri_ros2_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, odri_ros2_interfaces, msg, MasterBoardState)() {
  MasterBoardState__rosidl_typesupport_introspection_c__MasterBoardState_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  MasterBoardState__rosidl_typesupport_introspection_c__MasterBoardState_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, odri_ros2_interfaces, msg, DriverState)();
  if (!MasterBoardState__rosidl_typesupport_introspection_c__MasterBoardState_message_type_support_handle.typesupport_identifier) {
    MasterBoardState__rosidl_typesupport_introspection_c__MasterBoardState_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &MasterBoardState__rosidl_typesupport_introspection_c__MasterBoardState_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
