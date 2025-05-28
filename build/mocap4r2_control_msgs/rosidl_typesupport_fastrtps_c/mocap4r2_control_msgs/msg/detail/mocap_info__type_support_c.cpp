// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from mocap4r2_control_msgs:msg/MocapInfo.idl
// generated code does not contain a copyright notice
#include "mocap4r2_control_msgs/msg/detail/mocap_info__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "mocap4r2_control_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "mocap4r2_control_msgs/msg/detail/mocap_info__struct.h"
#include "mocap4r2_control_msgs/msg/detail/mocap_info__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_runtime_c/string.h"  // mocap4r2_source, topics
#include "rosidl_runtime_c/string_functions.h"  // mocap4r2_source, topics

// forward declare type support functions


using _MocapInfo__ros_msg_type = mocap4r2_control_msgs__msg__MocapInfo;

static bool _MocapInfo__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _MocapInfo__ros_msg_type * ros_message = static_cast<const _MocapInfo__ros_msg_type *>(untyped_ros_message);
  // Field name: mocap4r2_source
  {
    const rosidl_runtime_c__String * str = &ros_message->mocap4r2_source;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: ros_version_source
  {
    cdr << ros_message->ros_version_source;
  }

  // Field name: topics
  {
    size_t size = ros_message->topics.size;
    auto array_ptr = ros_message->topics.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      const rosidl_runtime_c__String * str = &array_ptr[i];
      if (str->capacity == 0 || str->capacity <= str->size) {
        fprintf(stderr, "string capacity not greater than size\n");
        return false;
      }
      if (str->data[str->size] != '\0') {
        fprintf(stderr, "string not null-terminated\n");
        return false;
      }
      cdr << str->data;
    }
  }

  return true;
}

static bool _MocapInfo__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _MocapInfo__ros_msg_type * ros_message = static_cast<_MocapInfo__ros_msg_type *>(untyped_ros_message);
  // Field name: mocap4r2_source
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->mocap4r2_source.data) {
      rosidl_runtime_c__String__init(&ros_message->mocap4r2_source);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->mocap4r2_source,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'mocap4r2_source'\n");
      return false;
    }
  }

  // Field name: ros_version_source
  {
    cdr >> ros_message->ros_version_source;
  }

  // Field name: topics
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->topics.data) {
      rosidl_runtime_c__String__Sequence__fini(&ros_message->topics);
    }
    if (!rosidl_runtime_c__String__Sequence__init(&ros_message->topics, size)) {
      fprintf(stderr, "failed to create array for field 'topics'");
      return false;
    }
    auto array_ptr = ros_message->topics.data;
    for (size_t i = 0; i < size; ++i) {
      std::string tmp;
      cdr >> tmp;
      auto & ros_i = array_ptr[i];
      if (!ros_i.data) {
        rosidl_runtime_c__String__init(&ros_i);
      }
      bool succeeded = rosidl_runtime_c__String__assign(
        &ros_i,
        tmp.c_str());
      if (!succeeded) {
        fprintf(stderr, "failed to assign string into field 'topics'\n");
        return false;
      }
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mocap4r2_control_msgs
size_t get_serialized_size_mocap4r2_control_msgs__msg__MocapInfo(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _MocapInfo__ros_msg_type * ros_message = static_cast<const _MocapInfo__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name mocap4r2_source
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->mocap4r2_source.size + 1);
  // field.name ros_version_source
  {
    size_t item_size = sizeof(ros_message->ros_version_source);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name topics
  {
    size_t array_size = ros_message->topics.size;
    auto array_ptr = ros_message->topics.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (array_ptr[index].size + 1);
    }
  }

  return current_alignment - initial_alignment;
}

static uint32_t _MocapInfo__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_mocap4r2_control_msgs__msg__MocapInfo(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mocap4r2_control_msgs
size_t max_serialized_size_mocap4r2_control_msgs__msg__MocapInfo(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: mocap4r2_source
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: ros_version_source
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: topics
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = mocap4r2_control_msgs__msg__MocapInfo;
    is_plain =
      (
      offsetof(DataType, topics) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _MocapInfo__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_mocap4r2_control_msgs__msg__MocapInfo(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_MocapInfo = {
  "mocap4r2_control_msgs::msg",
  "MocapInfo",
  _MocapInfo__cdr_serialize,
  _MocapInfo__cdr_deserialize,
  _MocapInfo__get_serialized_size,
  _MocapInfo__max_serialized_size
};

static rosidl_message_type_support_t _MocapInfo__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_MocapInfo,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mocap4r2_control_msgs, msg, MocapInfo)() {
  return &_MocapInfo__type_support;
}

#if defined(__cplusplus)
}
#endif
