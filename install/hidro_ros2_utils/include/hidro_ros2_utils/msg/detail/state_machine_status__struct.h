// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from hidro_ros2_utils:msg/StateMachineStatus.idl
// generated code does not contain a copyright notice

#ifndef HIDRO_ROS2_UTILS__MSG__DETAIL__STATE_MACHINE_STATUS__STRUCT_H_
#define HIDRO_ROS2_UTILS__MSG__DETAIL__STATE_MACHINE_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'status'
#include "rosidl_runtime_c/string.h"

// Struct defined in msg/StateMachineStatus in the package hidro_ros2_utils.
typedef struct hidro_ros2_utils__msg__StateMachineStatus
{
  std_msgs__msg__Header header;
  rosidl_runtime_c__String status;
} hidro_ros2_utils__msg__StateMachineStatus;

// Struct for a sequence of hidro_ros2_utils__msg__StateMachineStatus.
typedef struct hidro_ros2_utils__msg__StateMachineStatus__Sequence
{
  hidro_ros2_utils__msg__StateMachineStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} hidro_ros2_utils__msg__StateMachineStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // HIDRO_ROS2_UTILS__MSG__DETAIL__STATE_MACHINE_STATUS__STRUCT_H_
