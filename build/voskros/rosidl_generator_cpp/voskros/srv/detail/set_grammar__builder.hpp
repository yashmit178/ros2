// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from voskros:srv/SetGrammar.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "voskros/srv/set_grammar.hpp"


#ifndef VOSKROS__SRV__DETAIL__SET_GRAMMAR__BUILDER_HPP_
#define VOSKROS__SRV__DETAIL__SET_GRAMMAR__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "voskros/srv/detail/set_grammar__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace voskros
{

namespace srv
{

namespace builder
{

class Init_SetGrammar_Request_list
{
public:
  Init_SetGrammar_Request_list()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::voskros::srv::SetGrammar_Request list(::voskros::srv::SetGrammar_Request::_list_type arg)
  {
    msg_.list = std::move(arg);
    return std::move(msg_);
  }

private:
  ::voskros::srv::SetGrammar_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::voskros::srv::SetGrammar_Request>()
{
  return voskros::srv::builder::Init_SetGrammar_Request_list();
}

}  // namespace voskros


namespace voskros
{

namespace srv
{

namespace builder
{

class Init_SetGrammar_Response_error
{
public:
  Init_SetGrammar_Response_error()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::voskros::srv::SetGrammar_Response error(::voskros::srv::SetGrammar_Response::_error_type arg)
  {
    msg_.error = std::move(arg);
    return std::move(msg_);
  }

private:
  ::voskros::srv::SetGrammar_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::voskros::srv::SetGrammar_Response>()
{
  return voskros::srv::builder::Init_SetGrammar_Response_error();
}

}  // namespace voskros


namespace voskros
{

namespace srv
{

namespace builder
{

class Init_SetGrammar_Event_response
{
public:
  explicit Init_SetGrammar_Event_response(::voskros::srv::SetGrammar_Event & msg)
  : msg_(msg)
  {}
  ::voskros::srv::SetGrammar_Event response(::voskros::srv::SetGrammar_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::voskros::srv::SetGrammar_Event msg_;
};

class Init_SetGrammar_Event_request
{
public:
  explicit Init_SetGrammar_Event_request(::voskros::srv::SetGrammar_Event & msg)
  : msg_(msg)
  {}
  Init_SetGrammar_Event_response request(::voskros::srv::SetGrammar_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_SetGrammar_Event_response(msg_);
  }

private:
  ::voskros::srv::SetGrammar_Event msg_;
};

class Init_SetGrammar_Event_info
{
public:
  Init_SetGrammar_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetGrammar_Event_request info(::voskros::srv::SetGrammar_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_SetGrammar_Event_request(msg_);
  }

private:
  ::voskros::srv::SetGrammar_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::voskros::srv::SetGrammar_Event>()
{
  return voskros::srv::builder::Init_SetGrammar_Event_info();
}

}  // namespace voskros

#endif  // VOSKROS__SRV__DETAIL__SET_GRAMMAR__BUILDER_HPP_
