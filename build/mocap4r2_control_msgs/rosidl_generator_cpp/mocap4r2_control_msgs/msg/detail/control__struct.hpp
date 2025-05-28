// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mocap4r2_control_msgs:msg/Control.idl
// generated code does not contain a copyright notice

#ifndef MOCAP4R2_CONTROL_MSGS__MSG__DETAIL__CONTROL__STRUCT_HPP_
#define MOCAP4R2_CONTROL_MSGS__MSG__DETAIL__CONTROL__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__mocap4r2_control_msgs__msg__Control __attribute__((deprecated))
#else
# define DEPRECATED__mocap4r2_control_msgs__msg__Control __declspec(deprecated)
#endif

namespace mocap4r2_control_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Control_
{
  using Type = Control_<ContainerAllocator>;

  explicit Control_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->control_type = 0;
      this->mocap4r2_source = "";
      this->session_id = "";
    }
  }

  explicit Control_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init),
    mocap4r2_source(_alloc),
    session_id(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->control_type = 0;
      this->mocap4r2_source = "";
      this->session_id = "";
    }
  }

  // field types and members
  using _control_type_type =
    int8_t;
  _control_type_type control_type;
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;
  using _mocap4r2_source_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _mocap4r2_source_type mocap4r2_source;
  using _session_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _session_id_type session_id;
  using _mocap4r2_systems_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _mocap4r2_systems_type mocap4r2_systems;

  // setters for named parameter idiom
  Type & set__control_type(
    const int8_t & _arg)
  {
    this->control_type = _arg;
    return *this;
  }
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }
  Type & set__mocap4r2_source(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->mocap4r2_source = _arg;
    return *this;
  }
  Type & set__session_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->session_id = _arg;
    return *this;
  }
  Type & set__mocap4r2_systems(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->mocap4r2_systems = _arg;
    return *this;
  }

  // constant declarations
  static constexpr int8_t START =
    0;
  static constexpr int8_t ACK_START =
    1;
  static constexpr int8_t STOP =
    2;
  static constexpr int8_t ACK_STOP =
    3;

  // pointer types
  using RawPtr =
    mocap4r2_control_msgs::msg::Control_<ContainerAllocator> *;
  using ConstRawPtr =
    const mocap4r2_control_msgs::msg::Control_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mocap4r2_control_msgs::msg::Control_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mocap4r2_control_msgs::msg::Control_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mocap4r2_control_msgs::msg::Control_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mocap4r2_control_msgs::msg::Control_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mocap4r2_control_msgs::msg::Control_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mocap4r2_control_msgs::msg::Control_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mocap4r2_control_msgs::msg::Control_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mocap4r2_control_msgs::msg::Control_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mocap4r2_control_msgs__msg__Control
    std::shared_ptr<mocap4r2_control_msgs::msg::Control_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mocap4r2_control_msgs__msg__Control
    std::shared_ptr<mocap4r2_control_msgs::msg::Control_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Control_ & other) const
  {
    if (this->control_type != other.control_type) {
      return false;
    }
    if (this->stamp != other.stamp) {
      return false;
    }
    if (this->mocap4r2_source != other.mocap4r2_source) {
      return false;
    }
    if (this->session_id != other.session_id) {
      return false;
    }
    if (this->mocap4r2_systems != other.mocap4r2_systems) {
      return false;
    }
    return true;
  }
  bool operator!=(const Control_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Control_

// alias to use template instance with default allocator
using Control =
  mocap4r2_control_msgs::msg::Control_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t Control_<ContainerAllocator>::START;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t Control_<ContainerAllocator>::ACK_START;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t Control_<ContainerAllocator>::STOP;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t Control_<ContainerAllocator>::ACK_STOP;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace mocap4r2_control_msgs

#endif  // MOCAP4R2_CONTROL_MSGS__MSG__DETAIL__CONTROL__STRUCT_HPP_
