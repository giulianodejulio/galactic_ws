// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from odri_ros2_interfaces:msg/MasterBoardCommand.idl
// generated code does not contain a copyright notice

#ifndef ODRI_ROS2_INTERFACES__MSG__DETAIL__MASTER_BOARD_COMMAND__FUNCTIONS_H_
#define ODRI_ROS2_INTERFACES__MSG__DETAIL__MASTER_BOARD_COMMAND__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "odri_ros2_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "odri_ros2_interfaces/msg/detail/master_board_command__struct.h"

/// Initialize msg/MasterBoardCommand message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * odri_ros2_interfaces__msg__MasterBoardCommand
 * )) before or use
 * odri_ros2_interfaces__msg__MasterBoardCommand__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_odri_ros2_interfaces
bool
odri_ros2_interfaces__msg__MasterBoardCommand__init(odri_ros2_interfaces__msg__MasterBoardCommand * msg);

/// Finalize msg/MasterBoardCommand message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_odri_ros2_interfaces
void
odri_ros2_interfaces__msg__MasterBoardCommand__fini(odri_ros2_interfaces__msg__MasterBoardCommand * msg);

/// Create msg/MasterBoardCommand message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * odri_ros2_interfaces__msg__MasterBoardCommand__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_odri_ros2_interfaces
odri_ros2_interfaces__msg__MasterBoardCommand *
odri_ros2_interfaces__msg__MasterBoardCommand__create();

/// Destroy msg/MasterBoardCommand message.
/**
 * It calls
 * odri_ros2_interfaces__msg__MasterBoardCommand__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_odri_ros2_interfaces
void
odri_ros2_interfaces__msg__MasterBoardCommand__destroy(odri_ros2_interfaces__msg__MasterBoardCommand * msg);

/// Check for msg/MasterBoardCommand message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_odri_ros2_interfaces
bool
odri_ros2_interfaces__msg__MasterBoardCommand__are_equal(const odri_ros2_interfaces__msg__MasterBoardCommand * lhs, const odri_ros2_interfaces__msg__MasterBoardCommand * rhs);

/// Copy a msg/MasterBoardCommand message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_odri_ros2_interfaces
bool
odri_ros2_interfaces__msg__MasterBoardCommand__copy(
  const odri_ros2_interfaces__msg__MasterBoardCommand * input,
  odri_ros2_interfaces__msg__MasterBoardCommand * output);

/// Initialize array of msg/MasterBoardCommand messages.
/**
 * It allocates the memory for the number of elements and calls
 * odri_ros2_interfaces__msg__MasterBoardCommand__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_odri_ros2_interfaces
bool
odri_ros2_interfaces__msg__MasterBoardCommand__Sequence__init(odri_ros2_interfaces__msg__MasterBoardCommand__Sequence * array, size_t size);

/// Finalize array of msg/MasterBoardCommand messages.
/**
 * It calls
 * odri_ros2_interfaces__msg__MasterBoardCommand__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_odri_ros2_interfaces
void
odri_ros2_interfaces__msg__MasterBoardCommand__Sequence__fini(odri_ros2_interfaces__msg__MasterBoardCommand__Sequence * array);

/// Create array of msg/MasterBoardCommand messages.
/**
 * It allocates the memory for the array and calls
 * odri_ros2_interfaces__msg__MasterBoardCommand__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_odri_ros2_interfaces
odri_ros2_interfaces__msg__MasterBoardCommand__Sequence *
odri_ros2_interfaces__msg__MasterBoardCommand__Sequence__create(size_t size);

/// Destroy array of msg/MasterBoardCommand messages.
/**
 * It calls
 * odri_ros2_interfaces__msg__MasterBoardCommand__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_odri_ros2_interfaces
void
odri_ros2_interfaces__msg__MasterBoardCommand__Sequence__destroy(odri_ros2_interfaces__msg__MasterBoardCommand__Sequence * array);

/// Check for msg/MasterBoardCommand message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_odri_ros2_interfaces
bool
odri_ros2_interfaces__msg__MasterBoardCommand__Sequence__are_equal(const odri_ros2_interfaces__msg__MasterBoardCommand__Sequence * lhs, const odri_ros2_interfaces__msg__MasterBoardCommand__Sequence * rhs);

/// Copy an array of msg/MasterBoardCommand messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_odri_ros2_interfaces
bool
odri_ros2_interfaces__msg__MasterBoardCommand__Sequence__copy(
  const odri_ros2_interfaces__msg__MasterBoardCommand__Sequence * input,
  odri_ros2_interfaces__msg__MasterBoardCommand__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // ODRI_ROS2_INTERFACES__MSG__DETAIL__MASTER_BOARD_COMMAND__FUNCTIONS_H_
