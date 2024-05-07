// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from stingray_msg:msg/StingrayControl.idl
// generated code does not contain a copyright notice
#include "stingray_msg/msg/detail/stingray_control__rosidl_typesupport_fastrtps_cpp.hpp"
#include "stingray_msg/msg/detail/stingray_control__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

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
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: forward_backward
  cdr << ros_message.forward_backward;
  // Member: left_right
  cdr << ros_message.left_right;
  // Member: increase_altitude
  cdr << ros_message.increase_altitude;
  // Member: decrease_altitude
  cdr << ros_message.decrease_altitude;
  // Member: horizontal_rotation
  cdr << ros_message.horizontal_rotation;
  // Member: vertical_rotation
  cdr << ros_message.vertical_rotation;
  // Member: light_step
  cdr << ros_message.light_step;
  // Member: light_brighter
  cdr << ros_message.light_brighter;
  // Member: light_dimmer
  cdr << ros_message.light_dimmer;
  // Member: manual_mode_toggle
  cdr << ros_message.manual_mode_toggle;
  // Member: althold_mode_toggle
  cdr << ros_message.althold_mode_toggle;
  // Member: camera_angle
  cdr << ros_message.camera_angle;
  // Member: stabilize
  cdr << ros_message.stabilize;
  // Member: arm
  cdr << ros_message.arm;
  // Member: dissarm
  cdr << ros_message.dissarm;
  // Member: acro
  cdr << ros_message.acro;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_stingray_msg
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  stingray_msg::msg::StingrayControl & ros_message)
{
  // Member: forward_backward
  cdr >> ros_message.forward_backward;

  // Member: left_right
  cdr >> ros_message.left_right;

  // Member: increase_altitude
  cdr >> ros_message.increase_altitude;

  // Member: decrease_altitude
  cdr >> ros_message.decrease_altitude;

  // Member: horizontal_rotation
  cdr >> ros_message.horizontal_rotation;

  // Member: vertical_rotation
  cdr >> ros_message.vertical_rotation;

  // Member: light_step
  cdr >> ros_message.light_step;

  // Member: light_brighter
  cdr >> ros_message.light_brighter;

  // Member: light_dimmer
  cdr >> ros_message.light_dimmer;

  // Member: manual_mode_toggle
  cdr >> ros_message.manual_mode_toggle;

  // Member: althold_mode_toggle
  cdr >> ros_message.althold_mode_toggle;

  // Member: camera_angle
  cdr >> ros_message.camera_angle;

  // Member: stabilize
  cdr >> ros_message.stabilize;

  // Member: arm
  cdr >> ros_message.arm;

  // Member: dissarm
  cdr >> ros_message.dissarm;

  // Member: acro
  cdr >> ros_message.acro;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_stingray_msg
get_serialized_size(
  const stingray_msg::msg::StingrayControl & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: forward_backward
  {
    size_t item_size = sizeof(ros_message.forward_backward);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: left_right
  {
    size_t item_size = sizeof(ros_message.left_right);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: increase_altitude
  {
    size_t item_size = sizeof(ros_message.increase_altitude);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: decrease_altitude
  {
    size_t item_size = sizeof(ros_message.decrease_altitude);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: horizontal_rotation
  {
    size_t item_size = sizeof(ros_message.horizontal_rotation);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: vertical_rotation
  {
    size_t item_size = sizeof(ros_message.vertical_rotation);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: light_step
  {
    size_t item_size = sizeof(ros_message.light_step);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: light_brighter
  {
    size_t item_size = sizeof(ros_message.light_brighter);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: light_dimmer
  {
    size_t item_size = sizeof(ros_message.light_dimmer);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: manual_mode_toggle
  {
    size_t item_size = sizeof(ros_message.manual_mode_toggle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: althold_mode_toggle
  {
    size_t item_size = sizeof(ros_message.althold_mode_toggle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: camera_angle
  {
    size_t item_size = sizeof(ros_message.camera_angle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: stabilize
  {
    size_t item_size = sizeof(ros_message.stabilize);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: arm
  {
    size_t item_size = sizeof(ros_message.arm);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: dissarm
  {
    size_t item_size = sizeof(ros_message.dissarm);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: acro
  {
    size_t item_size = sizeof(ros_message.acro);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_stingray_msg
max_serialized_size_StingrayControl(
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


  // Member: forward_backward
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: left_right
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: increase_altitude
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: decrease_altitude
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: horizontal_rotation
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: vertical_rotation
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: light_step
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: light_brighter
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: light_dimmer
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: manual_mode_toggle
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: althold_mode_toggle
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: camera_angle
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: stabilize
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: arm
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: dissarm
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: acro
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
    using DataType = stingray_msg::msg::StingrayControl;
    is_plain =
      (
      offsetof(DataType, acro) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _StingrayControl__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const stingray_msg::msg::StingrayControl *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _StingrayControl__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<stingray_msg::msg::StingrayControl *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _StingrayControl__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const stingray_msg::msg::StingrayControl *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _StingrayControl__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_StingrayControl(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _StingrayControl__callbacks = {
  "stingray_msg::msg",
  "StingrayControl",
  _StingrayControl__cdr_serialize,
  _StingrayControl__cdr_deserialize,
  _StingrayControl__get_serialized_size,
  _StingrayControl__max_serialized_size
};

static rosidl_message_type_support_t _StingrayControl__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_StingrayControl__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace stingray_msg

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_stingray_msg
const rosidl_message_type_support_t *
get_message_type_support_handle<stingray_msg::msg::StingrayControl>()
{
  return &stingray_msg::msg::typesupport_fastrtps_cpp::_StingrayControl__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, stingray_msg, msg, StingrayControl)() {
  return &stingray_msg::msg::typesupport_fastrtps_cpp::_StingrayControl__handle;
}

#ifdef __cplusplus
}
#endif
