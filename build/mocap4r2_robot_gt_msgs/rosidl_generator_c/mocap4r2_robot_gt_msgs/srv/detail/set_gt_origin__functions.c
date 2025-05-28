// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from mocap4r2_robot_gt_msgs:srv/SetGTOrigin.idl
// generated code does not contain a copyright notice
#include "mocap4r2_robot_gt_msgs/srv/detail/set_gt_origin__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `origin_pose`
#include "geometry_msgs/msg/detail/pose__functions.h"

bool
mocap4r2_robot_gt_msgs__srv__SetGTOrigin_Request__init(mocap4r2_robot_gt_msgs__srv__SetGTOrigin_Request * msg)
{
  if (!msg) {
    return false;
  }
  // current_is_origin
  msg->current_is_origin = false;
  // origin_pose
  if (!geometry_msgs__msg__Pose__init(&msg->origin_pose)) {
    mocap4r2_robot_gt_msgs__srv__SetGTOrigin_Request__fini(msg);
    return false;
  }
  return true;
}

void
mocap4r2_robot_gt_msgs__srv__SetGTOrigin_Request__fini(mocap4r2_robot_gt_msgs__srv__SetGTOrigin_Request * msg)
{
  if (!msg) {
    return;
  }
  // current_is_origin
  // origin_pose
  geometry_msgs__msg__Pose__fini(&msg->origin_pose);
}

bool
mocap4r2_robot_gt_msgs__srv__SetGTOrigin_Request__are_equal(const mocap4r2_robot_gt_msgs__srv__SetGTOrigin_Request * lhs, const mocap4r2_robot_gt_msgs__srv__SetGTOrigin_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // current_is_origin
  if (lhs->current_is_origin != rhs->current_is_origin) {
    return false;
  }
  // origin_pose
  if (!geometry_msgs__msg__Pose__are_equal(
      &(lhs->origin_pose), &(rhs->origin_pose)))
  {
    return false;
  }
  return true;
}

bool
mocap4r2_robot_gt_msgs__srv__SetGTOrigin_Request__copy(
  const mocap4r2_robot_gt_msgs__srv__SetGTOrigin_Request * input,
  mocap4r2_robot_gt_msgs__srv__SetGTOrigin_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // current_is_origin
  output->current_is_origin = input->current_is_origin;
  // origin_pose
  if (!geometry_msgs__msg__Pose__copy(
      &(input->origin_pose), &(output->origin_pose)))
  {
    return false;
  }
  return true;
}

