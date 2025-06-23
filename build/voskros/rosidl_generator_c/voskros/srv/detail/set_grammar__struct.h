// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from voskros:srv/SetGrammar.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "voskros/srv/set_grammar.h"


#ifndef VOSKROS__SRV__DETAIL__SET_GRAMMAR__STRUCT_H_
#define VOSKROS__SRV__DETAIL__SET_GRAMMAR__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'list'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/SetGrammar in the package voskros.
typedef struct voskros__srv__SetGrammar_Request
{
  rosidl_runtime_c__String__Sequence list;
} voskros__srv__SetGrammar_Request;

// Struct for a sequence of voskros__srv__SetGrammar_Request.
typedef struct voskros__srv__SetGrammar_Request__Sequence
{
  voskros__srv__SetGrammar_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} voskros__srv__SetGrammar_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'error'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/SetGrammar in the package voskros.
typedef struct voskros__srv__SetGrammar_Response
{
  rosidl_runtime_c__String error;
} voskros__srv__SetGrammar_Response;

// Struct for a sequence of voskros__srv__SetGrammar_Response.
typedef struct voskros__srv__SetGrammar_Response__Sequence
{
  voskros__srv__SetGrammar_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} voskros__srv__SetGrammar_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  voskros__srv__SetGrammar_Event__request__MAX_SIZE = 1
};
// response
enum
{
  voskros__srv__SetGrammar_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/SetGrammar in the package voskros.
typedef struct voskros__srv__SetGrammar_Event
{
  service_msgs__msg__ServiceEventInfo info;
  voskros__srv__SetGrammar_Request__Sequence request;
  voskros__srv__SetGrammar_Response__Sequence response;
} voskros__srv__SetGrammar_Event;

// Struct for a sequence of voskros__srv__SetGrammar_Event.
typedef struct voskros__srv__SetGrammar_Event__Sequence
{
  voskros__srv__SetGrammar_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} voskros__srv__SetGrammar_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // VOSKROS__SRV__DETAIL__SET_GRAMMAR__STRUCT_H_
