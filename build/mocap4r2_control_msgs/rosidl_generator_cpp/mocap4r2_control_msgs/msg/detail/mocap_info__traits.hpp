// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mocap4r2_control_msgs:msg/MocapInfo.idl
// generated code does not contain a copyright notice

#ifndef MOCAP4R2_CONTROL_MSGS__MSG__DETAIL__MOCAP_INFO__TRAITS_HPP_
#define MOCAP4R2_CONTROL_MSGS__MSG__DETAIL__MOCAP_INFO__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "mocap4r2_control_msgs/msg/detail/mocap_info__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace mocap4r2_control_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const MocapInfo & msg,
  std::ostream & out)
{
  out << "{";
  // member: mocap4r2_source
  {
    out << "mocap4r2_source: ";
    rosidl_generator_traits::value_to_yaml(msg.mocap4r2_source, out);
    out << ", ";
  }

  // member: ros_version_source
  {
    out << "ros_version_source: ";
    rosidl_generator_traits::value_to_yaml(msg.ros_version_source, out);
    out << ", ";
  }

  // member: topics
  {
    if (msg.topics.size() == 0) {
      out << "topics: []";
    } else {
      out << "topics: [";
      size_t pending_items = msg.topics.size();
      for (auto item : msg.topics) {
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
  const MocapInfo & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: mocap4r2_source
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mocap4r2_source: ";
    rosidl_generator_traits::value_to_yaml(msg.mocap4r2_source, out);
    out << "\n";
  }

  // member: ros_version_source
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ros_version_source: ";
    rosidl_generator_traits::value_to_yaml(msg.ros_version_source, out);
    out << "\n";
  }

  // member: topics
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.topics.size() == 0) {
      out << "topics: []\n";
    } else {
      out << "topics:\n";
      for (auto item : msg.topics) {
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

inline std::string to_yaml(const MocapInfo & msg, bool use_flow_style = false)
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
  const mocap4r2_control_msgs::msg::MocapInfo & msg,
  std::ostream & out, size_t indentation = 0)
{
  mocap4r2_control_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mocap4r2_control_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const mocap4r2_control_msgs::msg::MocapInfo & msg)
{
  return mocap4r2_control_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<mocap4r2_control_msgs::msg::MocapInfo>()
{
  return "mocap4r2_control_msgs::msg::MocapInfo";
}

template<>
inline const char * name<mocap4r2_control_msgs::msg::MocapInfo>()
{
  return "mocap4r2_control_msgs/msg/MocapInfo";
}

template<>
struct has_fixed_size<mocap4r2_control_msgs::msg::MocapInfo>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<mocap4r2_control_msgs::msg::MocapInfo>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<mocap4r2_control_msgs::msg::MocapInfo>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MOCAP4R2_CONTROL_MSGS__MSG__DETAIL__MOCAP_INFO__TRAITS_HPP_
