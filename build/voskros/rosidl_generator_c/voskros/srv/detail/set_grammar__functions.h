// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from voskros:srv/SetGrammar.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "voskros/srv/set_grammar.h"


#ifndef VOSKROS__SRV__DETAIL__SET_GRAMMAR__FUNCTIONS_H_
#define VOSKROS__SRV__DETAIL__SET_GRAMMAR__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/action_type_support_struct.h"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_runtime_c/service_type_support_struct.h"
#include "rosidl_runtime_c/type_description/type_description__struct.h"
#include "rosidl_runtime_c/type_description/type_source__struct.h"
#include "rosidl_runtime_c/type_hash.h"
#include "rosidl_runtime_c/visibility_control.h"
#include "voskros/msg/rosidl_generator_c__visibility_control.h"

#include "voskros/srv/detail/set_grammar__struct.h"

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_voskros
const rosidl_type_hash_t *
voskros__srv__SetGrammar__get_type_hash(
  const rosidl_service_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_voskros
const rosidl_runtime_c__type_description__TypeDescription *
voskros__srv__SetGrammar__get_type_description(
  const rosidl_service_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_voskros
const rosidl_runtime_c__type_description__TypeSource *
voskros__srv__SetGrammar__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_voskros
const rosidl_runtime_c__type_description__TypeSource__Sequence *
voskros__srv__SetGrammar__get_type_description_sources(
  const rosidl_service_type_support_t * type_support);

/// Initialize srv/SetGrammar message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * voskros__srv__SetGrammar_Request
 * )) before or use
 * voskros__srv__SetGrammar_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_voskros
bool
voskros__srv__SetGrammar_Request__init(voskros__srv__SetGrammar_Request * msg);

/// Finalize srv/SetGrammar message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_voskros
void
voskros__srv__SetGrammar_Request__fini(voskros__srv__SetGrammar_Request * msg);

/// Create srv/SetGrammar message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * voskros__srv__SetGrammar_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_voskros
voskros__srv__SetGrammar_Request *
voskros__srv__SetGrammar_Request__create(void);

