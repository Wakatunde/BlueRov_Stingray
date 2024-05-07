// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from stingray_msg:msg/StingrayControl.idl
// generated code does not contain a copyright notice

#ifndef STINGRAY_MSG__MSG__DETAIL__STINGRAY_CONTROL__STRUCT_H_
#define STINGRAY_MSG__MSG__DETAIL__STINGRAY_CONTROL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/StingrayControl in the package stingray_msg.
/**
  * StingrayControl.msg
 */
typedef struct stingray_msg__msg__StingrayControl
{
  /// Forward/backward motion (Left stick up/down)
  float forward_backward;
  /// Left/right strafing (Left stick left/right)
  float left_right;
  /// Increase altitude (right trigger)
  float increase_altitude;
  /// decrease altitude (left trigger)
  float decrease_altitude;
  /// Horizontal rotation (Right stick left/right)
  float horizontal_rotation;
  /// Vertical rotation (Right stick up/down)
  float vertical_rotation;
  int32_t light_step;
  /// Increae light brightness (right bumper)
  int8_t light_brighter;
  /// decrease light brightness (left bumper)
  int8_t light_dimmer;
  /// set mode to manual (B)
  int8_t manual_mode_toggle;
  /// set mode to altitude hold (A)
  int8_t althold_mode_toggle;
  /// Adjust camera angle (DPad up/down)
  int32_t camera_angle;
  /// X
  int8_t stabilize;
  /// Arm the rov (settings)
  int8_t arm;
  /// dissarm the rov (select)
  int8_t dissarm;
  int8_t acro;
} stingray_msg__msg__StingrayControl;

// Struct for a sequence of stingray_msg__msg__StingrayControl.
typedef struct stingray_msg__msg__StingrayControl__Sequence
{
  stingray_msg__msg__StingrayControl * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} stingray_msg__msg__StingrayControl__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // STINGRAY_MSG__MSG__DETAIL__STINGRAY_CONTROL__STRUCT_H_
