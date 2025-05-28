// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mocap4r2_control_msgs:msg/MocapInfo.idl
// generated code does not contain a copyright notice

#ifndef MOCAP4R2_CONTROL_MSGS__MSG__DETAIL__MOCAP_INFO__BUILDER_HPP_
#define MOCAP4R2_CONTROL_MSGS__MSG__DETAIL__MOCAP_INFO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mocap4r2_control_msgs/msg/detail/mocap_info__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mocap4r2_control_msgs
{

namespace msg
{

namespace builder
{

class Init_MocapInfo_topics
{
public:
  explicit Init_MocapInfo_topics(::mocap4r2_control_msgs::msg::MocapInfo & msg)
  : msg_(msg)
  {}
  ::mocap4r2_control_msgs::msg::MocapInfo topics(::mocap4r2_control_msgs::msg::MocapInfo::_topics_type arg)
  {
    msg_.topics = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mocap4r2_control_msgs::msg::MocapInfo msg_;
};

class Init_MocapInfo_ros_version_source
{
public:
  explicit Init_MocapInfo_ros_version_source(::mocap4r2_control_msgs::msg::MocapInfo & msg)
  : msg_(msg)
  {}
  Init_MocapInfo_topics ros_version_source(::mocap4r2_control_msgs::msg::MocapInfo::_ros_version_source_type arg)
  {
    msg_.ros_version_source = std::move(arg);
    return Init_MocapInfo_topics(msg_);
  }

private:
  ::mocap4r2_control_msgs::msg::MocapInfo msg_;
};

class Init_MocapInfo_mocap4r2_source
{
public:
  Init_MocapInfo_mocap4r2_source()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MocapInfo_ros_version_source mocap4r2_source(::mocap4r2_control_msgs::msg::MocapInfo::_mocap4r2_source_type arg)
  {
    msg_.mocap4r2_source = std::move(arg);
    return Init_MocapInfo_ros_version_source(msg_);
  }

private:
  ::mocap4r2_control_msgs::msg::MocapInfo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mocap4r2_control_msgs::msg::MocapInfo>()
{
  return mocap4r2_control_msgs::msg::builder::Init_MocapInfo_mocap4r2_source();
}

}  // namespace mocap4r2_control_msgs

#endif  // MOCAP4R2_CONTROL_MSGS__MSG__DETAIL__MOCAP_INFO__BUILDER_HPP_
