// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mocap4r2_marker_viz_srvs:srv/ResetMarkerColor.idl
// generated code does not contain a copyright notice

#ifndef MOCAP4R2_MARKER_VIZ_SRVS__SRV__DETAIL__RESET_MARKER_COLOR__STRUCT_HPP_
#define MOCAP4R2_MARKER_VIZ_SRVS__SRV__DETAIL__RESET_MARKER_COLOR__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'id'
#include "std_msgs/msg/detail/int32__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Request __attribute__((deprecated))
#else
# define DEPRECATED__mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Request __declspec(deprecated)
#endif

namespace mocap4r2_marker_viz_srvs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ResetMarkerColor_Request_
{
  using Type = ResetMarkerColor_Request_<ContainerAllocator>;

  explicit ResetMarkerColor_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : id(_init)
  {
    (void)_init;
  }

  explicit ResetMarkerColor_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : id(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _id_type =
    std_msgs::msg::Int32_<ContainerAllocator>;
  _id_type id;

  // setters for named parameter idiom
  Type & set__id(
    const std_msgs::msg::Int32_<ContainerAllocator> & _arg)
  {
    this->id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mocap4r2_marker_viz_srvs::srv::ResetMarkerColor_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const mocap4r2_marker_viz_srvs::srv::ResetMarkerColor_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mocap4r2_marker_viz_srvs::srv::ResetMarkerColor_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mocap4r2_marker_viz_srvs::srv::ResetMarkerColor_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mocap4r2_marker_viz_srvs::srv::ResetMarkerColor_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mocap4r2_marker_viz_srvs::srv::ResetMarkerColor_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mocap4r2_marker_viz_srvs::srv::ResetMarkerColor_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mocap4r2_marker_viz_srvs::srv::ResetMarkerColor_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mocap4r2_marker_viz_srvs::srv::ResetMarkerColor_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mocap4r2_marker_viz_srvs::srv::ResetMarkerColor_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Request
    std::shared_ptr<mocap4r2_marker_viz_srvs::srv::ResetMarkerColor_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Request
    std::shared_ptr<mocap4r2_marker_viz_srvs::srv::ResetMarkerColor_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ResetMarkerColor_Request_ & other) const
  {
    if (this->id != other.id) {
      return false;
    }
    return true;
  }
  bool operator!=(const ResetMarkerColor_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ResetMarkerColor_Request_

// alias to use template instance with default allocator
using ResetMarkerColor_Request =
  mocap4r2_marker_viz_srvs::srv::ResetMarkerColor_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace mocap4r2_marker_viz_srvs


#ifndef _WIN32
# define DEPRECATED__mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Response __attribute__((deprecated))
#else
# define DEPRECATED__mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Response __declspec(deprecated)
#endif

namespace mocap4r2_marker_viz_srvs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ResetMarkerColor_Response_
{
  using Type = ResetMarkerColor_Response_<ContainerAllocator>;

  explicit ResetMarkerColor_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit ResetMarkerColor_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  // field types and members
  using _structure_needs_at_least_one_member_type =
    uint8_t;
  _structure_needs_at_least_one_member_type structure_needs_at_least_one_member;


  // constant declarations

  // pointer types
  using RawPtr =
    mocap4r2_marker_viz_srvs::srv::ResetMarkerColor_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const mocap4r2_marker_viz_srvs::srv::ResetMarkerColor_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mocap4r2_marker_viz_srvs::srv::ResetMarkerColor_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mocap4r2_marker_viz_srvs::srv::ResetMarkerColor_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mocap4r2_marker_viz_srvs::srv::ResetMarkerColor_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mocap4r2_marker_viz_srvs::srv::ResetMarkerColor_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mocap4r2_marker_viz_srvs::srv::ResetMarkerColor_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mocap4r2_marker_viz_srvs::srv::ResetMarkerColor_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mocap4r2_marker_viz_srvs::srv::ResetMarkerColor_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mocap4r2_marker_viz_srvs::srv::ResetMarkerColor_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Response
    std::shared_ptr<mocap4r2_marker_viz_srvs::srv::ResetMarkerColor_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Response
    std::shared_ptr<mocap4r2_marker_viz_srvs::srv::ResetMarkerColor_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ResetMarkerColor_Response_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const ResetMarkerColor_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ResetMarkerColor_Response_

// alias to use template instance with default allocator
using ResetMarkerColor_Response =
  mocap4r2_marker_viz_srvs::srv::ResetMarkerColor_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace mocap4r2_marker_viz_srvs

namespace mocap4r2_marker_viz_srvs
{

namespace srv
{

struct ResetMarkerColor
{
  using Request = mocap4r2_marker_viz_srvs::srv::ResetMarkerColor_Request;
  using Response = mocap4r2_marker_viz_srvs::srv::ResetMarkerColor_Response;
};

}  // namespace srv

}  // namespace mocap4r2_marker_viz_srvs

#endif  // MOCAP4R2_MARKER_VIZ_SRVS__SRV__DETAIL__RESET_MARKER_COLOR__STRUCT_HPP_
