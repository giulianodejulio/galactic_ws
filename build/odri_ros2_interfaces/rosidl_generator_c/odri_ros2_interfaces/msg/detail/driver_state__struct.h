// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from odri_ros2_interfaces:msg/DriverState.idl
// generated code does not contain a copyright notice

#ifndef ODRI_ROS2_INTERFACES__MSG__DETAIL__DRIVER_STATE__STRUCT_H_
#define ODRI_ROS2_INTERFACES__MSG__DETAIL__DRIVER_STATE__STRUCT_H_

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
// Member 'motor1'
// Member 'motor2'
#include "odri_ros2_interfaces/msg/detail/motor_state__struct.h"

// Struct defined in msg/DriverState in the package odri_ros2_interfaces.
typedef struct odri_ros2_interfaces__msg__DriverState
{
  std_msgs__msg__Header header;
  odri_ros2_interfaces__msg__MotorState motor1;
  odri_ros2_interfaces__msg__MotorState motor2;
} odri_ros2_interfaces__msg__DriverState;

// Struct for a sequence of odri_ros2_interfaces__msg__DriverState.
typedef struct odri_ros2_interfaces__msg__DriverState__Sequence
{
  odri_ros2_interfaces__msg__DriverState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} odri_ros2_interfaces__msg__DriverState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ODRI_ROS2_INTERFACES__MSG__DETAIL__DRIVER_STATE__STRUCT_H_
