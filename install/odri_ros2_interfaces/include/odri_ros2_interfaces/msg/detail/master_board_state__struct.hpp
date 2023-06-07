// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from odri_ros2_interfaces:msg/MasterBoardState.idl
// generated code does not contain a copyright notice

#ifndef ODRI_ROS2_INTERFACES__MSG__DETAIL__MASTER_BOARD_STATE__STRUCT_HPP_
#define ODRI_ROS2_INTERFACES__MSG__DETAIL__MASTER_BOARD_STATE__STRUCT_HPP_

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
// Member 'drivers'
#include "odri_ros2_interfaces/msg/detail/driver_state__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__odri_ros2_interfaces__msg__MasterBoardState __attribute__((deprecated))
#else
# define DEPRECATED__odri_ros2_interfaces__msg__MasterBoardState __declspec(deprecated)
#endif

namespace odri_ros2_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MasterBoardState_
{
  using Type = MasterBoardState_<ContainerAllocator>;

  explicit MasterBoardState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    (void)_init;
  }

  explicit MasterBoardState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _drivers_type =
    std::vector<odri_ros2_interfaces::msg::DriverState_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<odri_ros2_interfaces::msg::DriverState_<ContainerAllocator>>>;
  _drivers_type drivers;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__drivers(
    const std::vector<odri_ros2_interfaces::msg::DriverState_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<odri_ros2_interfaces::msg::DriverState_<ContainerAllocator>>> & _arg)
  {
    this->drivers = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    odri_ros2_interfaces::msg::MasterBoardState_<ContainerAllocator> *;
  using ConstRawPtr =
    const odri_ros2_interfaces::msg::MasterBoardState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<odri_ros2_interfaces::msg::MasterBoardState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<odri_ros2_interfaces::msg::MasterBoardState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      odri_ros2_interfaces::msg::MasterBoardState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<odri_ros2_interfaces::msg::MasterBoardState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      odri_ros2_interfaces::msg::MasterBoardState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<odri_ros2_interfaces::msg::MasterBoardState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<odri_ros2_interfaces::msg::MasterBoardState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<odri_ros2_interfaces::msg::MasterBoardState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__odri_ros2_interfaces__msg__MasterBoardState
    std::shared_ptr<odri_ros2_interfaces::msg::MasterBoardState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__odri_ros2_interfaces__msg__MasterBoardState
    std::shared_ptr<odri_ros2_interfaces::msg::MasterBoardState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MasterBoardState_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->drivers != other.drivers) {
      return false;
    }
    return true;
  }
  bool operator!=(const MasterBoardState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MasterBoardState_

// alias to use template instance with default allocator
using MasterBoardState =
  odri_ros2_interfaces::msg::MasterBoardState_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace odri_ros2_interfaces

#endif  // ODRI_ROS2_INTERFACES__MSG__DETAIL__MASTER_BOARD_STATE__STRUCT_HPP_
