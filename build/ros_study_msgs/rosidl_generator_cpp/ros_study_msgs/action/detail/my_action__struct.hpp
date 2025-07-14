// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ros_study_msgs:action/MyAction.idl
// generated code does not contain a copyright notice

#ifndef ROS_STUDY_MSGS__ACTION__DETAIL__MY_ACTION__STRUCT_HPP_
#define ROS_STUDY_MSGS__ACTION__DETAIL__MY_ACTION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__ros_study_msgs__action__MyAction_Goal __attribute__((deprecated))
#else
# define DEPRECATED__ros_study_msgs__action__MyAction_Goal __declspec(deprecated)
#endif

namespace ros_study_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct MyAction_Goal_
{
  using Type = MyAction_Goal_<ContainerAllocator>;

  explicit MyAction_Goal_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->go = 0.0f;
    }
  }

  explicit MyAction_Goal_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->go = 0.0f;
    }
  }

  // field types and members
  using _go_type =
    float;
  _go_type go;

  // setters for named parameter idiom
  Type & set__go(
    const float & _arg)
  {
    this->go = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ros_study_msgs::action::MyAction_Goal_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros_study_msgs::action::MyAction_Goal_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros_study_msgs::action::MyAction_Goal_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros_study_msgs::action::MyAction_Goal_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros_study_msgs::action::MyAction_Goal_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros_study_msgs::action::MyAction_Goal_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros_study_msgs::action::MyAction_Goal_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros_study_msgs::action::MyAction_Goal_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros_study_msgs::action::MyAction_Goal_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros_study_msgs::action::MyAction_Goal_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros_study_msgs__action__MyAction_Goal
    std::shared_ptr<ros_study_msgs::action::MyAction_Goal_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros_study_msgs__action__MyAction_Goal
    std::shared_ptr<ros_study_msgs::action::MyAction_Goal_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MyAction_Goal_ & other) const
  {
    if (this->go != other.go) {
      return false;
    }
    return true;
  }
  bool operator!=(const MyAction_Goal_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MyAction_Goal_

// alias to use template instance with default allocator
using MyAction_Goal =
  ros_study_msgs::action::MyAction_Goal_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace ros_study_msgs


#ifndef _WIN32
# define DEPRECATED__ros_study_msgs__action__MyAction_Result __attribute__((deprecated))
#else
# define DEPRECATED__ros_study_msgs__action__MyAction_Result __declspec(deprecated)
#endif

namespace ros_study_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct MyAction_Result_
{
  using Type = MyAction_Result_<ContainerAllocator>;

  explicit MyAction_Result_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->res = 0.0f;
    }
  }

  explicit MyAction_Result_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->res = 0.0f;
    }
  }

  // field types and members
  using _res_type =
    float;
  _res_type res;

  // setters for named parameter idiom
  Type & set__res(
    const float & _arg)
  {
    this->res = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ros_study_msgs::action::MyAction_Result_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros_study_msgs::action::MyAction_Result_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros_study_msgs::action::MyAction_Result_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros_study_msgs::action::MyAction_Result_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros_study_msgs::action::MyAction_Result_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros_study_msgs::action::MyAction_Result_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros_study_msgs::action::MyAction_Result_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros_study_msgs::action::MyAction_Result_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros_study_msgs::action::MyAction_Result_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros_study_msgs::action::MyAction_Result_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros_study_msgs__action__MyAction_Result
    std::shared_ptr<ros_study_msgs::action::MyAction_Result_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros_study_msgs__action__MyAction_Result
    std::shared_ptr<ros_study_msgs::action::MyAction_Result_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MyAction_Result_ & other) const
  {
    if (this->res != other.res) {
      return false;
    }
    return true;
  }
  bool operator!=(const MyAction_Result_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MyAction_Result_

// alias to use template instance with default allocator
using MyAction_Result =
  ros_study_msgs::action::MyAction_Result_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace ros_study_msgs


#ifndef _WIN32
# define DEPRECATED__ros_study_msgs__action__MyAction_Feedback __attribute__((deprecated))
#else
# define DEPRECATED__ros_study_msgs__action__MyAction_Feedback __declspec(deprecated)
#endif

namespace ros_study_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct MyAction_Feedback_
{
  using Type = MyAction_Feedback_<ContainerAllocator>;

  explicit MyAction_Feedback_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit MyAction_Feedback_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _str_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _str_type str;

  // setters for named parameter idiom
  Type & set__str(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->str = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ros_study_msgs::action::MyAction_Feedback_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros_study_msgs::action::MyAction_Feedback_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros_study_msgs::action::MyAction_Feedback_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros_study_msgs::action::MyAction_Feedback_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros_study_msgs::action::MyAction_Feedback_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros_study_msgs::action::MyAction_Feedback_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros_study_msgs::action::MyAction_Feedback_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros_study_msgs::action::MyAction_Feedback_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros_study_msgs::action::MyAction_Feedback_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros_study_msgs::action::MyAction_Feedback_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros_study_msgs__action__MyAction_Feedback
    std::shared_ptr<ros_study_msgs::action::MyAction_Feedback_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros_study_msgs__action__MyAction_Feedback
    std::shared_ptr<ros_study_msgs::action::MyAction_Feedback_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MyAction_Feedback_ & other) const
  {
    if (this->str != other.str) {
      return false;
    }
    return true;
  }
  bool operator!=(const MyAction_Feedback_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MyAction_Feedback_

// alias to use template instance with default allocator
using MyAction_Feedback =
  ros_study_msgs::action::MyAction_Feedback_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace ros_study_msgs


// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'goal'
#include "ros_study_msgs/action/detail/my_action__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__ros_study_msgs__action__MyAction_SendGoal_Request __attribute__((deprecated))
#else
# define DEPRECATED__ros_study_msgs__action__MyAction_SendGoal_Request __declspec(deprecated)
#endif

namespace ros_study_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct MyAction_SendGoal_Request_
{
  using Type = MyAction_SendGoal_Request_<ContainerAllocator>;

  explicit MyAction_SendGoal_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    goal(_init)
  {
    (void)_init;
  }

  explicit MyAction_SendGoal_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    goal(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _goal_type =
    ros_study_msgs::action::MyAction_Goal_<ContainerAllocator>;
  _goal_type goal;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__goal(
    const ros_study_msgs::action::MyAction_Goal_<ContainerAllocator> & _arg)
  {
    this->goal = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ros_study_msgs::action::MyAction_SendGoal_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros_study_msgs::action::MyAction_SendGoal_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros_study_msgs::action::MyAction_SendGoal_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros_study_msgs::action::MyAction_SendGoal_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros_study_msgs::action::MyAction_SendGoal_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros_study_msgs::action::MyAction_SendGoal_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros_study_msgs::action::MyAction_SendGoal_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros_study_msgs::action::MyAction_SendGoal_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros_study_msgs::action::MyAction_SendGoal_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros_study_msgs::action::MyAction_SendGoal_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros_study_msgs__action__MyAction_SendGoal_Request
    std::shared_ptr<ros_study_msgs::action::MyAction_SendGoal_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros_study_msgs__action__MyAction_SendGoal_Request
    std::shared_ptr<ros_study_msgs::action::MyAction_SendGoal_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MyAction_SendGoal_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->goal != other.goal) {
      return false;
    }
    return true;
  }
  bool operator!=(const MyAction_SendGoal_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MyAction_SendGoal_Request_

// alias to use template instance with default allocator
using MyAction_SendGoal_Request =
  ros_study_msgs::action::MyAction_SendGoal_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace ros_study_msgs


// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__ros_study_msgs__action__MyAction_SendGoal_Response __attribute__((deprecated))
#else
# define DEPRECATED__ros_study_msgs__action__MyAction_SendGoal_Response __declspec(deprecated)
#endif

namespace ros_study_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct MyAction_SendGoal_Response_
{
  using Type = MyAction_SendGoal_Response_<ContainerAllocator>;

  explicit MyAction_SendGoal_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  explicit MyAction_SendGoal_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  // field types and members
  using _accepted_type =
    bool;
  _accepted_type accepted;
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;

  // setters for named parameter idiom
  Type & set__accepted(
    const bool & _arg)
  {
    this->accepted = _arg;
    return *this;
  }
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ros_study_msgs::action::MyAction_SendGoal_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros_study_msgs::action::MyAction_SendGoal_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros_study_msgs::action::MyAction_SendGoal_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros_study_msgs::action::MyAction_SendGoal_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros_study_msgs::action::MyAction_SendGoal_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros_study_msgs::action::MyAction_SendGoal_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros_study_msgs::action::MyAction_SendGoal_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros_study_msgs::action::MyAction_SendGoal_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros_study_msgs::action::MyAction_SendGoal_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros_study_msgs::action::MyAction_SendGoal_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros_study_msgs__action__MyAction_SendGoal_Response
    std::shared_ptr<ros_study_msgs::action::MyAction_SendGoal_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros_study_msgs__action__MyAction_SendGoal_Response
    std::shared_ptr<ros_study_msgs::action::MyAction_SendGoal_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MyAction_SendGoal_Response_ & other) const
  {
    if (this->accepted != other.accepted) {
      return false;
    }
    if (this->stamp != other.stamp) {
      return false;
    }
    return true;
  }
  bool operator!=(const MyAction_SendGoal_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MyAction_SendGoal_Response_

// alias to use template instance with default allocator
using MyAction_SendGoal_Response =
  ros_study_msgs::action::MyAction_SendGoal_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace ros_study_msgs

namespace ros_study_msgs
{

namespace action
{

struct MyAction_SendGoal
{
  using Request = ros_study_msgs::action::MyAction_SendGoal_Request;
  using Response = ros_study_msgs::action::MyAction_SendGoal_Response;
};

}  // namespace action

}  // namespace ros_study_msgs


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__ros_study_msgs__action__MyAction_GetResult_Request __attribute__((deprecated))
#else
# define DEPRECATED__ros_study_msgs__action__MyAction_GetResult_Request __declspec(deprecated)
#endif

namespace ros_study_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct MyAction_GetResult_Request_
{
  using Type = MyAction_GetResult_Request_<ContainerAllocator>;

  explicit MyAction_GetResult_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init)
  {
    (void)_init;
  }

  explicit MyAction_GetResult_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ros_study_msgs::action::MyAction_GetResult_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros_study_msgs::action::MyAction_GetResult_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros_study_msgs::action::MyAction_GetResult_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros_study_msgs::action::MyAction_GetResult_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros_study_msgs::action::MyAction_GetResult_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros_study_msgs::action::MyAction_GetResult_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros_study_msgs::action::MyAction_GetResult_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros_study_msgs::action::MyAction_GetResult_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros_study_msgs::action::MyAction_GetResult_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros_study_msgs::action::MyAction_GetResult_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros_study_msgs__action__MyAction_GetResult_Request
    std::shared_ptr<ros_study_msgs::action::MyAction_GetResult_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros_study_msgs__action__MyAction_GetResult_Request
    std::shared_ptr<ros_study_msgs::action::MyAction_GetResult_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MyAction_GetResult_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const MyAction_GetResult_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MyAction_GetResult_Request_

// alias to use template instance with default allocator
using MyAction_GetResult_Request =
  ros_study_msgs::action::MyAction_GetResult_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace ros_study_msgs


// Include directives for member types
// Member 'result'
// already included above
// #include "ros_study_msgs/action/detail/my_action__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__ros_study_msgs__action__MyAction_GetResult_Response __attribute__((deprecated))
#else
# define DEPRECATED__ros_study_msgs__action__MyAction_GetResult_Response __declspec(deprecated)
#endif

namespace ros_study_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct MyAction_GetResult_Response_
{
  using Type = MyAction_GetResult_Response_<ContainerAllocator>;

  explicit MyAction_GetResult_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  explicit MyAction_GetResult_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  // field types and members
  using _status_type =
    int8_t;
  _status_type status;
  using _result_type =
    ros_study_msgs::action::MyAction_Result_<ContainerAllocator>;
  _result_type result;

  // setters for named parameter idiom
  Type & set__status(
    const int8_t & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__result(
    const ros_study_msgs::action::MyAction_Result_<ContainerAllocator> & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ros_study_msgs::action::MyAction_GetResult_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros_study_msgs::action::MyAction_GetResult_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros_study_msgs::action::MyAction_GetResult_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros_study_msgs::action::MyAction_GetResult_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros_study_msgs::action::MyAction_GetResult_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros_study_msgs::action::MyAction_GetResult_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros_study_msgs::action::MyAction_GetResult_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros_study_msgs::action::MyAction_GetResult_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros_study_msgs::action::MyAction_GetResult_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros_study_msgs::action::MyAction_GetResult_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros_study_msgs__action__MyAction_GetResult_Response
    std::shared_ptr<ros_study_msgs::action::MyAction_GetResult_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros_study_msgs__action__MyAction_GetResult_Response
    std::shared_ptr<ros_study_msgs::action::MyAction_GetResult_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MyAction_GetResult_Response_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const MyAction_GetResult_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MyAction_GetResult_Response_

// alias to use template instance with default allocator
using MyAction_GetResult_Response =
  ros_study_msgs::action::MyAction_GetResult_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace ros_study_msgs

namespace ros_study_msgs
{

namespace action
{

struct MyAction_GetResult
{
  using Request = ros_study_msgs::action::MyAction_GetResult_Request;
  using Response = ros_study_msgs::action::MyAction_GetResult_Response;
};

}  // namespace action

}  // namespace ros_study_msgs


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'feedback'
// already included above
// #include "ros_study_msgs/action/detail/my_action__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__ros_study_msgs__action__MyAction_FeedbackMessage __attribute__((deprecated))
#else
# define DEPRECATED__ros_study_msgs__action__MyAction_FeedbackMessage __declspec(deprecated)
#endif

namespace ros_study_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct MyAction_FeedbackMessage_
{
  using Type = MyAction_FeedbackMessage_<ContainerAllocator>;

  explicit MyAction_FeedbackMessage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    feedback(_init)
  {
    (void)_init;
  }

  explicit MyAction_FeedbackMessage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    feedback(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _feedback_type =
    ros_study_msgs::action::MyAction_Feedback_<ContainerAllocator>;
  _feedback_type feedback;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__feedback(
    const ros_study_msgs::action::MyAction_Feedback_<ContainerAllocator> & _arg)
  {
    this->feedback = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ros_study_msgs::action::MyAction_FeedbackMessage_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros_study_msgs::action::MyAction_FeedbackMessage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros_study_msgs::action::MyAction_FeedbackMessage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros_study_msgs::action::MyAction_FeedbackMessage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros_study_msgs::action::MyAction_FeedbackMessage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros_study_msgs::action::MyAction_FeedbackMessage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros_study_msgs::action::MyAction_FeedbackMessage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros_study_msgs::action::MyAction_FeedbackMessage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros_study_msgs::action::MyAction_FeedbackMessage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros_study_msgs::action::MyAction_FeedbackMessage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros_study_msgs__action__MyAction_FeedbackMessage
    std::shared_ptr<ros_study_msgs::action::MyAction_FeedbackMessage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros_study_msgs__action__MyAction_FeedbackMessage
    std::shared_ptr<ros_study_msgs::action::MyAction_FeedbackMessage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MyAction_FeedbackMessage_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->feedback != other.feedback) {
      return false;
    }
    return true;
  }
  bool operator!=(const MyAction_FeedbackMessage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MyAction_FeedbackMessage_

// alias to use template instance with default allocator
using MyAction_FeedbackMessage =
  ros_study_msgs::action::MyAction_FeedbackMessage_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace ros_study_msgs

#include "action_msgs/srv/cancel_goal.hpp"
#include "action_msgs/msg/goal_info.hpp"
#include "action_msgs/msg/goal_status_array.hpp"

namespace ros_study_msgs
{

namespace action
{

struct MyAction
{
  /// The goal message defined in the action definition.
  using Goal = ros_study_msgs::action::MyAction_Goal;
  /// The result message defined in the action definition.
  using Result = ros_study_msgs::action::MyAction_Result;
  /// The feedback message defined in the action definition.
  using Feedback = ros_study_msgs::action::MyAction_Feedback;

  struct Impl
  {
    /// The send_goal service using a wrapped version of the goal message as a request.
    using SendGoalService = ros_study_msgs::action::MyAction_SendGoal;
    /// The get_result service using a wrapped version of the result message as a response.
    using GetResultService = ros_study_msgs::action::MyAction_GetResult;
    /// The feedback message with generic fields which wraps the feedback message.
    using FeedbackMessage = ros_study_msgs::action::MyAction_FeedbackMessage;

    /// The generic service to cancel a goal.
    using CancelGoalService = action_msgs::srv::CancelGoal;
    /// The generic message for the status of a goal.
    using GoalStatusMessage = action_msgs::msg::GoalStatusArray;
  };
};

typedef struct MyAction MyAction;

}  // namespace action

}  // namespace ros_study_msgs

#endif  // ROS_STUDY_MSGS__ACTION__DETAIL__MY_ACTION__STRUCT_HPP_
