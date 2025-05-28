// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mocap4r2_control_msgs:msg/Control.idl
// generated code does not contain a copyright notice

#ifndef MOCAP4R2_CONTROL_MSGS__MSG__DETAIL__CONTROL__STRUCT_H_
#define MOCAP4R2_CONTROL_MSGS__MSG__DETAIL__CONTROL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'START'.
enum
{
  mocap4r2_control_msgs__msg__Control__START = 0
};

/// Constant 'ACK_START'.
enum
{
  mocap4r2_control_msgs__msg__Control__ACK_START = 1
};

/// Constant 'STOP'.
enum
{
  mocap4r2_control_msgs__msg__Control__STOP = 2
};

/// Constant 'ACK_STOP'.
enum
{
  mocap4r2_control_msgs__msg__Control__ACK_STOP = 3
};

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"
// Member 'mocap4r2_source'
// Member 'session_id'
// Member 'mocap4r2_systems'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/Control in the package mocap4r2_control_msgs.
typedef struct mocap4r2_control_msgs__msg__Control
{
  int8_t control_type;
  builtin_interfaces__msg__Time stamp;
  rosidl_runtime_c__String mocap4r2_source;
  rosidl_runtime_c__String session_id;
  rosidl_runtime_c__String__Sequence mocap4r2_systems;
} mocap4r2_control_msgs__msg__Control;

// Struct for a sequence of mocap4r2_control_msgs__msg__Control.
typedef struct mocap4r2_control_msgs__msg__Control__Sequence
{
  mocap4r2_control_msgs__msg__Control * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mocap4r2_control_msgs__msg__Control__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MOCAP4R2_CONTROL_MSGS__MSG__DETAIL__CONTROL__STRUCT_H_
