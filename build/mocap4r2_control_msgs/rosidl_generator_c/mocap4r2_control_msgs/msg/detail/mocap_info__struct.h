// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mocap4r2_control_msgs:msg/MocapInfo.idl
// generated code does not contain a copyright notice

#ifndef MOCAP4R2_CONTROL_MSGS__MSG__DETAIL__MOCAP_INFO__STRUCT_H_
#define MOCAP4R2_CONTROL_MSGS__MSG__DETAIL__MOCAP_INFO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'ROS2'.
enum
{
  mocap4r2_control_msgs__msg__MocapInfo__ROS2 = 0
};

/// Constant 'ROS1'.
enum
{
  mocap4r2_control_msgs__msg__MocapInfo__ROS1 = 1
};

// Include directives for member types
// Member 'mocap4r2_source'
// Member 'topics'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/MocapInfo in the package mocap4r2_control_msgs.
typedef struct mocap4r2_control_msgs__msg__MocapInfo
{
  rosidl_runtime_c__String mocap4r2_source;
  int8_t ros_version_source;
  rosidl_runtime_c__String__Sequence topics;
} mocap4r2_control_msgs__msg__MocapInfo;

// Struct for a sequence of mocap4r2_control_msgs__msg__MocapInfo.
typedef struct mocap4r2_control_msgs__msg__MocapInfo__Sequence
{
  mocap4r2_control_msgs__msg__MocapInfo * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mocap4r2_control_msgs__msg__MocapInfo__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MOCAP4R2_CONTROL_MSGS__MSG__DETAIL__MOCAP_INFO__STRUCT_H_
