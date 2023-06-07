// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from odri_ros2_interfaces:msg/MotorCommand.idl
// generated code does not contain a copyright notice
#include "odri_ros2_interfaces/msg/detail/motor_command__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
odri_ros2_interfaces__msg__MotorCommand__init(odri_ros2_interfaces__msg__MotorCommand * msg)
{
  if (!msg) {
    return false;
  }
  // position_ref
  // velocity_ref
  // torque_ref
  // kp
  // kd
  // i_sat
  return true;
}

void
odri_ros2_interfaces__msg__MotorCommand__fini(odri_ros2_interfaces__msg__MotorCommand * msg)
{
  if (!msg) {
    return;
  }
  // position_ref
  // velocity_ref
  // torque_ref
  // kp
  // kd
  // i_sat
}

bool
odri_ros2_interfaces__msg__MotorCommand__are_equal(const odri_ros2_interfaces__msg__MotorCommand * lhs, const odri_ros2_interfaces__msg__MotorCommand * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // position_ref
  if (lhs->position_ref != rhs->position_ref) {
    return false;
  }
  // velocity_ref
  if (lhs->velocity_ref != rhs->velocity_ref) {
    return false;
  }
  // torque_ref
  if (lhs->torque_ref != rhs->torque_ref) {
    return false;
  }
  // kp
  if (lhs->kp != rhs->kp) {
    return false;
  }
  // kd
  if (lhs->kd != rhs->kd) {
    return false;
  }
  // i_sat
  if (lhs->i_sat != rhs->i_sat) {
    return false;
  }
  return true;
}

bool
odri_ros2_interfaces__msg__MotorCommand__copy(
  const odri_ros2_interfaces__msg__MotorCommand * input,
  odri_ros2_interfaces__msg__MotorCommand * output)
{
  if (!input || !output) {
    return false;
  }
  // position_ref
  output->position_ref = input->position_ref;
  // velocity_ref
  output->velocity_ref = input->velocity_ref;
  // torque_ref
  output->torque_ref = input->torque_ref;
  // kp
  output->kp = input->kp;
  // kd
  output->kd = input->kd;
  // i_sat
  output->i_sat = input->i_sat;
  return true;
}

odri_ros2_interfaces__msg__MotorCommand *
odri_ros2_interfaces__msg__MotorCommand__create()
{
  odri_ros2_interfaces__msg__MotorCommand * msg = (odri_ros2_interfaces__msg__MotorCommand *)malloc(sizeof(odri_ros2_interfaces__msg__MotorCommand));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(odri_ros2_interfaces__msg__MotorCommand));
  bool success = odri_ros2_interfaces__msg__MotorCommand__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
odri_ros2_interfaces__msg__MotorCommand__destroy(odri_ros2_interfaces__msg__MotorCommand * msg)
{
  if (msg) {
    odri_ros2_interfaces__msg__MotorCommand__fini(msg);
  }
  free(msg);
}


bool
odri_ros2_interfaces__msg__MotorCommand__Sequence__init(odri_ros2_interfaces__msg__MotorCommand__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  odri_ros2_interfaces__msg__MotorCommand * data = NULL;
  if (size) {
    data = (odri_ros2_interfaces__msg__MotorCommand *)calloc(size, sizeof(odri_ros2_interfaces__msg__MotorCommand));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = odri_ros2_interfaces__msg__MotorCommand__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        odri_ros2_interfaces__msg__MotorCommand__fini(&data[i - 1]);
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
odri_ros2_interfaces__msg__MotorCommand__Sequence__fini(odri_ros2_interfaces__msg__MotorCommand__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      odri_ros2_interfaces__msg__MotorCommand__fini(&array->data[i]);
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

odri_ros2_interfaces__msg__MotorCommand__Sequence *
odri_ros2_interfaces__msg__MotorCommand__Sequence__create(size_t size)
{
  odri_ros2_interfaces__msg__MotorCommand__Sequence * array = (odri_ros2_interfaces__msg__MotorCommand__Sequence *)malloc(sizeof(odri_ros2_interfaces__msg__MotorCommand__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = odri_ros2_interfaces__msg__MotorCommand__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
odri_ros2_interfaces__msg__MotorCommand__Sequence__destroy(odri_ros2_interfaces__msg__MotorCommand__Sequence * array)
{
  if (array) {
    odri_ros2_interfaces__msg__MotorCommand__Sequence__fini(array);
  }
  free(array);
}

bool
odri_ros2_interfaces__msg__MotorCommand__Sequence__are_equal(const odri_ros2_interfaces__msg__MotorCommand__Sequence * lhs, const odri_ros2_interfaces__msg__MotorCommand__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!odri_ros2_interfaces__msg__MotorCommand__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
odri_ros2_interfaces__msg__MotorCommand__Sequence__copy(
  const odri_ros2_interfaces__msg__MotorCommand__Sequence * input,
  odri_ros2_interfaces__msg__MotorCommand__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(odri_ros2_interfaces__msg__MotorCommand);
    odri_ros2_interfaces__msg__MotorCommand * data =
      (odri_ros2_interfaces__msg__MotorCommand *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!odri_ros2_interfaces__msg__MotorCommand__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          odri_ros2_interfaces__msg__MotorCommand__fini(&data[i]);
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
    if (!odri_ros2_interfaces__msg__MotorCommand__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
