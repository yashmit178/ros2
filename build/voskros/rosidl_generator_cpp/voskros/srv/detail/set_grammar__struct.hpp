// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from voskros:srv/SetGrammar.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "voskros/srv/set_grammar.hpp"


#ifndef VOSKROS__SRV__DETAIL__SET_GRAMMAR__STRUCT_HPP_
#define VOSKROS__SRV__DETAIL__SET_GRAMMAR__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__voskros__srv__SetGrammar_Request __attribute__((deprecated))
#else
# define DEPRECATED__voskros__srv__SetGrammar_Request __declspec(deprecated)
#endif

namespace voskros
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetGrammar_Request_
{
  using Type = SetGrammar_Request_<ContainerAllocator>;

  explicit SetGrammar_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit SetGrammar_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _list_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _list_type list;

  // setters for named parameter idiom
  Type & set__list(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->list = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    voskros::srv::SetGrammar_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const voskros::srv::SetGrammar_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<voskros::srv::SetGrammar_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<voskros::srv::SetGrammar_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      voskros::srv::SetGrammar_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<voskros::srv::SetGrammar_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      voskros::srv::SetGrammar_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<voskros::srv::SetGrammar_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<voskros::srv::SetGrammar_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<voskros::srv::SetGrammar_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__voskros__srv__SetGrammar_Request
    std::shared_ptr<voskros::srv::SetGrammar_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__voskros__srv__SetGrammar_Request
    std::shared_ptr<voskros::srv::SetGrammar_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetGrammar_Request_ & other) const
  {
    if (this->list != other.list) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetGrammar_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetGrammar_Request_

// alias to use template instance with default allocator
using SetGrammar_Request =
  voskros::srv::SetGrammar_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace voskros


#ifndef _WIN32
# define DEPRECATED__voskros__srv__SetGrammar_Response __attribute__((deprecated))
#else
# define DEPRECATED__voskros__srv__SetGrammar_Response __declspec(deprecated)
#endif

namespace voskros
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetGrammar_Response_
{
  using Type = SetGrammar_Response_<ContainerAllocator>;

  explicit SetGrammar_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->error = "";
    }
  }

  explicit SetGrammar_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : error(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->error = "";
    }
  }

  // field types and members
  using _error_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _error_type error;

  // setters for named parameter idiom
  Type & set__error(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->error = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    voskros::srv::SetGrammar_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const voskros::srv::SetGrammar_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<voskros::srv::SetGrammar_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<voskros::srv::SetGrammar_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      voskros::srv::SetGrammar_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<voskros::srv::SetGrammar_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      voskros::srv::SetGrammar_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<voskros::srv::SetGrammar_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<voskros::srv::SetGrammar_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<voskros::srv::SetGrammar_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__voskros__srv__SetGrammar_Response
    std::shared_ptr<voskros::srv::SetGrammar_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__voskros__srv__SetGrammar_Response
    std::shared_ptr<voskros::srv::SetGrammar_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetGrammar_Response_ & other) const
  {
    if (this->error != other.error) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetGrammar_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetGrammar_Response_

// alias to use template instance with default allocator
using SetGrammar_Response =
  voskros::srv::SetGrammar_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace voskros


// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__voskros__srv__SetGrammar_Event __attribute__((deprecated))
#else
# define DEPRECATED__voskros__srv__SetGrammar_Event __declspec(deprecated)
#endif

namespace voskros
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetGrammar_Event_
{
  using Type = SetGrammar_Event_<ContainerAllocator>;

  explicit SetGrammar_Event_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_init)
  {
    (void)_init;
  }

  explicit SetGrammar_Event_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _info_type =
    service_msgs::msg::ServiceEventInfo_<ContainerAllocator>;
  _info_type info;
  using _request_type =
    rosidl_runtime_cpp::BoundedVector<voskros::srv::SetGrammar_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<voskros::srv::SetGrammar_Request_<ContainerAllocator>>>;
  _request_type request;
  using _response_type =
    rosidl_runtime_cpp::BoundedVector<voskros::srv::SetGrammar_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<voskros::srv::SetGrammar_Response_<ContainerAllocator>>>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__info(
    const service_msgs::msg::ServiceEventInfo_<ContainerAllocator> & _arg)
  {
    this->info = _arg;
    return *this;
  }
  Type & set__request(
    const rosidl_runtime_cpp::BoundedVector<voskros::srv::SetGrammar_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<voskros::srv::SetGrammar_Request_<ContainerAllocator>>> & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__response(
    const rosidl_runtime_cpp::BoundedVector<voskros::srv::SetGrammar_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<voskros::srv::SetGrammar_Response_<ContainerAllocator>>> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    voskros::srv::SetGrammar_Event_<ContainerAllocator> *;
  using ConstRawPtr =
    const voskros::srv::SetGrammar_Event_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<voskros::srv::SetGrammar_Event_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<voskros::srv::SetGrammar_Event_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      voskros::srv::SetGrammar_Event_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<voskros::srv::SetGrammar_Event_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      voskros::srv::SetGrammar_Event_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<voskros::srv::SetGrammar_Event_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<voskros::srv::SetGrammar_Event_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<voskros::srv::SetGrammar_Event_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__voskros__srv__SetGrammar_Event
    std::shared_ptr<voskros::srv::SetGrammar_Event_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__voskros__srv__SetGrammar_Event
    std::shared_ptr<voskros::srv::SetGrammar_Event_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetGrammar_Event_ & other) const
  {
    if (this->info != other.info) {
      return false;
    }
    if (this->request != other.request) {
      return false;
    }
    if (this->response != other.response) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetGrammar_Event_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetGrammar_Event_

// alias to use template instance with default allocator
using SetGrammar_Event =
  voskros::srv::SetGrammar_Event_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace voskros

namespace voskros
{

namespace srv
{

struct SetGrammar
{
  using Request = voskros::srv::SetGrammar_Request;
  using Response = voskros::srv::SetGrammar_Response;
  using Event = voskros::srv::SetGrammar_Event;
};

}  // namespace srv

}  // namespace voskros

#endif  // VOSKROS__SRV__DETAIL__SET_GRAMMAR__STRUCT_HPP_
