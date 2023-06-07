// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from hidro_ros2_utils:srv/TransitionCommand.idl
// generated code does not contain a copyright notice

#ifndef HIDRO_ROS2_UTILS__SRV__DETAIL__TRANSITION_COMMAND__STRUCT_HPP_
#define HIDRO_ROS2_UTILS__SRV__DETAIL__TRANSITION_COMMAND__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__hidro_ros2_utils__srv__TransitionCommand_Request __attribute__((deprecated))
#else
# define DEPRECATED__hidro_ros2_utils__srv__TransitionCommand_Request __declspec(deprecated)
#endif

namespace hidro_ros2_utils
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct TransitionCommand_Request_
{
  using Type = TransitionCommand_Request_<ContainerAllocator>;

  explicit TransitionCommand_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->command = "";
    }
  }

  explicit TransitionCommand_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : command(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->command = "";
    }
  }

  // field types and members
  using _command_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _command_type command;

  // setters for named parameter idiom
  Type & set__command(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->command = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    hidro_ros2_utils::srv::TransitionCommand_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const hidro_ros2_utils::srv::TransitionCommand_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<hidro_ros2_utils::srv::TransitionCommand_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<hidro_ros2_utils::srv::TransitionCommand_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      hidro_ros2_utils::srv::TransitionCommand_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<hidro_ros2_utils::srv::TransitionCommand_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      hidro_ros2_utils::srv::TransitionCommand_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<hidro_ros2_utils::srv::TransitionCommand_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<hidro_ros2_utils::srv::TransitionCommand_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<hidro_ros2_utils::srv::TransitionCommand_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__hidro_ros2_utils__srv__TransitionCommand_Request
    std::shared_ptr<hidro_ros2_utils::srv::TransitionCommand_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__hidro_ros2_utils__srv__TransitionCommand_Request
    std::shared_ptr<hidro_ros2_utils::srv::TransitionCommand_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TransitionCommand_Request_ & other) const
  {
    if (this->command != other.command) {
      return false;
    }
    return true;
  }
  bool operator!=(const TransitionCommand_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TransitionCommand_Request_

// alias to use template instance with default allocator
using TransitionCommand_Request =
  hidro_ros2_utils::srv::TransitionCommand_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace hidro_ros2_utils


#ifndef _WIN32
# define DEPRECATED__hidro_ros2_utils__srv__TransitionCommand_Response __attribute__((deprecated))
#else
# define DEPRECATED__hidro_ros2_utils__srv__TransitionCommand_Response __declspec(deprecated)
#endif

namespace hidro_ros2_utils
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct TransitionCommand_Response_
{
  using Type = TransitionCommand_Response_<ContainerAllocator>;

  explicit TransitionCommand_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
      this->result = false;
      this->message = "";
    }
  }

  explicit TransitionCommand_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : message(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
      this->result = false;
      this->message = "";
    }
  }

  // field types and members
  using _accepted_type =
    bool;
  _accepted_type accepted;
  using _result_type =
    bool;
  _result_type result;
  using _message_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _message_type message;

  // setters for named parameter idiom
  Type & set__accepted(
    const bool & _arg)
  {
    this->accepted = _arg;
    return *this;
  }
  Type & set__result(
    const bool & _arg)
  {
    this->result = _arg;
    return *this;
  }
  Type & set__message(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->message = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    hidro_ros2_utils::srv::TransitionCommand_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const hidro_ros2_utils::srv::TransitionCommand_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<hidro_ros2_utils::srv::TransitionCommand_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<hidro_ros2_utils::srv::TransitionCommand_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      hidro_ros2_utils::srv::TransitionCommand_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<hidro_ros2_utils::srv::TransitionCommand_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      hidro_ros2_utils::srv::TransitionCommand_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<hidro_ros2_utils::srv::TransitionCommand_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<hidro_ros2_utils::srv::TransitionCommand_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<hidro_ros2_utils::srv::TransitionCommand_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__hidro_ros2_utils__srv__TransitionCommand_Response
    std::shared_ptr<hidro_ros2_utils::srv::TransitionCommand_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__hidro_ros2_utils__srv__TransitionCommand_Response
    std::shared_ptr<hidro_ros2_utils::srv::TransitionCommand_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TransitionCommand_Response_ & other) const
  {
    if (this->accepted != other.accepted) {
      return false;
    }
    if (this->result != other.result) {
      return false;
    }
    if (this->message != other.message) {
      return false;
    }
    return true;
  }
  bool operator!=(const TransitionCommand_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TransitionCommand_Response_

// alias to use template instance with default allocator
using TransitionCommand_Response =
  hidro_ros2_utils::srv::TransitionCommand_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace hidro_ros2_utils

namespace hidro_ros2_utils
{

namespace srv
{

struct TransitionCommand
{
  using Request = hidro_ros2_utils::srv::TransitionCommand_Request;
  using Response = hidro_ros2_utils::srv::TransitionCommand_Response;
};

}  // namespace srv

}  // namespace hidro_ros2_utils

#endif  // HIDRO_ROS2_UTILS__SRV__DETAIL__TRANSITION_COMMAND__STRUCT_HPP_
