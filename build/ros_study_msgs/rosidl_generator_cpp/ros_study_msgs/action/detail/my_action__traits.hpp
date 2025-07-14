// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ros_study_msgs:action/MyAction.idl
// generated code does not contain a copyright notice

#ifndef ROS_STUDY_MSGS__ACTION__DETAIL__MY_ACTION__TRAITS_HPP_
#define ROS_STUDY_MSGS__ACTION__DETAIL__MY_ACTION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ros_study_msgs/action/detail/my_action__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace ros_study_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const MyAction_Goal & msg,
  std::ostream & out)
{
  out << "{";
  // member: go
  {
    out << "go: ";
    rosidl_generator_traits::value_to_yaml(msg.go, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MyAction_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: go
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "go: ";
    rosidl_generator_traits::value_to_yaml(msg.go, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MyAction_Goal & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace ros_study_msgs

namespace rosidl_generator_traits
{

[[deprecated("use ros_study_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const ros_study_msgs::action::MyAction_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  ros_study_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ros_study_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const ros_study_msgs::action::MyAction_Goal & msg)
{
  return ros_study_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<ros_study_msgs::action::MyAction_Goal>()
{
  return "ros_study_msgs::action::MyAction_Goal";
}

template<>
inline const char * name<ros_study_msgs::action::MyAction_Goal>()
{
  return "ros_study_msgs/action/MyAction_Goal";
}

template<>
struct has_fixed_size<ros_study_msgs::action::MyAction_Goal>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<ros_study_msgs::action::MyAction_Goal>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<ros_study_msgs::action::MyAction_Goal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace ros_study_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const MyAction_Result & msg,
  std::ostream & out)
{
  out << "{";
  // member: res
  {
    out << "res: ";
    rosidl_generator_traits::value_to_yaml(msg.res, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MyAction_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: res
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "res: ";
    rosidl_generator_traits::value_to_yaml(msg.res, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MyAction_Result & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace ros_study_msgs

namespace rosidl_generator_traits
{

[[deprecated("use ros_study_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const ros_study_msgs::action::MyAction_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  ros_study_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ros_study_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const ros_study_msgs::action::MyAction_Result & msg)
{
  return ros_study_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<ros_study_msgs::action::MyAction_Result>()
{
  return "ros_study_msgs::action::MyAction_Result";
}

template<>
inline const char * name<ros_study_msgs::action::MyAction_Result>()
{
  return "ros_study_msgs/action/MyAction_Result";
}

template<>
struct has_fixed_size<ros_study_msgs::action::MyAction_Result>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<ros_study_msgs::action::MyAction_Result>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<ros_study_msgs::action::MyAction_Result>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace ros_study_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const MyAction_Feedback & msg,
  std::ostream & out)
{
  out << "{";
  // member: str
  {
    if (msg.str.size() == 0) {
      out << "str: []";
    } else {
      out << "str: [";
      size_t pending_items = msg.str.size();
      for (auto item : msg.str) {
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
  const MyAction_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: str
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.str.size() == 0) {
      out << "str: []\n";
    } else {
      out << "str:\n";
      for (auto item : msg.str) {
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

inline std::string to_yaml(const MyAction_Feedback & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace ros_study_msgs

namespace rosidl_generator_traits
{

[[deprecated("use ros_study_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const ros_study_msgs::action::MyAction_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  ros_study_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ros_study_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const ros_study_msgs::action::MyAction_Feedback & msg)
{
  return ros_study_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<ros_study_msgs::action::MyAction_Feedback>()
{
  return "ros_study_msgs::action::MyAction_Feedback";
}

template<>
inline const char * name<ros_study_msgs::action::MyAction_Feedback>()
{
  return "ros_study_msgs/action/MyAction_Feedback";
}

template<>
struct has_fixed_size<ros_study_msgs::action::MyAction_Feedback>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ros_study_msgs::action::MyAction_Feedback>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ros_study_msgs::action::MyAction_Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'goal'
#include "ros_study_msgs/action/detail/my_action__traits.hpp"

namespace ros_study_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const MyAction_SendGoal_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: goal
  {
    out << "goal: ";
    to_flow_style_yaml(msg.goal, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MyAction_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: goal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal:\n";
    to_block_style_yaml(msg.goal, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MyAction_SendGoal_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace ros_study_msgs

namespace rosidl_generator_traits
{

[[deprecated("use ros_study_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const ros_study_msgs::action::MyAction_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  ros_study_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ros_study_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const ros_study_msgs::action::MyAction_SendGoal_Request & msg)
{
  return ros_study_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<ros_study_msgs::action::MyAction_SendGoal_Request>()
{
  return "ros_study_msgs::action::MyAction_SendGoal_Request";
}

template<>
inline const char * name<ros_study_msgs::action::MyAction_SendGoal_Request>()
{
  return "ros_study_msgs/action/MyAction_SendGoal_Request";
}

template<>
struct has_fixed_size<ros_study_msgs::action::MyAction_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<ros_study_msgs::action::MyAction_Goal>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<ros_study_msgs::action::MyAction_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<ros_study_msgs::action::MyAction_Goal>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<ros_study_msgs::action::MyAction_SendGoal_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace ros_study_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const MyAction_SendGoal_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: accepted
  {
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << ", ";
  }

  // member: stamp
  {
    out << "stamp: ";
    to_flow_style_yaml(msg.stamp, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MyAction_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: accepted
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << "\n";
  }

  // member: stamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stamp:\n";
    to_block_style_yaml(msg.stamp, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MyAction_SendGoal_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace ros_study_msgs

namespace rosidl_generator_traits
{

[[deprecated("use ros_study_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const ros_study_msgs::action::MyAction_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  ros_study_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ros_study_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const ros_study_msgs::action::MyAction_SendGoal_Response & msg)
{
  return ros_study_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<ros_study_msgs::action::MyAction_SendGoal_Response>()
{
  return "ros_study_msgs::action::MyAction_SendGoal_Response";
}

template<>
inline const char * name<ros_study_msgs::action::MyAction_SendGoal_Response>()
{
  return "ros_study_msgs/action/MyAction_SendGoal_Response";
}

template<>
struct has_fixed_size<ros_study_msgs::action::MyAction_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<ros_study_msgs::action::MyAction_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<ros_study_msgs::action::MyAction_SendGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<ros_study_msgs::action::MyAction_SendGoal>()
{
  return "ros_study_msgs::action::MyAction_SendGoal";
}

template<>
inline const char * name<ros_study_msgs::action::MyAction_SendGoal>()
{
  return "ros_study_msgs/action/MyAction_SendGoal";
}

template<>
struct has_fixed_size<ros_study_msgs::action::MyAction_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<ros_study_msgs::action::MyAction_SendGoal_Request>::value &&
    has_fixed_size<ros_study_msgs::action::MyAction_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<ros_study_msgs::action::MyAction_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<ros_study_msgs::action::MyAction_SendGoal_Request>::value &&
    has_bounded_size<ros_study_msgs::action::MyAction_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<ros_study_msgs::action::MyAction_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<ros_study_msgs::action::MyAction_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<ros_study_msgs::action::MyAction_SendGoal_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"

namespace ros_study_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const MyAction_GetResult_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MyAction_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MyAction_GetResult_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace ros_study_msgs

namespace rosidl_generator_traits
{

[[deprecated("use ros_study_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const ros_study_msgs::action::MyAction_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  ros_study_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ros_study_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const ros_study_msgs::action::MyAction_GetResult_Request & msg)
{
  return ros_study_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<ros_study_msgs::action::MyAction_GetResult_Request>()
{
  return "ros_study_msgs::action::MyAction_GetResult_Request";
}

template<>
inline const char * name<ros_study_msgs::action::MyAction_GetResult_Request>()
{
  return "ros_study_msgs/action/MyAction_GetResult_Request";
}

template<>
struct has_fixed_size<ros_study_msgs::action::MyAction_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<ros_study_msgs::action::MyAction_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<ros_study_msgs::action::MyAction_GetResult_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "ros_study_msgs/action/detail/my_action__traits.hpp"

namespace ros_study_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const MyAction_GetResult_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << ", ";
  }

  // member: result
  {
    out << "result: ";
    to_flow_style_yaml(msg.result, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MyAction_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << "\n";
  }

  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result:\n";
    to_block_style_yaml(msg.result, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MyAction_GetResult_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace ros_study_msgs

namespace rosidl_generator_traits
{

[[deprecated("use ros_study_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const ros_study_msgs::action::MyAction_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  ros_study_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ros_study_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const ros_study_msgs::action::MyAction_GetResult_Response & msg)
{
  return ros_study_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<ros_study_msgs::action::MyAction_GetResult_Response>()
{
  return "ros_study_msgs::action::MyAction_GetResult_Response";
}

template<>
inline const char * name<ros_study_msgs::action::MyAction_GetResult_Response>()
{
  return "ros_study_msgs/action/MyAction_GetResult_Response";
}

template<>
struct has_fixed_size<ros_study_msgs::action::MyAction_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<ros_study_msgs::action::MyAction_Result>::value> {};

template<>
struct has_bounded_size<ros_study_msgs::action::MyAction_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<ros_study_msgs::action::MyAction_Result>::value> {};

template<>
struct is_message<ros_study_msgs::action::MyAction_GetResult_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<ros_study_msgs::action::MyAction_GetResult>()
{
  return "ros_study_msgs::action::MyAction_GetResult";
}

template<>
inline const char * name<ros_study_msgs::action::MyAction_GetResult>()
{
  return "ros_study_msgs/action/MyAction_GetResult";
}

template<>
struct has_fixed_size<ros_study_msgs::action::MyAction_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<ros_study_msgs::action::MyAction_GetResult_Request>::value &&
    has_fixed_size<ros_study_msgs::action::MyAction_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<ros_study_msgs::action::MyAction_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<ros_study_msgs::action::MyAction_GetResult_Request>::value &&
    has_bounded_size<ros_study_msgs::action::MyAction_GetResult_Response>::value
  >
{
};

template<>
struct is_service<ros_study_msgs::action::MyAction_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<ros_study_msgs::action::MyAction_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<ros_study_msgs::action::MyAction_GetResult_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'feedback'
// already included above
// #include "ros_study_msgs/action/detail/my_action__traits.hpp"

namespace ros_study_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const MyAction_FeedbackMessage & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: feedback
  {
    out << "feedback: ";
    to_flow_style_yaml(msg.feedback, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MyAction_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: feedback
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "feedback:\n";
    to_block_style_yaml(msg.feedback, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MyAction_FeedbackMessage & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace ros_study_msgs

namespace rosidl_generator_traits
{

[[deprecated("use ros_study_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const ros_study_msgs::action::MyAction_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  ros_study_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ros_study_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const ros_study_msgs::action::MyAction_FeedbackMessage & msg)
{
  return ros_study_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<ros_study_msgs::action::MyAction_FeedbackMessage>()
{
  return "ros_study_msgs::action::MyAction_FeedbackMessage";
}

template<>
inline const char * name<ros_study_msgs::action::MyAction_FeedbackMessage>()
{
  return "ros_study_msgs/action/MyAction_FeedbackMessage";
}

template<>
struct has_fixed_size<ros_study_msgs::action::MyAction_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<ros_study_msgs::action::MyAction_Feedback>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<ros_study_msgs::action::MyAction_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<ros_study_msgs::action::MyAction_Feedback>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<ros_study_msgs::action::MyAction_FeedbackMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
struct is_action<ros_study_msgs::action::MyAction>
  : std::true_type
{
};

template<>
struct is_action_goal<ros_study_msgs::action::MyAction_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<ros_study_msgs::action::MyAction_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<ros_study_msgs::action::MyAction_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // ROS_STUDY_MSGS__ACTION__DETAIL__MY_ACTION__TRAITS_HPP_
