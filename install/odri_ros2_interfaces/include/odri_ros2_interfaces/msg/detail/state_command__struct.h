// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from odri_ros2_interfaces:msg/StateCommand.idl
// generated code does not contain a copyright notice

#ifndef ODRI_ROS2_INTERFACES__MSG__DETAIL__STATE_COMMAND__STRUCT_H_
#define ODRI_ROS2_INTERFACES__MSG__DETAIL__STATE_COMMAND__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'IDLE'.
enum
{
  odri_ros2_interfaces__msg__StateCommand__IDLE = 0
};

/// Constant 'CALIBRATING'.
enum
{
  odri_ros2_interfaces__msg__StateCommand__CALIBRATING = 1
};

/// Constant 'ENABLED'.
enum
{
  odri_ros2_interfaces__msg__StateCommand__ENABLED = 2
};

/// Constant 'RUNNING'.
enum
{
  odri_ros2_interfaces__msg__StateCommand__RUNNING = 3
};

/// Constant 'OTHER'.
enum
{
  odri_ros2_interfaces__msg__StateCommand__OTHER = 4
};

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'state_name'
#include "rosidl_runtime_c/string.h"

// Struct defined in msg/StateCommand in the package odri_ros2_interfaces.
typedef struct odri_ros2_interfaces__msg__StateCommand
{
  std_msgs__msg__Header header;
  int8_t state_id;
  rosidl_runtime_c__String state_name;
} odri_ros2_interfaces__msg__StateCommand;

// Struct for a sequence of odri_ros2_interfaces__msg__StateCommand.
typedef struct odri_ros2_interfaces__msg__StateCommand__Sequence
{
  odri_ros2_interfaces__msg__StateCommand * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} odri_ros2_interfaces__msg__StateCommand__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ODRI_ROS2_INTERFACES__MSG__DETAIL__STATE_COMMAND__STRUCT_H_
