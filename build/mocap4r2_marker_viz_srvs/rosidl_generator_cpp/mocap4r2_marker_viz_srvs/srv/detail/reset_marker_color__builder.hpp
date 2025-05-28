// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mocap4r2_marker_viz_srvs:srv/ResetMarkerColor.idl
// generated code does not contain a copyright notice

#ifndef MOCAP4R2_MARKER_VIZ_SRVS__SRV__DETAIL__RESET_MARKER_COLOR__BUILDER_HPP_
#define MOCAP4R2_MARKER_VIZ_SRVS__SRV__DETAIL__RESET_MARKER_COLOR__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mocap4r2_marker_viz_srvs/srv/detail/reset_marker_color__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mocap4r2_marker_viz_srvs
{

namespace srv
{

namespace builder
{

class Init_ResetMarkerColor_Request_id
{
public:
  Init_ResetMarkerColor_Request_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::mocap4r2_marker_viz_srvs::srv::ResetMarkerColor_Request id(::mocap4r2_marker_viz_srvs::srv::ResetMarkerColor_Request::_id_type arg)
  {
    msg_.id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mocap4r2_marker_viz_srvs::srv::ResetMarkerColor_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::mocap4r2_marker_viz_srvs::srv::ResetMarkerColor_Request>()
{
  return mocap4r2_marker_viz_srvs::srv::builder::Init_ResetMarkerColor_Request_id();
}

}  // namespace mocap4r2_marker_viz_srvs


namespace mocap4r2_marker_viz_srvs
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::mocap4r2_marker_viz_srvs::srv::ResetMarkerColor_Response>()
{
  return ::mocap4r2_marker_viz_srvs::srv::ResetMarkerColor_Response(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace mocap4r2_marker_viz_srvs

#endif  // MOCAP4R2_MARKER_VIZ_SRVS__SRV__DETAIL__RESET_MARKER_COLOR__BUILDER_HPP_
