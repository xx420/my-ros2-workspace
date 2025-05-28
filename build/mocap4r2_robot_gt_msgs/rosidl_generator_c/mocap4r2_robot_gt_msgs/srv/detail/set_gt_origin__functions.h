// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from mocap4r2_robot_gt_msgs:srv/SetGTOrigin.idl
// generated code does not contain a copyright notice

#ifndef MOCAP4R2_ROBOT_GT_MSGS__SRV__DETAIL__SET_GT_ORIGIN__FUNCTIONS_H_
#define MOCAP4R2_ROBOT_GT_MSGS__SRV__DETAIL__SET_GT_ORIGIN__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "mocap4r2_robot_gt_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "mocap4r2_robot_gt_msgs/srv/detail/set_gt_origin__struct.h"

/// Initialize srv/SetGTOrigin message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * mocap4r2_robot_gt_msgs__srv__SetGTOrigin_Request
 * )) before or use
 * mocap4r2_robot_gt_msgs__srv__SetGTOrigin_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_mocap4r2_robot_gt_msgs
bool
mocap4r2_robot_gt_msgs__srv__SetGTOrigin_Request__init(mocap4r2_robot_gt_msgs__srv__SetGTOrigin_Request * msg);

/// Finalize srv/SetGTOrigin message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mocap4r2_robot_gt_msgs
void
mocap4r2_robot_gt_msgs__srv__SetGTOrigin_Request__fini(mocap4r2_robot_gt_msgs__srv__SetGTOrigin_Request * msg);

/// Create srv/SetGTOrigin message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * mocap4r2_robot_gt_msgs__srv__SetGTOrigin_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_mocap4r2_robot_gt_msgs
mocap4r2_robot_gt_msgs__srv__SetGTOrigin_Request *
mocap4r2_robot_gt_msgs__srv__SetGTOrigin_Request__create();

