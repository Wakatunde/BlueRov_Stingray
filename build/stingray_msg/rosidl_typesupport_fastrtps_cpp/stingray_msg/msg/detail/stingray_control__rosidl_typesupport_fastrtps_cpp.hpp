// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from stingray_msg:msg/StingrayControl.idl
// generated code does not contain a copyright notice

#ifndef STINGRAY_MSG__MSG__DETAIL__STINGRAY_CONTROL__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define STINGRAY_MSG__MSG__DETAIL__STINGRAY_CONTROL__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "stingray_msg/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "stingray_msg/msg/detail/stingray_control__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace stingray_msg
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_stingray_msg
cdr_serialize(
  const stingray_msg::msg::StingrayControl & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_stingray_msg
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  stingray_msg::msg::StingrayControl & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_stingray_msg
get_serialized_size(
  const stingray_msg::msg::StingrayControl & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_stingray_msg
max_serialized_size_StingrayControl(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace stingray_msg

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_stingray_msg
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, stingray_msg, msg, StingrayControl)();

#ifdef __cplusplus
}
#endif

#endif  // STINGRAY_MSG__MSG__DETAIL__STINGRAY_CONTROL__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
