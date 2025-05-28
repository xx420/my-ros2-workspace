// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mocap4r2_marker_viz_srvs:srv/SetMarkerColor.idl
// generated code does not contain a copyright notice

#ifndef MOCAP4R2_MARKER_VIZ_SRVS__SRV__DETAIL__SET_MARKER_COLOR__BUILDER_HPP_
#define MOCAP4R2_MARKER_VIZ_SRVS__SRV__DETAIL__SET_MARKER_COLOR__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mocap4r2_marker_viz_srvs/srv/detail/set_marker_color__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mocap4r2_marker_viz_srvs
{

namespace srv
{

namespace builder
{

class Init_SetMarkerColor_Request_color
{
public:
  explicit Init_SetMarkerColor_Request_color(::mocap4r2_marker_viz_srvs::srv::SetMarkerColor_Request & msg)
  : msg_(msg)
  {}
  ::mocap4r2_marker_viz_srvs::srv::SetMarkerColor_Request color(::mocap4r2_marker_viz_srvs::srv::SetMarkerColor_Request::_color_type arg)
  {
    msg_.color = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mocap4r2_marker_viz_srvs::srv::SetMarkerColor_Request msg_;
};

class Init_SetMarkerColor_Request_id
{
public:
  Init_SetMarkerColor_Request_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetMarkerColor_Request_color id(::mocap4r2_marker_viz_srvs::srv::SetMarkerColor_Request::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_SetMarkerColor_Request_color(msg_);
  }

private:
  ::mocap4r2_marker_viz_srvs::srv::SetMarkerColor_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::mocap4r2_marker_viz_srvs::srv::SetMarkerColor_Request>()
{
  return mocap4r2_marker_viz_srvs::srv::builder::Init_SetMarkerColor_Request_id();
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
auto build<::mocap4r2_marker_viz_srvs::srv::SetMarkerColor_Response>()
{
  return ::mocap4r2_marker_viz_srvs::srv::SetMarkerColor_Response(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace mocap4r2_marker_viz_srvs

#endif  // MOCAP4R2_MARKER_VIZ_SRVS__SRV__DETAIL__SET_MARKER_COLOR__BUILDER_HPP_
