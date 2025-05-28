// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from mocap4r2_control_msgs:msg/MocapInfo.idl
// generated code does not contain a copyright notice
#include "mocap4r2_control_msgs/msg/detail/mocap_info__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `mocap4r2_source`
// Member `topics`
#include "rosidl_runtime_c/string_functions.h"

bool
mocap4r2_control_msgs__msg__MocapInfo__init(mocap4r2_control_msgs__msg__MocapInfo * msg)
{
  if (!msg) {
    return false;
  }
  // mocap4r2_source
  if (!rosidl_runtime_c__String__init(&msg->mocap4r2_source)) {
    mocap4r2_control_msgs__msg__MocapInfo__fini(msg);
    return false;
  }
  // ros_version_source
  // topics
  if (!rosidl_runtime_c__String__Sequence__init(&msg->topics, 0)) {
    mocap4r2_control_msgs__msg__MocapInfo__fini(msg);
    return false;
  }
  return true;
}

void
mocap4r2_control_msgs__msg__MocapInfo__fini(mocap4r2_control_msgs__msg__MocapInfo * msg)
{
  if (!msg) {
    return;
  }
  // mocap4r2_source
  rosidl_runtime_c__String__fini(&msg->mocap4r2_source);
  // ros_version_source
  // topics
  rosidl_runtime_c__String__Sequence__fini(&msg->topics);
}

bool
mocap4r2_control_msgs__msg__MocapInfo__are_equal(const mocap4r2_control_msgs__msg__MocapInfo * lhs, const mocap4r2_control_msgs__msg__MocapInfo * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // mocap4r2_source
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->mocap4r2_source), &(rhs->mocap4r2_source)))
  {
    return false;
  }
  // ros_version_source
  if (lhs->ros_version_source != rhs->ros_version_source) {
    return false;
  }
  // topics
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->topics), &(rhs->topics)))
  {
    return false;
  }
  return true;
}

bool
mocap4r2_control_msgs__msg__MocapInfo__copy(
  const mocap4r2_control_msgs__msg__MocapInfo * input,
  mocap4r2_control_msgs__msg__MocapInfo * output)
{
  if (!input || !output) {
    return false;
  }
  // mocap4r2_source
  if (!rosidl_runtime_c__String__copy(
      &(input->mocap4r2_source), &(output->mocap4r2_source)))
  {
    return false;
  }
  // ros_version_source
  output->ros_version_source = input->ros_version_source;
  // topics
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->topics), &(output->topics)))
  {
    return false;
  }
  return true;
}

mocap4r2_control_msgs__msg__MocapInfo *
mocap4r2_control_msgs__msg__MocapInfo__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mocap4r2_control_msgs__msg__MocapInfo * msg = (mocap4r2_control_msgs__msg__MocapInfo *)allocator.allocate(sizeof(mocap4r2_control_msgs__msg__MocapInfo), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mocap4r2_control_msgs__msg__MocapInfo));
  bool success = mocap4r2_control_msgs__msg__MocapInfo__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mocap4r2_control_msgs__msg__MocapInfo__destroy(mocap4r2_control_msgs__msg__MocapInfo * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mocap4r2_control_msgs__msg__MocapInfo__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mocap4r2_control_msgs__msg__MocapInfo__Sequence__init(mocap4r2_control_msgs__msg__MocapInfo__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mocap4r2_control_msgs__msg__MocapInfo * data = NULL;

  if (size) {
    data = (mocap4r2_control_msgs__msg__MocapInfo *)allocator.zero_allocate(size, sizeof(mocap4r2_control_msgs__msg__MocapInfo), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mocap4r2_control_msgs__msg__MocapInfo__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mocap4r2_control_msgs__msg__MocapInfo__fini(&data[i - 1]);
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
mocap4r2_control_msgs__msg__MocapInfo__Sequence__fini(mocap4r2_control_msgs__msg__MocapInfo__Sequence * array)
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
      mocap4r2_control_msgs__msg__MocapInfo__fini(&array->data[i]);
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

mocap4r2_control_msgs__msg__MocapInfo__Sequence *
mocap4r2_control_msgs__msg__MocapInfo__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mocap4r2_control_msgs__msg__MocapInfo__Sequence * array = (mocap4r2_control_msgs__msg__MocapInfo__Sequence *)allocator.allocate(sizeof(mocap4r2_control_msgs__msg__MocapInfo__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mocap4r2_control_msgs__msg__MocapInfo__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mocap4r2_control_msgs__msg__MocapInfo__Sequence__destroy(mocap4r2_control_msgs__msg__MocapInfo__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mocap4r2_control_msgs__msg__MocapInfo__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mocap4r2_control_msgs__msg__MocapInfo__Sequence__are_equal(const mocap4r2_control_msgs__msg__MocapInfo__Sequence * lhs, const mocap4r2_control_msgs__msg__MocapInfo__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mocap4r2_control_msgs__msg__MocapInfo__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mocap4r2_control_msgs__msg__MocapInfo__Sequence__copy(
  const mocap4r2_control_msgs__msg__MocapInfo__Sequence * input,
  mocap4r2_control_msgs__msg__MocapInfo__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mocap4r2_control_msgs__msg__MocapInfo);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mocap4r2_control_msgs__msg__MocapInfo * data =
      (mocap4r2_control_msgs__msg__MocapInfo *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mocap4r2_control_msgs__msg__MocapInfo__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mocap4r2_control_msgs__msg__MocapInfo__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mocap4r2_control_msgs__msg__MocapInfo__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
