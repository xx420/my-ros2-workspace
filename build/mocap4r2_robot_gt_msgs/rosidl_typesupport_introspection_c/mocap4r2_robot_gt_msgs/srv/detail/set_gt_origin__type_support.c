// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from mocap4r2_robot_gt_msgs:srv/SetGTOrigin.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "mocap4r2_robot_gt_msgs/srv/detail/set_gt_origin__rosidl_typesupport_introspection_c.h"
#include "mocap4r2_robot_gt_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "mocap4r2_robot_gt_msgs/srv/detail/set_gt_origin__functions.h"
#include "mocap4r2_robot_gt_msgs/srv/detail/set_gt_origin__struct.h"


// Include directives for member types
// Member `origin_pose`
#include "geometry_msgs/msg/pose.h"
// Member `origin_pose`
#include "geometry_msgs/msg/detail/pose__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void mocap4r2_robot_gt_msgs__srv__SetGTOrigin_Request__rosidl_typesupport_introspection_c__SetGTOrigin_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  mocap4r2_robot_gt_msgs__srv__SetGTOrigin_Request__init(message_memory);
}

void mocap4r2_robot_gt_msgs__srv__SetGTOrigin_Request__rosidl_typesupport_introspection_c__SetGTOrigin_Request_fini_function(void * message_memory)
{
  mocap4r2_robot_gt_msgs__srv__SetGTOrigin_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember mocap4r2_robot_gt_msgs__srv__SetGTOrigin_Request__rosidl_typesupport_introspection_c__SetGTOrigin_Request_message_member_array[2] = {
  {
    "current_is_origin",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mocap4r2_robot_gt_msgs__srv__SetGTOrigin_Request, current_is_origin),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "origin_pose",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mocap4r2_robot_gt_msgs__srv__SetGTOrigin_Request, origin_pose),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers mocap4r2_robot_gt_msgs__srv__SetGTOrigin_Request__rosidl_typesupport_introspection_c__SetGTOrigin_Request_message_members = {
  "mocap4r2_robot_gt_msgs__srv",  // message namespace
  "SetGTOrigin_Request",  // message name
  2,  // number of fields
  sizeof(mocap4r2_robot_gt_msgs__srv__SetGTOrigin_Request),
  mocap4r2_robot_gt_msgs__srv__SetGTOrigin_Request__rosidl_typesupport_introspection_c__SetGTOrigin_Request_message_member_array,  // message members
  mocap4r2_robot_gt_msgs__srv__SetGTOrigin_Request__rosidl_typesupport_introspection_c__SetGTOrigin_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  mocap4r2_robot_gt_msgs__srv__SetGTOrigin_Request__rosidl_typesupport_introspection_c__SetGTOrigin_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t mocap4r2_robot_gt_msgs__srv__SetGTOrigin_Request__rosidl_typesupport_introspection_c__SetGTOrigin_Request_message_type_support_handle = {
  0,
  &mocap4r2_robot_gt_msgs__srv__SetGTOrigin_Request__rosidl_typesupport_introspection_c__SetGTOrigin_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_mocap4r2_robot_gt_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mocap4r2_robot_gt_msgs, srv, SetGTOrigin_Request)() {
  mocap4r2_robot_gt_msgs__srv__SetGTOrigin_Request__rosidl_typesupport_introspection_c__SetGTOrigin_Request_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Pose)();
  if (!mocap4r2_robot_gt_msgs__srv__SetGTOrigin_Request__rosidl_typesupport_introspection_c__SetGTOrigin_Request_message_type_support_handle.typesupport_identifier) {
    mocap4r2_robot_gt_msgs__srv__SetGTOrigin_Request__rosidl_typesupport_introspection_c__SetGTOrigin_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &mocap4r2_robot_gt_msgs__srv__SetGTOrigin_Request__rosidl_typesupport_introspection_c__SetGTOrigin_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "mocap4r2_robot_gt_msgs/srv/detail/set_gt_origin__rosidl_typesupport_introspection_c.h"
// already included above
// #include "mocap4r2_robot_gt_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "mocap4r2_robot_gt_msgs/srv/detail/set_gt_origin__functions.h"
// already included above
// #include "mocap4r2_robot_gt_msgs/srv/detail/set_gt_origin__struct.h"


// Include directives for member types
// Member `error_msg`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void mocap4r2_robot_gt_msgs__srv__SetGTOrigin_Response__rosidl_typesupport_introspection_c__SetGTOrigin_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  mocap4r2_robot_gt_msgs__srv__SetGTOrigin_Response__init(message_memory);
}

void mocap4r2_robot_gt_msgs__srv__SetGTOrigin_Response__rosidl_typesupport_introspection_c__SetGTOrigin_Response_fini_function(void * message_memory)
{
  mocap4r2_robot_gt_msgs__srv__SetGTOrigin_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember mocap4r2_robot_gt_msgs__srv__SetGTOrigin_Response__rosidl_typesupport_introspection_c__SetGTOrigin_Response_message_member_array[2] = {
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mocap4r2_robot_gt_msgs__srv__SetGTOrigin_Response, success),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "error_msg",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mocap4r2_robot_gt_msgs__srv__SetGTOrigin_Response, error_msg),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers mocap4r2_robot_gt_msgs__srv__SetGTOrigin_Response__rosidl_typesupport_introspection_c__SetGTOrigin_Response_message_members = {
  "mocap4r2_robot_gt_msgs__srv",  // message namespace
  "SetGTOrigin_Response",  // message name
  2,  // number of fields
  sizeof(mocap4r2_robot_gt_msgs__srv__SetGTOrigin_Response),
  mocap4r2_robot_gt_msgs__srv__SetGTOrigin_Response__rosidl_typesupport_introspection_c__SetGTOrigin_Response_message_member_array,  // message members
  mocap4r2_robot_gt_msgs__srv__SetGTOrigin_Response__rosidl_typesupport_introspection_c__SetGTOrigin_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  mocap4r2_robot_gt_msgs__srv__SetGTOrigin_Response__rosidl_typesupport_introspection_c__SetGTOrigin_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t mocap4r2_robot_gt_msgs__srv__SetGTOrigin_Response__rosidl_typesupport_introspection_c__SetGTOrigin_Response_message_type_support_handle = {
  0,
  &mocap4r2_robot_gt_msgs__srv__SetGTOrigin_Response__rosidl_typesupport_introspection_c__SetGTOrigin_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_mocap4r2_robot_gt_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mocap4r2_robot_gt_msgs, srv, SetGTOrigin_Response)() {
  if (!mocap4r2_robot_gt_msgs__srv__SetGTOrigin_Response__rosidl_typesupport_introspection_c__SetGTOrigin_Response_message_type_support_handle.typesupport_identifier) {
    mocap4r2_robot_gt_msgs__srv__SetGTOrigin_Response__rosidl_typesupport_introspection_c__SetGTOrigin_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &mocap4r2_robot_gt_msgs__srv__SetGTOrigin_Response__rosidl_typesupport_introspection_c__SetGTOrigin_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "mocap4r2_robot_gt_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "mocap4r2_robot_gt_msgs/srv/detail/set_gt_origin__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers mocap4r2_robot_gt_msgs__srv__detail__set_gt_origin__rosidl_typesupport_introspection_c__SetGTOrigin_service_members = {
  "mocap4r2_robot_gt_msgs__srv",  // service namespace
  "SetGTOrigin",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // mocap4r2_robot_gt_msgs__srv__detail__set_gt_origin__rosidl_typesupport_introspection_c__SetGTOrigin_Request_message_type_support_handle,
  NULL  // response message
  // mocap4r2_robot_gt_msgs__srv__detail__set_gt_origin__rosidl_typesupport_introspection_c__SetGTOrigin_Response_message_type_support_handle
};

static rosidl_service_type_support_t mocap4r2_robot_gt_msgs__srv__detail__set_gt_origin__rosidl_typesupport_introspection_c__SetGTOrigin_service_type_support_handle = {
  0,
  &mocap4r2_robot_gt_msgs__srv__detail__set_gt_origin__rosidl_typesupport_introspection_c__SetGTOrigin_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mocap4r2_robot_gt_msgs, srv, SetGTOrigin_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mocap4r2_robot_gt_msgs, srv, SetGTOrigin_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_mocap4r2_robot_gt_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mocap4r2_robot_gt_msgs, srv, SetGTOrigin)() {
  if (!mocap4r2_robot_gt_msgs__srv__detail__set_gt_origin__rosidl_typesupport_introspection_c__SetGTOrigin_service_type_support_handle.typesupport_identifier) {
    mocap4r2_robot_gt_msgs__srv__detail__set_gt_origin__rosidl_typesupport_introspection_c__SetGTOrigin_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)mocap4r2_robot_gt_msgs__srv__detail__set_gt_origin__rosidl_typesupport_introspection_c__SetGTOrigin_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mocap4r2_robot_gt_msgs, srv, SetGTOrigin_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mocap4r2_robot_gt_msgs, srv, SetGTOrigin_Response)()->data;
  }

  return &mocap4r2_robot_gt_msgs__srv__detail__set_gt_origin__rosidl_typesupport_introspection_c__SetGTOrigin_service_type_support_handle;
}
