// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from odri_ros2_interfaces:msg/MotorState.idl
// generated code does not contain a copyright notice

#ifndef ODRI_ROS2_INTERFACES__MSG__DETAIL__MOTOR_STATE__STRUCT_H_
#define ODRI_ROS2_INTERFACES__MSG__DETAIL__MOTOR_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/MotorState in the package odri_ros2_interfaces.
typedef struct odri_ros2_interfaces__msg__MotorState
{
  double position;
  double velocity;
  double torque;
  bool is_enabled;
  bool has_index_been_detected;
  bool index_toogle_bit;
} odri_ros2_interfaces__msg__MotorState;

// Struct for a sequence of odri_ros2_interfaces__msg__MotorState.
typedef struct odri_ros2_interfaces__msg__MotorState__Sequence
{
  odri_ros2_interfaces__msg__MotorState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} odri_ros2_interfaces__msg__MotorState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ODRI_ROS2_INTERFACES__MSG__DETAIL__MOTOR_STATE__STRUCT_H_
