// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mocap4r2_msgs:msg/Markers.idl
// generated code does not contain a copyright notice

#ifndef MOCAP4R2_MSGS__MSG__DETAIL__MARKERS__STRUCT_H_
#define MOCAP4R2_MSGS__MSG__DETAIL__MARKERS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'markers'
#include "mocap4r2_msgs/msg/detail/marker__struct.h"

/// Struct defined in msg/Markers in the package mocap4r2_msgs.
typedef struct mocap4r2_msgs__msg__Markers
{
  std_msgs__msg__Header header;
  uint32_t frame_number;
  mocap4r2_msgs__msg__Marker__Sequence markers;
} mocap4r2_msgs__msg__Markers;

// Struct for a sequence of mocap4r2_msgs__msg__Markers.
typedef struct mocap4r2_msgs__msg__Markers__Sequence
{
  mocap4r2_msgs__msg__Markers * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mocap4r2_msgs__msg__Markers__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MOCAP4R2_MSGS__MSG__DETAIL__MARKERS__STRUCT_H_
