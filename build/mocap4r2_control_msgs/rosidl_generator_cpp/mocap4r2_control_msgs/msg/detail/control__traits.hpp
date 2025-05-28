// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mocap4r2_control_msgs:msg/Control.idl
// generated code does not contain a copyright notice

#ifndef MOCAP4R2_CONTROL_MSGS__MSG__DETAIL__CONTROL__TRAITS_HPP_
#define MOCAP4R2_CONTROL_MSGS__MSG__DETAIL__CONTROL__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "mocap4r2_control_msgs/msg/detail/control__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace mocap4r2_control_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Control & msg,
  std::ostream & out)
{
  out << "{";
  // member: control_type
  {
    out << "control_type: ";
    rosidl_generator_traits::value_to_yaml(msg.control_type, out);
    out << ", ";
  }

  // member: stamp
  {
    out << "stamp: ";
    to_flow_style_yaml(msg.stamp, out);
    out << ", ";
  }

  // member: mocap4r2_source
  {
    out << "mocap4r2_source: ";
    rosidl_generator_traits::value_to_yaml(msg.mocap4r2_source, out);
    out << ", ";
  }

  // member: session_id
  {
    out << "session_id: ";
    rosidl_generator_traits::value_to_yaml(msg.session_id, out);
    out << ", ";
  }

  // member: mocap4r2_systems
  {
    if (msg.mocap4r2_systems.size() == 0) {
      out << "mocap4r2_systems: []";
    } else {
      out << "mocap4r2_systems: [";
      size_t pending_items = msg.mocap4r2_systems.size();
      for (auto item : msg.mocap4r2_systems) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Control & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: control_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "control_type: ";
    rosidl_generator_traits::value_to_yaml(msg.control_type, out);
    out << "\n";
  }

  // member: stamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stamp:\n";
    to_block_style_yaml(msg.stamp, out, indentation + 2);
  }

  // member: mocap4r2_source
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mocap4r2_source: ";
    rosidl_generator_traits::value_to_yaml(msg.mocap4r2_source, out);
    out << "\n";
  }

  // member: session_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "session_id: ";
    rosidl_generator_traits::value_to_yaml(msg.session_id, out);
    out << "\n";
  }

  // member: mocap4r2_systems
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.mocap4r2_systems.size() == 0) {
      out << "mocap4r2_systems: []\n";
    } else {
      out << "mocap4r2_systems:\n";
      for (auto item : msg.mocap4r2_systems) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Control & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace mocap4r2_control_msgs

namespace rosidl_generator_traits
{

[[deprecated("use mocap4r2_control_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const mocap4r2_control_msgs::msg::Control & msg,
  std::ostream & out, size_t indentation = 0)
{
  mocap4r2_control_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mocap4r2_control_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const mocap4r2_control_msgs::msg::Control & msg)
{
  return mocap4r2_control_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<mocap4r2_control_msgs::msg::Control>()
{
  return "mocap4r2_control_msgs::msg::Control";
}

template<>
inline const char * name<mocap4r2_control_msgs::msg::Control>()
{
  return "mocap4r2_control_msgs/msg/Control";
}

template<>
struct has_fixed_size<mocap4r2_control_msgs::msg::Control>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<mocap4r2_control_msgs::msg::Control>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<mocap4r2_control_msgs::msg::Control>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MOCAP4R2_CONTROL_MSGS__MSG__DETAIL__CONTROL__TRAITS_HPP_
