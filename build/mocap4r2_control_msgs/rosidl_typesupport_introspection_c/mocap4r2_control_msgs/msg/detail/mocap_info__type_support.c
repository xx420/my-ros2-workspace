// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from mocap4r2_control_msgs:msg/MocapInfo.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "mocap4r2_control_msgs/msg/detail/mocap_info__rosidl_typesupport_introspection_c.h"
#include "mocap4r2_control_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "mocap4r2_control_msgs/msg/detail/mocap_info__functions.h"
#include "mocap4r2_control_msgs/msg/detail/mocap_info__struct.h"


// Include directives for member types
// Member `mocap4r2_source`
// Member `topics`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void mocap4r2_control_msgs__msg__MocapInfo__rosidl_typesupport_introspection_c__MocapInfo_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  mocap4r2_control_msgs__msg__MocapInfo__init(message_memory);
}

void mocap4r2_control_msgs__msg__MocapInfo__rosidl_typesupport_introspection_c__MocapInfo_fini_function(void * message_memory)
{
  mocap4r2_control_msgs__msg__MocapInfo__fini(message_memory);
}

size_t mocap4r2_control_msgs__msg__MocapInfo__rosidl_typesupport_introspection_c__size_function__MocapInfo__topics(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * mocap4r2_control_msgs__msg__MocapInfo__rosidl_typesupport_introspection_c__get_const_function__MocapInfo__topics(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * mocap4r2_control_msgs__msg__MocapInfo__rosidl_typesupport_introspection_c__get_function__MocapInfo__topics(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void mocap4r2_control_msgs__msg__MocapInfo__rosidl_typesupport_introspection_c__fetch_function__MocapInfo__topics(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    mocap4r2_control_msgs__msg__MocapInfo__rosidl_typesupport_introspection_c__get_const_function__MocapInfo__topics(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void mocap4r2_control_msgs__msg__MocapInfo__rosidl_typesupport_introspection_c__assign_function__MocapInfo__topics(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    mocap4r2_control_msgs__msg__MocapInfo__rosidl_typesupport_introspection_c__get_function__MocapInfo__topics(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool mocap4r2_control_msgs__msg__MocapInfo__rosidl_typesupport_introspection_c__resize_function__MocapInfo__topics(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember mocap4r2_control_msgs__msg__MocapInfo__rosidl_typesupport_introspection_c__MocapInfo_message_member_array[3] = {
  {
    "mocap4r2_source",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mocap4r2_control_msgs__msg__MocapInfo, mocap4r2_source),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "ros_version_source",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mocap4r2_control_msgs__msg__MocapInfo, ros_version_source),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "topics",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mocap4r2_control_msgs__msg__MocapInfo, topics),  // bytes offset in struct
    NULL,  // default value
    mocap4r2_control_msgs__msg__MocapInfo__rosidl_typesupport_introspection_c__size_function__MocapInfo__topics,  // size() function pointer
    mocap4r2_control_msgs__msg__MocapInfo__rosidl_typesupport_introspection_c__get_const_function__MocapInfo__topics,  // get_const(index) function pointer
    mocap4r2_control_msgs__msg__MocapInfo__rosidl_typesupport_introspection_c__get_function__MocapInfo__topics,  // get(index) function pointer
    mocap4r2_control_msgs__msg__MocapInfo__rosidl_typesupport_introspection_c__fetch_function__MocapInfo__topics,  // fetch(index, &value) function pointer
    mocap4r2_control_msgs__msg__MocapInfo__rosidl_typesupport_introspection_c__assign_function__MocapInfo__topics,  // assign(index, value) function pointer
    mocap4r2_control_msgs__msg__MocapInfo__rosidl_typesupport_introspection_c__resize_function__MocapInfo__topics  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers mocap4r2_control_msgs__msg__MocapInfo__rosidl_typesupport_introspection_c__MocapInfo_message_members = {
  "mocap4r2_control_msgs__msg",  // message namespace
  "MocapInfo",  // message name
  3,  // number of fields
  sizeof(mocap4r2_control_msgs__msg__MocapInfo),
  mocap4r2_control_msgs__msg__MocapInfo__rosidl_typesupport_introspection_c__MocapInfo_message_member_array,  // message members
  mocap4r2_control_msgs__msg__MocapInfo__rosidl_typesupport_introspection_c__MocapInfo_init_function,  // function to initialize message memory (memory has to be allocated)
  mocap4r2_control_msgs__msg__MocapInfo__rosidl_typesupport_introspection_c__MocapInfo_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t mocap4r2_control_msgs__msg__MocapInfo__rosidl_typesupport_introspection_c__MocapInfo_message_type_support_handle = {
  0,
  &mocap4r2_control_msgs__msg__MocapInfo__rosidl_typesupport_introspection_c__MocapInfo_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_mocap4r2_control_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mocap4r2_control_msgs, msg, MocapInfo)() {
  if (!mocap4r2_control_msgs__msg__MocapInfo__rosidl_typesupport_introspection_c__MocapInfo_message_type_support_handle.typesupport_identifier) {
    mocap4r2_control_msgs__msg__MocapInfo__rosidl_typesupport_introspection_c__MocapInfo_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &mocap4r2_control_msgs__msg__MocapInfo__rosidl_typesupport_introspection_c__MocapInfo_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
