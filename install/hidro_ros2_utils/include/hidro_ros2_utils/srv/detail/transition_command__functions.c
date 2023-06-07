// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from hidro_ros2_utils:srv/TransitionCommand.idl
// generated code does not contain a copyright notice
#include "hidro_ros2_utils/srv/detail/transition_command__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// Include directives for member types
// Member `command`
#include "rosidl_runtime_c/string_functions.h"

bool
hidro_ros2_utils__srv__TransitionCommand_Request__init(hidro_ros2_utils__srv__TransitionCommand_Request * msg)
{
  if (!msg) {
    return false;
  }
  // command
  if (!rosidl_runtime_c__String__init(&msg->command)) {
    hidro_ros2_utils__srv__TransitionCommand_Request__fini(msg);
    return false;
  }
  return true;
}

void
hidro_ros2_utils__srv__TransitionCommand_Request__fini(hidro_ros2_utils__srv__TransitionCommand_Request * msg)
{
  if (!msg) {
    return;
  }
  // command
  rosidl_runtime_c__String__fini(&msg->command);
}

bool
hidro_ros2_utils__srv__TransitionCommand_Request__are_equal(const hidro_ros2_utils__srv__TransitionCommand_Request * lhs, const hidro_ros2_utils__srv__TransitionCommand_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // command
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->command), &(rhs->command)))
  {
    return false;
  }
  return true;
}

bool
hidro_ros2_utils__srv__TransitionCommand_Request__copy(
  const hidro_ros2_utils__srv__TransitionCommand_Request * input,
  hidro_ros2_utils__srv__TransitionCommand_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // command
  if (!rosidl_runtime_c__String__copy(
      &(input->command), &(output->command)))
  {
    return false;
  }
  return true;
}

