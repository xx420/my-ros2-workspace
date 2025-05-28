// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mocap4r2_robot_gt_msgs:srv/SetGTOrigin.idl
// generated code does not contain a copyright notice

#ifndef MOCAP4R2_ROBOT_GT_MSGS__SRV__DETAIL__SET_GT_ORIGIN__STRUCT_HPP_
#define MOCAP4R2_ROBOT_GT_MSGS__SRV__DETAIL__SET_GT_ORIGIN__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'origin_pose'
#include "geometry_msgs/msg/detail/pose__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__mocap4r2_robot_gt_msgs__srv__SetGTOrigin_Request __attribute__((deprecated))
#else
# define DEPRECATED__mocap4r2_robot_gt_msgs__srv__SetGTOrigin_Request __declspec(deprecated)
#endif

namespace mocap4r2_robot_gt_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetGTOrigin_Request_
{
  using Type = SetGTOrigin_Request_<ContainerAllocator>;

  explicit SetGTOrigin_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : origin_pose(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::DEFAULTS_ONLY == _init)
    {
      this->current_is_origin = false;
    } else if (rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->current_is_origin = false;
    }
  }

  explicit SetGTOrigin_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : origin_pose(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::DEFAULTS_ONLY == _init)
    {
      this->current_is_origin = false;
    } else if (rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->current_is_origin = false;
    }
  }

  // field types and members
  using _current_is_origin_type =
    bool;
  _current_is_origin_type current_is_origin;
  using _origin_pose_type =
    geometry_msgs::msg::Pose_<ContainerAllocator>;
  _origin_pose_type origin_pose;

  // setters for named parameter idiom
  Type & set__current_is_origin(
    const bool & _arg)
  {
    this->current_is_origin = _arg;
    return *this;
  }
  Type & set__origin_pose(
    const geometry_msgs::msg::Pose_<ContainerAllocator> & _arg)
  {
    this->origin_pose = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mocap4r2_robot_gt_msgs::srv::SetGTOrigin_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const mocap4r2_robot_gt_msgs::srv::SetGTOrigin_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mocap4r2_robot_gt_msgs::srv::SetGTOrigin_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mocap4r2_robot_gt_msgs::srv::SetGTOrigin_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mocap4r2_robot_gt_msgs::srv::SetGTOrigin_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mocap4r2_robot_gt_msgs::srv::SetGTOrigin_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mocap4r2_robot_gt_msgs::srv::SetGTOrigin_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mocap4r2_robot_gt_msgs::srv::SetGTOrigin_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mocap4r2_robot_gt_msgs::srv::SetGTOrigin_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mocap4r2_robot_gt_msgs::srv::SetGTOrigin_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mocap4r2_robot_gt_msgs__srv__SetGTOrigin_Request
    std::shared_ptr<mocap4r2_robot_gt_msgs::srv::SetGTOrigin_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mocap4r2_robot_gt_msgs__srv__SetGTOrigin_Request
    std::shared_ptr<mocap4r2_robot_gt_msgs::srv::SetGTOrigin_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetGTOrigin_Request_ & other) const
  {
    if (this->current_is_origin != other.current_is_origin) {
      return false;
    }
    if (this->origin_pose != other.origin_pose) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetGTOrigin_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetGTOrigin_Request_

// alias to use template instance with default allocator
using SetGTOrigin_Request =
  mocap4r2_robot_gt_msgs::srv::SetGTOrigin_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace mocap4r2_robot_gt_msgs


#ifndef _WIN32
# define DEPRECATED__mocap4r2_robot_gt_msgs__srv__SetGTOrigin_Response __attribute__((deprecated))
#else
# define DEPRECATED__mocap4r2_robot_gt_msgs__srv__SetGTOrigin_Response __declspec(deprecated)
#endif

namespace mocap4r2_robot_gt_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetGTOrigin_Response_
{
  using Type = SetGTOrigin_Response_<ContainerAllocator>;

  explicit SetGTOrigin_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->error_msg = "";
    }
  }

  explicit SetGTOrigin_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : error_msg(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->error_msg = "";
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;
  using _error_msg_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _error_msg_type error_msg;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }
  Type & set__error_msg(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->error_msg = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mocap4r2_robot_gt_msgs::srv::SetGTOrigin_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const mocap4r2_robot_gt_msgs::srv::SetGTOrigin_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mocap4r2_robot_gt_msgs::srv::SetGTOrigin_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mocap4r2_robot_gt_msgs::srv::SetGTOrigin_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mocap4r2_robot_gt_msgs::srv::SetGTOrigin_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mocap4r2_robot_gt_msgs::srv::SetGTOrigin_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mocap4r2_robot_gt_msgs::srv::SetGTOrigin_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mocap4r2_robot_gt_msgs::srv::SetGTOrigin_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mocap4r2_robot_gt_msgs::srv::SetGTOrigin_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mocap4r2_robot_gt_msgs::srv::SetGTOrigin_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mocap4r2_robot_gt_msgs__srv__SetGTOrigin_Response
    std::shared_ptr<mocap4r2_robot_gt_msgs::srv::SetGTOrigin_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mocap4r2_robot_gt_msgs__srv__SetGTOrigin_Response
    std::shared_ptr<mocap4r2_robot_gt_msgs::srv::SetGTOrigin_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetGTOrigin_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->error_msg != other.error_msg) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetGTOrigin_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetGTOrigin_Response_

// alias to use template instance with default allocator
using SetGTOrigin_Response =
  mocap4r2_robot_gt_msgs::srv::SetGTOrigin_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace mocap4r2_robot_gt_msgs

namespace mocap4r2_robot_gt_msgs
{

namespace srv
{

struct SetGTOrigin
{
  using Request = mocap4r2_robot_gt_msgs::srv::SetGTOrigin_Request;
  using Response = mocap4r2_robot_gt_msgs::srv::SetGTOrigin_Response;
};

}  // namespace srv

}  // namespace mocap4r2_robot_gt_msgs

#endif  // MOCAP4R2_ROBOT_GT_MSGS__SRV__DETAIL__SET_GT_ORIGIN__STRUCT_HPP_
