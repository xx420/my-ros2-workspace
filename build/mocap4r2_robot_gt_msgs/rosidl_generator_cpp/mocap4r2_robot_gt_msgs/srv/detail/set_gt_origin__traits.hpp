// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mocap4r2_robot_gt_msgs:srv/SetGTOrigin.idl
// generated code does not contain a copyright notice

#ifndef MOCAP4R2_ROBOT_GT_MSGS__SRV__DETAIL__SET_GT_ORIGIN__TRAITS_HPP_
#define MOCAP4R2_ROBOT_GT_MSGS__SRV__DETAIL__SET_GT_ORIGIN__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "mocap4r2_robot_gt_msgs/srv/detail/set_gt_origin__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'origin_pose'
#include "geometry_msgs/msg/detail/pose__traits.hpp"

namespace mocap4r2_robot_gt_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetGTOrigin_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: current_is_origin
  {
    out << "current_is_origin: ";
    rosidl_generator_traits::value_to_yaml(msg.current_is_origin, out);
    out << ", ";
  }

  // member: origin_pose
  {
    out << "origin_pose: ";
    to_flow_style_yaml(msg.origin_pose, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetGTOrigin_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: current_is_origin
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "current_is_origin: ";
    rosidl_generator_traits::value_to_yaml(msg.current_is_origin, out);
    out << "\n";
  }

  // member: origin_pose
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "origin_pose:\n";
    to_block_style_yaml(msg.origin_pose, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetGTOrigin_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace mocap4r2_robot_gt_msgs

namespace rosidl_generator_traits
{

[[deprecated("use mocap4r2_robot_gt_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const mocap4r2_robot_gt_msgs::srv::SetGTOrigin_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  mocap4r2_robot_gt_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mocap4r2_robot_gt_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const mocap4r2_robot_gt_msgs::srv::SetGTOrigin_Request & msg)
{
  return mocap4r2_robot_gt_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<mocap4r2_robot_gt_msgs::srv::SetGTOrigin_Request>()
{
  return "mocap4r2_robot_gt_msgs::srv::SetGTOrigin_Request";
}

template<>
inline const char * name<mocap4r2_robot_gt_msgs::srv::SetGTOrigin_Request>()
{
  return "mocap4r2_robot_gt_msgs/srv/SetGTOrigin_Request";
}

template<>
struct has_fixed_size<mocap4r2_robot_gt_msgs::srv::SetGTOrigin_Request>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Pose>::value> {};

template<>
struct has_bounded_size<mocap4r2_robot_gt_msgs::srv::SetGTOrigin_Request>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Pose>::value> {};

template<>
struct is_message<mocap4r2_robot_gt_msgs::srv::SetGTOrigin_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace mocap4r2_robot_gt_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetGTOrigin_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << ", ";
  }

  // member: error_msg
  {
    out << "error_msg: ";
    rosidl_generator_traits::value_to_yaml(msg.error_msg, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetGTOrigin_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }

  // member: error_msg
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "error_msg: ";
    rosidl_generator_traits::value_to_yaml(msg.error_msg, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetGTOrigin_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace mocap4r2_robot_gt_msgs

namespace rosidl_generator_traits
{

[[deprecated("use mocap4r2_robot_gt_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const mocap4r2_robot_gt_msgs::srv::SetGTOrigin_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  mocap4r2_robot_gt_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mocap4r2_robot_gt_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const mocap4r2_robot_gt_msgs::srv::SetGTOrigin_Response & msg)
{
  return mocap4r2_robot_gt_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<mocap4r2_robot_gt_msgs::srv::SetGTOrigin_Response>()
{
  return "mocap4r2_robot_gt_msgs::srv::SetGTOrigin_Response";
}

template<>
inline const char * name<mocap4r2_robot_gt_msgs::srv::SetGTOrigin_Response>()
{
  return "mocap4r2_robot_gt_msgs/srv/SetGTOrigin_Response";
}

template<>
struct has_fixed_size<mocap4r2_robot_gt_msgs::srv::SetGTOrigin_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<mocap4r2_robot_gt_msgs::srv::SetGTOrigin_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<mocap4r2_robot_gt_msgs::srv::SetGTOrigin_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<mocap4r2_robot_gt_msgs::srv::SetGTOrigin>()
{
  return "mocap4r2_robot_gt_msgs::srv::SetGTOrigin";
}

template<>
inline const char * name<mocap4r2_robot_gt_msgs::srv::SetGTOrigin>()
{
  return "mocap4r2_robot_gt_msgs/srv/SetGTOrigin";
}

template<>
struct has_fixed_size<mocap4r2_robot_gt_msgs::srv::SetGTOrigin>
  : std::integral_constant<
    bool,
    has_fixed_size<mocap4r2_robot_gt_msgs::srv::SetGTOrigin_Request>::value &&
    has_fixed_size<mocap4r2_robot_gt_msgs::srv::SetGTOrigin_Response>::value
  >
{
};

template<>
struct has_bounded_size<mocap4r2_robot_gt_msgs::srv::SetGTOrigin>
  : std::integral_constant<
    bool,
    has_bounded_size<mocap4r2_robot_gt_msgs::srv::SetGTOrigin_Request>::value &&
    has_bounded_size<mocap4r2_robot_gt_msgs::srv::SetGTOrigin_Response>::value
  >
{
};

template<>
struct is_service<mocap4r2_robot_gt_msgs::srv::SetGTOrigin>
  : std::true_type
{
};

template<>
struct is_service_request<mocap4r2_robot_gt_msgs::srv::SetGTOrigin_Request>
  : std::true_type
{
};

template<>
struct is_service_response<mocap4r2_robot_gt_msgs::srv::SetGTOrigin_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // MOCAP4R2_ROBOT_GT_MSGS__SRV__DETAIL__SET_GT_ORIGIN__TRAITS_HPP_
