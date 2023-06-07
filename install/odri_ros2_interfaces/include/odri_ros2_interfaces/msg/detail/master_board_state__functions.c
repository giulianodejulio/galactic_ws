// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from odri_ros2_interfaces:msg/MasterBoardState.idl
// generated code does not contain a copyright notice
#include "odri_ros2_interfaces/msg/detail/master_board_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `drivers`
#include "odri_ros2_interfaces/msg/detail/driver_state__functions.h"

bool
odri_ros2_interfaces__msg__MasterBoardState__init(odri_ros2_interfaces__msg__MasterBoardState * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    odri_ros2_interfaces__msg__MasterBoardState__fini(msg);
    return false;
  }
  // drivers
  if (!odri_ros2_interfaces__msg__DriverState__Sequence__init(&msg->drivers, 0)) {
    odri_ros2_interfaces__msg__MasterBoardState__fini(msg);
    return false;
  }
  return true;
}

void
odri_ros2_interfaces__msg__MasterBoardState__fini(odri_ros2_interfaces__msg__MasterBoardState * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // drivers
  odri_ros2_interfaces__msg__DriverState__Sequence__fini(&msg->drivers);
}

bool
odri_ros2_interfaces__msg__MasterBoardState__are_equal(const odri_ros2_interfaces__msg__MasterBoardState * lhs, const odri_ros2_interfaces__msg__MasterBoardState * rhs)
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
  // drivers
  if (!odri_ros2_interfaces__msg__DriverState__Sequence__are_equal(
      &(lhs->drivers), &(rhs->drivers)))
  {
    return false;
  }
  return true;
}

bool
odri_ros2_interfaces__msg__MasterBoardState__copy(
  const odri_ros2_interfaces__msg__MasterBoardState * input,
  odri_ros2_interfaces__msg__MasterBoardState * output)
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
  // drivers
  if (!odri_ros2_interfaces__msg__DriverState__Sequence__copy(
      &(input->drivers), &(output->drivers)))
  {
    return false;
  }
  return true;
}

odri_ros2_interfaces__msg__MasterBoardState *
odri_ros2_interfaces__msg__MasterBoardState__create()
{
  odri_ros2_interfaces__msg__MasterBoardState * msg = (odri_ros2_interfaces__msg__MasterBoardState *)malloc(sizeof(odri_ros2_interfaces__msg__MasterBoardState));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(odri_ros2_interfaces__msg__MasterBoardState));
  bool success = odri_ros2_interfaces__msg__MasterBoardState__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
odri_ros2_interfaces__msg__MasterBoardState__destroy(odri_ros2_interfaces__msg__MasterBoardState * msg)
{
  if (msg) {
    odri_ros2_interfaces__msg__MasterBoardState__fini(msg);
  }
  free(msg);
}


bool
odri_ros2_interfaces__msg__MasterBoardState__Sequence__init(odri_ros2_interfaces__msg__MasterBoardState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  odri_ros2_interfaces__msg__MasterBoardState * data = NULL;
  if (size) {
    data = (odri_ros2_interfaces__msg__MasterBoardState *)calloc(size, sizeof(odri_ros2_interfaces__msg__MasterBoardState));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = odri_ros2_interfaces__msg__MasterBoardState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        odri_ros2_interfaces__msg__MasterBoardState__fini(&data[i - 1]);
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
odri_ros2_interfaces__msg__MasterBoardState__Sequence__fini(odri_ros2_interfaces__msg__MasterBoardState__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      odri_ros2_interfaces__msg__MasterBoardState__fini(&array->data[i]);
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

odri_ros2_interfaces__msg__MasterBoardState__Sequence *
odri_ros2_interfaces__msg__MasterBoardState__Sequence__create(size_t size)
{
  odri_ros2_interfaces__msg__MasterBoardState__Sequence * array = (odri_ros2_interfaces__msg__MasterBoardState__Sequence *)malloc(sizeof(odri_ros2_interfaces__msg__MasterBoardState__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = odri_ros2_interfaces__msg__MasterBoardState__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
odri_ros2_interfaces__msg__MasterBoardState__Sequence__destroy(odri_ros2_interfaces__msg__MasterBoardState__Sequence * array)
{
  if (array) {
    odri_ros2_interfaces__msg__MasterBoardState__Sequence__fini(array);
  }
  free(array);
}

bool
odri_ros2_interfaces__msg__MasterBoardState__Sequence__are_equal(const odri_ros2_interfaces__msg__MasterBoardState__Sequence * lhs, const odri_ros2_interfaces__msg__MasterBoardState__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!odri_ros2_interfaces__msg__MasterBoardState__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
odri_ros2_interfaces__msg__MasterBoardState__Sequence__copy(
  const odri_ros2_interfaces__msg__MasterBoardState__Sequence * input,
  odri_ros2_interfaces__msg__MasterBoardState__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(odri_ros2_interfaces__msg__MasterBoardState);
    odri_ros2_interfaces__msg__MasterBoardState * data =
      (odri_ros2_interfaces__msg__MasterBoardState *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!odri_ros2_interfaces__msg__MasterBoardState__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          odri_ros2_interfaces__msg__MasterBoardState__fini(&data[i]);
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
    if (!odri_ros2_interfaces__msg__MasterBoardState__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
