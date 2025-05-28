// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from mocap4r2_control_msgs:msg/Control.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "mocap4r2_control_msgs/msg/detail/control__rosidl_typesupport_introspection_c.h"
#include "mocap4r2_control_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "mocap4r2_control_msgs/msg/detail/control__functions.h"
#include "mocap4r2_control_msgs/msg/detail/control__struct.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/time.h"
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"
// Member `mocap4r2_source`
// Member `session_id`
// Member `mocap4r2_systems`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void mocap4r2_control_msgs__msg__Control__rosidl_typesupport_introspection_c__Control_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  mocap4r2_control_msgs__msg__Control__init(message_memory);
}

void mocap4r2_control_msgs__msg__Control__rosidl_typesupport_introspection_c__Control_fini_function(void * message_memory)
{
  mocap4r2_control_msgs__msg__Control__fini(message_memory);
}

size_t mocap4r2_control_msgs__msg__Control__rosidl_typesupport_introspection_c__size_function__Control__mocap4r2_systems(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * mocap4r2_control_msgs__msg__Control__rosidl_typesupport_introspection_c__get_const_function__Control__mocap4r2_systems(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * mocap4r2_control_msgs__msg__Control__rosidl_typesupport_introspection_c__get_function__Control__mocap4r2_systems(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void mocap4r2_control_msgs__msg__Control__rosidl_typesupport_introspection_c__fetch_function__Control__mocap4r2_systems(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    mocap4r2_control_msgs__msg__Control__rosidl_typesupport_introspection_c__get_const_function__Control__mocap4r2_systems(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void mocap4r2_control_msgs__msg__Control__rosidl_typesupport_introspection_c__assign_function__Control__mocap4r2_systems(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    mocap4r2_control_msgs__msg__Control__rosidl_typesupport_introspection_c__get_function__Control__mocap4r2_systems(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool mocap4r2_control_msgs__msg__Control__rosidl_typesupport_introspection_c__resize_function__Control__mocap4r2_systems(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember mocap4r2_control_msgs__msg__Control__rosidl_typesupport_introspection_c__Control_message_member_array[5] = {
  {
    "control_type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mocap4r2_control_msgs__msg__Control, control_type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "stamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mocap4r2_control_msgs__msg__Control, stamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "mocap4r2_source",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mocap4r2_control_msgs__msg__Control, mocap4r2_source),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "session_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mocap4r2_control_msgs__msg__Control, session_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "mocap4r2_systems",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mocap4r2_control_msgs__msg__Control, mocap4r2_systems),  // bytes offset in struct
    NULL,  // default value
    mocap4r2_control_msgs__msg__Control__rosidl_typesupport_introspection_c__size_function__Control__mocap4r2_systems,  // size() function pointer
    mocap4r2_control_msgs__msg__Control__rosidl_typesupport_introspection_c__get_const_function__Control__mocap4r2_systems,  // get_const(index) function pointer
    mocap4r2_control_msgs__msg__Control__rosidl_typesupport_introspection_c__get_function__Control__mocap4r2_systems,  // get(index) function pointer
    mocap4r2_control_msgs__msg__Control__rosidl_typesupport_introspection_c__fetch_function__Control__mocap4r2_systems,  // fetch(index, &value) function pointer
    mocap4r2_control_msgs__msg__Control__rosidl_typesupport_introspection_c__assign_function__Control__mocap4r2_systems,  // assign(index, value) function pointer
    mocap4r2_control_msgs__msg__Control__rosidl_typesupport_introspection_c__resize_function__Control__mocap4r2_systems  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers mocap4r2_control_msgs__msg__Control__rosidl_typesupport_introspection_c__Control_message_members = {
  "mocap4r2_control_msgs__msg",  // message namespace
  "Control",  // message name
  5,  // number of fields
  sizeof(mocap4r2_control_msgs__msg__Control),
  mocap4r2_control_msgs__msg__Control__rosidl_typesupport_introspection_c__Control_message_member_array,  // message members
  mocap4r2_control_msgs__msg__Control__rosidl_typesupport_introspection_c__Control_init_function,  // function to initialize message memory (memory has to be allocated)
  mocap4r2_control_msgs__msg__Control__rosidl_typesupport_introspection_c__Control_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t mocap4r2_control_msgs__msg__Control__rosidl_typesupport_introspection_c__Control_message_type_support_handle = {
  0,
  &mocap4r2_control_msgs__msg__Control__rosidl_typesupport_introspection_c__Control_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_mocap4r2_control_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mocap4r2_control_msgs, msg, Control)() {
  mocap4r2_control_msgs__msg__Control__rosidl_typesupport_introspection_c__Control_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  if (!mocap4r2_control_msgs__msg__Control__rosidl_typesupport_introspection_c__Control_message_type_support_handle.typesupport_identifier) {
    mocap4r2_control_msgs__msg__Control__rosidl_typesupport_introspection_c__Control_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &mocap4r2_control_msgs__msg__Control__rosidl_typesupport_introspection_c__Control_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