/// Destroy srv/SetGrammar message.
/**
 * It calls
 * voskros__srv__SetGrammar_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_voskros
void
voskros__srv__SetGrammar_Request__destroy(voskros__srv__SetGrammar_Request * msg);

/// Check for srv/SetGrammar message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_voskros
bool
voskros__srv__SetGrammar_Request__are_equal(const voskros__srv__SetGrammar_Request * lhs, const voskros__srv__SetGrammar_Request * rhs);

/// Copy a srv/SetGrammar message.
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
ROSIDL_GENERATOR_C_PUBLIC_voskros
bool
voskros__srv__SetGrammar_Request__copy(
  const voskros__srv__SetGrammar_Request * input,
  voskros__srv__SetGrammar_Request * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_voskros
const rosidl_type_hash_t *
voskros__srv__SetGrammar_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_voskros
const rosidl_runtime_c__type_description__TypeDescription *
voskros__srv__SetGrammar_Request__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_voskros
const rosidl_runtime_c__type_description__TypeSource *
voskros__srv__SetGrammar_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_voskros
const rosidl_runtime_c__type_description__TypeSource__Sequence *
voskros__srv__SetGrammar_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of srv/SetGrammar messages.
/**
 * It allocates the memory for the number of elements and calls
 * voskros__srv__SetGrammar_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_voskros
bool
voskros__srv__SetGrammar_Request__Sequence__init(voskros__srv__SetGrammar_Request__Sequence * array, size_t size);

/// Finalize array of srv/SetGrammar messages.
/**
 * It calls
 * voskros__srv__SetGrammar_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_voskros
void
voskros__srv__SetGrammar_Request__Sequence__fini(voskros__srv__SetGrammar_Request__Sequence * array);

/// Create array of srv/SetGrammar messages.
/**
 * It allocates the memory for the array and calls
 * voskros__srv__SetGrammar_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_voskros
voskros__srv__SetGrammar_Request__Sequence *
voskros__srv__SetGrammar_Request__Sequence__create(size_t size);

/// Destroy array of srv/SetGrammar messages.
/**
 * It calls
 * voskros__srv__SetGrammar_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_voskros
void
voskros__srv__SetGrammar_Request__Sequence__destroy(voskros__srv__SetGrammar_Request__Sequence * array);

/// Check for srv/SetGrammar message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_voskros
bool
voskros__srv__SetGrammar_Request__Sequence__are_equal(const voskros__srv__SetGrammar_Request__Sequence * lhs, const voskros__srv__SetGrammar_Request__Sequence * rhs);

/// Copy an array of srv/SetGrammar messages.
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
ROSIDL_GENERATOR_C_PUBLIC_voskros
bool
voskros__srv__SetGrammar_Request__Sequence__copy(
  const voskros__srv__SetGrammar_Request__Sequence * input,
  voskros__srv__SetGrammar_Request__Sequence * output);

/// Initialize srv/SetGrammar message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * voskros__srv__SetGrammar_Response
 * )) before or use
 * voskros__srv__SetGrammar_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_voskros
bool
voskros__srv__SetGrammar_Response__init(voskros__srv__SetGrammar_Response * msg);

/// Finalize srv/SetGrammar message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_voskros
void
voskros__srv__SetGrammar_Response__fini(voskros__srv__SetGrammar_Response * msg);

/// Create srv/SetGrammar message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * voskros__srv__SetGrammar_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_voskros
voskros__srv__SetGrammar_Response *
voskros__srv__SetGrammar_Response__create(void);

/// Destroy srv/SetGrammar message.
/**
 * It calls
 * voskros__srv__SetGrammar_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_voskros
void
voskros__srv__SetGrammar_Response__destroy(voskros__srv__SetGrammar_Response * msg);

/// Check for srv/SetGrammar message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_voskros
bool
voskros__srv__SetGrammar_Response__are_equal(const voskros__srv__SetGrammar_Response * lhs, const voskros__srv__SetGrammar_Response * rhs);

/// Copy a srv/SetGrammar message.
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
ROSIDL_GENERATOR_C_PUBLIC_voskros
bool
voskros__srv__SetGrammar_Response__copy(
  const voskros__srv__SetGrammar_Response * input,
  voskros__srv__SetGrammar_Response * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_voskros
const rosidl_type_hash_t *
voskros__srv__SetGrammar_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_voskros
const rosidl_runtime_c__type_description__TypeDescription *
voskros__srv__SetGrammar_Response__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_voskros
const rosidl_runtime_c__type_description__TypeSource *
voskros__srv__SetGrammar_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_voskros
const rosidl_runtime_c__type_description__TypeSource__Sequence *
voskros__srv__SetGrammar_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of srv/SetGrammar messages.
/**
 * It allocates the memory for the number of elements and calls
 * voskros__srv__SetGrammar_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_voskros
bool
voskros__srv__SetGrammar_Response__Sequence__init(voskros__srv__SetGrammar_Response__Sequence * array, size_t size);

/// Finalize array of srv/SetGrammar messages.
/**
 * It calls
 * voskros__srv__SetGrammar_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_voskros
void
voskros__srv__SetGrammar_Response__Sequence__fini(voskros__srv__SetGrammar_Response__Sequence * array);

/// Create array of srv/SetGrammar messages.
/**
 * It allocates the memory for the array and calls
 * voskros__srv__SetGrammar_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_voskros
voskros__srv__SetGrammar_Response__Sequence *
voskros__srv__SetGrammar_Response__Sequence__create(size_t size);

/// Destroy array of srv/SetGrammar messages.
/**
 * It calls
 * voskros__srv__SetGrammar_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_voskros
void
voskros__srv__SetGrammar_Response__Sequence__destroy(voskros__srv__SetGrammar_Response__Sequence * array);

/// Check for srv/SetGrammar message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_voskros
bool
voskros__srv__SetGrammar_Response__Sequence__are_equal(const voskros__srv__SetGrammar_Response__Sequence * lhs, const voskros__srv__SetGrammar_Response__Sequence * rhs);

/// Copy an array of srv/SetGrammar messages.
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
ROSIDL_GENERATOR_C_PUBLIC_voskros
bool
voskros__srv__SetGrammar_Response__Sequence__copy(
  const voskros__srv__SetGrammar_Response__Sequence * input,
  voskros__srv__SetGrammar_Response__Sequence * output);

/// Initialize srv/SetGrammar message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * voskros__srv__SetGrammar_Event
 * )) before or use
 * voskros__srv__SetGrammar_Event__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_voskros
bool
voskros__srv__SetGrammar_Event__init(voskros__srv__SetGrammar_Event * msg);

/// Finalize srv/SetGrammar message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_voskros
void
voskros__srv__SetGrammar_Event__fini(voskros__srv__SetGrammar_Event * msg);

/// Create srv/SetGrammar message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * voskros__srv__SetGrammar_Event__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_voskros
voskros__srv__SetGrammar_Event *
voskros__srv__SetGrammar_Event__create(void);

/// Destroy srv/SetGrammar message.
/**
 * It calls
 * voskros__srv__SetGrammar_Event__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_voskros
void
voskros__srv__SetGrammar_Event__destroy(voskros__srv__SetGrammar_Event * msg);

/// Check for srv/SetGrammar message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_voskros
bool
voskros__srv__SetGrammar_Event__are_equal(const voskros__srv__SetGrammar_Event * lhs, const voskros__srv__SetGrammar_Event * rhs);

/// Copy a srv/SetGrammar message.
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
ROSIDL_GENERATOR_C_PUBLIC_voskros
bool
voskros__srv__SetGrammar_Event__copy(
  const voskros__srv__SetGrammar_Event * input,
  voskros__srv__SetGrammar_Event * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_voskros
const rosidl_type_hash_t *
voskros__srv__SetGrammar_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_voskros
const rosidl_runtime_c__type_description__TypeDescription *
voskros__srv__SetGrammar_Event__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_voskros
const rosidl_runtime_c__type_description__TypeSource *
voskros__srv__SetGrammar_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_voskros
const rosidl_runtime_c__type_description__TypeSource__Sequence *
voskros__srv__SetGrammar_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of srv/SetGrammar messages.
/**
 * It allocates the memory for the number of elements and calls
 * voskros__srv__SetGrammar_Event__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_voskros
bool
voskros__srv__SetGrammar_Event__Sequence__init(voskros__srv__SetGrammar_Event__Sequence * array, size_t size);

/// Finalize array of srv/SetGrammar messages.
/**
 * It calls
 * voskros__srv__SetGrammar_Event__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_voskros
void
voskros__srv__SetGrammar_Event__Sequence__fini(voskros__srv__SetGrammar_Event__Sequence * array);

/// Create array of srv/SetGrammar messages.
/**
 * It allocates the memory for the array and calls
 * voskros__srv__SetGrammar_Event__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_voskros
voskros__srv__SetGrammar_Event__Sequence *
voskros__srv__SetGrammar_Event__Sequence__create(size_t size);

/// Destroy array of srv/SetGrammar messages.
/**
 * It calls
 * voskros__srv__SetGrammar_Event__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_voskros
void
voskros__srv__SetGrammar_Event__Sequence__destroy(voskros__srv__SetGrammar_Event__Sequence * array);

/// Check for srv/SetGrammar message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_voskros
bool
voskros__srv__SetGrammar_Event__Sequence__are_equal(const voskros__srv__SetGrammar_Event__Sequence * lhs, const voskros__srv__SetGrammar_Event__Sequence * rhs);

/// Copy an array of srv/SetGrammar messages.
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
ROSIDL_GENERATOR_C_PUBLIC_voskros
bool
voskros__srv__SetGrammar_Event__Sequence__copy(
  const voskros__srv__SetGrammar_Event__Sequence * input,
  voskros__srv__SetGrammar_Event__Sequence * output);
#ifdef __cplusplus
}
#endif

#endif  // VOSKROS__SRV__DETAIL__SET_GRAMMAR__FUNCTIONS_H_
