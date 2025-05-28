// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mocap4r2_robot_gt_msgs:srv/SetGTOrigin.idl
// generated code does not contain a copyright notice

#ifndef MOCAP4R2_ROBOT_GT_MSGS__SRV__DETAIL__SET_GT_ORIGIN__BUILDER_HPP_
#define MOCAP4R2_ROBOT_GT_MSGS__SRV__DETAIL__SET_GT_ORIGIN__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mocap4r2_robot_gt_msgs/srv/detail/set_gt_origin__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mocap4r2_robot_gt_msgs
{

namespace srv
{

namespace builder
{

class Init_SetGTOrigin_Request_origin_pose
{
public:
  explicit Init_SetGTOrigin_Request_origin_pose(::mocap4r2_robot_gt_msgs::srv::SetGTOrigin_Request & msg)
  : msg_(msg)
  {}
  ::mocap4r2_robot_gt_msgs::srv::SetGTOrigin_Request origin_pose(::mocap4r2_robot_gt_msgs::srv::SetGTOrigin_Request::_origin_pose_type arg)
  {
    msg_.origin_pose = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mocap4r2_robot_gt_msgs::srv::SetGTOrigin_Request msg_;
};

class Init_SetGTOrigin_Request_current_is_origin
{
public:
  Init_SetGTOrigin_Request_current_is_origin()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetGTOrigin_Request_origin_pose current_is_origin(::mocap4r2_robot_gt_msgs::srv::SetGTOrigin_Request::_current_is_origin_type arg)
  {
    msg_.current_is_origin = std::move(arg);
    return Init_SetGTOrigin_Request_origin_pose(msg_);
  }

private:
  ::mocap4r2_robot_gt_msgs::srv::SetGTOrigin_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::mocap4r2_robot_gt_msgs::srv::SetGTOrigin_Request>()
{
  return mocap4r2_robot_gt_msgs::srv::builder::Init_SetGTOrigin_Request_current_is_origin();
}

}  // namespace mocap4r2_robot_gt_msgs


namespace mocap4r2_robot_gt_msgs
{

namespace srv
{

namespace builder
{

class Init_SetGTOrigin_Response_error_msg
{
public:
  explicit Init_SetGTOrigin_Response_error_msg(::mocap4r2_robot_gt_msgs::srv::SetGTOrigin_Response & msg)
  : msg_(msg)
  {}
  ::mocap4r2_robot_gt_msgs::srv::SetGTOrigin_Response error_msg(::mocap4r2_robot_gt_msgs::srv::SetGTOrigin_Response::_error_msg_type arg)
  {
    msg_.error_msg = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mocap4r2_robot_gt_msgs::srv::SetGTOrigin_Response msg_;
};

class Init_SetGTOrigin_Response_success
{
public:
  Init_SetGTOrigin_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetGTOrigin_Response_error_msg success(::mocap4r2_robot_gt_msgs::srv::SetGTOrigin_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_SetGTOrigin_Response_error_msg(msg_);
  }

private:
  ::mocap4r2_robot_gt_msgs::srv::SetGTOrigin_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::mocap4r2_robot_gt_msgs::srv::SetGTOrigin_Response>()
{
  return mocap4r2_robot_gt_msgs::srv::builder::Init_SetGTOrigin_Response_success();
}

}  // namespace mocap4r2_robot_gt_msgs

#endif  // MOCAP4R2_ROBOT_GT_MSGS__SRV__DETAIL__SET_GT_ORIGIN__BUILDER_HPP_
