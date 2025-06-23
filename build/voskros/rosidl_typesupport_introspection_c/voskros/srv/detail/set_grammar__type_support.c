// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from voskros:srv/SetGrammar.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "voskros/srv/detail/set_grammar__rosidl_typesupport_introspection_c.h"
#include "voskros/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "voskros/srv/detail/set_grammar__functions.h"
#include "voskros/srv/detail/set_grammar__struct.h"


// Include directives for member types
// Member `list`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void voskros__srv__SetGrammar_Request__rosidl_typesupport_introspection_c__SetGrammar_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  voskros__srv__SetGrammar_Request__init(message_memory);
}

void voskros__srv__SetGrammar_Request__rosidl_typesupport_introspection_c__SetGrammar_Request_fini_function(void * message_memory)
{
  voskros__srv__SetGrammar_Request__fini(message_memory);
}

size_t voskros__srv__SetGrammar_Request__rosidl_typesupport_introspection_c__size_function__SetGrammar_Request__list(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * voskros__srv__SetGrammar_Request__rosidl_typesupport_introspection_c__get_const_function__SetGrammar_Request__list(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * voskros__srv__SetGrammar_Request__rosidl_typesupport_introspection_c__get_function__SetGrammar_Request__list(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void voskros__srv__SetGrammar_Request__rosidl_typesupport_introspection_c__fetch_function__SetGrammar_Request__list(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    voskros__srv__SetGrammar_Request__rosidl_typesupport_introspection_c__get_const_function__SetGrammar_Request__list(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void voskros__srv__SetGrammar_Request__rosidl_typesupport_introspection_c__assign_function__SetGrammar_Request__list(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    voskros__srv__SetGrammar_Request__rosidl_typesupport_introspection_c__get_function__SetGrammar_Request__list(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool voskros__srv__SetGrammar_Request__rosidl_typesupport_introspection_c__resize_function__SetGrammar_Request__list(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember voskros__srv__SetGrammar_Request__rosidl_typesupport_introspection_c__SetGrammar_Request_message_member_array[1] = {
  {
    "list",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(voskros__srv__SetGrammar_Request, list),  // bytes offset in struct
    NULL,  // default value
    voskros__srv__SetGrammar_Request__rosidl_typesupport_introspection_c__size_function__SetGrammar_Request__list,  // size() function pointer
    voskros__srv__SetGrammar_Request__rosidl_typesupport_introspection_c__get_const_function__SetGrammar_Request__list,  // get_const(index) function pointer
    voskros__srv__SetGrammar_Request__rosidl_typesupport_introspection_c__get_function__SetGrammar_Request__list,  // get(index) function pointer
    voskros__srv__SetGrammar_Request__rosidl_typesupport_introspection_c__fetch_function__SetGrammar_Request__list,  // fetch(index, &value) function pointer
    voskros__srv__SetGrammar_Request__rosidl_typesupport_introspection_c__assign_function__SetGrammar_Request__list,  // assign(index, value) function pointer
    voskros__srv__SetGrammar_Request__rosidl_typesupport_introspection_c__resize_function__SetGrammar_Request__list  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers voskros__srv__SetGrammar_Request__rosidl_typesupport_introspection_c__SetGrammar_Request_message_members = {
  "voskros__srv",  // message namespace
  "SetGrammar_Request",  // message name
  1,  // number of fields
  sizeof(voskros__srv__SetGrammar_Request),
  false,  // has_any_key_member_
  voskros__srv__SetGrammar_Request__rosidl_typesupport_introspection_c__SetGrammar_Request_message_member_array,  // message members
  voskros__srv__SetGrammar_Request__rosidl_typesupport_introspection_c__SetGrammar_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  voskros__srv__SetGrammar_Request__rosidl_typesupport_introspection_c__SetGrammar_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t voskros__srv__SetGrammar_Request__rosidl_typesupport_introspection_c__SetGrammar_Request_message_type_support_handle = {
  0,
  &voskros__srv__SetGrammar_Request__rosidl_typesupport_introspection_c__SetGrammar_Request_message_members,
  get_message_typesupport_handle_function,
  &voskros__srv__SetGrammar_Request__get_type_hash,
  &voskros__srv__SetGrammar_Request__get_type_description,
  &voskros__srv__SetGrammar_Request__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_voskros
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, voskros, srv, SetGrammar_Request)() {
  if (!voskros__srv__SetGrammar_Request__rosidl_typesupport_introspection_c__SetGrammar_Request_message_type_support_handle.typesupport_identifier) {
    voskros__srv__SetGrammar_Request__rosidl_typesupport_introspection_c__SetGrammar_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &voskros__srv__SetGrammar_Request__rosidl_typesupport_introspection_c__SetGrammar_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "voskros/srv/detail/set_grammar__rosidl_typesupport_introspection_c.h"
// already included above
// #include "voskros/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "voskros/srv/detail/set_grammar__functions.h"
// already included above
// #include "voskros/srv/detail/set_grammar__struct.h"


// Include directives for member types
// Member `error`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void voskros__srv__SetGrammar_Response__rosidl_typesupport_introspection_c__SetGrammar_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  voskros__srv__SetGrammar_Response__init(message_memory);
}

void voskros__srv__SetGrammar_Response__rosidl_typesupport_introspection_c__SetGrammar_Response_fini_function(void * message_memory)
{
  voskros__srv__SetGrammar_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember voskros__srv__SetGrammar_Response__rosidl_typesupport_introspection_c__SetGrammar_Response_message_member_array[1] = {
  {
    "error",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(voskros__srv__SetGrammar_Response, error),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers voskros__srv__SetGrammar_Response__rosidl_typesupport_introspection_c__SetGrammar_Response_message_members = {
  "voskros__srv",  // message namespace
  "SetGrammar_Response",  // message name
  1,  // number of fields
  sizeof(voskros__srv__SetGrammar_Response),
  false,  // has_any_key_member_
  voskros__srv__SetGrammar_Response__rosidl_typesupport_introspection_c__SetGrammar_Response_message_member_array,  // message members
  voskros__srv__SetGrammar_Response__rosidl_typesupport_introspection_c__SetGrammar_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  voskros__srv__SetGrammar_Response__rosidl_typesupport_introspection_c__SetGrammar_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t voskros__srv__SetGrammar_Response__rosidl_typesupport_introspection_c__SetGrammar_Response_message_type_support_handle = {
  0,
  &voskros__srv__SetGrammar_Response__rosidl_typesupport_introspection_c__SetGrammar_Response_message_members,
  get_message_typesupport_handle_function,
  &voskros__srv__SetGrammar_Response__get_type_hash,
  &voskros__srv__SetGrammar_Response__get_type_description,
  &voskros__srv__SetGrammar_Response__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_voskros
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, voskros, srv, SetGrammar_Response)() {
  if (!voskros__srv__SetGrammar_Response__rosidl_typesupport_introspection_c__SetGrammar_Response_message_type_support_handle.typesupport_identifier) {
    voskros__srv__SetGrammar_Response__rosidl_typesupport_introspection_c__SetGrammar_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &voskros__srv__SetGrammar_Response__rosidl_typesupport_introspection_c__SetGrammar_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "voskros/srv/detail/set_grammar__rosidl_typesupport_introspection_c.h"
// already included above
// #include "voskros/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "voskros/srv/detail/set_grammar__functions.h"
// already included above
// #include "voskros/srv/detail/set_grammar__struct.h"


// Include directives for member types
// Member `info`
#include "service_msgs/msg/service_event_info.h"
// Member `info`
#include "service_msgs/msg/detail/service_event_info__rosidl_typesupport_introspection_c.h"
// Member `request`
// Member `response`
#include "voskros/srv/set_grammar.h"
// Member `request`
// Member `response`
// already included above
// #include "voskros/srv/detail/set_grammar__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void voskros__srv__SetGrammar_Event__rosidl_typesupport_introspection_c__SetGrammar_Event_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  voskros__srv__SetGrammar_Event__init(message_memory);
}

void voskros__srv__SetGrammar_Event__rosidl_typesupport_introspection_c__SetGrammar_Event_fini_function(void * message_memory)
{
  voskros__srv__SetGrammar_Event__fini(message_memory);
}

size_t voskros__srv__SetGrammar_Event__rosidl_typesupport_introspection_c__size_function__SetGrammar_Event__request(
  const void * untyped_member)
{
  const voskros__srv__SetGrammar_Request__Sequence * member =
    (const voskros__srv__SetGrammar_Request__Sequence *)(untyped_member);
  return member->size;
}

const void * voskros__srv__SetGrammar_Event__rosidl_typesupport_introspection_c__get_const_function__SetGrammar_Event__request(
  const void * untyped_member, size_t index)
{
  const voskros__srv__SetGrammar_Request__Sequence * member =
    (const voskros__srv__SetGrammar_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void * voskros__srv__SetGrammar_Event__rosidl_typesupport_introspection_c__get_function__SetGrammar_Event__request(
  void * untyped_member, size_t index)
{
  voskros__srv__SetGrammar_Request__Sequence * member =
    (voskros__srv__SetGrammar_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void voskros__srv__SetGrammar_Event__rosidl_typesupport_introspection_c__fetch_function__SetGrammar_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const voskros__srv__SetGrammar_Request * item =
    ((const voskros__srv__SetGrammar_Request *)
    voskros__srv__SetGrammar_Event__rosidl_typesupport_introspection_c__get_const_function__SetGrammar_Event__request(untyped_member, index));
  voskros__srv__SetGrammar_Request * value =
    (voskros__srv__SetGrammar_Request *)(untyped_value);
  *value = *item;
}

void voskros__srv__SetGrammar_Event__rosidl_typesupport_introspection_c__assign_function__SetGrammar_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  voskros__srv__SetGrammar_Request * item =
    ((voskros__srv__SetGrammar_Request *)
    voskros__srv__SetGrammar_Event__rosidl_typesupport_introspection_c__get_function__SetGrammar_Event__request(untyped_member, index));
  const voskros__srv__SetGrammar_Request * value =
    (const voskros__srv__SetGrammar_Request *)(untyped_value);
  *item = *value;
}

bool voskros__srv__SetGrammar_Event__rosidl_typesupport_introspection_c__resize_function__SetGrammar_Event__request(
  void * untyped_member, size_t size)
{
  voskros__srv__SetGrammar_Request__Sequence * member =
    (voskros__srv__SetGrammar_Request__Sequence *)(untyped_member);
  voskros__srv__SetGrammar_Request__Sequence__fini(member);
  return voskros__srv__SetGrammar_Request__Sequence__init(member, size);
}

size_t voskros__srv__SetGrammar_Event__rosidl_typesupport_introspection_c__size_function__SetGrammar_Event__response(
  const void * untyped_member)
{
  const voskros__srv__SetGrammar_Response__Sequence * member =
    (const voskros__srv__SetGrammar_Response__Sequence *)(untyped_member);
  return member->size;
}

const void * voskros__srv__SetGrammar_Event__rosidl_typesupport_introspection_c__get_const_function__SetGrammar_Event__response(
  const void * untyped_member, size_t index)
{
  const voskros__srv__SetGrammar_Response__Sequence * member =
    (const voskros__srv__SetGrammar_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void * voskros__srv__SetGrammar_Event__rosidl_typesupport_introspection_c__get_function__SetGrammar_Event__response(
  void * untyped_member, size_t index)
{
  voskros__srv__SetGrammar_Response__Sequence * member =
    (voskros__srv__SetGrammar_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void voskros__srv__SetGrammar_Event__rosidl_typesupport_introspection_c__fetch_function__SetGrammar_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const voskros__srv__SetGrammar_Response * item =
    ((const voskros__srv__SetGrammar_Response *)
    voskros__srv__SetGrammar_Event__rosidl_typesupport_introspection_c__get_const_function__SetGrammar_Event__response(untyped_member, index));
  voskros__srv__SetGrammar_Response * value =
    (voskros__srv__SetGrammar_Response *)(untyped_value);
  *value = *item;
}

void voskros__srv__SetGrammar_Event__rosidl_typesupport_introspection_c__assign_function__SetGrammar_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  voskros__srv__SetGrammar_Response * item =
    ((voskros__srv__SetGrammar_Response *)
    voskros__srv__SetGrammar_Event__rosidl_typesupport_introspection_c__get_function__SetGrammar_Event__response(untyped_member, index));
  const voskros__srv__SetGrammar_Response * value =
    (const voskros__srv__SetGrammar_Response *)(untyped_value);
  *item = *value;
}

bool voskros__srv__SetGrammar_Event__rosidl_typesupport_introspection_c__resize_function__SetGrammar_Event__response(
  void * untyped_member, size_t size)
{
  voskros__srv__SetGrammar_Response__Sequence * member =
    (voskros__srv__SetGrammar_Response__Sequence *)(untyped_member);
  voskros__srv__SetGrammar_Response__Sequence__fini(member);
  return voskros__srv__SetGrammar_Response__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember voskros__srv__SetGrammar_Event__rosidl_typesupport_introspection_c__SetGrammar_Event_message_member_array[3] = {
  {
    "info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(voskros__srv__SetGrammar_Event, info),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "request",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(voskros__srv__SetGrammar_Event, request),  // bytes offset in struct
    NULL,  // default value
    voskros__srv__SetGrammar_Event__rosidl_typesupport_introspection_c__size_function__SetGrammar_Event__request,  // size() function pointer
    voskros__srv__SetGrammar_Event__rosidl_typesupport_introspection_c__get_const_function__SetGrammar_Event__request,  // get_const(index) function pointer
    voskros__srv__SetGrammar_Event__rosidl_typesupport_introspection_c__get_function__SetGrammar_Event__request,  // get(index) function pointer
    voskros__srv__SetGrammar_Event__rosidl_typesupport_introspection_c__fetch_function__SetGrammar_Event__request,  // fetch(index, &value) function pointer
    voskros__srv__SetGrammar_Event__rosidl_typesupport_introspection_c__assign_function__SetGrammar_Event__request,  // assign(index, value) function pointer
    voskros__srv__SetGrammar_Event__rosidl_typesupport_introspection_c__resize_function__SetGrammar_Event__request  // resize(index) function pointer
  },
  {
    "response",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(voskros__srv__SetGrammar_Event, response),  // bytes offset in struct
    NULL,  // default value
    voskros__srv__SetGrammar_Event__rosidl_typesupport_introspection_c__size_function__SetGrammar_Event__response,  // size() function pointer
    voskros__srv__SetGrammar_Event__rosidl_typesupport_introspection_c__get_const_function__SetGrammar_Event__response,  // get_const(index) function pointer
    voskros__srv__SetGrammar_Event__rosidl_typesupport_introspection_c__get_function__SetGrammar_Event__response,  // get(index) function pointer
    voskros__srv__SetGrammar_Event__rosidl_typesupport_introspection_c__fetch_function__SetGrammar_Event__response,  // fetch(index, &value) function pointer
    voskros__srv__SetGrammar_Event__rosidl_typesupport_introspection_c__assign_function__SetGrammar_Event__response,  // assign(index, value) function pointer
    voskros__srv__SetGrammar_Event__rosidl_typesupport_introspection_c__resize_function__SetGrammar_Event__response  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers voskros__srv__SetGrammar_Event__rosidl_typesupport_introspection_c__SetGrammar_Event_message_members = {
  "voskros__srv",  // message namespace
  "SetGrammar_Event",  // message name
  3,  // number of fields
  sizeof(voskros__srv__SetGrammar_Event),
  false,  // has_any_key_member_
  voskros__srv__SetGrammar_Event__rosidl_typesupport_introspection_c__SetGrammar_Event_message_member_array,  // message members
  voskros__srv__SetGrammar_Event__rosidl_typesupport_introspection_c__SetGrammar_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  voskros__srv__SetGrammar_Event__rosidl_typesupport_introspection_c__SetGrammar_Event_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t voskros__srv__SetGrammar_Event__rosidl_typesupport_introspection_c__SetGrammar_Event_message_type_support_handle = {
  0,
  &voskros__srv__SetGrammar_Event__rosidl_typesupport_introspection_c__SetGrammar_Event_message_members,
  get_message_typesupport_handle_function,
  &voskros__srv__SetGrammar_Event__get_type_hash,
  &voskros__srv__SetGrammar_Event__get_type_description,
  &voskros__srv__SetGrammar_Event__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_voskros
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, voskros, srv, SetGrammar_Event)() {
  voskros__srv__SetGrammar_Event__rosidl_typesupport_introspection_c__SetGrammar_Event_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, service_msgs, msg, ServiceEventInfo)();
  voskros__srv__SetGrammar_Event__rosidl_typesupport_introspection_c__SetGrammar_Event_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, voskros, srv, SetGrammar_Request)();
  voskros__srv__SetGrammar_Event__rosidl_typesupport_introspection_c__SetGrammar_Event_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, voskros, srv, SetGrammar_Response)();
  if (!voskros__srv__SetGrammar_Event__rosidl_typesupport_introspection_c__SetGrammar_Event_message_type_support_handle.typesupport_identifier) {
    voskros__srv__SetGrammar_Event__rosidl_typesupport_introspection_c__SetGrammar_Event_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &voskros__srv__SetGrammar_Event__rosidl_typesupport_introspection_c__SetGrammar_Event_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "voskros/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "voskros/srv/detail/set_grammar__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers voskros__srv__detail__set_grammar__rosidl_typesupport_introspection_c__SetGrammar_service_members = {
  "voskros__srv",  // service namespace
  "SetGrammar",  // service name
  // the following fields are initialized below on first access
  NULL,  // request message
  // voskros__srv__detail__set_grammar__rosidl_typesupport_introspection_c__SetGrammar_Request_message_type_support_handle,
  NULL,  // response message
  // voskros__srv__detail__set_grammar__rosidl_typesupport_introspection_c__SetGrammar_Response_message_type_support_handle
  NULL  // event_message
  // voskros__srv__detail__set_grammar__rosidl_typesupport_introspection_c__SetGrammar_Response_message_type_support_handle
};


static rosidl_service_type_support_t voskros__srv__detail__set_grammar__rosidl_typesupport_introspection_c__SetGrammar_service_type_support_handle = {
  0,
  &voskros__srv__detail__set_grammar__rosidl_typesupport_introspection_c__SetGrammar_service_members,
  get_service_typesupport_handle_function,
  &voskros__srv__SetGrammar_Request__rosidl_typesupport_introspection_c__SetGrammar_Request_message_type_support_handle,
  &voskros__srv__SetGrammar_Response__rosidl_typesupport_introspection_c__SetGrammar_Response_message_type_support_handle,
  &voskros__srv__SetGrammar_Event__rosidl_typesupport_introspection_c__SetGrammar_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    voskros,
    srv,
    SetGrammar
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    voskros,
    srv,
    SetGrammar
  ),
  &voskros__srv__SetGrammar__get_type_hash,
  &voskros__srv__SetGrammar__get_type_description,
  &voskros__srv__SetGrammar__get_type_description_sources,
};

// Forward declaration of message type support functions for service members
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, voskros, srv, SetGrammar_Request)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, voskros, srv, SetGrammar_Response)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, voskros, srv, SetGrammar_Event)(void);

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_voskros
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, voskros, srv, SetGrammar)(void) {
  if (!voskros__srv__detail__set_grammar__rosidl_typesupport_introspection_c__SetGrammar_service_type_support_handle.typesupport_identifier) {
    voskros__srv__detail__set_grammar__rosidl_typesupport_introspection_c__SetGrammar_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)voskros__srv__detail__set_grammar__rosidl_typesupport_introspection_c__SetGrammar_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, voskros, srv, SetGrammar_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, voskros, srv, SetGrammar_Response)()->data;
  }
  if (!service_members->event_members_) {
    service_members->event_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, voskros, srv, SetGrammar_Event)()->data;
  }

  return &voskros__srv__detail__set_grammar__rosidl_typesupport_introspection_c__SetGrammar_service_type_support_handle;
}
