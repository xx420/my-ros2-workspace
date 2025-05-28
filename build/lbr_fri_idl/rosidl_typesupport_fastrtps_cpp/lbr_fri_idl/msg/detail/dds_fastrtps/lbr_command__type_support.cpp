// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from lbr_fri_idl:msg/LBRCommand.idl
// generated code does not contain a copyright notice
#include "lbr_fri_idl/msg/detail/lbr_command__rosidl_typesupport_fastrtps_cpp.hpp"
#include "lbr_fri_idl/msg/detail/lbr_command__struct.hpp"

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

namespace lbr_fri_idl
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_lbr_fri_idl
cdr_serialize(
  const lbr_fri_idl::msg::LBRCommand & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: joint_position
  {
    cdr << ros_message.joint_position;
  }
  // Member: torque
  {
    cdr << ros_message.torque;
  }
  // Member: wrench
  {
    cdr << ros_message.wrench;
  }
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_lbr_fri_idl
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  lbr_fri_idl::msg::LBRCommand & ros_message)
{
  // Member: joint_position
  {
    cdr >> ros_message.joint_position;
  }

  // Member: torque
  {
    cdr >> ros_message.torque;
  }

  // Member: wrench
  {
    cdr >> ros_message.wrench;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_lbr_fri_idl
get_serialized_size(
  const lbr_fri_idl::msg::LBRCommand & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: joint_position
  {
    size_t array_size = 7;
    size_t item_size = sizeof(ros_message.joint_position[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: torque
  {
    size_t array_size = 7;
    size_t item_size = sizeof(ros_message.torque[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: wrench
  {
    size_t array_size = 6;
    size_t item_size = sizeof(ros_message.wrench[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_lbr_fri_idl
max_serialized_size_LBRCommand(
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


  // Member: joint_position
  {
    size_t array_size = 7;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: torque
  {
    size_t array_size = 7;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: wrench
  {
    size_t array_size = 6;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = lbr_fri_idl::msg::LBRCommand;
    is_plain =
      (
      offsetof(DataType, wrench) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _LBRCommand__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const lbr_fri_idl::msg::LBRCommand *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _LBRCommand__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<lbr_fri_idl::msg::LBRCommand *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _LBRCommand__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const lbr_fri_idl::msg::LBRCommand *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _LBRCommand__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_LBRCommand(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _LBRCommand__callbacks = {
  "lbr_fri_idl::msg",
  "LBRCommand",
  _LBRCommand__cdr_serialize,
  _LBRCommand__cdr_deserialize,
  _LBRCommand__get_serialized_size,
  _LBRCommand__max_serialized_size
};

static rosidl_message_type_support_t _LBRCommand__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_LBRCommand__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace lbr_fri_idl

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_lbr_fri_idl
const rosidl_message_type_support_t *
get_message_type_support_handle<lbr_fri_idl::msg::LBRCommand>()
{
  return &lbr_fri_idl::msg::typesupport_fastrtps_cpp::_LBRCommand__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, lbr_fri_idl, msg, LBRCommand)() {
  return &lbr_fri_idl::msg::typesupport_fastrtps_cpp::_LBRCommand__handle;
}

#ifdef __cplusplus
}
#endif
