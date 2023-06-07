// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from odri_ros2_interfaces:msg/StateCommand.idl
// generated code does not contain a copyright notice

#ifndef ODRI_ROS2_INTERFACES__MSG__DETAIL__STATE_COMMAND__STRUCT_HPP_
#define ODRI_ROS2_INTERFACES__MSG__DETAIL__STATE_COMMAND__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__odri_ros2_interfaces__msg__StateCommand __attribute__((deprecated))
#else
# define DEPRECATED__odri_ros2_interfaces__msg__StateCommand __declspec(deprecated)
#endif

namespace odri_ros2_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct StateCommand_
{
  using Type = StateCommand_<ContainerAllocator>;

  explicit StateCommand_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->state_id = 0;
      this->state_name = "";
    }
  }

  explicit StateCommand_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    state_name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->state_id = 0;
      this->state_name = "";
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _state_id_type =
    int8_t;
  _state_id_type state_id;
  using _state_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _state_name_type state_name;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__state_id(
    const int8_t & _arg)
  {
    this->state_id = _arg;
    return *this;
  }
  Type & set__state_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->state_name = _arg;
    return *this;
  }

  // constant declarations
  static constexpr int8_t IDLE =
    0;
  static constexpr int8_t CALIBRATING =
    1;
  static constexpr int8_t ENABLED =
    2;
  static constexpr int8_t RUNNING =
    3;
  static constexpr int8_t OTHER =
    4;

  // pointer types
  using RawPtr =
    odri_ros2_interfaces::msg::StateCommand_<ContainerAllocator> *;
  using ConstRawPtr =
    const odri_ros2_interfaces::msg::StateCommand_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<odri_ros2_interfaces::msg::StateCommand_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<odri_ros2_interfaces::msg::StateCommand_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      odri_ros2_interfaces::msg::StateCommand_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<odri_ros2_interfaces::msg::StateCommand_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      odri_ros2_interfaces::msg::StateCommand_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<odri_ros2_interfaces::msg::StateCommand_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<odri_ros2_interfaces::msg::StateCommand_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<odri_ros2_interfaces::msg::StateCommand_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__odri_ros2_interfaces__msg__StateCommand
    std::shared_ptr<odri_ros2_interfaces::msg::StateCommand_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__odri_ros2_interfaces__msg__StateCommand
    std::shared_ptr<odri_ros2_interfaces::msg::StateCommand_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const StateCommand_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->state_id != other.state_id) {
      return false;
    }
    if (this->state_name != other.state_name) {
      return false;
    }
    return true;
  }
  bool operator!=(const StateCommand_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct StateCommand_

// alias to use template instance with default allocator
using StateCommand =
  odri_ros2_interfaces::msg::StateCommand_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr int8_t StateCommand_<ContainerAllocator>::IDLE;
template<typename ContainerAllocator>
constexpr int8_t StateCommand_<ContainerAllocator>::CALIBRATING;
template<typename ContainerAllocator>
constexpr int8_t StateCommand_<ContainerAllocator>::ENABLED;
template<typename ContainerAllocator>
constexpr int8_t StateCommand_<ContainerAllocator>::RUNNING;
template<typename ContainerAllocator>
constexpr int8_t StateCommand_<ContainerAllocator>::OTHER;

}  // namespace msg

}  // namespace odri_ros2_interfaces

#endif  // ODRI_ROS2_INTERFACES__MSG__DETAIL__STATE_COMMAND__STRUCT_HPP_
