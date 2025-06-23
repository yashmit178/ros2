// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from voskros:srv/SetGrammar.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "voskros/srv/set_grammar.hpp"


#ifndef VOSKROS__SRV__DETAIL__SET_GRAMMAR__TRAITS_HPP_
#define VOSKROS__SRV__DETAIL__SET_GRAMMAR__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "voskros/srv/detail/set_grammar__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace voskros
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetGrammar_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: list
  {
    if (msg.list.size() == 0) {
      out << "list: []";
    } else {
      out << "list: [";
      size_t pending_items = msg.list.size();
      for (auto item : msg.list) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetGrammar_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: list
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.list.size() == 0) {
      out << "list: []\n";
    } else {
      out << "list:\n";
      for (auto item : msg.list) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetGrammar_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace voskros

namespace rosidl_generator_traits
{

[[deprecated("use voskros::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const voskros::srv::SetGrammar_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  voskros::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use voskros::srv::to_yaml() instead")]]
inline std::string to_yaml(const voskros::srv::SetGrammar_Request & msg)
{
  return voskros::srv::to_yaml(msg);
}

template<>
inline const char * data_type<voskros::srv::SetGrammar_Request>()
{
  return "voskros::srv::SetGrammar_Request";
}

template<>
inline const char * name<voskros::srv::SetGrammar_Request>()
{
  return "voskros/srv/SetGrammar_Request";
}

template<>
struct has_fixed_size<voskros::srv::SetGrammar_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<voskros::srv::SetGrammar_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<voskros::srv::SetGrammar_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace voskros
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetGrammar_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: error
  {
    out << "error: ";
    rosidl_generator_traits::value_to_yaml(msg.error, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetGrammar_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "error: ";
    rosidl_generator_traits::value_to_yaml(msg.error, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetGrammar_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace voskros

namespace rosidl_generator_traits
{

[[deprecated("use voskros::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const voskros::srv::SetGrammar_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  voskros::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use voskros::srv::to_yaml() instead")]]
inline std::string to_yaml(const voskros::srv::SetGrammar_Response & msg)
{
  return voskros::srv::to_yaml(msg);
}

template<>
inline const char * data_type<voskros::srv::SetGrammar_Response>()
{
  return "voskros::srv::SetGrammar_Response";
}

template<>
inline const char * name<voskros::srv::SetGrammar_Response>()
{
  return "voskros/srv/SetGrammar_Response";
}

template<>
struct has_fixed_size<voskros::srv::SetGrammar_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<voskros::srv::SetGrammar_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<voskros::srv::SetGrammar_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__traits.hpp"

namespace voskros
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetGrammar_Event & msg,
  std::ostream & out)
{
  out << "{";
  // member: info
  {
    out << "info: ";
    to_flow_style_yaml(msg.info, out);
    out << ", ";
  }

  // member: request
  {
    if (msg.request.size() == 0) {
      out << "request: []";
    } else {
      out << "request: [";
      size_t pending_items = msg.request.size();
      for (auto item : msg.request) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: response
  {
    if (msg.response.size() == 0) {
      out << "response: []";
    } else {
      out << "response: [";
      size_t pending_items = msg.response.size();
      for (auto item : msg.response) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetGrammar_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "info:\n";
    to_block_style_yaml(msg.info, out, indentation + 2);
  }

  // member: request
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.request.size() == 0) {
      out << "request: []\n";
    } else {
      out << "request:\n";
      for (auto item : msg.request) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: response
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.response.size() == 0) {
      out << "response: []\n";
    } else {
      out << "response:\n";
      for (auto item : msg.response) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetGrammar_Event & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace voskros

namespace rosidl_generator_traits
{

[[deprecated("use voskros::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const voskros::srv::SetGrammar_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  voskros::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use voskros::srv::to_yaml() instead")]]
inline std::string to_yaml(const voskros::srv::SetGrammar_Event & msg)
{
  return voskros::srv::to_yaml(msg);
}

template<>
inline const char * data_type<voskros::srv::SetGrammar_Event>()
{
  return "voskros::srv::SetGrammar_Event";
}

template<>
inline const char * name<voskros::srv::SetGrammar_Event>()
{
  return "voskros/srv/SetGrammar_Event";
}

template<>
struct has_fixed_size<voskros::srv::SetGrammar_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<voskros::srv::SetGrammar_Event>
  : std::integral_constant<bool, has_bounded_size<service_msgs::msg::ServiceEventInfo>::value && has_bounded_size<voskros::srv::SetGrammar_Request>::value && has_bounded_size<voskros::srv::SetGrammar_Response>::value> {};

template<>
struct is_message<voskros::srv::SetGrammar_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<voskros::srv::SetGrammar>()
{
  return "voskros::srv::SetGrammar";
}

template<>
inline const char * name<voskros::srv::SetGrammar>()
{
  return "voskros/srv/SetGrammar";
}

template<>
struct has_fixed_size<voskros::srv::SetGrammar>
  : std::integral_constant<
    bool,
    has_fixed_size<voskros::srv::SetGrammar_Request>::value &&
    has_fixed_size<voskros::srv::SetGrammar_Response>::value
  >
{
};

template<>
struct has_bounded_size<voskros::srv::SetGrammar>
  : std::integral_constant<
    bool,
    has_bounded_size<voskros::srv::SetGrammar_Request>::value &&
    has_bounded_size<voskros::srv::SetGrammar_Response>::value
  >
{
};

template<>
struct is_service<voskros::srv::SetGrammar>
  : std::true_type
{
};

template<>
struct is_service_request<voskros::srv::SetGrammar_Request>
  : std::true_type
{
};

template<>
struct is_service_response<voskros::srv::SetGrammar_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // VOSKROS__SRV__DETAIL__SET_GRAMMAR__TRAITS_HPP_
