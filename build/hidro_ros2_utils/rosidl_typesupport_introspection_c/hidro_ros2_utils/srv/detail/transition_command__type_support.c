// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from hidro_ros2_utils:srv/TransitionCommand.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "hidro_ros2_utils/srv/detail/transition_command__rosidl_typesupport_introspection_c.h"
#include "hidro_ros2_utils/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "hidro_ros2_utils/srv/detail/transition_command__functions.h"
#include "hidro_ros2_utils/srv/detail/transition_command__struct.h"


// Include directives for member types
// Member `command`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void TransitionCommand_Request__rosidl_typesupport_introspection_c__TransitionCommand_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  hidro_ros2_utils__srv__TransitionCommand_Request__init(message_memory);
}

void TransitionCommand_Request__rosidl_typesupport_introspection_c__TransitionCommand_Request_fini_function(void * message_memory)
{
  hidro_ros2_utils__srv__TransitionCommand_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember TransitionCommand_Request__rosidl_typesupport_introspection_c__TransitionCommand_Request_message_member_array[1] = {
  {
    "command",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hidro_ros2_utils__srv__TransitionCommand_Request, command),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers TransitionCommand_Request__rosidl_typesupport_introspection_c__TransitionCommand_Request_message_members = {
  "hidro_ros2_utils__srv",  // message namespace
  "TransitionCommand_Request",  // message name
  1,  // number of fields
  sizeof(hidro_ros2_utils__srv__TransitionCommand_Request),
  TransitionCommand_Request__rosidl_typesupport_introspection_c__TransitionCommand_Request_message_member_array,  // message members
  TransitionCommand_Request__rosidl_typesupport_introspection_c__TransitionCommand_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  TransitionCommand_Request__rosidl_typesupport_introspection_c__TransitionCommand_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t TransitionCommand_Request__rosidl_typesupport_introspection_c__TransitionCommand_Request_message_type_support_handle = {
  0,
  &TransitionCommand_Request__rosidl_typesupport_introspection_c__TransitionCommand_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_hidro_ros2_utils
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hidro_ros2_utils, srv, TransitionCommand_Request)() {
  if (!TransitionCommand_Request__rosidl_typesupport_introspection_c__TransitionCommand_Request_message_type_support_handle.typesupport_identifier) {
    TransitionCommand_Request__rosidl_typesupport_introspection_c__TransitionCommand_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &TransitionCommand_Request__rosidl_typesupport_introspection_c__TransitionCommand_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "hidro_ros2_utils/srv/detail/transition_command__rosidl_typesupport_introspection_c.h"
// already included above
// #include "hidro_ros2_utils/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "hidro_ros2_utils/srv/detail/transition_command__functions.h"
// already included above
// #include "hidro_ros2_utils/srv/detail/transition_command__struct.h"


// Include directives for member types
// Member `message`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void TransitionCommand_Response__rosidl_typesupport_introspection_c__TransitionCommand_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  hidro_ros2_utils__srv__TransitionCommand_Response__init(message_memory);
}

void TransitionCommand_Response__rosidl_typesupport_introspection_c__TransitionCommand_Response_fini_function(void * message_memory)
{
  hidro_ros2_utils__srv__TransitionCommand_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember TransitionCommand_Response__rosidl_typesupport_introspection_c__TransitionCommand_Response_message_member_array[3] = {
  {
    "accepted",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hidro_ros2_utils__srv__TransitionCommand_Response, accepted),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "result",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hidro_ros2_utils__srv__TransitionCommand_Response, result),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "message",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hidro_ros2_utils__srv__TransitionCommand_Response, message),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers TransitionCommand_Response__rosidl_typesupport_introspection_c__TransitionCommand_Response_message_members = {
  "hidro_ros2_utils__srv",  // message namespace
  "TransitionCommand_Response",  // message name
  3,  // number of fields
  sizeof(hidro_ros2_utils__srv__TransitionCommand_Response),
  TransitionCommand_Response__rosidl_typesupport_introspection_c__TransitionCommand_Response_message_member_array,  // message members
  TransitionCommand_Response__rosidl_typesupport_introspection_c__TransitionCommand_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  TransitionCommand_Response__rosidl_typesupport_introspection_c__TransitionCommand_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t TransitionCommand_Response__rosidl_typesupport_introspection_c__TransitionCommand_Response_message_type_support_handle = {
  0,
  &TransitionCommand_Response__rosidl_typesupport_introspection_c__TransitionCommand_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_hidro_ros2_utils
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hidro_ros2_utils, srv, TransitionCommand_Response)() {
  if (!TransitionCommand_Response__rosidl_typesupport_introspection_c__TransitionCommand_Response_message_type_support_handle.typesupport_identifier) {
    TransitionCommand_Response__rosidl_typesupport_introspection_c__TransitionCommand_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &TransitionCommand_Response__rosidl_typesupport_introspection_c__TransitionCommand_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "hidro_ros2_utils/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "hidro_ros2_utils/srv/detail/transition_command__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers hidro_ros2_utils__srv__detail__transition_command__rosidl_typesupport_introspection_c__TransitionCommand_service_members = {
  "hidro_ros2_utils__srv",  // service namespace
  "TransitionCommand",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // hidro_ros2_utils__srv__detail__transition_command__rosidl_typesupport_introspection_c__TransitionCommand_Request_message_type_support_handle,
  NULL  // response message
  // hidro_ros2_utils__srv__detail__transition_command__rosidl_typesupport_introspection_c__TransitionCommand_Response_message_type_support_handle
};

static rosidl_service_type_support_t hidro_ros2_utils__srv__detail__transition_command__rosidl_typesupport_introspection_c__TransitionCommand_service_type_support_handle = {
  0,
  &hidro_ros2_utils__srv__detail__transition_command__rosidl_typesupport_introspection_c__TransitionCommand_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hidro_ros2_utils, srv, TransitionCommand_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hidro_ros2_utils, srv, TransitionCommand_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_hidro_ros2_utils
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hidro_ros2_utils, srv, TransitionCommand)() {
  if (!hidro_ros2_utils__srv__detail__transition_command__rosidl_typesupport_introspection_c__TransitionCommand_service_type_support_handle.typesupport_identifier) {
    hidro_ros2_utils__srv__detail__transition_command__rosidl_typesupport_introspection_c__TransitionCommand_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)hidro_ros2_utils__srv__detail__transition_command__rosidl_typesupport_introspection_c__TransitionCommand_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hidro_ros2_utils, srv, TransitionCommand_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hidro_ros2_utils, srv, TransitionCommand_Response)()->data;
  }

  return &hidro_ros2_utils__srv__detail__transition_command__rosidl_typesupport_introspection_c__TransitionCommand_service_type_support_handle;
}
