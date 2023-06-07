// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from hidro_ros2_utils:msg/StateMachineStatus.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "hidro_ros2_utils/msg/detail/state_machine_status__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace hidro_ros2_utils
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void StateMachineStatus_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) hidro_ros2_utils::msg::StateMachineStatus(_init);
}

void StateMachineStatus_fini_function(void * message_memory)
{
  auto typed_message = static_cast<hidro_ros2_utils::msg::StateMachineStatus *>(message_memory);
  typed_message->~StateMachineStatus();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember StateMachineStatus_message_member_array[2] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hidro_ros2_utils::msg::StateMachineStatus, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "status",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hidro_ros2_utils::msg::StateMachineStatus, status),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers StateMachineStatus_message_members = {
  "hidro_ros2_utils::msg",  // message namespace
  "StateMachineStatus",  // message name
  2,  // number of fields
  sizeof(hidro_ros2_utils::msg::StateMachineStatus),
  StateMachineStatus_message_member_array,  // message members
  StateMachineStatus_init_function,  // function to initialize message memory (memory has to be allocated)
  StateMachineStatus_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t StateMachineStatus_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &StateMachineStatus_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace hidro_ros2_utils


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<hidro_ros2_utils::msg::StateMachineStatus>()
{
  return &::hidro_ros2_utils::msg::rosidl_typesupport_introspection_cpp::StateMachineStatus_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, hidro_ros2_utils, msg, StateMachineStatus)() {
  return &::hidro_ros2_utils::msg::rosidl_typesupport_introspection_cpp::StateMachineStatus_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