mocap4r2_robot_gt_msgs__srv__SetGTOrigin_Request *
mocap4r2_robot_gt_msgs__srv__SetGTOrigin_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mocap4r2_robot_gt_msgs__srv__SetGTOrigin_Request * msg = (mocap4r2_robot_gt_msgs__srv__SetGTOrigin_Request *)allocator.allocate(sizeof(mocap4r2_robot_gt_msgs__srv__SetGTOrigin_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mocap4r2_robot_gt_msgs__srv__SetGTOrigin_Request));
  bool success = mocap4r2_robot_gt_msgs__srv__SetGTOrigin_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mocap4r2_robot_gt_msgs__srv__SetGTOrigin_Request__destroy(mocap4r2_robot_gt_msgs__srv__SetGTOrigin_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mocap4r2_robot_gt_msgs__srv__SetGTOrigin_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mocap4r2_robot_gt_msgs__srv__SetGTOrigin_Request__Sequence__init(mocap4r2_robot_gt_msgs__srv__SetGTOrigin_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mocap4r2_robot_gt_msgs__srv__SetGTOrigin_Request * data = NULL;

  if (size) {
    data = (mocap4r2_robot_gt_msgs__srv__SetGTOrigin_Request *)allocator.zero_allocate(size, sizeof(mocap4r2_robot_gt_msgs__srv__SetGTOrigin_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mocap4r2_robot_gt_msgs__srv__SetGTOrigin_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mocap4r2_robot_gt_msgs__srv__SetGTOrigin_Request__fini(&data[i - 1]);
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
mocap4r2_robot_gt_msgs__srv__SetGTOrigin_Request__Sequence__fini(mocap4r2_robot_gt_msgs__srv__SetGTOrigin_Request__Sequence * array)
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
      mocap4r2_robot_gt_msgs__srv__SetGTOrigin_Request__fini(&array->data[i]);
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

mocap4r2_robot_gt_msgs__srv__SetGTOrigin_Request__Sequence *
mocap4r2_robot_gt_msgs__srv__SetGTOrigin_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mocap4r2_robot_gt_msgs__srv__SetGTOrigin_Request__Sequence * array = (mocap4r2_robot_gt_msgs__srv__SetGTOrigin_Request__Sequence *)allocator.allocate(sizeof(mocap4r2_robot_gt_msgs__srv__SetGTOrigin_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mocap4r2_robot_gt_msgs__srv__SetGTOrigin_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mocap4r2_robot_gt_msgs__srv__SetGTOrigin_Request__Sequence__destroy(mocap4r2_robot_gt_msgs__srv__SetGTOrigin_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mocap4r2_robot_gt_msgs__srv__SetGTOrigin_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mocap4r2_robot_gt_msgs__srv__SetGTOrigin_Request__Sequence__are_equal(const mocap4r2_robot_gt_msgs__srv__SetGTOrigin_Request__Sequence * lhs, const mocap4r2_robot_gt_msgs__srv__SetGTOrigin_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mocap4r2_robot_gt_msgs__srv__SetGTOrigin_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mocap4r2_robot_gt_msgs__srv__SetGTOrigin_Request__Sequence__copy(
  const mocap4r2_robot_gt_msgs__srv__SetGTOrigin_Request__Sequence * input,
  mocap4r2_robot_gt_msgs__srv__SetGTOrigin_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mocap4r2_robot_gt_msgs__srv__SetGTOrigin_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mocap4r2_robot_gt_msgs__srv__SetGTOrigin_Request * data =
      (mocap4r2_robot_gt_msgs__srv__SetGTOrigin_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mocap4r2_robot_gt_msgs__srv__SetGTOrigin_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mocap4r2_robot_gt_msgs__srv__SetGTOrigin_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mocap4r2_robot_gt_msgs__srv__SetGTOrigin_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `error_msg`
#include "rosidl_runtime_c/string_functions.h"

bool
mocap4r2_robot_gt_msgs__srv__SetGTOrigin_Response__init(mocap4r2_robot_gt_msgs__srv__SetGTOrigin_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  // error_msg
  if (!rosidl_runtime_c__String__init(&msg->error_msg)) {
    mocap4r2_robot_gt_msgs__srv__SetGTOrigin_Response__fini(msg);
    return false;
  }
  return true;
}

void
mocap4r2_robot_gt_msgs__srv__SetGTOrigin_Response__fini(mocap4r2_robot_gt_msgs__srv__SetGTOrigin_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
  // error_msg
  rosidl_runtime_c__String__fini(&msg->error_msg);
}

bool
mocap4r2_robot_gt_msgs__srv__SetGTOrigin_Response__are_equal(const mocap4r2_robot_gt_msgs__srv__SetGTOrigin_Response * lhs, const mocap4r2_robot_gt_msgs__srv__SetGTOrigin_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  // error_msg
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->error_msg), &(rhs->error_msg)))
  {
    return false;
  }
  return true;
}

bool
mocap4r2_robot_gt_msgs__srv__SetGTOrigin_Response__copy(
  const mocap4r2_robot_gt_msgs__srv__SetGTOrigin_Response * input,
  mocap4r2_robot_gt_msgs__srv__SetGTOrigin_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  output->success = input->success;
  // error_msg
  if (!rosidl_runtime_c__String__copy(
      &(input->error_msg), &(output->error_msg)))
  {
    return false;
  }
  return true;
}

mocap4r2_robot_gt_msgs__srv__SetGTOrigin_Response *
mocap4r2_robot_gt_msgs__srv__SetGTOrigin_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mocap4r2_robot_gt_msgs__srv__SetGTOrigin_Response * msg = (mocap4r2_robot_gt_msgs__srv__SetGTOrigin_Response *)allocator.allocate(sizeof(mocap4r2_robot_gt_msgs__srv__SetGTOrigin_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mocap4r2_robot_gt_msgs__srv__SetGTOrigin_Response));
  bool success = mocap4r2_robot_gt_msgs__srv__SetGTOrigin_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mocap4r2_robot_gt_msgs__srv__SetGTOrigin_Response__destroy(mocap4r2_robot_gt_msgs__srv__SetGTOrigin_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mocap4r2_robot_gt_msgs__srv__SetGTOrigin_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mocap4r2_robot_gt_msgs__srv__SetGTOrigin_Response__Sequence__init(mocap4r2_robot_gt_msgs__srv__SetGTOrigin_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mocap4r2_robot_gt_msgs__srv__SetGTOrigin_Response * data = NULL;

  if (size) {
    data = (mocap4r2_robot_gt_msgs__srv__SetGTOrigin_Response *)allocator.zero_allocate(size, sizeof(mocap4r2_robot_gt_msgs__srv__SetGTOrigin_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mocap4r2_robot_gt_msgs__srv__SetGTOrigin_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mocap4r2_robot_gt_msgs__srv__SetGTOrigin_Response__fini(&data[i - 1]);
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
mocap4r2_robot_gt_msgs__srv__SetGTOrigin_Response__Sequence__fini(mocap4r2_robot_gt_msgs__srv__SetGTOrigin_Response__Sequence * array)
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
      mocap4r2_robot_gt_msgs__srv__SetGTOrigin_Response__fini(&array->data[i]);
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

mocap4r2_robot_gt_msgs__srv__SetGTOrigin_Response__Sequence *
mocap4r2_robot_gt_msgs__srv__SetGTOrigin_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mocap4r2_robot_gt_msgs__srv__SetGTOrigin_Response__Sequence * array = (mocap4r2_robot_gt_msgs__srv__SetGTOrigin_Response__Sequence *)allocator.allocate(sizeof(mocap4r2_robot_gt_msgs__srv__SetGTOrigin_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mocap4r2_robot_gt_msgs__srv__SetGTOrigin_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mocap4r2_robot_gt_msgs__srv__SetGTOrigin_Response__Sequence__destroy(mocap4r2_robot_gt_msgs__srv__SetGTOrigin_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mocap4r2_robot_gt_msgs__srv__SetGTOrigin_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mocap4r2_robot_gt_msgs__srv__SetGTOrigin_Response__Sequence__are_equal(const mocap4r2_robot_gt_msgs__srv__SetGTOrigin_Response__Sequence * lhs, const mocap4r2_robot_gt_msgs__srv__SetGTOrigin_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mocap4r2_robot_gt_msgs__srv__SetGTOrigin_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mocap4r2_robot_gt_msgs__srv__SetGTOrigin_Response__Sequence__copy(
  const mocap4r2_robot_gt_msgs__srv__SetGTOrigin_Response__Sequence * input,
  mocap4r2_robot_gt_msgs__srv__SetGTOrigin_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mocap4r2_robot_gt_msgs__srv__SetGTOrigin_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mocap4r2_robot_gt_msgs__srv__SetGTOrigin_Response * data =
      (mocap4r2_robot_gt_msgs__srv__SetGTOrigin_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mocap4r2_robot_gt_msgs__srv__SetGTOrigin_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mocap4r2_robot_gt_msgs__srv__SetGTOrigin_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mocap4r2_robot_gt_msgs__srv__SetGTOrigin_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
