// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from voskros:srv/SetGrammar.idl
// generated code does not contain a copyright notice

#include "voskros/srv/detail/set_grammar__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_voskros
const rosidl_type_hash_t *
voskros__srv__SetGrammar__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xb1, 0x76, 0xb1, 0x36, 0x48, 0x03, 0x2a, 0x24,
      0x9a, 0x22, 0x5a, 0x49, 0xc7, 0x1d, 0xd0, 0x49,
      0x04, 0x65, 0x69, 0x1d, 0x0e, 0xfd, 0x84, 0x90,
      0x52, 0x20, 0xcf, 0x7f, 0x3b, 0xfd, 0x5c, 0xa6,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_voskros
const rosidl_type_hash_t *
voskros__srv__SetGrammar_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x82, 0xf4, 0xb4, 0xf9, 0x27, 0x5c, 0xd3, 0x20,
      0xc8, 0x09, 0x08, 0xed, 0x0c, 0x70, 0x71, 0x76,
      0xd7, 0x61, 0x46, 0x75, 0x43, 0xfa, 0xc5, 0x6b,
      0x94, 0xeb, 0x5c, 0xed, 0x84, 0xc4, 0x00, 0xf8,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_voskros
const rosidl_type_hash_t *
voskros__srv__SetGrammar_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x7b, 0x8a, 0x8e, 0x81, 0x1f, 0xa5, 0x46, 0x3e,
      0x72, 0xa0, 0xaf, 0x38, 0x68, 0xf1, 0x83, 0x29,
      0xd2, 0x3a, 0xf1, 0xe5, 0x3a, 0xa0, 0x7a, 0xad,
      0xe5, 0x48, 0x3a, 0xa8, 0xd3, 0xbc, 0x01, 0xfe,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_voskros
const rosidl_type_hash_t *
voskros__srv__SetGrammar_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x91, 0x2d, 0x06, 0x3d, 0x98, 0x13, 0xbb, 0x8e,
      0x9d, 0x51, 0xd8, 0xae, 0x20, 0x83, 0x97, 0xbc,
      0x98, 0x59, 0xa7, 0xf2, 0x3e, 0x7d, 0xbd, 0x30,
      0xfd, 0xa3, 0xb5, 0x1c, 0x34, 0x24, 0x7b, 0x7b,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "builtin_interfaces/msg/detail/time__functions.h"
#include "service_msgs/msg/detail/service_event_info__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t service_msgs__msg__ServiceEventInfo__EXPECTED_HASH = {1, {
    0x41, 0xbc, 0xbb, 0xe0, 0x7a, 0x75, 0xc9, 0xb5,
    0x2b, 0xc9, 0x6b, 0xfd, 0x5c, 0x24, 0xd7, 0xf0,
    0xfc, 0x0a, 0x08, 0xc0, 0xcb, 0x79, 0x21, 0xb3,
    0x37, 0x3c, 0x57, 0x32, 0x34, 0x5a, 0x6f, 0x45,
  }};
#endif

static char voskros__srv__SetGrammar__TYPE_NAME[] = "voskros/srv/SetGrammar";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";
static char voskros__srv__SetGrammar_Event__TYPE_NAME[] = "voskros/srv/SetGrammar_Event";
static char voskros__srv__SetGrammar_Request__TYPE_NAME[] = "voskros/srv/SetGrammar_Request";
static char voskros__srv__SetGrammar_Response__TYPE_NAME[] = "voskros/srv/SetGrammar_Response";

