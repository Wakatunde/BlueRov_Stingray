// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from stingray_msg:msg/StingrayControl.idl
// generated code does not contain a copyright notice
#include "stingray_msg/msg/detail/stingray_control__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "stingray_msg/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "stingray_msg/msg/detail/stingray_control__struct.h"
#include "stingray_msg/msg/detail/stingray_control__functions.h"
#include "fastcdr/Cdr.h"

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

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _StingrayControl__ros_msg_type = stingray_msg__msg__StingrayControl;

static bool _StingrayControl__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _StingrayControl__ros_msg_type * ros_message = static_cast<const _StingrayControl__ros_msg_type *>(untyped_ros_message);
  // Field name: forward_backward
  {
    cdr << ros_message->forward_backward;
  }

  // Field name: left_right
  {
    cdr << ros_message->left_right;
  }

  // Field name: increase_altitude
  {
    cdr << ros_message->increase_altitude;
  }

  // Field name: decrease_altitude
  {
    cdr << ros_message->decrease_altitude;
  }

  // Field name: horizontal_rotation
  {
    cdr << ros_message->horizontal_rotation;
  }

  // Field name: vertical_rotation
  {
    cdr << ros_message->vertical_rotation;
  }

  // Field name: light_step
  {
    cdr << ros_message->light_step;
  }

  // Field name: light_brighter
  {
    cdr << ros_message->light_brighter;
  }

  // Field name: light_dimmer
  {
    cdr << ros_message->light_dimmer;
  }

  // Field name: manual_mode_toggle
  {
    cdr << ros_message->manual_mode_toggle;
  }

  // Field name: althold_mode_toggle
  {
    cdr << ros_message->althold_mode_toggle;
  }

  // Field name: camera_angle
  {
    cdr << ros_message->camera_angle;
  }

  // Field name: stabilize
  {
    cdr << ros_message->stabilize;
  }

  // Field name: arm
  {
    cdr << ros_message->arm;
  }

  // Field name: dissarm
  {
    cdr << ros_message->dissarm;
  }

  // Field name: acro
  {
    cdr << ros_message->acro;
  }

  return true;
}

static bool _StingrayControl__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _StingrayControl__ros_msg_type * ros_message = static_cast<_StingrayControl__ros_msg_type *>(untyped_ros_message);
  // Field name: forward_backward
  {
    cdr >> ros_message->forward_backward;
  }

  // Field name: left_right
  {
    cdr >> ros_message->left_right;
  }

  // Field name: increase_altitude
  {
    cdr >> ros_message->increase_altitude;
  }

  // Field name: decrease_altitude
  {
    cdr >> ros_message->decrease_altitude;
  }

  // Field name: horizontal_rotation
  {
    cdr >> ros_message->horizontal_rotation;
  }

  // Field name: vertical_rotation
  {
    cdr >> ros_message->vertical_rotation;
  }

  // Field name: light_step
  {
    cdr >> ros_message->light_step;
  }

  // Field name: light_brighter
  {
    cdr >> ros_message->light_brighter;
  }

  // Field name: light_dimmer
  {
    cdr >> ros_message->light_dimmer;
  }

  // Field name: manual_mode_toggle
  {
    cdr >> ros_message->manual_mode_toggle;
  }

  // Field name: althold_mode_toggle
  {
    cdr >> ros_message->althold_mode_toggle;
  }

  // Field name: camera_angle
  {
    cdr >> ros_message->camera_angle;
  }

  // Field name: stabilize
  {
    cdr >> ros_message->stabilize;
  }

  // Field name: arm
  {
    cdr >> ros_message->arm;
  }

  // Field name: dissarm
  {
    cdr >> ros_message->dissarm;
  }

  // Field name: acro
  {
    cdr >> ros_message->acro;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_stingray_msg
size_t get_serialized_size_stingray_msg__msg__StingrayControl(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _StingrayControl__ros_msg_type * ros_message = static_cast<const _StingrayControl__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name forward_backward
  {
    size_t item_size = sizeof(ros_message->forward_backward);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name left_right
  {
    size_t item_size = sizeof(ros_message->left_right);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name increase_altitude
  {
    size_t item_size = sizeof(ros_message->increase_altitude);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name decrease_altitude
  {
    size_t item_size = sizeof(ros_message->decrease_altitude);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name horizontal_rotation
  {
    size_t item_size = sizeof(ros_message->horizontal_rotation);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name vertical_rotation
  {
    size_t item_size = sizeof(ros_message->vertical_rotation);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name light_step
  {
    size_t item_size = sizeof(ros_message->light_step);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name light_brighter
  {
    size_t item_size = sizeof(ros_message->light_brighter);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name light_dimmer
  {
    size_t item_size = sizeof(ros_message->light_dimmer);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name manual_mode_toggle
  {
    size_t item_size = sizeof(ros_message->manual_mode_toggle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name althold_mode_toggle
  {
    size_t item_size = sizeof(ros_message->althold_mode_toggle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name camera_angle
  {
    size_t item_size = sizeof(ros_message->camera_angle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name stabilize
  {
    size_t item_size = sizeof(ros_message->stabilize);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name arm
  {
    size_t item_size = sizeof(ros_message->arm);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name dissarm
  {
    size_t item_size = sizeof(ros_message->dissarm);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name acro
  {
    size_t item_size = sizeof(ros_message->acro);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _StingrayControl__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_stingray_msg__msg__StingrayControl(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_stingray_msg
size_t max_serialized_size_stingray_msg__msg__StingrayControl(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: forward_backward
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: left_right
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: increase_altitude
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: decrease_altitude
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: horizontal_rotation
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: vertical_rotation
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: light_step
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: light_brighter
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: light_dimmer
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: manual_mode_toggle
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: althold_mode_toggle
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: camera_angle
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: stabilize
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: arm
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: dissarm
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: acro
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = stingray_msg__msg__StingrayControl;
    is_plain =
      (
      offsetof(DataType, acro) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _StingrayControl__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_stingray_msg__msg__StingrayControl(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_StingrayControl = {
  "stingray_msg::msg",
  "StingrayControl",
  _StingrayControl__cdr_serialize,
  _StingrayControl__cdr_deserialize,
  _StingrayControl__get_serialized_size,
  _StingrayControl__max_serialized_size
};

static rosidl_message_type_support_t _StingrayControl__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_StingrayControl,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, stingray_msg, msg, StingrayControl)() {
  return &_StingrayControl__type_support;
}

#if defined(__cplusplus)
}
#endif
