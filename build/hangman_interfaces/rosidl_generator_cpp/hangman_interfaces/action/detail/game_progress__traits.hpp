// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from hangman_interfaces:action/GameProgress.idl
// generated code does not contain a copyright notice

#ifndef HANGMAN_INTERFACES__ACTION__DETAIL__GAME_PROGRESS__TRAITS_HPP_
#define HANGMAN_INTERFACES__ACTION__DETAIL__GAME_PROGRESS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "hangman_interfaces/action/detail/game_progress__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace hangman_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const GameProgress_Goal & msg,
  std::ostream & out)
{
  (void)msg;
  out << "null";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GameProgress_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GameProgress_Goal & msg, bool use_flow_style = false)
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

}  // namespace hangman_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use hangman_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const hangman_interfaces::action::GameProgress_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  hangman_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use hangman_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const hangman_interfaces::action::GameProgress_Goal & msg)
{
  return hangman_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<hangman_interfaces::action::GameProgress_Goal>()
{
  return "hangman_interfaces::action::GameProgress_Goal";
}

template<>
inline const char * name<hangman_interfaces::action::GameProgress_Goal>()
{
  return "hangman_interfaces/action/GameProgress_Goal";
}

template<>
struct has_fixed_size<hangman_interfaces::action::GameProgress_Goal>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<hangman_interfaces::action::GameProgress_Goal>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<hangman_interfaces::action::GameProgress_Goal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace hangman_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const GameProgress_Result & msg,
  std::ostream & out)
{
  out << "{";
  // member: game_over
  {
    out << "game_over: ";
    rosidl_generator_traits::value_to_yaml(msg.game_over, out);
    out << ", ";
  }

  // member: won
  {
    out << "won: ";
    rosidl_generator_traits::value_to_yaml(msg.won, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GameProgress_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: game_over
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "game_over: ";
    rosidl_generator_traits::value_to_yaml(msg.game_over, out);
    out << "\n";
  }

  // member: won
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "won: ";
    rosidl_generator_traits::value_to_yaml(msg.won, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GameProgress_Result & msg, bool use_flow_style = false)
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

}  // namespace hangman_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use hangman_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const hangman_interfaces::action::GameProgress_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  hangman_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use hangman_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const hangman_interfaces::action::GameProgress_Result & msg)
{
  return hangman_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<hangman_interfaces::action::GameProgress_Result>()
{
  return "hangman_interfaces::action::GameProgress_Result";
}

template<>
inline const char * name<hangman_interfaces::action::GameProgress_Result>()
{
  return "hangman_interfaces/action/GameProgress_Result";
}

template<>
struct has_fixed_size<hangman_interfaces::action::GameProgress_Result>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<hangman_interfaces::action::GameProgress_Result>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<hangman_interfaces::action::GameProgress_Result>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace hangman_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const GameProgress_Feedback & msg,
  std::ostream & out)
{
  out << "{";
  // member: game_over
  {
    out << "game_over: ";
    rosidl_generator_traits::value_to_yaml(msg.game_over, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GameProgress_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: game_over
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "game_over: ";
    rosidl_generator_traits::value_to_yaml(msg.game_over, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GameProgress_Feedback & msg, bool use_flow_style = false)
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

}  // namespace hangman_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use hangman_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const hangman_interfaces::action::GameProgress_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  hangman_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use hangman_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const hangman_interfaces::action::GameProgress_Feedback & msg)
{
  return hangman_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<hangman_interfaces::action::GameProgress_Feedback>()
{
  return "hangman_interfaces::action::GameProgress_Feedback";
}

template<>
inline const char * name<hangman_interfaces::action::GameProgress_Feedback>()
{
  return "hangman_interfaces/action/GameProgress_Feedback";
}

template<>
struct has_fixed_size<hangman_interfaces::action::GameProgress_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<hangman_interfaces::action::GameProgress_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<hangman_interfaces::action::GameProgress_Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'goal'
#include "hangman_interfaces/action/detail/game_progress__traits.hpp"

namespace hangman_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const GameProgress_SendGoal_Request & msg,
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
  const GameProgress_SendGoal_Request & msg,
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

inline std::string to_yaml(const GameProgress_SendGoal_Request & msg, bool use_flow_style = false)
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

}  // namespace hangman_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use hangman_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const hangman_interfaces::action::GameProgress_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  hangman_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use hangman_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const hangman_interfaces::action::GameProgress_SendGoal_Request & msg)
{
  return hangman_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<hangman_interfaces::action::GameProgress_SendGoal_Request>()
{
  return "hangman_interfaces::action::GameProgress_SendGoal_Request";
}

template<>
inline const char * name<hangman_interfaces::action::GameProgress_SendGoal_Request>()
{
  return "hangman_interfaces/action/GameProgress_SendGoal_Request";
}

template<>
struct has_fixed_size<hangman_interfaces::action::GameProgress_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<hangman_interfaces::action::GameProgress_Goal>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<hangman_interfaces::action::GameProgress_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<hangman_interfaces::action::GameProgress_Goal>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<hangman_interfaces::action::GameProgress_SendGoal_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace hangman_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const GameProgress_SendGoal_Response & msg,
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
  const GameProgress_SendGoal_Response & msg,
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

inline std::string to_yaml(const GameProgress_SendGoal_Response & msg, bool use_flow_style = false)
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

}  // namespace hangman_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use hangman_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const hangman_interfaces::action::GameProgress_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  hangman_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use hangman_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const hangman_interfaces::action::GameProgress_SendGoal_Response & msg)
{
  return hangman_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<hangman_interfaces::action::GameProgress_SendGoal_Response>()
{
  return "hangman_interfaces::action::GameProgress_SendGoal_Response";
}

template<>
inline const char * name<hangman_interfaces::action::GameProgress_SendGoal_Response>()
{
  return "hangman_interfaces/action/GameProgress_SendGoal_Response";
}

template<>
struct has_fixed_size<hangman_interfaces::action::GameProgress_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<hangman_interfaces::action::GameProgress_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<hangman_interfaces::action::GameProgress_SendGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<hangman_interfaces::action::GameProgress_SendGoal>()
{
  return "hangman_interfaces::action::GameProgress_SendGoal";
}

template<>
inline const char * name<hangman_interfaces::action::GameProgress_SendGoal>()
{
  return "hangman_interfaces/action/GameProgress_SendGoal";
}

template<>
struct has_fixed_size<hangman_interfaces::action::GameProgress_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<hangman_interfaces::action::GameProgress_SendGoal_Request>::value &&
    has_fixed_size<hangman_interfaces::action::GameProgress_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<hangman_interfaces::action::GameProgress_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<hangman_interfaces::action::GameProgress_SendGoal_Request>::value &&
    has_bounded_size<hangman_interfaces::action::GameProgress_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<hangman_interfaces::action::GameProgress_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<hangman_interfaces::action::GameProgress_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<hangman_interfaces::action::GameProgress_SendGoal_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"

namespace hangman_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const GameProgress_GetResult_Request & msg,
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
  const GameProgress_GetResult_Request & msg,
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

inline std::string to_yaml(const GameProgress_GetResult_Request & msg, bool use_flow_style = false)
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

}  // namespace hangman_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use hangman_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const hangman_interfaces::action::GameProgress_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  hangman_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use hangman_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const hangman_interfaces::action::GameProgress_GetResult_Request & msg)
{
  return hangman_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<hangman_interfaces::action::GameProgress_GetResult_Request>()
{
  return "hangman_interfaces::action::GameProgress_GetResult_Request";
}

template<>
inline const char * name<hangman_interfaces::action::GameProgress_GetResult_Request>()
{
  return "hangman_interfaces/action/GameProgress_GetResult_Request";
}

template<>
struct has_fixed_size<hangman_interfaces::action::GameProgress_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<hangman_interfaces::action::GameProgress_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<hangman_interfaces::action::GameProgress_GetResult_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "hangman_interfaces/action/detail/game_progress__traits.hpp"

namespace hangman_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const GameProgress_GetResult_Response & msg,
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
  const GameProgress_GetResult_Response & msg,
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

inline std::string to_yaml(const GameProgress_GetResult_Response & msg, bool use_flow_style = false)
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

}  // namespace hangman_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use hangman_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const hangman_interfaces::action::GameProgress_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  hangman_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use hangman_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const hangman_interfaces::action::GameProgress_GetResult_Response & msg)
{
  return hangman_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<hangman_interfaces::action::GameProgress_GetResult_Response>()
{
  return "hangman_interfaces::action::GameProgress_GetResult_Response";
}

template<>
inline const char * name<hangman_interfaces::action::GameProgress_GetResult_Response>()
{
  return "hangman_interfaces/action/GameProgress_GetResult_Response";
}

template<>
struct has_fixed_size<hangman_interfaces::action::GameProgress_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<hangman_interfaces::action::GameProgress_Result>::value> {};

template<>
struct has_bounded_size<hangman_interfaces::action::GameProgress_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<hangman_interfaces::action::GameProgress_Result>::value> {};

template<>
struct is_message<hangman_interfaces::action::GameProgress_GetResult_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<hangman_interfaces::action::GameProgress_GetResult>()
{
  return "hangman_interfaces::action::GameProgress_GetResult";
}

template<>
inline const char * name<hangman_interfaces::action::GameProgress_GetResult>()
{
  return "hangman_interfaces/action/GameProgress_GetResult";
}

template<>
struct has_fixed_size<hangman_interfaces::action::GameProgress_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<hangman_interfaces::action::GameProgress_GetResult_Request>::value &&
    has_fixed_size<hangman_interfaces::action::GameProgress_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<hangman_interfaces::action::GameProgress_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<hangman_interfaces::action::GameProgress_GetResult_Request>::value &&
    has_bounded_size<hangman_interfaces::action::GameProgress_GetResult_Response>::value
  >
{
};

template<>
struct is_service<hangman_interfaces::action::GameProgress_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<hangman_interfaces::action::GameProgress_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<hangman_interfaces::action::GameProgress_GetResult_Response>
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
// #include "hangman_interfaces/action/detail/game_progress__traits.hpp"

namespace hangman_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const GameProgress_FeedbackMessage & msg,
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
  const GameProgress_FeedbackMessage & msg,
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

inline std::string to_yaml(const GameProgress_FeedbackMessage & msg, bool use_flow_style = false)
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

}  // namespace hangman_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use hangman_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const hangman_interfaces::action::GameProgress_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  hangman_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use hangman_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const hangman_interfaces::action::GameProgress_FeedbackMessage & msg)
{
  return hangman_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<hangman_interfaces::action::GameProgress_FeedbackMessage>()
{
  return "hangman_interfaces::action::GameProgress_FeedbackMessage";
}

template<>
inline const char * name<hangman_interfaces::action::GameProgress_FeedbackMessage>()
{
  return "hangman_interfaces/action/GameProgress_FeedbackMessage";
}

template<>
struct has_fixed_size<hangman_interfaces::action::GameProgress_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<hangman_interfaces::action::GameProgress_Feedback>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<hangman_interfaces::action::GameProgress_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<hangman_interfaces::action::GameProgress_Feedback>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<hangman_interfaces::action::GameProgress_FeedbackMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
struct is_action<hangman_interfaces::action::GameProgress>
  : std::true_type
{
};

template<>
struct is_action_goal<hangman_interfaces::action::GameProgress_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<hangman_interfaces::action::GameProgress_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<hangman_interfaces::action::GameProgress_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // HANGMAN_INTERFACES__ACTION__DETAIL__GAME_PROGRESS__TRAITS_HPP_
