// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from voskros:srv/SetGrammar.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "voskros/srv/detail/set_grammar__struct.h"
#include "voskros/srv/detail/set_grammar__type_support.h"
#include "voskros/srv/detail/set_grammar__functions.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace voskros
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _SetGrammar_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetGrammar_Request_type_support_ids_t;

static const _SetGrammar_Request_type_support_ids_t _SetGrammar_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _SetGrammar_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetGrammar_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetGrammar_Request_type_support_symbol_names_t _SetGrammar_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, voskros, srv, SetGrammar_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, voskros, srv, SetGrammar_Request)),
  }
};

typedef struct _SetGrammar_Request_type_support_data_t
{
  void * data[2];
} _SetGrammar_Request_type_support_data_t;

static _SetGrammar_Request_type_support_data_t _SetGrammar_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetGrammar_Request_message_typesupport_map = {
  2,
  "voskros",
  &_SetGrammar_Request_message_typesupport_ids.typesupport_identifier[0],
  &_SetGrammar_Request_message_typesupport_symbol_names.symbol_name[0],
  &_SetGrammar_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SetGrammar_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetGrammar_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &voskros__srv__SetGrammar_Request__get_type_hash,
  &voskros__srv__SetGrammar_Request__get_type_description,
  &voskros__srv__SetGrammar_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace voskros

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, voskros, srv, SetGrammar_Request)() {
  return &::voskros::srv::rosidl_typesupport_c::SetGrammar_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "voskros/srv/detail/set_grammar__struct.h"
// already included above
// #include "voskros/srv/detail/set_grammar__type_support.h"
// already included above
// #include "voskros/srv/detail/set_grammar__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace voskros
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _SetGrammar_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetGrammar_Response_type_support_ids_t;

static const _SetGrammar_Response_type_support_ids_t _SetGrammar_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _SetGrammar_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetGrammar_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetGrammar_Response_type_support_symbol_names_t _SetGrammar_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, voskros, srv, SetGrammar_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, voskros, srv, SetGrammar_Response)),
  }
};

typedef struct _SetGrammar_Response_type_support_data_t
{
  void * data[2];
} _SetGrammar_Response_type_support_data_t;

static _SetGrammar_Response_type_support_data_t _SetGrammar_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetGrammar_Response_message_typesupport_map = {
  2,
  "voskros",
  &_SetGrammar_Response_message_typesupport_ids.typesupport_identifier[0],
  &_SetGrammar_Response_message_typesupport_symbol_names.symbol_name[0],
  &_SetGrammar_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SetGrammar_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetGrammar_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &voskros__srv__SetGrammar_Response__get_type_hash,
  &voskros__srv__SetGrammar_Response__get_type_description,
  &voskros__srv__SetGrammar_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace voskros

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, voskros, srv, SetGrammar_Response)() {
  return &::voskros::srv::rosidl_typesupport_c::SetGrammar_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "voskros/srv/detail/set_grammar__struct.h"
// already included above
// #include "voskros/srv/detail/set_grammar__type_support.h"
// already included above
// #include "voskros/srv/detail/set_grammar__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace voskros
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _SetGrammar_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetGrammar_Event_type_support_ids_t;

static const _SetGrammar_Event_type_support_ids_t _SetGrammar_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _SetGrammar_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetGrammar_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetGrammar_Event_type_support_symbol_names_t _SetGrammar_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, voskros, srv, SetGrammar_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, voskros, srv, SetGrammar_Event)),
  }
};

typedef struct _SetGrammar_Event_type_support_data_t
{
  void * data[2];
} _SetGrammar_Event_type_support_data_t;

static _SetGrammar_Event_type_support_data_t _SetGrammar_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetGrammar_Event_message_typesupport_map = {
  2,
  "voskros",
  &_SetGrammar_Event_message_typesupport_ids.typesupport_identifier[0],
  &_SetGrammar_Event_message_typesupport_symbol_names.symbol_name[0],
  &_SetGrammar_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SetGrammar_Event_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetGrammar_Event_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &voskros__srv__SetGrammar_Event__get_type_hash,
  &voskros__srv__SetGrammar_Event__get_type_description,
  &voskros__srv__SetGrammar_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace voskros

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, voskros, srv, SetGrammar_Event)() {
  return &::voskros::srv::rosidl_typesupport_c::SetGrammar_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "voskros/srv/detail/set_grammar__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
#include "service_msgs/msg/service_event_info.h"
#include "builtin_interfaces/msg/time.h"

namespace voskros
{

namespace srv
{

namespace rosidl_typesupport_c
{
typedef struct _SetGrammar_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetGrammar_type_support_ids_t;

static const _SetGrammar_type_support_ids_t _SetGrammar_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _SetGrammar_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetGrammar_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetGrammar_type_support_symbol_names_t _SetGrammar_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, voskros, srv, SetGrammar)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, voskros, srv, SetGrammar)),
  }
};

typedef struct _SetGrammar_type_support_data_t
{
  void * data[2];
} _SetGrammar_type_support_data_t;

static _SetGrammar_type_support_data_t _SetGrammar_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetGrammar_service_typesupport_map = {
  2,
  "voskros",
  &_SetGrammar_service_typesupport_ids.typesupport_identifier[0],
  &_SetGrammar_service_typesupport_symbol_names.symbol_name[0],
  &_SetGrammar_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t SetGrammar_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetGrammar_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
  &SetGrammar_Request_message_type_support_handle,
  &SetGrammar_Response_message_type_support_handle,
  &SetGrammar_Event_message_type_support_handle,
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

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace voskros

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, voskros, srv, SetGrammar)() {
  return &::voskros::srv::rosidl_typesupport_c::SetGrammar_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif
