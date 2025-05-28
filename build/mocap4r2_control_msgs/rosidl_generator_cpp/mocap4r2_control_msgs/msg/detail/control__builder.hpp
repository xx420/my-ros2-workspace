// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mocap4r2_control_msgs:msg/Control.idl
// generated code does not contain a copyright notice

#ifndef MOCAP4R2_CONTROL_MSGS__MSG__DETAIL__CONTROL__BUILDER_HPP_
#define MOCAP4R2_CONTROL_MSGS__MSG__DETAIL__CONTROL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mocap4r2_control_msgs/msg/detail/control__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mocap4r2_control_msgs
{

namespace msg
{

namespace builder
{

class Init_Control_mocap4r2_systems
{
public:
  explicit Init_Control_mocap4r2_systems(::mocap4r2_control_msgs::msg::Control & msg)
  : msg_(msg)
  {}
  ::mocap4r2_control_msgs::msg::Control mocap4r2_systems(::mocap4r2_control_msgs::msg::Control::_mocap4r2_systems_type arg)
  {
    msg_.mocap4r2_systems = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mocap4r2_control_msgs::msg::Control msg_;
};

class Init_Control_session_id
{
public:
  explicit Init_Control_session_id(::mocap4r2_control_msgs::msg::Control & msg)
  : msg_(msg)
  {}
  Init_Control_mocap4r2_systems session_id(::mocap4r2_control_msgs::msg::Control::_session_id_type arg)
  {
    msg_.session_id = std::move(arg);
    return Init_Control_mocap4r2_systems(msg_);
  }

private:
  ::mocap4r2_control_msgs::msg::Control msg_;
};

class Init_Control_mocap4r2_source
{
public:
  explicit Init_Control_mocap4r2_source(::mocap4r2_control_msgs::msg::Control & msg)
  : msg_(msg)
  {}
  Init_Control_session_id mocap4r2_source(::mocap4r2_control_msgs::msg::Control::_mocap4r2_source_type arg)
  {
    msg_.mocap4r2_source = std::move(arg);
    return Init_Control_session_id(msg_);
  }

private:
  ::mocap4r2_control_msgs::msg::Control msg_;
};

class Init_Control_stamp
{
public:
  explicit Init_Control_stamp(::mocap4r2_control_msgs::msg::Control & msg)
  : msg_(msg)
  {}
  Init_Control_mocap4r2_source stamp(::mocap4r2_control_msgs::msg::Control::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return Init_Control_mocap4r2_source(msg_);
  }

private:
  ::mocap4r2_control_msgs::msg::Control msg_;
};

class Init_Control_control_type
{
public:
  Init_Control_control_type()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Control_stamp control_type(::mocap4r2_control_msgs::msg::Control::_control_type_type arg)
  {
    msg_.control_type = std::move(arg);
    return Init_Control_stamp(msg_);
  }

private:
  ::mocap4r2_control_msgs::msg::Control msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mocap4r2_control_msgs::msg::Control>()
{
  return mocap4r2_control_msgs::msg::builder::Init_Control_control_type();
}

}  // namespace mocap4r2_control_msgs

#endif  // MOCAP4R2_CONTROL_MSGS__MSG__DETAIL__CONTROL__BUILDER_HPP_
