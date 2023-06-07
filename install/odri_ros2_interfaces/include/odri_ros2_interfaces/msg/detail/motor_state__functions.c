// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from odri_ros2_interfaces:msg/MotorState.idl
// generated code does not contain a copyright notice
#include "odri_ros2_interfaces/msg/detail/motor_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
odri_ros2_interfaces__msg__MotorState__init(odri_ros2_interfaces__msg__MotorState * msg)
{
  if (!msg) {
    return false;
  }
  // position
  // velocity
  // torque
  // is_enabled
  // has_index_been_detected
  // index_toogle_bit
  return true;
}

void
odri_ros2_interfaces__msg__MotorState__fini(odri_ros2_interfaces__msg__MotorState * msg)
{
  if (!msg) {
    return;
  }
  // position
  // velocity
  // torque
  // is_enabled
  // has_index_been_detected
  // index_toogle_bit
}

bool
odri_ros2_interfaces__msg__MotorState__are_equal(const odri_ros2_interfaces__msg__MotorState * lhs, const odri_ros2_interfaces__msg__MotorState * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // position
  if (lhs->position != rhs->position) {
    return false;
  }
  // velocity
  if (lhs->velocity != rhs->velocity) {
    return false;
  }
  // torque
  if (lhs->torque != rhs->torque) {
    return false;
  }
  // is_enabled
  if (lhs->is_enabled != rhs->is_enabled) {
    return false;
  }
  // has_index_been_detected
  if (lhs->has_index_been_detected != rhs->has_index_been_detected) {
    return false;
  }
  // index_toogle_bit
  if (lhs->index_toogle_bit != rhs->index_toogle_bit) {
    return false;
  }
  return true;
}

bool
odri_ros2_interfaces__msg__MotorState__copy(
  const odri_ros2_interfaces__msg__MotorState * input,
  odri_ros2_interfaces__msg__MotorState * output)
{
  if (!input || !output) {
    return false;
  }
  // position
  output->position = input->position;
  // velocity
  output->velocity = input->velocity;
  // torque
  output->torque = input->torque;
  // is_enabled
  output->is_enabled = input->is_enabled;
  // has_index_been_detected
  output->has_index_been_detected = input->has_index_been_detected;
  // index_toogle_bit
  output->index_toogle_bit = input->index_toogle_bit;
  return true;
}

odri_ros2_interfaces__msg__MotorState *
odri_ros2_interfaces__msg__MotorState__create()
{
  odri_ros2_interfaces__msg__MotorState * msg = (odri_ros2_interfaces__msg__MotorState *)malloc(sizeof(odri_ros2_interfaces__msg__MotorState));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(odri_ros2_interfaces__msg__MotorState));
  bool success = odri_ros2_interfaces__msg__MotorState__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
odri_ros2_interfaces__msg__MotorState__destroy(odri_ros2_interfaces__msg__MotorState * msg)
{
  if (msg) {
    odri_ros2_interfaces__msg__MotorState__fini(msg);
  }
  free(msg);
}


bool
odri_ros2_interfaces__msg__MotorState__Sequence__init(odri_ros2_interfaces__msg__MotorState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  odri_ros2_interfaces__msg__MotorState * data = NULL;
  if (size) {
    data = (odri_ros2_interfaces__msg__MotorState *)calloc(size, sizeof(odri_ros2_interfaces__msg__MotorState));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = odri_ros2_interfaces__msg__MotorState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        odri_ros2_interfaces__msg__MotorState__fini(&data[i - 1]);
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
odri_ros2_interfaces__msg__MotorState__Sequence__fini(odri_ros2_interfaces__msg__MotorState__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      odri_ros2_interfaces__msg__MotorState__fini(&array->data[i]);
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

odri_ros2_interfaces__msg__MotorState__Sequence *
odri_ros2_interfaces__msg__MotorState__Sequence__create(size_t size)
{
  odri_ros2_interfaces__msg__MotorState__Sequence * array = (odri_ros2_interfaces__msg__MotorState__Sequence *)malloc(sizeof(odri_ros2_interfaces__msg__MotorState__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = odri_ros2_interfaces__msg__MotorState__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
odri_ros2_interfaces__msg__MotorState__Sequence__destroy(odri_ros2_interfaces__msg__MotorState__Sequence * array)
{
  if (array) {
    odri_ros2_interfaces__msg__MotorState__Sequence__fini(array);
  }
  free(array);
}

bool
odri_ros2_interfaces__msg__MotorState__Sequence__are_equal(const odri_ros2_interfaces__msg__MotorState__Sequence * lhs, const odri_ros2_interfaces__msg__MotorState__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!odri_ros2_interfaces__msg__MotorState__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
odri_ros2_interfaces__msg__MotorState__Sequence__copy(
  const odri_ros2_interfaces__msg__MotorState__Sequence * input,
  odri_ros2_interfaces__msg__MotorState__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(odri_ros2_interfaces__msg__MotorState);
    odri_ros2_interfaces__msg__MotorState * data =
      (odri_ros2_interfaces__msg__MotorState *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!odri_ros2_interfaces__msg__MotorState__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          odri_ros2_interfaces__msg__MotorState__fini(&data[i]);
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
    if (!odri_ros2_interfaces__msg__MotorState__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
