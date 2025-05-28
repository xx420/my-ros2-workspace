// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mocap4r2_marker_viz_srvs:srv/ResetMarkerColor.idl
// generated code does not contain a copyright notice

#ifndef MOCAP4R2_MARKER_VIZ_SRVS__SRV__DETAIL__RESET_MARKER_COLOR__STRUCT_H_
#define MOCAP4R2_MARKER_VIZ_SRVS__SRV__DETAIL__RESET_MARKER_COLOR__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'id'
#include "std_msgs/msg/detail/int32__struct.h"

/// Struct defined in srv/ResetMarkerColor in the package mocap4r2_marker_viz_srvs.
typedef struct mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Request
{
  std_msgs__msg__Int32 id;
} mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Request;

// Struct for a sequence of mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Request.
typedef struct mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Request__Sequence
{
  mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/ResetMarkerColor in the package mocap4r2_marker_viz_srvs.
typedef struct mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Response
{
  uint8_t structure_needs_at_least_one_member;
} mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Response;

// Struct for a sequence of mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Response.
typedef struct mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Response__Sequence
{
  mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MOCAP4R2_MARKER_VIZ_SRVS__SRV__DETAIL__RESET_MARKER_COLOR__STRUCT_H_
