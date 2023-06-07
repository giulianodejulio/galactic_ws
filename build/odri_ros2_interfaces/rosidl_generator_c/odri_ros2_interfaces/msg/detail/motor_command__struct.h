// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from odri_ros2_interfaces:msg/MotorCommand.idl
// generated code does not contain a copyright notice

#ifndef ODRI_ROS2_INTERFACES__MSG__DETAIL__MOTOR_COMMAND__STRUCT_H_
#define ODRI_ROS2_INTERFACES__MSG__DETAIL__MOTOR_COMMAND__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/MotorCommand in the package odri_ros2_interfaces.
typedef struct odri_ros2_interfaces__msg__MotorCommand
{
  double position_ref;
  double velocity_ref;
  double torque_ref;
  double kp;
  double kd;
  double i_sat;
} odri_ros2_interfaces__msg__MotorCommand;

// Struct for a sequence of odri_ros2_interfaces__msg__MotorCommand.
typedef struct odri_ros2_interfaces__msg__MotorCommand__Sequence
{
  odri_ros2_interfaces__msg__MotorCommand * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} odri_ros2_interfaces__msg__MotorCommand__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ODRI_ROS2_INTERFACES__MSG__DETAIL__MOTOR_COMMAND__STRUCT_H_
