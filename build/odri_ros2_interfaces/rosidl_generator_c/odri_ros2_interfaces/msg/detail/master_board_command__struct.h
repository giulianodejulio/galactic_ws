// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from odri_ros2_interfaces:msg/MasterBoardCommand.idl
// generated code does not contain a copyright notice

#ifndef ODRI_ROS2_INTERFACES__MSG__DETAIL__MASTER_BOARD_COMMAND__STRUCT_H_
#define ODRI_ROS2_INTERFACES__MSG__DETAIL__MASTER_BOARD_COMMAND__STRUCT_H_

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
// Member 'drivers'
#include "odri_ros2_interfaces/msg/detail/driver_command__struct.h"

// Struct defined in msg/MasterBoardCommand in the package odri_ros2_interfaces.
typedef struct odri_ros2_interfaces__msg__MasterBoardCommand
{
  std_msgs__msg__Header header;
  odri_ros2_interfaces__msg__DriverCommand__Sequence drivers;
} odri_ros2_interfaces__msg__MasterBoardCommand;

// Struct for a sequence of odri_ros2_interfaces__msg__MasterBoardCommand.
typedef struct odri_ros2_interfaces__msg__MasterBoardCommand__Sequence
{
  odri_ros2_interfaces__msg__MasterBoardCommand * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} odri_ros2_interfaces__msg__MasterBoardCommand__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ODRI_ROS2_INTERFACES__MSG__DETAIL__MASTER_BOARD_COMMAND__STRUCT_H_
