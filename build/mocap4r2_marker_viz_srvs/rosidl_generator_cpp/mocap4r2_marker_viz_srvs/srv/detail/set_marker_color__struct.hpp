// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mocap4r2_marker_viz_srvs:srv/SetMarkerColor.idl
// generated code does not contain a copyright notice

#ifndef MOCAP4R2_MARKER_VIZ_SRVS__SRV__DETAIL__SET_MARKER_COLOR__STRUCT_HPP_
#define MOCAP4R2_MARKER_VIZ_SRVS__SRV__DETAIL__SET_MARKER_COLOR__STRUCT_HPP_

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
// Member 'color'
#include "std_msgs/msg/detail/color_rgba__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__mocap4r2_marker_viz_srvs__srv__SetMarkerColor_Request __attribute__((deprecated))
#else
# define DEPRECATED__mocap4r2_marker_viz_srvs__srv__SetMarkerColor_Request __declspec(deprecated)
#endif

namespace mocap4r2_marker_viz_srvs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetMarkerColor_Request_
{
  using Type = SetMarkerColor_Request_<ContainerAllocator>;

  explicit SetMarkerColor_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : id(_init),
    color(_init)
  {
    (void)_init;
  }

  explicit SetMarkerColor_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : id(_alloc, _init),
    color(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _id_type =
    std_msgs::msg::Int32_<ContainerAllocator>;
  _id_type id;
  using _color_type =
    std_msgs::msg::ColorRGBA_<ContainerAllocator>;
  _color_type color;

  // setters for named parameter idiom
  Type & set__id(
    const std_msgs::msg::Int32_<ContainerAllocator> & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__color(
    const std_msgs::msg::ColorRGBA_<ContainerAllocator> & _arg)
  {
    this->color = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mocap4r2_marker_viz_srvs::srv::SetMarkerColor_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const mocap4r2_marker_viz_srvs::srv::SetMarkerColor_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mocap4r2_marker_viz_srvs::srv::SetMarkerColor_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mocap4r2_marker_viz_srvs::srv::SetMarkerColor_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mocap4r2_marker_viz_srvs::srv::SetMarkerColor_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mocap4r2_marker_viz_srvs::srv::SetMarkerColor_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mocap4r2_marker_viz_srvs::srv::SetMarkerColor_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mocap4r2_marker_viz_srvs::srv::SetMarkerColor_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mocap4r2_marker_viz_srvs::srv::SetMarkerColor_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mocap4r2_marker_viz_srvs::srv::SetMarkerColor_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mocap4r2_marker_viz_srvs__srv__SetMarkerColor_Request
    std::shared_ptr<mocap4r2_marker_viz_srvs::srv::SetMarkerColor_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mocap4r2_marker_viz_srvs__srv__SetMarkerColor_Request
    std::shared_ptr<mocap4r2_marker_viz_srvs::srv::SetMarkerColor_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetMarkerColor_Request_ & other) const
  {
    if (this->id != other.id) {
      return false;
    }
    if (this->color != other.color) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetMarkerColor_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetMarkerColor_Request_

// alias to use template instance with default allocator
using SetMarkerColor_Request =
  mocap4r2_marker_viz_srvs::srv::SetMarkerColor_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace mocap4r2_marker_viz_srvs


#ifndef _WIN32
# define DEPRECATED__mocap4r2_marker_viz_srvs__srv__SetMarkerColor_Response __attribute__((deprecated))
#else
# define DEPRECATED__mocap4r2_marker_viz_srvs__srv__SetMarkerColor_Response __declspec(deprecated)
#endif

namespace mocap4r2_marker_viz_srvs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetMarkerColor_Response_
{
  using Type = SetMarkerColor_Response_<ContainerAllocator>;

  explicit SetMarkerColor_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit SetMarkerColor_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    mocap4r2_marker_viz_srvs::srv::SetMarkerColor_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const mocap4r2_marker_viz_srvs::srv::SetMarkerColor_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mocap4r2_marker_viz_srvs::srv::SetMarkerColor_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mocap4r2_marker_viz_srvs::srv::SetMarkerColor_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mocap4r2_marker_viz_srvs::srv::SetMarkerColor_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mocap4r2_marker_viz_srvs::srv::SetMarkerColor_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mocap4r2_marker_viz_srvs::srv::SetMarkerColor_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mocap4r2_marker_viz_srvs::srv::SetMarkerColor_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mocap4r2_marker_viz_srvs::srv::SetMarkerColor_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mocap4r2_marker_viz_srvs::srv::SetMarkerColor_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mocap4r2_marker_viz_srvs__srv__SetMarkerColor_Response
    std::shared_ptr<mocap4r2_marker_viz_srvs::srv::SetMarkerColor_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mocap4r2_marker_viz_srvs__srv__SetMarkerColor_Response
    std::shared_ptr<mocap4r2_marker_viz_srvs::srv::SetMarkerColor_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetMarkerColor_Response_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetMarkerColor_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetMarkerColor_Response_

// alias to use template instance with default allocator
using SetMarkerColor_Response =
  mocap4r2_marker_viz_srvs::srv::SetMarkerColor_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace mocap4r2_marker_viz_srvs

namespace mocap4r2_marker_viz_srvs
{

namespace srv
{

struct SetMarkerColor
{
  using Request = mocap4r2_marker_viz_srvs::srv::SetMarkerColor_Request;
  using Response = mocap4r2_marker_viz_srvs::srv::SetMarkerColor_Response;
};

}  // namespace srv

}  // namespace mocap4r2_marker_viz_srvs

#endif  // MOCAP4R2_MARKER_VIZ_SRVS__SRV__DETAIL__SET_MARKER_COLOR__STRUCT_HPP_
