// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from mocap4r2_control_msgs:msg/MocapInfo.idl
// generated code does not contain a copyright notice
#include "mocap4r2_control_msgs/msg/detail/mocap_info__rosidl_typesupport_fastrtps_cpp.hpp"
#include "mocap4r2_control_msgs/msg/detail/mocap_info__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace mocap4r2_control_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mocap4r2_control_msgs
cdr_serialize(
  const mocap4r2_control_msgs::msg::MocapInfo & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: mocap4r2_source
  cdr << ros_message.mocap4r2_source;
  // Member: ros_version_source
  cdr << ros_message.ros_version_source;
  // Member: topics
  {
    cdr << ros_message.topics;
  }
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mocap4r2_control_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  mocap4r2_control_msgs::msg::MocapInfo & ros_message)
{
  // Member: mocap4r2_source
  cdr >> ros_message.mocap4r2_source;

  // Member: ros_version_source
  cdr >> ros_message.ros_version_source;

  // Member: topics
  {
    cdr >> ros_message.topics;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mocap4r2_control_msgs
get_serialized_size(
  const mocap4r2_control_msgs::msg::MocapInfo & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: mocap4r2_source
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.mocap4r2_source.size() + 1);
  // Member: ros_version_source
  {
    size_t item_size = sizeof(ros_message.ros_version_source);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: topics
  {
    size_t array_size = ros_message.topics.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (ros_message.topics[index].size() + 1);
    }
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mocap4r2_control_msgs
max_serialized_size_MocapInfo(
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


  // Member: mocap4r2_source
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

  // Member: ros_version_source
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: topics
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
    using DataType = mocap4r2_control_msgs::msg::MocapInfo;
    is_plain =
      (
      offsetof(DataType, topics) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _MocapInfo__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const mocap4r2_control_msgs::msg::MocapInfo *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _MocapInfo__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<mocap4r2_control_msgs::msg::MocapInfo *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _MocapInfo__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const mocap4r2_control_msgs::msg::MocapInfo *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _MocapInfo__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_MocapInfo(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _MocapInfo__callbacks = {
  "mocap4r2_control_msgs::msg",
  "MocapInfo",
  _MocapInfo__cdr_serialize,
  _MocapInfo__cdr_deserialize,
  _MocapInfo__get_serialized_size,
  _MocapInfo__max_serialized_size
};

static rosidl_message_type_support_t _MocapInfo__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_MocapInfo__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace mocap4r2_control_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_mocap4r2_control_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<mocap4r2_control_msgs::msg::MocapInfo>()
{
  return &mocap4r2_control_msgs::msg::typesupport_fastrtps_cpp::_MocapInfo__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, mocap4r2_control_msgs, msg, MocapInfo)() {
  return &mocap4r2_control_msgs::msg::typesupport_fastrtps_cpp::_MocapInfo__handle;
}

#ifdef __cplusplus
}
#endif