// Define type names, field names, and default values
static char voskros__srv__SetGrammar__FIELD_NAME__request_message[] = "request_message";
static char voskros__srv__SetGrammar__FIELD_NAME__response_message[] = "response_message";
static char voskros__srv__SetGrammar__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field voskros__srv__SetGrammar__FIELDS[] = {
  {
    {voskros__srv__SetGrammar__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {voskros__srv__SetGrammar_Request__TYPE_NAME, 30, 30},
    },
    {NULL, 0, 0},
  },
  {
    {voskros__srv__SetGrammar__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {voskros__srv__SetGrammar_Response__TYPE_NAME, 31, 31},
    },
    {NULL, 0, 0},
  },
  {
    {voskros__srv__SetGrammar__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {voskros__srv__SetGrammar_Event__TYPE_NAME, 28, 28},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription voskros__srv__SetGrammar__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {voskros__srv__SetGrammar_Event__TYPE_NAME, 28, 28},
    {NULL, 0, 0},
  },
  {
    {voskros__srv__SetGrammar_Request__TYPE_NAME, 30, 30},
    {NULL, 0, 0},
  },
  {
    {voskros__srv__SetGrammar_Response__TYPE_NAME, 31, 31},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
voskros__srv__SetGrammar__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {voskros__srv__SetGrammar__TYPE_NAME, 22, 22},
      {voskros__srv__SetGrammar__FIELDS, 3, 3},
    },
    {voskros__srv__SetGrammar__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = voskros__srv__SetGrammar_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = voskros__srv__SetGrammar_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[4].fields = voskros__srv__SetGrammar_Response__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char voskros__srv__SetGrammar_Request__FIELD_NAME__list[] = "list";

static rosidl_runtime_c__type_description__Field voskros__srv__SetGrammar_Request__FIELDS[] = {
  {
    {voskros__srv__SetGrammar_Request__FIELD_NAME__list, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
voskros__srv__SetGrammar_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {voskros__srv__SetGrammar_Request__TYPE_NAME, 30, 30},
      {voskros__srv__SetGrammar_Request__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char voskros__srv__SetGrammar_Response__FIELD_NAME__error[] = "error";

static rosidl_runtime_c__type_description__Field voskros__srv__SetGrammar_Response__FIELDS[] = {
  {
    {voskros__srv__SetGrammar_Response__FIELD_NAME__error, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
voskros__srv__SetGrammar_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {voskros__srv__SetGrammar_Response__TYPE_NAME, 31, 31},
      {voskros__srv__SetGrammar_Response__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char voskros__srv__SetGrammar_Event__FIELD_NAME__info[] = "info";
static char voskros__srv__SetGrammar_Event__FIELD_NAME__request[] = "request";
static char voskros__srv__SetGrammar_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field voskros__srv__SetGrammar_Event__FIELDS[] = {
  {
    {voskros__srv__SetGrammar_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {voskros__srv__SetGrammar_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {voskros__srv__SetGrammar_Request__TYPE_NAME, 30, 30},
    },
    {NULL, 0, 0},
  },
  {
    {voskros__srv__SetGrammar_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {voskros__srv__SetGrammar_Response__TYPE_NAME, 31, 31},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription voskros__srv__SetGrammar_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {voskros__srv__SetGrammar_Request__TYPE_NAME, 30, 30},
    {NULL, 0, 0},
  },
  {
    {voskros__srv__SetGrammar_Response__TYPE_NAME, 31, 31},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
voskros__srv__SetGrammar_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {voskros__srv__SetGrammar_Event__TYPE_NAME, 28, 28},
      {voskros__srv__SetGrammar_Event__FIELDS, 3, 3},
    },
    {voskros__srv__SetGrammar_Event__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = voskros__srv__SetGrammar_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = voskros__srv__SetGrammar_Response__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "string[] list\n"
  "---\n"
  "string error";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
voskros__srv__SetGrammar__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {voskros__srv__SetGrammar__TYPE_NAME, 22, 22},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 31, 31},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
voskros__srv__SetGrammar_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {voskros__srv__SetGrammar_Request__TYPE_NAME, 30, 30},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
voskros__srv__SetGrammar_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {voskros__srv__SetGrammar_Response__TYPE_NAME, 31, 31},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
voskros__srv__SetGrammar_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {voskros__srv__SetGrammar_Event__TYPE_NAME, 28, 28},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
voskros__srv__SetGrammar__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *voskros__srv__SetGrammar__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    sources[3] = *voskros__srv__SetGrammar_Event__get_individual_type_description_source(NULL);
    sources[4] = *voskros__srv__SetGrammar_Request__get_individual_type_description_source(NULL);
    sources[5] = *voskros__srv__SetGrammar_Response__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
voskros__srv__SetGrammar_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *voskros__srv__SetGrammar_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
voskros__srv__SetGrammar_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *voskros__srv__SetGrammar_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
voskros__srv__SetGrammar_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *voskros__srv__SetGrammar_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    sources[3] = *voskros__srv__SetGrammar_Request__get_individual_type_description_source(NULL);
    sources[4] = *voskros__srv__SetGrammar_Response__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
