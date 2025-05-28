// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mocap4r2_marker_viz_srvs:srv/SetMarkerColor.idl
// generated code does not contain a copyright notice

#ifndef MOCAP4R2_MARKER_VIZ_SRVS__SRV__DETAIL__SET_MARKER_COLOR__TRAITS_HPP_
#define MOCAP4R2_MARKER_VIZ_SRVS__SRV__DETAIL__SET_MARKER_COLOR__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "mocap4r2_marker_viz_srvs/srv/detail/set_marker_color__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'id'
#include "std_msgs/msg/detail/int32__traits.hpp"
// Member 'color'
#include "std_msgs/msg/detail/color_rgba__traits.hpp"

namespace mocap4r2_marker_viz_srvs
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetMarkerColor_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: id
  {
    out << "id: ";
    to_flow_style_yaml(msg.id, out);
    out << ", ";
  }

  // member: color
  {
    out << "color: ";
    to_flow_style_yaml(msg.color, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetMarkerColor_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "id:\n";
    to_block_style_yaml(msg.id, out, indentation + 2);
  }

  // member: color
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "color:\n";
    to_block_style_yaml(msg.color, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetMarkerColor_Request & msg, bool use_flow_style = false)
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

}  // namespace mocap4r2_marker_viz_srvs

namespace rosidl_generator_traits
{

[[deprecated("use mocap4r2_marker_viz_srvs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const mocap4r2_marker_viz_srvs::srv::SetMarkerColor_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  mocap4r2_marker_viz_srvs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mocap4r2_marker_viz_srvs::srv::to_yaml() instead")]]
inline std::string to_yaml(const mocap4r2_marker_viz_srvs::srv::SetMarkerColor_Request & msg)
{
  return mocap4r2_marker_viz_srvs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<mocap4r2_marker_viz_srvs::srv::SetMarkerColor_Request>()
{
  return "mocap4r2_marker_viz_srvs::srv::SetMarkerColor_Request";
}

template<>
inline const char * name<mocap4r2_marker_viz_srvs::srv::SetMarkerColor_Request>()
{
  return "mocap4r2_marker_viz_srvs/srv/SetMarkerColor_Request";
}

template<>
struct has_fixed_size<mocap4r2_marker_viz_srvs::srv::SetMarkerColor_Request>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::ColorRGBA>::value && has_fixed_size<std_msgs::msg::Int32>::value> {};

template<>
struct has_bounded_size<mocap4r2_marker_viz_srvs::srv::SetMarkerColor_Request>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::ColorRGBA>::value && has_bounded_size<std_msgs::msg::Int32>::value> {};

template<>
struct is_message<mocap4r2_marker_viz_srvs::srv::SetMarkerColor_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace mocap4r2_marker_viz_srvs
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetMarkerColor_Response & msg,
  std::ostream & out)
{
  (void)msg;
  out << "null";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetMarkerColor_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetMarkerColor_Response & msg, bool use_flow_style = false)
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

}  // namespace mocap4r2_marker_viz_srvs

namespace rosidl_generator_traits
{

[[deprecated("use mocap4r2_marker_viz_srvs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const mocap4r2_marker_viz_srvs::srv::SetMarkerColor_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  mocap4r2_marker_viz_srvs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mocap4r2_marker_viz_srvs::srv::to_yaml() instead")]]
inline std::string to_yaml(const mocap4r2_marker_viz_srvs::srv::SetMarkerColor_Response & msg)
{
  return mocap4r2_marker_viz_srvs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<mocap4r2_marker_viz_srvs::srv::SetMarkerColor_Response>()
{
  return "mocap4r2_marker_viz_srvs::srv::SetMarkerColor_Response";
}

template<>
inline const char * name<mocap4r2_marker_viz_srvs::srv::SetMarkerColor_Response>()
{
  return "mocap4r2_marker_viz_srvs/srv/SetMarkerColor_Response";
}

template<>
struct has_fixed_size<mocap4r2_marker_viz_srvs::srv::SetMarkerColor_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<mocap4r2_marker_viz_srvs::srv::SetMarkerColor_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<mocap4r2_marker_viz_srvs::srv::SetMarkerColor_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<mocap4r2_marker_viz_srvs::srv::SetMarkerColor>()
{
  return "mocap4r2_marker_viz_srvs::srv::SetMarkerColor";
}

template<>
inline const char * name<mocap4r2_marker_viz_srvs::srv::SetMarkerColor>()
{
  return "mocap4r2_marker_viz_srvs/srv/SetMarkerColor";
}

template<>
struct has_fixed_size<mocap4r2_marker_viz_srvs::srv::SetMarkerColor>
  : std::integral_constant<
    bool,
    has_fixed_size<mocap4r2_marker_viz_srvs::srv::SetMarkerColor_Request>::value &&
    has_fixed_size<mocap4r2_marker_viz_srvs::srv::SetMarkerColor_Response>::value
  >
{
};

template<>
struct has_bounded_size<mocap4r2_marker_viz_srvs::srv::SetMarkerColor>
  : std::integral_constant<
    bool,
    has_bounded_size<mocap4r2_marker_viz_srvs::srv::SetMarkerColor_Request>::value &&
    has_bounded_size<mocap4r2_marker_viz_srvs::srv::SetMarkerColor_Response>::value
  >
{
};

template<>
struct is_service<mocap4r2_marker_viz_srvs::srv::SetMarkerColor>
  : std::true_type
{
};

template<>
struct is_service_request<mocap4r2_marker_viz_srvs::srv::SetMarkerColor_Request>
  : std::true_type
{
};

template<>
struct is_service_response<mocap4r2_marker_viz_srvs::srv::SetMarkerColor_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // MOCAP4R2_MARKER_VIZ_SRVS__SRV__DETAIL__SET_MARKER_COLOR__TRAITS_HPP_
