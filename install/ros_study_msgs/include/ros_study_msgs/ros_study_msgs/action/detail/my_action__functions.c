// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ros_study_msgs:action/MyAction.idl
// generated code does not contain a copyright notice
#include "ros_study_msgs/action/detail/my_action__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
ros_study_msgs__action__MyAction_Goal__init(ros_study_msgs__action__MyAction_Goal * msg)
{
  if (!msg) {
    return false;
  }
  // go
  return true;
}

void
ros_study_msgs__action__MyAction_Goal__fini(ros_study_msgs__action__MyAction_Goal * msg)
{
  if (!msg) {
    return;
  }
  // go
}

bool
ros_study_msgs__action__MyAction_Goal__are_equal(const ros_study_msgs__action__MyAction_Goal * lhs, const ros_study_msgs__action__MyAction_Goal * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // go
  if (lhs->go != rhs->go) {
    return false;
  }
  return true;
}

bool
ros_study_msgs__action__MyAction_Goal__copy(
  const ros_study_msgs__action__MyAction_Goal * input,
  ros_study_msgs__action__MyAction_Goal * output)
{
  if (!input || !output) {
    return false;
  }
  // go
  output->go = input->go;
  return true;
}

ros_study_msgs__action__MyAction_Goal *
ros_study_msgs__action__MyAction_Goal__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros_study_msgs__action__MyAction_Goal * msg = (ros_study_msgs__action__MyAction_Goal *)allocator.allocate(sizeof(ros_study_msgs__action__MyAction_Goal), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ros_study_msgs__action__MyAction_Goal));
  bool success = ros_study_msgs__action__MyAction_Goal__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ros_study_msgs__action__MyAction_Goal__destroy(ros_study_msgs__action__MyAction_Goal * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ros_study_msgs__action__MyAction_Goal__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ros_study_msgs__action__MyAction_Goal__Sequence__init(ros_study_msgs__action__MyAction_Goal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros_study_msgs__action__MyAction_Goal * data = NULL;

  if (size) {
    data = (ros_study_msgs__action__MyAction_Goal *)allocator.zero_allocate(size, sizeof(ros_study_msgs__action__MyAction_Goal), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ros_study_msgs__action__MyAction_Goal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ros_study_msgs__action__MyAction_Goal__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
ros_study_msgs__action__MyAction_Goal__Sequence__fini(ros_study_msgs__action__MyAction_Goal__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      ros_study_msgs__action__MyAction_Goal__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

ros_study_msgs__action__MyAction_Goal__Sequence *
ros_study_msgs__action__MyAction_Goal__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros_study_msgs__action__MyAction_Goal__Sequence * array = (ros_study_msgs__action__MyAction_Goal__Sequence *)allocator.allocate(sizeof(ros_study_msgs__action__MyAction_Goal__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ros_study_msgs__action__MyAction_Goal__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ros_study_msgs__action__MyAction_Goal__Sequence__destroy(ros_study_msgs__action__MyAction_Goal__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ros_study_msgs__action__MyAction_Goal__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ros_study_msgs__action__MyAction_Goal__Sequence__are_equal(const ros_study_msgs__action__MyAction_Goal__Sequence * lhs, const ros_study_msgs__action__MyAction_Goal__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ros_study_msgs__action__MyAction_Goal__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ros_study_msgs__action__MyAction_Goal__Sequence__copy(
  const ros_study_msgs__action__MyAction_Goal__Sequence * input,
  ros_study_msgs__action__MyAction_Goal__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ros_study_msgs__action__MyAction_Goal);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ros_study_msgs__action__MyAction_Goal * data =
      (ros_study_msgs__action__MyAction_Goal *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ros_study_msgs__action__MyAction_Goal__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ros_study_msgs__action__MyAction_Goal__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ros_study_msgs__action__MyAction_Goal__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
ros_study_msgs__action__MyAction_Result__init(ros_study_msgs__action__MyAction_Result * msg)
{
  if (!msg) {
    return false;
  }
  // res
  return true;
}

void
ros_study_msgs__action__MyAction_Result__fini(ros_study_msgs__action__MyAction_Result * msg)
{
  if (!msg) {
    return;
  }
  // res
}

bool
ros_study_msgs__action__MyAction_Result__are_equal(const ros_study_msgs__action__MyAction_Result * lhs, const ros_study_msgs__action__MyAction_Result * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // res
  if (lhs->res != rhs->res) {
    return false;
  }
  return true;
}

bool
ros_study_msgs__action__MyAction_Result__copy(
  const ros_study_msgs__action__MyAction_Result * input,
  ros_study_msgs__action__MyAction_Result * output)
{
  if (!input || !output) {
    return false;
  }
  // res
  output->res = input->res;
  return true;
}

ros_study_msgs__action__MyAction_Result *
ros_study_msgs__action__MyAction_Result__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros_study_msgs__action__MyAction_Result * msg = (ros_study_msgs__action__MyAction_Result *)allocator.allocate(sizeof(ros_study_msgs__action__MyAction_Result), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ros_study_msgs__action__MyAction_Result));
  bool success = ros_study_msgs__action__MyAction_Result__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ros_study_msgs__action__MyAction_Result__destroy(ros_study_msgs__action__MyAction_Result * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ros_study_msgs__action__MyAction_Result__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ros_study_msgs__action__MyAction_Result__Sequence__init(ros_study_msgs__action__MyAction_Result__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros_study_msgs__action__MyAction_Result * data = NULL;

  if (size) {
    data = (ros_study_msgs__action__MyAction_Result *)allocator.zero_allocate(size, sizeof(ros_study_msgs__action__MyAction_Result), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ros_study_msgs__action__MyAction_Result__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ros_study_msgs__action__MyAction_Result__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
ros_study_msgs__action__MyAction_Result__Sequence__fini(ros_study_msgs__action__MyAction_Result__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      ros_study_msgs__action__MyAction_Result__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

ros_study_msgs__action__MyAction_Result__Sequence *
ros_study_msgs__action__MyAction_Result__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros_study_msgs__action__MyAction_Result__Sequence * array = (ros_study_msgs__action__MyAction_Result__Sequence *)allocator.allocate(sizeof(ros_study_msgs__action__MyAction_Result__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ros_study_msgs__action__MyAction_Result__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ros_study_msgs__action__MyAction_Result__Sequence__destroy(ros_study_msgs__action__MyAction_Result__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ros_study_msgs__action__MyAction_Result__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ros_study_msgs__action__MyAction_Result__Sequence__are_equal(const ros_study_msgs__action__MyAction_Result__Sequence * lhs, const ros_study_msgs__action__MyAction_Result__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ros_study_msgs__action__MyAction_Result__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ros_study_msgs__action__MyAction_Result__Sequence__copy(
  const ros_study_msgs__action__MyAction_Result__Sequence * input,
  ros_study_msgs__action__MyAction_Result__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ros_study_msgs__action__MyAction_Result);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ros_study_msgs__action__MyAction_Result * data =
      (ros_study_msgs__action__MyAction_Result *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ros_study_msgs__action__MyAction_Result__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ros_study_msgs__action__MyAction_Result__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ros_study_msgs__action__MyAction_Result__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `str`
#include "rosidl_runtime_c/string_functions.h"

bool
ros_study_msgs__action__MyAction_Feedback__init(ros_study_msgs__action__MyAction_Feedback * msg)
{
  if (!msg) {
    return false;
  }
  // str
  if (!rosidl_runtime_c__String__Sequence__init(&msg->str, 0)) {
    ros_study_msgs__action__MyAction_Feedback__fini(msg);
    return false;
  }
  return true;
}

void
ros_study_msgs__action__MyAction_Feedback__fini(ros_study_msgs__action__MyAction_Feedback * msg)
{
  if (!msg) {
    return;
  }
  // str
  rosidl_runtime_c__String__Sequence__fini(&msg->str);
}

bool
ros_study_msgs__action__MyAction_Feedback__are_equal(const ros_study_msgs__action__MyAction_Feedback * lhs, const ros_study_msgs__action__MyAction_Feedback * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // str
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->str), &(rhs->str)))
  {
    return false;
  }
  return true;
}

bool
ros_study_msgs__action__MyAction_Feedback__copy(
  const ros_study_msgs__action__MyAction_Feedback * input,
  ros_study_msgs__action__MyAction_Feedback * output)
{
  if (!input || !output) {
    return false;
  }
  // str
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->str), &(output->str)))
  {
    return false;
  }
  return true;
}

ros_study_msgs__action__MyAction_Feedback *
ros_study_msgs__action__MyAction_Feedback__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros_study_msgs__action__MyAction_Feedback * msg = (ros_study_msgs__action__MyAction_Feedback *)allocator.allocate(sizeof(ros_study_msgs__action__MyAction_Feedback), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ros_study_msgs__action__MyAction_Feedback));
  bool success = ros_study_msgs__action__MyAction_Feedback__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ros_study_msgs__action__MyAction_Feedback__destroy(ros_study_msgs__action__MyAction_Feedback * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ros_study_msgs__action__MyAction_Feedback__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ros_study_msgs__action__MyAction_Feedback__Sequence__init(ros_study_msgs__action__MyAction_Feedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros_study_msgs__action__MyAction_Feedback * data = NULL;

  if (size) {
    data = (ros_study_msgs__action__MyAction_Feedback *)allocator.zero_allocate(size, sizeof(ros_study_msgs__action__MyAction_Feedback), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ros_study_msgs__action__MyAction_Feedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ros_study_msgs__action__MyAction_Feedback__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
ros_study_msgs__action__MyAction_Feedback__Sequence__fini(ros_study_msgs__action__MyAction_Feedback__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      ros_study_msgs__action__MyAction_Feedback__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

ros_study_msgs__action__MyAction_Feedback__Sequence *
ros_study_msgs__action__MyAction_Feedback__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros_study_msgs__action__MyAction_Feedback__Sequence * array = (ros_study_msgs__action__MyAction_Feedback__Sequence *)allocator.allocate(sizeof(ros_study_msgs__action__MyAction_Feedback__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ros_study_msgs__action__MyAction_Feedback__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ros_study_msgs__action__MyAction_Feedback__Sequence__destroy(ros_study_msgs__action__MyAction_Feedback__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ros_study_msgs__action__MyAction_Feedback__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ros_study_msgs__action__MyAction_Feedback__Sequence__are_equal(const ros_study_msgs__action__MyAction_Feedback__Sequence * lhs, const ros_study_msgs__action__MyAction_Feedback__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ros_study_msgs__action__MyAction_Feedback__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ros_study_msgs__action__MyAction_Feedback__Sequence__copy(
  const ros_study_msgs__action__MyAction_Feedback__Sequence * input,
  ros_study_msgs__action__MyAction_Feedback__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ros_study_msgs__action__MyAction_Feedback);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ros_study_msgs__action__MyAction_Feedback * data =
      (ros_study_msgs__action__MyAction_Feedback *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ros_study_msgs__action__MyAction_Feedback__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ros_study_msgs__action__MyAction_Feedback__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ros_study_msgs__action__MyAction_Feedback__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `goal`
// already included above
// #include "ros_study_msgs/action/detail/my_action__functions.h"

bool
ros_study_msgs__action__MyAction_SendGoal_Request__init(ros_study_msgs__action__MyAction_SendGoal_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    ros_study_msgs__action__MyAction_SendGoal_Request__fini(msg);
    return false;
  }
  // goal
  if (!ros_study_msgs__action__MyAction_Goal__init(&msg->goal)) {
    ros_study_msgs__action__MyAction_SendGoal_Request__fini(msg);
    return false;
  }
  return true;
}

void
ros_study_msgs__action__MyAction_SendGoal_Request__fini(ros_study_msgs__action__MyAction_SendGoal_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // goal
  ros_study_msgs__action__MyAction_Goal__fini(&msg->goal);
}

bool
ros_study_msgs__action__MyAction_SendGoal_Request__are_equal(const ros_study_msgs__action__MyAction_SendGoal_Request * lhs, const ros_study_msgs__action__MyAction_SendGoal_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // goal
  if (!ros_study_msgs__action__MyAction_Goal__are_equal(
      &(lhs->goal), &(rhs->goal)))
  {
    return false;
  }
  return true;
}

bool
ros_study_msgs__action__MyAction_SendGoal_Request__copy(
  const ros_study_msgs__action__MyAction_SendGoal_Request * input,
  ros_study_msgs__action__MyAction_SendGoal_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // goal
  if (!ros_study_msgs__action__MyAction_Goal__copy(
      &(input->goal), &(output->goal)))
  {
    return false;
  }
  return true;
}

ros_study_msgs__action__MyAction_SendGoal_Request *
ros_study_msgs__action__MyAction_SendGoal_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros_study_msgs__action__MyAction_SendGoal_Request * msg = (ros_study_msgs__action__MyAction_SendGoal_Request *)allocator.allocate(sizeof(ros_study_msgs__action__MyAction_SendGoal_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ros_study_msgs__action__MyAction_SendGoal_Request));
  bool success = ros_study_msgs__action__MyAction_SendGoal_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ros_study_msgs__action__MyAction_SendGoal_Request__destroy(ros_study_msgs__action__MyAction_SendGoal_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ros_study_msgs__action__MyAction_SendGoal_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ros_study_msgs__action__MyAction_SendGoal_Request__Sequence__init(ros_study_msgs__action__MyAction_SendGoal_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros_study_msgs__action__MyAction_SendGoal_Request * data = NULL;

  if (size) {
    data = (ros_study_msgs__action__MyAction_SendGoal_Request *)allocator.zero_allocate(size, sizeof(ros_study_msgs__action__MyAction_SendGoal_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ros_study_msgs__action__MyAction_SendGoal_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ros_study_msgs__action__MyAction_SendGoal_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
ros_study_msgs__action__MyAction_SendGoal_Request__Sequence__fini(ros_study_msgs__action__MyAction_SendGoal_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      ros_study_msgs__action__MyAction_SendGoal_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

ros_study_msgs__action__MyAction_SendGoal_Request__Sequence *
ros_study_msgs__action__MyAction_SendGoal_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros_study_msgs__action__MyAction_SendGoal_Request__Sequence * array = (ros_study_msgs__action__MyAction_SendGoal_Request__Sequence *)allocator.allocate(sizeof(ros_study_msgs__action__MyAction_SendGoal_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ros_study_msgs__action__MyAction_SendGoal_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ros_study_msgs__action__MyAction_SendGoal_Request__Sequence__destroy(ros_study_msgs__action__MyAction_SendGoal_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ros_study_msgs__action__MyAction_SendGoal_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ros_study_msgs__action__MyAction_SendGoal_Request__Sequence__are_equal(const ros_study_msgs__action__MyAction_SendGoal_Request__Sequence * lhs, const ros_study_msgs__action__MyAction_SendGoal_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ros_study_msgs__action__MyAction_SendGoal_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ros_study_msgs__action__MyAction_SendGoal_Request__Sequence__copy(
  const ros_study_msgs__action__MyAction_SendGoal_Request__Sequence * input,
  ros_study_msgs__action__MyAction_SendGoal_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ros_study_msgs__action__MyAction_SendGoal_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ros_study_msgs__action__MyAction_SendGoal_Request * data =
      (ros_study_msgs__action__MyAction_SendGoal_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ros_study_msgs__action__MyAction_SendGoal_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ros_study_msgs__action__MyAction_SendGoal_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ros_study_msgs__action__MyAction_SendGoal_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
ros_study_msgs__action__MyAction_SendGoal_Response__init(ros_study_msgs__action__MyAction_SendGoal_Response * msg)
{
  if (!msg) {
    return false;
  }
  // accepted
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    ros_study_msgs__action__MyAction_SendGoal_Response__fini(msg);
    return false;
  }
  return true;
}

void
ros_study_msgs__action__MyAction_SendGoal_Response__fini(ros_study_msgs__action__MyAction_SendGoal_Response * msg)
{
  if (!msg) {
    return;
  }
  // accepted
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
}

bool
ros_study_msgs__action__MyAction_SendGoal_Response__are_equal(const ros_study_msgs__action__MyAction_SendGoal_Response * lhs, const ros_study_msgs__action__MyAction_SendGoal_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // accepted
  if (lhs->accepted != rhs->accepted) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->stamp), &(rhs->stamp)))
  {
    return false;
  }
  return true;
}

bool
ros_study_msgs__action__MyAction_SendGoal_Response__copy(
  const ros_study_msgs__action__MyAction_SendGoal_Response * input,
  ros_study_msgs__action__MyAction_SendGoal_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // accepted
  output->accepted = input->accepted;
  // stamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->stamp), &(output->stamp)))
  {
    return false;
  }
  return true;
}

ros_study_msgs__action__MyAction_SendGoal_Response *
ros_study_msgs__action__MyAction_SendGoal_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros_study_msgs__action__MyAction_SendGoal_Response * msg = (ros_study_msgs__action__MyAction_SendGoal_Response *)allocator.allocate(sizeof(ros_study_msgs__action__MyAction_SendGoal_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ros_study_msgs__action__MyAction_SendGoal_Response));
  bool success = ros_study_msgs__action__MyAction_SendGoal_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ros_study_msgs__action__MyAction_SendGoal_Response__destroy(ros_study_msgs__action__MyAction_SendGoal_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ros_study_msgs__action__MyAction_SendGoal_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ros_study_msgs__action__MyAction_SendGoal_Response__Sequence__init(ros_study_msgs__action__MyAction_SendGoal_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros_study_msgs__action__MyAction_SendGoal_Response * data = NULL;

  if (size) {
    data = (ros_study_msgs__action__MyAction_SendGoal_Response *)allocator.zero_allocate(size, sizeof(ros_study_msgs__action__MyAction_SendGoal_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ros_study_msgs__action__MyAction_SendGoal_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ros_study_msgs__action__MyAction_SendGoal_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
ros_study_msgs__action__MyAction_SendGoal_Response__Sequence__fini(ros_study_msgs__action__MyAction_SendGoal_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      ros_study_msgs__action__MyAction_SendGoal_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

ros_study_msgs__action__MyAction_SendGoal_Response__Sequence *
ros_study_msgs__action__MyAction_SendGoal_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros_study_msgs__action__MyAction_SendGoal_Response__Sequence * array = (ros_study_msgs__action__MyAction_SendGoal_Response__Sequence *)allocator.allocate(sizeof(ros_study_msgs__action__MyAction_SendGoal_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ros_study_msgs__action__MyAction_SendGoal_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ros_study_msgs__action__MyAction_SendGoal_Response__Sequence__destroy(ros_study_msgs__action__MyAction_SendGoal_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ros_study_msgs__action__MyAction_SendGoal_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ros_study_msgs__action__MyAction_SendGoal_Response__Sequence__are_equal(const ros_study_msgs__action__MyAction_SendGoal_Response__Sequence * lhs, const ros_study_msgs__action__MyAction_SendGoal_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ros_study_msgs__action__MyAction_SendGoal_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ros_study_msgs__action__MyAction_SendGoal_Response__Sequence__copy(
  const ros_study_msgs__action__MyAction_SendGoal_Response__Sequence * input,
  ros_study_msgs__action__MyAction_SendGoal_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ros_study_msgs__action__MyAction_SendGoal_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ros_study_msgs__action__MyAction_SendGoal_Response * data =
      (ros_study_msgs__action__MyAction_SendGoal_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ros_study_msgs__action__MyAction_SendGoal_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ros_study_msgs__action__MyAction_SendGoal_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ros_study_msgs__action__MyAction_SendGoal_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"

bool
ros_study_msgs__action__MyAction_GetResult_Request__init(ros_study_msgs__action__MyAction_GetResult_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    ros_study_msgs__action__MyAction_GetResult_Request__fini(msg);
    return false;
  }
  return true;
}

void
ros_study_msgs__action__MyAction_GetResult_Request__fini(ros_study_msgs__action__MyAction_GetResult_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
}

bool
ros_study_msgs__action__MyAction_GetResult_Request__are_equal(const ros_study_msgs__action__MyAction_GetResult_Request * lhs, const ros_study_msgs__action__MyAction_GetResult_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  return true;
}

bool
ros_study_msgs__action__MyAction_GetResult_Request__copy(
  const ros_study_msgs__action__MyAction_GetResult_Request * input,
  ros_study_msgs__action__MyAction_GetResult_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  return true;
}

ros_study_msgs__action__MyAction_GetResult_Request *
ros_study_msgs__action__MyAction_GetResult_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros_study_msgs__action__MyAction_GetResult_Request * msg = (ros_study_msgs__action__MyAction_GetResult_Request *)allocator.allocate(sizeof(ros_study_msgs__action__MyAction_GetResult_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ros_study_msgs__action__MyAction_GetResult_Request));
  bool success = ros_study_msgs__action__MyAction_GetResult_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ros_study_msgs__action__MyAction_GetResult_Request__destroy(ros_study_msgs__action__MyAction_GetResult_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ros_study_msgs__action__MyAction_GetResult_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ros_study_msgs__action__MyAction_GetResult_Request__Sequence__init(ros_study_msgs__action__MyAction_GetResult_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros_study_msgs__action__MyAction_GetResult_Request * data = NULL;

  if (size) {
    data = (ros_study_msgs__action__MyAction_GetResult_Request *)allocator.zero_allocate(size, sizeof(ros_study_msgs__action__MyAction_GetResult_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ros_study_msgs__action__MyAction_GetResult_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ros_study_msgs__action__MyAction_GetResult_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
ros_study_msgs__action__MyAction_GetResult_Request__Sequence__fini(ros_study_msgs__action__MyAction_GetResult_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      ros_study_msgs__action__MyAction_GetResult_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

ros_study_msgs__action__MyAction_GetResult_Request__Sequence *
ros_study_msgs__action__MyAction_GetResult_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros_study_msgs__action__MyAction_GetResult_Request__Sequence * array = (ros_study_msgs__action__MyAction_GetResult_Request__Sequence *)allocator.allocate(sizeof(ros_study_msgs__action__MyAction_GetResult_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ros_study_msgs__action__MyAction_GetResult_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ros_study_msgs__action__MyAction_GetResult_Request__Sequence__destroy(ros_study_msgs__action__MyAction_GetResult_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ros_study_msgs__action__MyAction_GetResult_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ros_study_msgs__action__MyAction_GetResult_Request__Sequence__are_equal(const ros_study_msgs__action__MyAction_GetResult_Request__Sequence * lhs, const ros_study_msgs__action__MyAction_GetResult_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ros_study_msgs__action__MyAction_GetResult_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ros_study_msgs__action__MyAction_GetResult_Request__Sequence__copy(
  const ros_study_msgs__action__MyAction_GetResult_Request__Sequence * input,
  ros_study_msgs__action__MyAction_GetResult_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ros_study_msgs__action__MyAction_GetResult_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ros_study_msgs__action__MyAction_GetResult_Request * data =
      (ros_study_msgs__action__MyAction_GetResult_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ros_study_msgs__action__MyAction_GetResult_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ros_study_msgs__action__MyAction_GetResult_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ros_study_msgs__action__MyAction_GetResult_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `result`
// already included above
// #include "ros_study_msgs/action/detail/my_action__functions.h"

bool
ros_study_msgs__action__MyAction_GetResult_Response__init(ros_study_msgs__action__MyAction_GetResult_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  // result
  if (!ros_study_msgs__action__MyAction_Result__init(&msg->result)) {
    ros_study_msgs__action__MyAction_GetResult_Response__fini(msg);
    return false;
  }
  return true;
}

void
ros_study_msgs__action__MyAction_GetResult_Response__fini(ros_study_msgs__action__MyAction_GetResult_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
  // result
  ros_study_msgs__action__MyAction_Result__fini(&msg->result);
}

bool
ros_study_msgs__action__MyAction_GetResult_Response__are_equal(const ros_study_msgs__action__MyAction_GetResult_Response * lhs, const ros_study_msgs__action__MyAction_GetResult_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  // result
  if (!ros_study_msgs__action__MyAction_Result__are_equal(
      &(lhs->result), &(rhs->result)))
  {
    return false;
  }
  return true;
}

bool
ros_study_msgs__action__MyAction_GetResult_Response__copy(
  const ros_study_msgs__action__MyAction_GetResult_Response * input,
  ros_study_msgs__action__MyAction_GetResult_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // status
  output->status = input->status;
  // result
  if (!ros_study_msgs__action__MyAction_Result__copy(
      &(input->result), &(output->result)))
  {
    return false;
  }
  return true;
}

ros_study_msgs__action__MyAction_GetResult_Response *
ros_study_msgs__action__MyAction_GetResult_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros_study_msgs__action__MyAction_GetResult_Response * msg = (ros_study_msgs__action__MyAction_GetResult_Response *)allocator.allocate(sizeof(ros_study_msgs__action__MyAction_GetResult_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ros_study_msgs__action__MyAction_GetResult_Response));
  bool success = ros_study_msgs__action__MyAction_GetResult_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ros_study_msgs__action__MyAction_GetResult_Response__destroy(ros_study_msgs__action__MyAction_GetResult_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ros_study_msgs__action__MyAction_GetResult_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ros_study_msgs__action__MyAction_GetResult_Response__Sequence__init(ros_study_msgs__action__MyAction_GetResult_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros_study_msgs__action__MyAction_GetResult_Response * data = NULL;

  if (size) {
    data = (ros_study_msgs__action__MyAction_GetResult_Response *)allocator.zero_allocate(size, sizeof(ros_study_msgs__action__MyAction_GetResult_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ros_study_msgs__action__MyAction_GetResult_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ros_study_msgs__action__MyAction_GetResult_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
ros_study_msgs__action__MyAction_GetResult_Response__Sequence__fini(ros_study_msgs__action__MyAction_GetResult_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      ros_study_msgs__action__MyAction_GetResult_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

ros_study_msgs__action__MyAction_GetResult_Response__Sequence *
ros_study_msgs__action__MyAction_GetResult_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros_study_msgs__action__MyAction_GetResult_Response__Sequence * array = (ros_study_msgs__action__MyAction_GetResult_Response__Sequence *)allocator.allocate(sizeof(ros_study_msgs__action__MyAction_GetResult_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ros_study_msgs__action__MyAction_GetResult_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ros_study_msgs__action__MyAction_GetResult_Response__Sequence__destroy(ros_study_msgs__action__MyAction_GetResult_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ros_study_msgs__action__MyAction_GetResult_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ros_study_msgs__action__MyAction_GetResult_Response__Sequence__are_equal(const ros_study_msgs__action__MyAction_GetResult_Response__Sequence * lhs, const ros_study_msgs__action__MyAction_GetResult_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ros_study_msgs__action__MyAction_GetResult_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ros_study_msgs__action__MyAction_GetResult_Response__Sequence__copy(
  const ros_study_msgs__action__MyAction_GetResult_Response__Sequence * input,
  ros_study_msgs__action__MyAction_GetResult_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ros_study_msgs__action__MyAction_GetResult_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ros_study_msgs__action__MyAction_GetResult_Response * data =
      (ros_study_msgs__action__MyAction_GetResult_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ros_study_msgs__action__MyAction_GetResult_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ros_study_msgs__action__MyAction_GetResult_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ros_study_msgs__action__MyAction_GetResult_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `feedback`
// already included above
// #include "ros_study_msgs/action/detail/my_action__functions.h"

bool
ros_study_msgs__action__MyAction_FeedbackMessage__init(ros_study_msgs__action__MyAction_FeedbackMessage * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    ros_study_msgs__action__MyAction_FeedbackMessage__fini(msg);
    return false;
  }
  // feedback
  if (!ros_study_msgs__action__MyAction_Feedback__init(&msg->feedback)) {
    ros_study_msgs__action__MyAction_FeedbackMessage__fini(msg);
    return false;
  }
  return true;
}

void
ros_study_msgs__action__MyAction_FeedbackMessage__fini(ros_study_msgs__action__MyAction_FeedbackMessage * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // feedback
  ros_study_msgs__action__MyAction_Feedback__fini(&msg->feedback);
}

bool
ros_study_msgs__action__MyAction_FeedbackMessage__are_equal(const ros_study_msgs__action__MyAction_FeedbackMessage * lhs, const ros_study_msgs__action__MyAction_FeedbackMessage * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // feedback
  if (!ros_study_msgs__action__MyAction_Feedback__are_equal(
      &(lhs->feedback), &(rhs->feedback)))
  {
    return false;
  }
  return true;
}

bool
ros_study_msgs__action__MyAction_FeedbackMessage__copy(
  const ros_study_msgs__action__MyAction_FeedbackMessage * input,
  ros_study_msgs__action__MyAction_FeedbackMessage * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // feedback
  if (!ros_study_msgs__action__MyAction_Feedback__copy(
      &(input->feedback), &(output->feedback)))
  {
    return false;
  }
  return true;
}

ros_study_msgs__action__MyAction_FeedbackMessage *
ros_study_msgs__action__MyAction_FeedbackMessage__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros_study_msgs__action__MyAction_FeedbackMessage * msg = (ros_study_msgs__action__MyAction_FeedbackMessage *)allocator.allocate(sizeof(ros_study_msgs__action__MyAction_FeedbackMessage), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ros_study_msgs__action__MyAction_FeedbackMessage));
  bool success = ros_study_msgs__action__MyAction_FeedbackMessage__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ros_study_msgs__action__MyAction_FeedbackMessage__destroy(ros_study_msgs__action__MyAction_FeedbackMessage * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ros_study_msgs__action__MyAction_FeedbackMessage__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ros_study_msgs__action__MyAction_FeedbackMessage__Sequence__init(ros_study_msgs__action__MyAction_FeedbackMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros_study_msgs__action__MyAction_FeedbackMessage * data = NULL;

  if (size) {
    data = (ros_study_msgs__action__MyAction_FeedbackMessage *)allocator.zero_allocate(size, sizeof(ros_study_msgs__action__MyAction_FeedbackMessage), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ros_study_msgs__action__MyAction_FeedbackMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ros_study_msgs__action__MyAction_FeedbackMessage__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
ros_study_msgs__action__MyAction_FeedbackMessage__Sequence__fini(ros_study_msgs__action__MyAction_FeedbackMessage__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      ros_study_msgs__action__MyAction_FeedbackMessage__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

ros_study_msgs__action__MyAction_FeedbackMessage__Sequence *
ros_study_msgs__action__MyAction_FeedbackMessage__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros_study_msgs__action__MyAction_FeedbackMessage__Sequence * array = (ros_study_msgs__action__MyAction_FeedbackMessage__Sequence *)allocator.allocate(sizeof(ros_study_msgs__action__MyAction_FeedbackMessage__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ros_study_msgs__action__MyAction_FeedbackMessage__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ros_study_msgs__action__MyAction_FeedbackMessage__Sequence__destroy(ros_study_msgs__action__MyAction_FeedbackMessage__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ros_study_msgs__action__MyAction_FeedbackMessage__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ros_study_msgs__action__MyAction_FeedbackMessage__Sequence__are_equal(const ros_study_msgs__action__MyAction_FeedbackMessage__Sequence * lhs, const ros_study_msgs__action__MyAction_FeedbackMessage__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ros_study_msgs__action__MyAction_FeedbackMessage__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ros_study_msgs__action__MyAction_FeedbackMessage__Sequence__copy(
  const ros_study_msgs__action__MyAction_FeedbackMessage__Sequence * input,
  ros_study_msgs__action__MyAction_FeedbackMessage__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ros_study_msgs__action__MyAction_FeedbackMessage);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ros_study_msgs__action__MyAction_FeedbackMessage * data =
      (ros_study_msgs__action__MyAction_FeedbackMessage *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ros_study_msgs__action__MyAction_FeedbackMessage__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ros_study_msgs__action__MyAction_FeedbackMessage__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ros_study_msgs__action__MyAction_FeedbackMessage__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
