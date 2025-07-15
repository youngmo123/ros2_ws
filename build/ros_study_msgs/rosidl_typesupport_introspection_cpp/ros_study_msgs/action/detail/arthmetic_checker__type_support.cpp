// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from ros_study_msgs:action/ArthmeticChecker.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "ros_study_msgs/action/detail/arthmetic_checker__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace ros_study_msgs
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void ArthmeticChecker_Goal_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) ros_study_msgs::action::ArthmeticChecker_Goal(_init);
}

void ArthmeticChecker_Goal_fini_function(void * message_memory)
{
  auto typed_message = static_cast<ros_study_msgs::action::ArthmeticChecker_Goal *>(message_memory);
  typed_message->~ArthmeticChecker_Goal();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ArthmeticChecker_Goal_message_member_array[1] = {
  {
    "goal_sum",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_study_msgs::action::ArthmeticChecker_Goal, goal_sum),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ArthmeticChecker_Goal_message_members = {
  "ros_study_msgs::action",  // message namespace
  "ArthmeticChecker_Goal",  // message name
  1,  // number of fields
  sizeof(ros_study_msgs::action::ArthmeticChecker_Goal),
  ArthmeticChecker_Goal_message_member_array,  // message members
  ArthmeticChecker_Goal_init_function,  // function to initialize message memory (memory has to be allocated)
  ArthmeticChecker_Goal_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t ArthmeticChecker_Goal_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ArthmeticChecker_Goal_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace ros_study_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<ros_study_msgs::action::ArthmeticChecker_Goal>()
{
  return &::ros_study_msgs::action::rosidl_typesupport_introspection_cpp::ArthmeticChecker_Goal_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ros_study_msgs, action, ArthmeticChecker_Goal)() {
  return &::ros_study_msgs::action::rosidl_typesupport_introspection_cpp::ArthmeticChecker_Goal_message_type_support_handle;
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
// #include "ros_study_msgs/action/detail/arthmetic_checker__struct.hpp"
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

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void ArthmeticChecker_Result_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) ros_study_msgs::action::ArthmeticChecker_Result(_init);
}

void ArthmeticChecker_Result_fini_function(void * message_memory)
{
  auto typed_message = static_cast<ros_study_msgs::action::ArthmeticChecker_Result *>(message_memory);
  typed_message->~ArthmeticChecker_Result();
}

size_t size_function__ArthmeticChecker_Result__all_formula(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ArthmeticChecker_Result__all_formula(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__ArthmeticChecker_Result__all_formula(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void fetch_function__ArthmeticChecker_Result__all_formula(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const std::string *>(
    get_const_function__ArthmeticChecker_Result__all_formula(untyped_member, index));
  auto & value = *reinterpret_cast<std::string *>(untyped_value);
  value = item;
}

void assign_function__ArthmeticChecker_Result__all_formula(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<std::string *>(
    get_function__ArthmeticChecker_Result__all_formula(untyped_member, index));
  const auto & value = *reinterpret_cast<const std::string *>(untyped_value);
  item = value;
}

void resize_function__ArthmeticChecker_Result__all_formula(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ArthmeticChecker_Result_message_member_array[2] = {
  {
    "all_formula",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_study_msgs::action::ArthmeticChecker_Result, all_formula),  // bytes offset in struct
    nullptr,  // default value
    size_function__ArthmeticChecker_Result__all_formula,  // size() function pointer
    get_const_function__ArthmeticChecker_Result__all_formula,  // get_const(index) function pointer
    get_function__ArthmeticChecker_Result__all_formula,  // get(index) function pointer
    fetch_function__ArthmeticChecker_Result__all_formula,  // fetch(index, &value) function pointer
    assign_function__ArthmeticChecker_Result__all_formula,  // assign(index, value) function pointer
    resize_function__ArthmeticChecker_Result__all_formula  // resize(index) function pointer
  },
  {
    "total_sum",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_study_msgs::action::ArthmeticChecker_Result, total_sum),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ArthmeticChecker_Result_message_members = {
  "ros_study_msgs::action",  // message namespace
  "ArthmeticChecker_Result",  // message name
  2,  // number of fields
  sizeof(ros_study_msgs::action::ArthmeticChecker_Result),
  ArthmeticChecker_Result_message_member_array,  // message members
  ArthmeticChecker_Result_init_function,  // function to initialize message memory (memory has to be allocated)
  ArthmeticChecker_Result_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t ArthmeticChecker_Result_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ArthmeticChecker_Result_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace ros_study_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<ros_study_msgs::action::ArthmeticChecker_Result>()
{
  return &::ros_study_msgs::action::rosidl_typesupport_introspection_cpp::ArthmeticChecker_Result_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ros_study_msgs, action, ArthmeticChecker_Result)() {
  return &::ros_study_msgs::action::rosidl_typesupport_introspection_cpp::ArthmeticChecker_Result_message_type_support_handle;
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
// #include "ros_study_msgs/action/detail/arthmetic_checker__struct.hpp"
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

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void ArthmeticChecker_Feedback_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) ros_study_msgs::action::ArthmeticChecker_Feedback(_init);
}

void ArthmeticChecker_Feedback_fini_function(void * message_memory)
{
  auto typed_message = static_cast<ros_study_msgs::action::ArthmeticChecker_Feedback *>(message_memory);
  typed_message->~ArthmeticChecker_Feedback();
}

size_t size_function__ArthmeticChecker_Feedback__formula(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ArthmeticChecker_Feedback__formula(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__ArthmeticChecker_Feedback__formula(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void fetch_function__ArthmeticChecker_Feedback__formula(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const std::string *>(
    get_const_function__ArthmeticChecker_Feedback__formula(untyped_member, index));
  auto & value = *reinterpret_cast<std::string *>(untyped_value);
  value = item;
}

void assign_function__ArthmeticChecker_Feedback__formula(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<std::string *>(
    get_function__ArthmeticChecker_Feedback__formula(untyped_member, index));
  const auto & value = *reinterpret_cast<const std::string *>(untyped_value);
  item = value;
}

void resize_function__ArthmeticChecker_Feedback__formula(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ArthmeticChecker_Feedback_message_member_array[1] = {
  {
    "formula",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_study_msgs::action::ArthmeticChecker_Feedback, formula),  // bytes offset in struct
    nullptr,  // default value
    size_function__ArthmeticChecker_Feedback__formula,  // size() function pointer
    get_const_function__ArthmeticChecker_Feedback__formula,  // get_const(index) function pointer
    get_function__ArthmeticChecker_Feedback__formula,  // get(index) function pointer
    fetch_function__ArthmeticChecker_Feedback__formula,  // fetch(index, &value) function pointer
    assign_function__ArthmeticChecker_Feedback__formula,  // assign(index, value) function pointer
    resize_function__ArthmeticChecker_Feedback__formula  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ArthmeticChecker_Feedback_message_members = {
  "ros_study_msgs::action",  // message namespace
  "ArthmeticChecker_Feedback",  // message name
  1,  // number of fields
  sizeof(ros_study_msgs::action::ArthmeticChecker_Feedback),
  ArthmeticChecker_Feedback_message_member_array,  // message members
  ArthmeticChecker_Feedback_init_function,  // function to initialize message memory (memory has to be allocated)
  ArthmeticChecker_Feedback_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t ArthmeticChecker_Feedback_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ArthmeticChecker_Feedback_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace ros_study_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<ros_study_msgs::action::ArthmeticChecker_Feedback>()
{
  return &::ros_study_msgs::action::rosidl_typesupport_introspection_cpp::ArthmeticChecker_Feedback_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ros_study_msgs, action, ArthmeticChecker_Feedback)() {
  return &::ros_study_msgs::action::rosidl_typesupport_introspection_cpp::ArthmeticChecker_Feedback_message_type_support_handle;
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
// #include "ros_study_msgs/action/detail/arthmetic_checker__struct.hpp"
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

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void ArthmeticChecker_SendGoal_Request_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) ros_study_msgs::action::ArthmeticChecker_SendGoal_Request(_init);
}

void ArthmeticChecker_SendGoal_Request_fini_function(void * message_memory)
{
  auto typed_message = static_cast<ros_study_msgs::action::ArthmeticChecker_SendGoal_Request *>(message_memory);
  typed_message->~ArthmeticChecker_SendGoal_Request();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ArthmeticChecker_SendGoal_Request_message_member_array[2] = {
  {
    "goal_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<unique_identifier_msgs::msg::UUID>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_study_msgs::action::ArthmeticChecker_SendGoal_Request, goal_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "goal",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<ros_study_msgs::action::ArthmeticChecker_Goal>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_study_msgs::action::ArthmeticChecker_SendGoal_Request, goal),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ArthmeticChecker_SendGoal_Request_message_members = {
  "ros_study_msgs::action",  // message namespace
  "ArthmeticChecker_SendGoal_Request",  // message name
  2,  // number of fields
  sizeof(ros_study_msgs::action::ArthmeticChecker_SendGoal_Request),
  ArthmeticChecker_SendGoal_Request_message_member_array,  // message members
  ArthmeticChecker_SendGoal_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  ArthmeticChecker_SendGoal_Request_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t ArthmeticChecker_SendGoal_Request_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ArthmeticChecker_SendGoal_Request_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace ros_study_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<ros_study_msgs::action::ArthmeticChecker_SendGoal_Request>()
{
  return &::ros_study_msgs::action::rosidl_typesupport_introspection_cpp::ArthmeticChecker_SendGoal_Request_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ros_study_msgs, action, ArthmeticChecker_SendGoal_Request)() {
  return &::ros_study_msgs::action::rosidl_typesupport_introspection_cpp::ArthmeticChecker_SendGoal_Request_message_type_support_handle;
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
// #include "ros_study_msgs/action/detail/arthmetic_checker__struct.hpp"
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

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void ArthmeticChecker_SendGoal_Response_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) ros_study_msgs::action::ArthmeticChecker_SendGoal_Response(_init);
}

void ArthmeticChecker_SendGoal_Response_fini_function(void * message_memory)
{
  auto typed_message = static_cast<ros_study_msgs::action::ArthmeticChecker_SendGoal_Response *>(message_memory);
  typed_message->~ArthmeticChecker_SendGoal_Response();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ArthmeticChecker_SendGoal_Response_message_member_array[2] = {
  {
    "accepted",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_study_msgs::action::ArthmeticChecker_SendGoal_Response, accepted),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "stamp",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<builtin_interfaces::msg::Time>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_study_msgs::action::ArthmeticChecker_SendGoal_Response, stamp),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ArthmeticChecker_SendGoal_Response_message_members = {
  "ros_study_msgs::action",  // message namespace
  "ArthmeticChecker_SendGoal_Response",  // message name
  2,  // number of fields
  sizeof(ros_study_msgs::action::ArthmeticChecker_SendGoal_Response),
  ArthmeticChecker_SendGoal_Response_message_member_array,  // message members
  ArthmeticChecker_SendGoal_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  ArthmeticChecker_SendGoal_Response_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t ArthmeticChecker_SendGoal_Response_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ArthmeticChecker_SendGoal_Response_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace ros_study_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<ros_study_msgs::action::ArthmeticChecker_SendGoal_Response>()
{
  return &::ros_study_msgs::action::rosidl_typesupport_introspection_cpp::ArthmeticChecker_SendGoal_Response_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ros_study_msgs, action, ArthmeticChecker_SendGoal_Response)() {
  return &::ros_study_msgs::action::rosidl_typesupport_introspection_cpp::ArthmeticChecker_SendGoal_Response_message_type_support_handle;
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
// #include "ros_study_msgs/action/detail/arthmetic_checker__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/service_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/service_type_support_decl.hpp"

namespace ros_study_msgs
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

// this is intentionally not const to allow initialization later to prevent an initialization race
static ::rosidl_typesupport_introspection_cpp::ServiceMembers ArthmeticChecker_SendGoal_service_members = {
  "ros_study_msgs::action",  // service namespace
  "ArthmeticChecker_SendGoal",  // service name
  // these two fields are initialized below on the first access
  // see get_service_type_support_handle<ros_study_msgs::action::ArthmeticChecker_SendGoal>()
  nullptr,  // request message
  nullptr  // response message
};

static const rosidl_service_type_support_t ArthmeticChecker_SendGoal_service_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ArthmeticChecker_SendGoal_service_members,
  get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace ros_study_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<ros_study_msgs::action::ArthmeticChecker_SendGoal>()
{
  // get a handle to the value to be returned
  auto service_type_support =
    &::ros_study_msgs::action::rosidl_typesupport_introspection_cpp::ArthmeticChecker_SendGoal_service_type_support_handle;
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
        ::ros_study_msgs::action::ArthmeticChecker_SendGoal_Request
      >()->data
      );
    // initialize the response_members_ with the static function from the external library
    service_members->response_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::ros_study_msgs::action::ArthmeticChecker_SendGoal_Response
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
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ros_study_msgs, action, ArthmeticChecker_SendGoal)() {
  return ::rosidl_typesupport_introspection_cpp::get_service_type_support_handle<ros_study_msgs::action::ArthmeticChecker_SendGoal>();
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
// #include "ros_study_msgs/action/detail/arthmetic_checker__struct.hpp"
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

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void ArthmeticChecker_GetResult_Request_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) ros_study_msgs::action::ArthmeticChecker_GetResult_Request(_init);
}

void ArthmeticChecker_GetResult_Request_fini_function(void * message_memory)
{
  auto typed_message = static_cast<ros_study_msgs::action::ArthmeticChecker_GetResult_Request *>(message_memory);
  typed_message->~ArthmeticChecker_GetResult_Request();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ArthmeticChecker_GetResult_Request_message_member_array[1] = {
  {
    "goal_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<unique_identifier_msgs::msg::UUID>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_study_msgs::action::ArthmeticChecker_GetResult_Request, goal_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ArthmeticChecker_GetResult_Request_message_members = {
  "ros_study_msgs::action",  // message namespace
  "ArthmeticChecker_GetResult_Request",  // message name
  1,  // number of fields
  sizeof(ros_study_msgs::action::ArthmeticChecker_GetResult_Request),
  ArthmeticChecker_GetResult_Request_message_member_array,  // message members
  ArthmeticChecker_GetResult_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  ArthmeticChecker_GetResult_Request_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t ArthmeticChecker_GetResult_Request_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ArthmeticChecker_GetResult_Request_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace ros_study_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<ros_study_msgs::action::ArthmeticChecker_GetResult_Request>()
{
  return &::ros_study_msgs::action::rosidl_typesupport_introspection_cpp::ArthmeticChecker_GetResult_Request_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ros_study_msgs, action, ArthmeticChecker_GetResult_Request)() {
  return &::ros_study_msgs::action::rosidl_typesupport_introspection_cpp::ArthmeticChecker_GetResult_Request_message_type_support_handle;
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
// #include "ros_study_msgs/action/detail/arthmetic_checker__struct.hpp"
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

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void ArthmeticChecker_GetResult_Response_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) ros_study_msgs::action::ArthmeticChecker_GetResult_Response(_init);
}

void ArthmeticChecker_GetResult_Response_fini_function(void * message_memory)
{
  auto typed_message = static_cast<ros_study_msgs::action::ArthmeticChecker_GetResult_Response *>(message_memory);
  typed_message->~ArthmeticChecker_GetResult_Response();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ArthmeticChecker_GetResult_Response_message_member_array[2] = {
  {
    "status",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_study_msgs::action::ArthmeticChecker_GetResult_Response, status),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "result",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<ros_study_msgs::action::ArthmeticChecker_Result>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_study_msgs::action::ArthmeticChecker_GetResult_Response, result),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ArthmeticChecker_GetResult_Response_message_members = {
  "ros_study_msgs::action",  // message namespace
  "ArthmeticChecker_GetResult_Response",  // message name
  2,  // number of fields
  sizeof(ros_study_msgs::action::ArthmeticChecker_GetResult_Response),
  ArthmeticChecker_GetResult_Response_message_member_array,  // message members
  ArthmeticChecker_GetResult_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  ArthmeticChecker_GetResult_Response_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t ArthmeticChecker_GetResult_Response_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ArthmeticChecker_GetResult_Response_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace ros_study_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<ros_study_msgs::action::ArthmeticChecker_GetResult_Response>()
{
  return &::ros_study_msgs::action::rosidl_typesupport_introspection_cpp::ArthmeticChecker_GetResult_Response_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ros_study_msgs, action, ArthmeticChecker_GetResult_Response)() {
  return &::ros_study_msgs::action::rosidl_typesupport_introspection_cpp::ArthmeticChecker_GetResult_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"
// already included above
// #include "ros_study_msgs/action/detail/arthmetic_checker__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/service_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/service_type_support_decl.hpp"

namespace ros_study_msgs
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

// this is intentionally not const to allow initialization later to prevent an initialization race
static ::rosidl_typesupport_introspection_cpp::ServiceMembers ArthmeticChecker_GetResult_service_members = {
  "ros_study_msgs::action",  // service namespace
  "ArthmeticChecker_GetResult",  // service name
  // these two fields are initialized below on the first access
  // see get_service_type_support_handle<ros_study_msgs::action::ArthmeticChecker_GetResult>()
  nullptr,  // request message
  nullptr  // response message
};

static const rosidl_service_type_support_t ArthmeticChecker_GetResult_service_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ArthmeticChecker_GetResult_service_members,
  get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace ros_study_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<ros_study_msgs::action::ArthmeticChecker_GetResult>()
{
  // get a handle to the value to be returned
  auto service_type_support =
    &::ros_study_msgs::action::rosidl_typesupport_introspection_cpp::ArthmeticChecker_GetResult_service_type_support_handle;
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
        ::ros_study_msgs::action::ArthmeticChecker_GetResult_Request
      >()->data
      );
    // initialize the response_members_ with the static function from the external library
    service_members->response_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::ros_study_msgs::action::ArthmeticChecker_GetResult_Response
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
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ros_study_msgs, action, ArthmeticChecker_GetResult)() {
  return ::rosidl_typesupport_introspection_cpp::get_service_type_support_handle<ros_study_msgs::action::ArthmeticChecker_GetResult>();
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
// #include "ros_study_msgs/action/detail/arthmetic_checker__struct.hpp"
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

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void ArthmeticChecker_FeedbackMessage_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) ros_study_msgs::action::ArthmeticChecker_FeedbackMessage(_init);
}

void ArthmeticChecker_FeedbackMessage_fini_function(void * message_memory)
{
  auto typed_message = static_cast<ros_study_msgs::action::ArthmeticChecker_FeedbackMessage *>(message_memory);
  typed_message->~ArthmeticChecker_FeedbackMessage();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ArthmeticChecker_FeedbackMessage_message_member_array[2] = {
  {
    "goal_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<unique_identifier_msgs::msg::UUID>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_study_msgs::action::ArthmeticChecker_FeedbackMessage, goal_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "feedback",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<ros_study_msgs::action::ArthmeticChecker_Feedback>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_study_msgs::action::ArthmeticChecker_FeedbackMessage, feedback),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ArthmeticChecker_FeedbackMessage_message_members = {
  "ros_study_msgs::action",  // message namespace
  "ArthmeticChecker_FeedbackMessage",  // message name
  2,  // number of fields
  sizeof(ros_study_msgs::action::ArthmeticChecker_FeedbackMessage),
  ArthmeticChecker_FeedbackMessage_message_member_array,  // message members
  ArthmeticChecker_FeedbackMessage_init_function,  // function to initialize message memory (memory has to be allocated)
  ArthmeticChecker_FeedbackMessage_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t ArthmeticChecker_FeedbackMessage_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ArthmeticChecker_FeedbackMessage_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace ros_study_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<ros_study_msgs::action::ArthmeticChecker_FeedbackMessage>()
{
  return &::ros_study_msgs::action::rosidl_typesupport_introspection_cpp::ArthmeticChecker_FeedbackMessage_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ros_study_msgs, action, ArthmeticChecker_FeedbackMessage)() {
  return &::ros_study_msgs::action::rosidl_typesupport_introspection_cpp::ArthmeticChecker_FeedbackMessage_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