/// Destroy srv/SetGTOrigin message.
/**
 * It calls
 * mocap4r2_robot_gt_msgs__srv__SetGTOrigin_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mocap4r2_robot_gt_msgs
void
mocap4r2_robot_gt_msgs__srv__SetGTOrigin_Request__destroy(mocap4r2_robot_gt_msgs__srv__SetGTOrigin_Request * msg);

/// Check for srv/SetGTOrigin message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_mocap4r2_robot_gt_msgs
bool
mocap4r2_robot_gt_msgs__srv__SetGTOrigin_Request__are_equal(const mocap4r2_robot_gt_msgs__srv__SetGTOrigin_Request * lhs, const mocap4r2_robot_gt_msgs__srv__SetGTOrigin_Request * rhs);

/// Copy a srv/SetGTOrigin message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_mocap4r2_robot_gt_msgs
bool
mocap4r2_robot_gt_msgs__srv__SetGTOrigin_Request__copy(
  const mocap4r2_robot_gt_msgs__srv__SetGTOrigin_Request * input,
  mocap4r2_robot_gt_msgs__srv__SetGTOrigin_Request * output);

/// Initialize array of srv/SetGTOrigin messages.
/**
 * It allocates the memory for the number of elements and calls
 * mocap4r2_robot_gt_msgs__srv__SetGTOrigin_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_mocap4r2_robot_gt_msgs
bool
mocap4r2_robot_gt_msgs__srv__SetGTOrigin_Request__Sequence__init(mocap4r2_robot_gt_msgs__srv__SetGTOrigin_Request__Sequence * array, size_t size);

/// Finalize array of srv/SetGTOrigin messages.
/**
 * It calls
 * mocap4r2_robot_gt_msgs__srv__SetGTOrigin_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mocap4r2_robot_gt_msgs
void
mocap4r2_robot_gt_msgs__srv__SetGTOrigin_Request__Sequence__fini(mocap4r2_robot_gt_msgs__srv__SetGTOrigin_Request__Sequence * array);

/// Create array of srv/SetGTOrigin messages.
/**
 * It allocates the memory for the array and calls
 * mocap4r2_robot_gt_msgs__srv__SetGTOrigin_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_mocap4r2_robot_gt_msgs
mocap4r2_robot_gt_msgs__srv__SetGTOrigin_Request__Sequence *
mocap4r2_robot_gt_msgs__srv__SetGTOrigin_Request__Sequence__create(size_t size);

/// Destroy array of srv/SetGTOrigin messages.
/**
 * It calls
 * mocap4r2_robot_gt_msgs__srv__SetGTOrigin_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mocap4r2_robot_gt_msgs
void
mocap4r2_robot_gt_msgs__srv__SetGTOrigin_Request__Sequence__destroy(mocap4r2_robot_gt_msgs__srv__SetGTOrigin_Request__Sequence * array);

/// Check for srv/SetGTOrigin message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_mocap4r2_robot_gt_msgs
bool
mocap4r2_robot_gt_msgs__srv__SetGTOrigin_Request__Sequence__are_equal(const mocap4r2_robot_gt_msgs__srv__SetGTOrigin_Request__Sequence * lhs, const mocap4r2_robot_gt_msgs__srv__SetGTOrigin_Request__Sequence * rhs);

/// Copy an array of srv/SetGTOrigin messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_mocap4r2_robot_gt_msgs
bool
mocap4r2_robot_gt_msgs__srv__SetGTOrigin_Request__Sequence__copy(
  const mocap4r2_robot_gt_msgs__srv__SetGTOrigin_Request__Sequence * input,
  mocap4r2_robot_gt_msgs__srv__SetGTOrigin_Request__Sequence * output);

/// Initialize srv/SetGTOrigin message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * mocap4r2_robot_gt_msgs__srv__SetGTOrigin_Response
 * )) before or use
 * mocap4r2_robot_gt_msgs__srv__SetGTOrigin_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_mocap4r2_robot_gt_msgs
bool
mocap4r2_robot_gt_msgs__srv__SetGTOrigin_Response__init(mocap4r2_robot_gt_msgs__srv__SetGTOrigin_Response * msg);

/// Finalize srv/SetGTOrigin message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mocap4r2_robot_gt_msgs
void
mocap4r2_robot_gt_msgs__srv__SetGTOrigin_Response__fini(mocap4r2_robot_gt_msgs__srv__SetGTOrigin_Response * msg);

/// Create srv/SetGTOrigin message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * mocap4r2_robot_gt_msgs__srv__SetGTOrigin_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_mocap4r2_robot_gt_msgs
mocap4r2_robot_gt_msgs__srv__SetGTOrigin_Response *
mocap4r2_robot_gt_msgs__srv__SetGTOrigin_Response__create();

/// Destroy srv/SetGTOrigin message.
/**
 * It calls
 * mocap4r2_robot_gt_msgs__srv__SetGTOrigin_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mocap4r2_robot_gt_msgs
void
mocap4r2_robot_gt_msgs__srv__SetGTOrigin_Response__destroy(mocap4r2_robot_gt_msgs__srv__SetGTOrigin_Response * msg);

/// Check for srv/SetGTOrigin message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_mocap4r2_robot_gt_msgs
bool
mocap4r2_robot_gt_msgs__srv__SetGTOrigin_Response__are_equal(const mocap4r2_robot_gt_msgs__srv__SetGTOrigin_Response * lhs, const mocap4r2_robot_gt_msgs__srv__SetGTOrigin_Response * rhs);

/// Copy a srv/SetGTOrigin message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_mocap4r2_robot_gt_msgs
bool
mocap4r2_robot_gt_msgs__srv__SetGTOrigin_Response__copy(
  const mocap4r2_robot_gt_msgs__srv__SetGTOrigin_Response * input,
  mocap4r2_robot_gt_msgs__srv__SetGTOrigin_Response * output);

/// Initialize array of srv/SetGTOrigin messages.
/**
 * It allocates the memory for the number of elements and calls
 * mocap4r2_robot_gt_msgs__srv__SetGTOrigin_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_mocap4r2_robot_gt_msgs
bool
mocap4r2_robot_gt_msgs__srv__SetGTOrigin_Response__Sequence__init(mocap4r2_robot_gt_msgs__srv__SetGTOrigin_Response__Sequence * array, size_t size);

/// Finalize array of srv/SetGTOrigin messages.
/**
 * It calls
 * mocap4r2_robot_gt_msgs__srv__SetGTOrigin_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mocap4r2_robot_gt_msgs
void
mocap4r2_robot_gt_msgs__srv__SetGTOrigin_Response__Sequence__fini(mocap4r2_robot_gt_msgs__srv__SetGTOrigin_Response__Sequence * array);

/// Create array of srv/SetGTOrigin messages.
/**
 * It allocates the memory for the array and calls
 * mocap4r2_robot_gt_msgs__srv__SetGTOrigin_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_mocap4r2_robot_gt_msgs
mocap4r2_robot_gt_msgs__srv__SetGTOrigin_Response__Sequence *
mocap4r2_robot_gt_msgs__srv__SetGTOrigin_Response__Sequence__create(size_t size);

/// Destroy array of srv/SetGTOrigin messages.
/**
 * It calls
 * mocap4r2_robot_gt_msgs__srv__SetGTOrigin_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mocap4r2_robot_gt_msgs
void
mocap4r2_robot_gt_msgs__srv__SetGTOrigin_Response__Sequence__destroy(mocap4r2_robot_gt_msgs__srv__SetGTOrigin_Response__Sequence * array);

/// Check for srv/SetGTOrigin message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_mocap4r2_robot_gt_msgs
bool
mocap4r2_robot_gt_msgs__srv__SetGTOrigin_Response__Sequence__are_equal(const mocap4r2_robot_gt_msgs__srv__SetGTOrigin_Response__Sequence * lhs, const mocap4r2_robot_gt_msgs__srv__SetGTOrigin_Response__Sequence * rhs);

/// Copy an array of srv/SetGTOrigin messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_mocap4r2_robot_gt_msgs
bool
mocap4r2_robot_gt_msgs__srv__SetGTOrigin_Response__Sequence__copy(
  const mocap4r2_robot_gt_msgs__srv__SetGTOrigin_Response__Sequence * input,
  mocap4r2_robot_gt_msgs__srv__SetGTOrigin_Response__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // MOCAP4R2_ROBOT_GT_MSGS__SRV__DETAIL__SET_GT_ORIGIN__FUNCTIONS_H_
