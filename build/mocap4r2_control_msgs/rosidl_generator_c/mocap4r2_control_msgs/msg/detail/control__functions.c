// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from mocap4r2_control_msgs:msg/Control.idl
// generated code does not contain a copyright notice
#include "mocap4r2_control_msgs/msg/detail/control__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"
// Member `mocap4r2_source`
// Member `session_id`
// Member `mocap4r2_systems`
#include "rosidl_runtime_c/string_functions.h"

bool
mocap4r2_control_msgs__msg__Control__init(mocap4r2_control_msgs__msg__Control * msg)
{
  if (!msg) {
    return false;
  }
  // control_type
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    mocap4r2_control_msgs__msg__Control__fini(msg);
    return false;
  }
  // mocap4r2_source
  if (!rosidl_runtime_c__String__init(&msg->mocap4r2_source)) {
    mocap4r2_control_msgs__msg__Control__fini(msg);
    return false;
  }
  // session_id
  if (!rosidl_runtime_c__String__init(&msg->session_id)) {
    mocap4r2_control_msgs__msg__Control__fini(msg);
    return false;
  }
  // mocap4r2_systems
  if (!rosidl_runtime_c__String__Sequence__init(&msg->mocap4r2_systems, 0)) {
    mocap4r2_control_msgs__msg__Control__fini(msg);
    return false;
  }
  return true;
}

void
mocap4r2_control_msgs__msg__Control__fini(mocap4r2_control_msgs__msg__Control * msg)
{
  if (!msg) {
    return;
  }
  // control_type
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
  // mocap4r2_source
  rosidl_runtime_c__String__fini(&msg->mocap4r2_source);
  // session_id
  rosidl_runtime_c__String__fini(&msg->session_id);
  // mocap4r2_systems
  rosidl_runtime_c__String__Sequence__fini(&msg->mocap4r2_systems);
}

bool
mocap4r2_control_msgs__msg__Control__are_equal(const mocap4r2_control_msgs__msg__Control * lhs, const mocap4r2_control_msgs__msg__Control * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // control_type
  if (lhs->control_type != rhs->control_type) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->stamp), &(rhs->stamp)))
  {
    return false;
  }
  // mocap4r2_source
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->mocap4r2_source), &(rhs->mocap4r2_source)))
  {
    return false;
  }
  // session_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->session_id), &(rhs->session_id)))
  {
    return false;
  }
  // mocap4r2_systems
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->mocap4r2_systems), &(rhs->mocap4r2_systems)))
  {
    return false;
  }
  return true;
}

bool
mocap4r2_control_msgs__msg__Control__copy(
  const mocap4r2_control_msgs__msg__Control * input,
  mocap4r2_control_msgs__msg__Control * output)
{
  if (!input || !output) {
    return false;
  }
  // control_type
  output->control_type = input->control_type;
  // stamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->stamp), &(output->stamp)))
  {
    return false;
  }
  // mocap4r2_source
  if (!rosidl_runtime_c__String__copy(
      &(input->mocap4r2_source), &(output->mocap4r2_source)))
  {
    return false;
  }
  // session_id
  if (!rosidl_runtime_c__String__copy(
      &(input->session_id), &(output->session_id)))
  {
    return false;
  }
  // mocap4r2_systems
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->mocap4r2_systems), &(output->mocap4r2_systems)))
  {
    return false;
  }
  return true;
}

mocap4r2_control_msgs__msg__Control *
mocap4r2_control_msgs__msg__Control__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mocap4r2_control_msgs__msg__Control * msg = (mocap4r2_control_msgs__msg__Control *)allocator.allocate(sizeof(mocap4r2_control_msgs__msg__Control), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mocap4r2_control_msgs__msg__Control));
  bool success = mocap4r2_control_msgs__msg__Control__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mocap4r2_control_msgs__msg__Control__destroy(mocap4r2_control_msgs__msg__Control * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mocap4r2_control_msgs__msg__Control__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mocap4r2_control_msgs__msg__Control__Sequence__init(mocap4r2_control_msgs__msg__Control__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mocap4r2_control_msgs__msg__Control * data = NULL;

  if (size) {
    data = (mocap4r2_control_msgs__msg__Control *)allocator.zero_allocate(size, sizeof(mocap4r2_control_msgs__msg__Control), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mocap4r2_control_msgs__msg__Control__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mocap4r2_control_msgs__msg__Control__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
mocap4r2_control_msgs__msg__Control__Sequence__fini(mocap4r2_control_msgs__msg__Control__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      mocap4r2_control_msgs__msg__Control__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

mocap4r2_control_msgs__msg__Control__Sequence *
mocap4r2_control_msgs__msg__Control__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mocap4r2_control_msgs__msg__Control__Sequence * array = (mocap4r2_control_msgs__msg__Control__Sequence *)allocator.allocate(sizeof(mocap4r2_control_msgs__msg__Control__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mocap4r2_control_msgs__msg__Control__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mocap4r2_control_msgs__msg__Control__Sequence__destroy(mocap4r2_control_msgs__msg__Control__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mocap4r2_control_msgs__msg__Control__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mocap4r2_control_msgs__msg__Control__Sequence__are_equal(const mocap4r2_control_msgs__msg__Control__Sequence * lhs, const mocap4r2_control_msgs__msg__Control__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mocap4r2_control_msgs__msg__Control__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mocap4r2_control_msgs__msg__Control__Sequence__copy(
  const mocap4r2_control_msgs__msg__Control__Sequence * input,
  mocap4r2_control_msgs__msg__Control__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mocap4r2_control_msgs__msg__Control);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mocap4r2_control_msgs__msg__Control * data =
      (mocap4r2_control_msgs__msg__Control *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mocap4r2_control_msgs__msg__Control__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mocap4r2_control_msgs__msg__Control__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mocap4r2_control_msgs__msg__Control__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
