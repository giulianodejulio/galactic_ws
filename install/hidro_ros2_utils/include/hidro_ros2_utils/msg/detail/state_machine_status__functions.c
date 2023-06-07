// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from hidro_ros2_utils:msg/StateMachineStatus.idl
// generated code does not contain a copyright notice
#include "hidro_ros2_utils/msg/detail/state_machine_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `status`
#include "rosidl_runtime_c/string_functions.h"

bool
hidro_ros2_utils__msg__StateMachineStatus__init(hidro_ros2_utils__msg__StateMachineStatus * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    hidro_ros2_utils__msg__StateMachineStatus__fini(msg);
    return false;
  }
  // status
  if (!rosidl_runtime_c__String__init(&msg->status)) {
    hidro_ros2_utils__msg__StateMachineStatus__fini(msg);
    return false;
  }
  return true;
}

void
hidro_ros2_utils__msg__StateMachineStatus__fini(hidro_ros2_utils__msg__StateMachineStatus * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // status
  rosidl_runtime_c__String__fini(&msg->status);
}

bool
hidro_ros2_utils__msg__StateMachineStatus__are_equal(const hidro_ros2_utils__msg__StateMachineStatus * lhs, const hidro_ros2_utils__msg__StateMachineStatus * rhs)
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
  // status
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->status), &(rhs->status)))
  {
    return false;
  }
  return true;
}

bool
hidro_ros2_utils__msg__StateMachineStatus__copy(
  const hidro_ros2_utils__msg__StateMachineStatus * input,
  hidro_ros2_utils__msg__StateMachineStatus * output)
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
  // status
  if (!rosidl_runtime_c__String__copy(
      &(input->status), &(output->status)))
  {
    return false;
  }
  return true;
}

hidro_ros2_utils__msg__StateMachineStatus *
hidro_ros2_utils__msg__StateMachineStatus__create()
{
  hidro_ros2_utils__msg__StateMachineStatus * msg = (hidro_ros2_utils__msg__StateMachineStatus *)malloc(sizeof(hidro_ros2_utils__msg__StateMachineStatus));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(hidro_ros2_utils__msg__StateMachineStatus));
  bool success = hidro_ros2_utils__msg__StateMachineStatus__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
hidro_ros2_utils__msg__StateMachineStatus__destroy(hidro_ros2_utils__msg__StateMachineStatus * msg)
{
  if (msg) {
    hidro_ros2_utils__msg__StateMachineStatus__fini(msg);
  }
  free(msg);
}


bool
hidro_ros2_utils__msg__StateMachineStatus__Sequence__init(hidro_ros2_utils__msg__StateMachineStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  hidro_ros2_utils__msg__StateMachineStatus * data = NULL;
  if (size) {
    data = (hidro_ros2_utils__msg__StateMachineStatus *)calloc(size, sizeof(hidro_ros2_utils__msg__StateMachineStatus));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = hidro_ros2_utils__msg__StateMachineStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        hidro_ros2_utils__msg__StateMachineStatus__fini(&data[i - 1]);
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
hidro_ros2_utils__msg__StateMachineStatus__Sequence__fini(hidro_ros2_utils__msg__StateMachineStatus__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      hidro_ros2_utils__msg__StateMachineStatus__fini(&array->data[i]);
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

hidro_ros2_utils__msg__StateMachineStatus__Sequence *
hidro_ros2_utils__msg__StateMachineStatus__Sequence__create(size_t size)
{
  hidro_ros2_utils__msg__StateMachineStatus__Sequence * array = (hidro_ros2_utils__msg__StateMachineStatus__Sequence *)malloc(sizeof(hidro_ros2_utils__msg__StateMachineStatus__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = hidro_ros2_utils__msg__StateMachineStatus__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
hidro_ros2_utils__msg__StateMachineStatus__Sequence__destroy(hidro_ros2_utils__msg__StateMachineStatus__Sequence * array)
{
  if (array) {
    hidro_ros2_utils__msg__StateMachineStatus__Sequence__fini(array);
  }
  free(array);
}

bool
hidro_ros2_utils__msg__StateMachineStatus__Sequence__are_equal(const hidro_ros2_utils__msg__StateMachineStatus__Sequence * lhs, const hidro_ros2_utils__msg__StateMachineStatus__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!hidro_ros2_utils__msg__StateMachineStatus__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
hidro_ros2_utils__msg__StateMachineStatus__Sequence__copy(
  const hidro_ros2_utils__msg__StateMachineStatus__Sequence * input,
  hidro_ros2_utils__msg__StateMachineStatus__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(hidro_ros2_utils__msg__StateMachineStatus);
    hidro_ros2_utils__msg__StateMachineStatus * data =
      (hidro_ros2_utils__msg__StateMachineStatus *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!hidro_ros2_utils__msg__StateMachineStatus__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          hidro_ros2_utils__msg__StateMachineStatus__fini(&data[i]);
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
    if (!hidro_ros2_utils__msg__StateMachineStatus__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
