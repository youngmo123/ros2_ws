// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from ros_study_msgs:srv/ArithmeticOperator.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "ros_study_msgs/srv/detail/arithmetic_operator__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace ros_study_msgs
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void ArithmeticOperator_Request_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) ros_study_msgs::srv::ArithmeticOperator_Request(_init);
}

void ArithmeticOperator_Request_fini_function(void * message_memory)
{
  auto typed_message = static_cast<ros_study_msgs::srv::ArithmeticOperator_Request *>(message_memory);
  typed_message->~ArithmeticOperator_Request();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ArithmeticOperator_Request_message_member_array[1] = {
  {
    "arithmetic_operator",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_study_msgs::srv::ArithmeticOperator_Request, arithmetic_operator),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ArithmeticOperator_Request_message_members = {
  "ros_study_msgs::srv",  // message namespace
  "ArithmeticOperator_Request",  // message name
  1,  // number of fields
  sizeof(ros_study_msgs::srv::ArithmeticOperator_Request),
  ArithmeticOperator_Request_message_member_array,  // message members
  ArithmeticOperator_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  ArithmeticOperator_Request_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t ArithmeticOperator_Request_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ArithmeticOperator_Request_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace ros_study_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<ros_study_msgs::srv::ArithmeticOperator_Request>()
{
  return &::ros_study_msgs::srv::rosidl_typesupport_introspection_cpp::ArithmeticOperator_Request_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ros_study_msgs, srv, ArithmeticOperator_Request)() {
  return &::ros_study_msgs::srv::rosidl_typesupport_introspection_cpp::ArithmeticOperator_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "ros_study_msgs/srv/detail/arithmetic_operator__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace ros_study_msgs
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void ArithmeticOperator_Response_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) ros_study_msgs::srv::ArithmeticOperator_Response(_init);
}

void ArithmeticOperator_Response_fini_function(void * message_memory)
{
  auto typed_message = static_cast<ros_study_msgs::srv::ArithmeticOperator_Response *>(message_memory);
  typed_message->~ArithmeticOperator_Response();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ArithmeticOperator_Response_message_member_array[1] = {
  {
    "arithmetic_result",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_study_msgs::srv::ArithmeticOperator_Response, arithmetic_result),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ArithmeticOperator_Response_message_members = {
  "ros_study_msgs::srv",  // message namespace
  "ArithmeticOperator_Response",  // message name
  1,  // number of fields
  sizeof(ros_study_msgs::srv::ArithmeticOperator_Response),
  ArithmeticOperator_Response_message_member_array,  // message members
  ArithmeticOperator_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  ArithmeticOperator_Response_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t ArithmeticOperator_Response_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ArithmeticOperator_Response_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace ros_study_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<ros_study_msgs::srv::ArithmeticOperator_Response>()
{
  return &::ros_study_msgs::srv::rosidl_typesupport_introspection_cpp::ArithmeticOperator_Response_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ros_study_msgs, srv, ArithmeticOperator_Response)() {
  return &::ros_study_msgs::srv::rosidl_typesupport_introspection_cpp::ArithmeticOperator_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"
// already included above
// #include "ros_study_msgs/srv/detail/arithmetic_operator__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/service_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/service_type_support_decl.hpp"

namespace ros_study_msgs
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

// this is intentionally not const to allow initialization later to prevent an initialization race
static ::rosidl_typesupport_introspection_cpp::ServiceMembers ArithmeticOperator_service_members = {
  "ros_study_msgs::srv",  // service namespace
  "ArithmeticOperator",  // service name
  // these two fields are initialized below on the first access
  // see get_service_type_support_handle<ros_study_msgs::srv::ArithmeticOperator>()
  nullptr,  // request message
  nullptr  // response message
};

static const rosidl_service_type_support_t ArithmeticOperator_service_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ArithmeticOperator_service_members,
  get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace ros_study_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<ros_study_msgs::srv::ArithmeticOperator>()
{
  // get a handle to the value to be returned
  auto service_type_support =
    &::ros_study_msgs::srv::rosidl_typesupport_introspection_cpp::ArithmeticOperator_service_type_support_handle;
  // get a non-const and properly typed version of the data void *
  auto service_members = const_cast<::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
    static_cast<const ::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
      service_type_support->data));
  // make sure that both the request_members_ and the response_members_ are initialized
  // if they are not, initialize them
  if (
    service_members->request_members_ == nullptr ||
    service_members->response_members_ == nullptr)
  {
    // initialize the request_members_ with the static function from the external library
    service_members->request_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::ros_study_msgs::srv::ArithmeticOperator_Request
      >()->data
      );
    // initialize the response_members_ with the static function from the external library
    service_members->response_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::ros_study_msgs::srv::ArithmeticOperator_Response
      >()->data
      );
  }
  // finally return the properly initialized service_type_support handle
  return service_type_support;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ros_study_msgs, srv, ArithmeticOperator)() {
  return ::rosidl_typesupport_introspection_cpp::get_service_type_support_handle<ros_study_msgs::srv::ArithmeticOperator>();
}

#ifdef __cplusplus
}
#endif