hidro_ros2_utils__srv__TransitionCommand_Request *
hidro_ros2_utils__srv__TransitionCommand_Request__create()
{
  hidro_ros2_utils__srv__TransitionCommand_Request * msg = (hidro_ros2_utils__srv__TransitionCommand_Request *)malloc(sizeof(hidro_ros2_utils__srv__TransitionCommand_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(hidro_ros2_utils__srv__TransitionCommand_Request));
  bool success = hidro_ros2_utils__srv__TransitionCommand_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
hidro_ros2_utils__srv__TransitionCommand_Request__destroy(hidro_ros2_utils__srv__TransitionCommand_Request * msg)
{
  if (msg) {
    hidro_ros2_utils__srv__TransitionCommand_Request__fini(msg);
  }
  free(msg);
}


bool
hidro_ros2_utils__srv__TransitionCommand_Request__Sequence__init(hidro_ros2_utils__srv__TransitionCommand_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  hidro_ros2_utils__srv__TransitionCommand_Request * data = NULL;
  if (size) {
    data = (hidro_ros2_utils__srv__TransitionCommand_Request *)calloc(size, sizeof(hidro_ros2_utils__srv__TransitionCommand_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = hidro_ros2_utils__srv__TransitionCommand_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        hidro_ros2_utils__srv__TransitionCommand_Request__fini(&data[i - 1]);
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
hidro_ros2_utils__srv__TransitionCommand_Request__Sequence__fini(hidro_ros2_utils__srv__TransitionCommand_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      hidro_ros2_utils__srv__TransitionCommand_Request__fini(&array->data[i]);
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

hidro_ros2_utils__srv__TransitionCommand_Request__Sequence *
hidro_ros2_utils__srv__TransitionCommand_Request__Sequence__create(size_t size)
{
  hidro_ros2_utils__srv__TransitionCommand_Request__Sequence * array = (hidro_ros2_utils__srv__TransitionCommand_Request__Sequence *)malloc(sizeof(hidro_ros2_utils__srv__TransitionCommand_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = hidro_ros2_utils__srv__TransitionCommand_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
hidro_ros2_utils__srv__TransitionCommand_Request__Sequence__destroy(hidro_ros2_utils__srv__TransitionCommand_Request__Sequence * array)
{
  if (array) {
    hidro_ros2_utils__srv__TransitionCommand_Request__Sequence__fini(array);
  }
  free(array);
}

bool
hidro_ros2_utils__srv__TransitionCommand_Request__Sequence__are_equal(const hidro_ros2_utils__srv__TransitionCommand_Request__Sequence * lhs, const hidro_ros2_utils__srv__TransitionCommand_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!hidro_ros2_utils__srv__TransitionCommand_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
hidro_ros2_utils__srv__TransitionCommand_Request__Sequence__copy(
  const hidro_ros2_utils__srv__TransitionCommand_Request__Sequence * input,
  hidro_ros2_utils__srv__TransitionCommand_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(hidro_ros2_utils__srv__TransitionCommand_Request);
    hidro_ros2_utils__srv__TransitionCommand_Request * data =
      (hidro_ros2_utils__srv__TransitionCommand_Request *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!hidro_ros2_utils__srv__TransitionCommand_Request__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          hidro_ros2_utils__srv__TransitionCommand_Request__fini(&data[i]);
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
    if (!hidro_ros2_utils__srv__TransitionCommand_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `message`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

bool
hidro_ros2_utils__srv__TransitionCommand_Response__init(hidro_ros2_utils__srv__TransitionCommand_Response * msg)
{
  if (!msg) {
    return false;
  }
  // accepted
  // result
  // message
  if (!rosidl_runtime_c__String__init(&msg->message)) {
    hidro_ros2_utils__srv__TransitionCommand_Response__fini(msg);
    return false;
  }
  return true;
}

void
hidro_ros2_utils__srv__TransitionCommand_Response__fini(hidro_ros2_utils__srv__TransitionCommand_Response * msg)
{
  if (!msg) {
    return;
  }
  // accepted
  // result
  // message
  rosidl_runtime_c__String__fini(&msg->message);
}

bool
hidro_ros2_utils__srv__TransitionCommand_Response__are_equal(const hidro_ros2_utils__srv__TransitionCommand_Response * lhs, const hidro_ros2_utils__srv__TransitionCommand_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // accepted
  if (lhs->accepted != rhs->accepted) {
    return false;
  }
  // result
  if (lhs->result != rhs->result) {
    return false;
  }
  // message
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->message), &(rhs->message)))
  {
    return false;
  }
  return true;
}

bool
hidro_ros2_utils__srv__TransitionCommand_Response__copy(
  const hidro_ros2_utils__srv__TransitionCommand_Response * input,
  hidro_ros2_utils__srv__TransitionCommand_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // accepted
  output->accepted = input->accepted;
  // result
  output->result = input->result;
  // message
  if (!rosidl_runtime_c__String__copy(
      &(input->message), &(output->message)))
  {
    return false;
  }
  return true;
}

hidro_ros2_utils__srv__TransitionCommand_Response *
hidro_ros2_utils__srv__TransitionCommand_Response__create()
{
  hidro_ros2_utils__srv__TransitionCommand_Response * msg = (hidro_ros2_utils__srv__TransitionCommand_Response *)malloc(sizeof(hidro_ros2_utils__srv__TransitionCommand_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(hidro_ros2_utils__srv__TransitionCommand_Response));
  bool success = hidro_ros2_utils__srv__TransitionCommand_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
hidro_ros2_utils__srv__TransitionCommand_Response__destroy(hidro_ros2_utils__srv__TransitionCommand_Response * msg)
{
  if (msg) {
    hidro_ros2_utils__srv__TransitionCommand_Response__fini(msg);
  }
  free(msg);
}


bool
hidro_ros2_utils__srv__TransitionCommand_Response__Sequence__init(hidro_ros2_utils__srv__TransitionCommand_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  hidro_ros2_utils__srv__TransitionCommand_Response * data = NULL;
  if (size) {
    data = (hidro_ros2_utils__srv__TransitionCommand_Response *)calloc(size, sizeof(hidro_ros2_utils__srv__TransitionCommand_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = hidro_ros2_utils__srv__TransitionCommand_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        hidro_ros2_utils__srv__TransitionCommand_Response__fini(&data[i - 1]);
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
hidro_ros2_utils__srv__TransitionCommand_Response__Sequence__fini(hidro_ros2_utils__srv__TransitionCommand_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      hidro_ros2_utils__srv__TransitionCommand_Response__fini(&array->data[i]);
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

hidro_ros2_utils__srv__TransitionCommand_Response__Sequence *
hidro_ros2_utils__srv__TransitionCommand_Response__Sequence__create(size_t size)
{
  hidro_ros2_utils__srv__TransitionCommand_Response__Sequence * array = (hidro_ros2_utils__srv__TransitionCommand_Response__Sequence *)malloc(sizeof(hidro_ros2_utils__srv__TransitionCommand_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = hidro_ros2_utils__srv__TransitionCommand_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
hidro_ros2_utils__srv__TransitionCommand_Response__Sequence__destroy(hidro_ros2_utils__srv__TransitionCommand_Response__Sequence * array)
{
  if (array) {
    hidro_ros2_utils__srv__TransitionCommand_Response__Sequence__fini(array);
  }
  free(array);
}

bool
hidro_ros2_utils__srv__TransitionCommand_Response__Sequence__are_equal(const hidro_ros2_utils__srv__TransitionCommand_Response__Sequence * lhs, const hidro_ros2_utils__srv__TransitionCommand_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!hidro_ros2_utils__srv__TransitionCommand_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
hidro_ros2_utils__srv__TransitionCommand_Response__Sequence__copy(
  const hidro_ros2_utils__srv__TransitionCommand_Response__Sequence * input,
  hidro_ros2_utils__srv__TransitionCommand_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(hidro_ros2_utils__srv__TransitionCommand_Response);
    hidro_ros2_utils__srv__TransitionCommand_Response * data =
      (hidro_ros2_utils__srv__TransitionCommand_Response *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!hidro_ros2_utils__srv__TransitionCommand_Response__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          hidro_ros2_utils__srv__TransitionCommand_Response__fini(&data[i]);
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
    if (!hidro_ros2_utils__srv__TransitionCommand_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
