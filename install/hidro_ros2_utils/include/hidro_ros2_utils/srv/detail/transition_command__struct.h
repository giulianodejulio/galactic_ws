// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from hidro_ros2_utils:srv/TransitionCommand.idl
// generated code does not contain a copyright notice

#ifndef HIDRO_ROS2_UTILS__SRV__DETAIL__TRANSITION_COMMAND__STRUCT_H_
#define HIDRO_ROS2_UTILS__SRV__DETAIL__TRANSITION_COMMAND__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'command'
#include "rosidl_runtime_c/string.h"

// Struct defined in srv/TransitionCommand in the package hidro_ros2_utils.
typedef struct hidro_ros2_utils__srv__TransitionCommand_Request
{
  rosidl_runtime_c__String command;
} hidro_ros2_utils__srv__TransitionCommand_Request;

// Struct for a sequence of hidro_ros2_utils__srv__TransitionCommand_Request.
typedef struct hidro_ros2_utils__srv__TransitionCommand_Request__Sequence
{
  hidro_ros2_utils__srv__TransitionCommand_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} hidro_ros2_utils__srv__TransitionCommand_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'message'
// already included above
// #include "rosidl_runtime_c/string.h"

// Struct defined in srv/TransitionCommand in the package hidro_ros2_utils.
typedef struct hidro_ros2_utils__srv__TransitionCommand_Response
{
  bool accepted;
  bool result;
  rosidl_runtime_c__String message;
} hidro_ros2_utils__srv__TransitionCommand_Response;

// Struct for a sequence of hidro_ros2_utils__srv__TransitionCommand_Response.
typedef struct hidro_ros2_utils__srv__TransitionCommand_Response__Sequence
{
  hidro_ros2_utils__srv__TransitionCommand_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} hidro_ros2_utils__srv__TransitionCommand_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // HIDRO_ROS2_UTILS__SRV__DETAIL__TRANSITION_COMMAND__STRUCT_H_
