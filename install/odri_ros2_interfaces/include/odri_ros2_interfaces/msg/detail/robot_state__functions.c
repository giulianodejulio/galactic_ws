// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from odri_ros2_interfaces:msg/RobotState.idl
// generated code does not contain a copyright notice
#include "odri_ros2_interfaces/msg/detail/robot_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `motor_states`
#include "odri_ros2_interfaces/msg/detail/motor_state__functions.h"

bool
odri_ros2_interfaces__msg__RobotState__init(odri_ros2_interfaces__msg__RobotState * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    odri_ros2_interfaces__msg__RobotState__fini(msg);
    return false;
  }
  // motor_states
  if (!odri_ros2_interfaces__msg__MotorState__Sequence__init(&msg->motor_states, 0)) {
    odri_ros2_interfaces__msg__RobotState__fini(msg);
    return false;
  }
  return true;
}

void
odri_ros2_interfaces__msg__RobotState__fini(odri_ros2_interfaces__msg__RobotState * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // motor_states
  odri_ros2_interfaces__msg__MotorState__Sequence__fini(&msg->motor_states);
}

bool
odri_ros2_interfaces__msg__RobotState__are_equal(const odri_ros2_interfaces__msg__RobotState * lhs, const odri_ros2_interfaces__msg__RobotState * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // motor_states
  if (!odri_ros2_interfaces__msg__MotorState__Sequence__are_equal(
      &(lhs->motor_states), &(rhs->motor_states)))
  {
    return false;
  }
  return true;
}

bool
odri_ros2_interfaces__msg__RobotState__copy(
  const odri_ros2_interfaces__msg__RobotState * input,
  odri_ros2_interfaces__msg__RobotState * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // motor_states
  if (!odri_ros2_interfaces__msg__MotorState__Sequence__copy(
      &(input->motor_states), &(output->motor_states)))
  {
    return false;
  }
  return true;
}

odri_ros2_interfaces__msg__RobotState *
odri_ros2_interfaces__msg__RobotState__create()
{
  odri_ros2_interfaces__msg__RobotState * msg = (odri_ros2_interfaces__msg__RobotState *)malloc(sizeof(odri_ros2_interfaces__msg__RobotState));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(odri_ros2_interfaces__msg__RobotState));
  bool success = odri_ros2_interfaces__msg__RobotState__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
odri_ros2_interfaces__msg__RobotState__destroy(odri_ros2_interfaces__msg__RobotState * msg)
{
  if (msg) {
    odri_ros2_interfaces__msg__RobotState__fini(msg);
  }
  free(msg);
}


bool
odri_ros2_interfaces__msg__RobotState__Sequence__init(odri_ros2_interfaces__msg__RobotState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  odri_ros2_interfaces__msg__RobotState * data = NULL;
  if (size) {
    data = (odri_ros2_interfaces__msg__RobotState *)calloc(size, sizeof(odri_ros2_interfaces__msg__RobotState));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = odri_ros2_interfaces__msg__RobotState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        odri_ros2_interfaces__msg__RobotState__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
odri_ros2_interfaces__msg__RobotState__Sequence__fini(odri_ros2_interfaces__msg__RobotState__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      odri_ros2_interfaces__msg__RobotState__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

odri_ros2_interfaces__msg__RobotState__Sequence *
odri_ros2_interfaces__msg__RobotState__Sequence__create(size_t size)
{
  odri_ros2_interfaces__msg__RobotState__Sequence * array = (odri_ros2_interfaces__msg__RobotState__Sequence *)malloc(sizeof(odri_ros2_interfaces__msg__RobotState__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = odri_ros2_interfaces__msg__RobotState__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
odri_ros2_interfaces__msg__RobotState__Sequence__destroy(odri_ros2_interfaces__msg__RobotState__Sequence * array)
{
  if (array) {
    odri_ros2_interfaces__msg__RobotState__Sequence__fini(array);
  }
  free(array);
}

bool
odri_ros2_interfaces__msg__RobotState__Sequence__are_equal(const odri_ros2_interfaces__msg__RobotState__Sequence * lhs, const odri_ros2_interfaces__msg__RobotState__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!odri_ros2_interfaces__msg__RobotState__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
odri_ros2_interfaces__msg__RobotState__Sequence__copy(
  const odri_ros2_interfaces__msg__RobotState__Sequence * input,
  odri_ros2_interfaces__msg__RobotState__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(odri_ros2_interfaces__msg__RobotState);
    odri_ros2_interfaces__msg__RobotState * data =
      (odri_ros2_interfaces__msg__RobotState *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!odri_ros2_interfaces__msg__RobotState__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          odri_ros2_interfaces__msg__RobotState__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!odri_ros2_interfaces__msg__RobotState__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
