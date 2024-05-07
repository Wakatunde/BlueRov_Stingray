// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from stingray_msg:msg/StingrayControl.idl
// generated code does not contain a copyright notice

#ifndef STINGRAY_MSG__MSG__DETAIL__STINGRAY_CONTROL__BUILDER_HPP_
#define STINGRAY_MSG__MSG__DETAIL__STINGRAY_CONTROL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "stingray_msg/msg/detail/stingray_control__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace stingray_msg
{

namespace msg
{

namespace builder
{

class Init_StingrayControl_acro
{
public:
  explicit Init_StingrayControl_acro(::stingray_msg::msg::StingrayControl & msg)
  : msg_(msg)
  {}
  ::stingray_msg::msg::StingrayControl acro(::stingray_msg::msg::StingrayControl::_acro_type arg)
  {
    msg_.acro = std::move(arg);
    return std::move(msg_);
  }

private:
  ::stingray_msg::msg::StingrayControl msg_;
};

class Init_StingrayControl_dissarm
{
public:
  explicit Init_StingrayControl_dissarm(::stingray_msg::msg::StingrayControl & msg)
  : msg_(msg)
  {}
  Init_StingrayControl_acro dissarm(::stingray_msg::msg::StingrayControl::_dissarm_type arg)
  {
    msg_.dissarm = std::move(arg);
    return Init_StingrayControl_acro(msg_);
  }

private:
  ::stingray_msg::msg::StingrayControl msg_;
};

class Init_StingrayControl_arm
{
public:
  explicit Init_StingrayControl_arm(::stingray_msg::msg::StingrayControl & msg)
  : msg_(msg)
  {}
  Init_StingrayControl_dissarm arm(::stingray_msg::msg::StingrayControl::_arm_type arg)
  {
    msg_.arm = std::move(arg);
    return Init_StingrayControl_dissarm(msg_);
  }

private:
  ::stingray_msg::msg::StingrayControl msg_;
};

class Init_StingrayControl_stabilize
{
public:
  explicit Init_StingrayControl_stabilize(::stingray_msg::msg::StingrayControl & msg)
  : msg_(msg)
  {}
  Init_StingrayControl_arm stabilize(::stingray_msg::msg::StingrayControl::_stabilize_type arg)
  {
    msg_.stabilize = std::move(arg);
    return Init_StingrayControl_arm(msg_);
  }

private:
  ::stingray_msg::msg::StingrayControl msg_;
};

class Init_StingrayControl_camera_angle
{
public:
  explicit Init_StingrayControl_camera_angle(::stingray_msg::msg::StingrayControl & msg)
  : msg_(msg)
  {}
  Init_StingrayControl_stabilize camera_angle(::stingray_msg::msg::StingrayControl::_camera_angle_type arg)
  {
    msg_.camera_angle = std::move(arg);
    return Init_StingrayControl_stabilize(msg_);
  }

private:
  ::stingray_msg::msg::StingrayControl msg_;
};

class Init_StingrayControl_althold_mode_toggle
{
public:
  explicit Init_StingrayControl_althold_mode_toggle(::stingray_msg::msg::StingrayControl & msg)
  : msg_(msg)
  {}
  Init_StingrayControl_camera_angle althold_mode_toggle(::stingray_msg::msg::StingrayControl::_althold_mode_toggle_type arg)
  {
    msg_.althold_mode_toggle = std::move(arg);
    return Init_StingrayControl_camera_angle(msg_);
  }

private:
  ::stingray_msg::msg::StingrayControl msg_;
};

class Init_StingrayControl_manual_mode_toggle
{
public:
  explicit Init_StingrayControl_manual_mode_toggle(::stingray_msg::msg::StingrayControl & msg)
  : msg_(msg)
  {}
  Init_StingrayControl_althold_mode_toggle manual_mode_toggle(::stingray_msg::msg::StingrayControl::_manual_mode_toggle_type arg)
  {
    msg_.manual_mode_toggle = std::move(arg);
    return Init_StingrayControl_althold_mode_toggle(msg_);
  }

private:
  ::stingray_msg::msg::StingrayControl msg_;
};

class Init_StingrayControl_light_dimmer
{
public:
  explicit Init_StingrayControl_light_dimmer(::stingray_msg::msg::StingrayControl & msg)
  : msg_(msg)
  {}
  Init_StingrayControl_manual_mode_toggle light_dimmer(::stingray_msg::msg::StingrayControl::_light_dimmer_type arg)
  {
    msg_.light_dimmer = std::move(arg);
    return Init_StingrayControl_manual_mode_toggle(msg_);
  }

private:
  ::stingray_msg::msg::StingrayControl msg_;
};

class Init_StingrayControl_light_brighter
{
public:
  explicit Init_StingrayControl_light_brighter(::stingray_msg::msg::StingrayControl & msg)
  : msg_(msg)
  {}
  Init_StingrayControl_light_dimmer light_brighter(::stingray_msg::msg::StingrayControl::_light_brighter_type arg)
  {
    msg_.light_brighter = std::move(arg);
    return Init_StingrayControl_light_dimmer(msg_);
  }

private:
  ::stingray_msg::msg::StingrayControl msg_;
};

class Init_StingrayControl_light_step
{
public:
  explicit Init_StingrayControl_light_step(::stingray_msg::msg::StingrayControl & msg)
  : msg_(msg)
  {}
  Init_StingrayControl_light_brighter light_step(::stingray_msg::msg::StingrayControl::_light_step_type arg)
  {
    msg_.light_step = std::move(arg);
    return Init_StingrayControl_light_brighter(msg_);
  }

private:
  ::stingray_msg::msg::StingrayControl msg_;
};

class Init_StingrayControl_vertical_rotation
{
public:
  explicit Init_StingrayControl_vertical_rotation(::stingray_msg::msg::StingrayControl & msg)
  : msg_(msg)
  {}
  Init_StingrayControl_light_step vertical_rotation(::stingray_msg::msg::StingrayControl::_vertical_rotation_type arg)
  {
    msg_.vertical_rotation = std::move(arg);
    return Init_StingrayControl_light_step(msg_);
  }

private:
  ::stingray_msg::msg::StingrayControl msg_;
};

class Init_StingrayControl_horizontal_rotation
{
public:
  explicit Init_StingrayControl_horizontal_rotation(::stingray_msg::msg::StingrayControl & msg)
  : msg_(msg)
  {}
  Init_StingrayControl_vertical_rotation horizontal_rotation(::stingray_msg::msg::StingrayControl::_horizontal_rotation_type arg)
  {
    msg_.horizontal_rotation = std::move(arg);
    return Init_StingrayControl_vertical_rotation(msg_);
  }

private:
  ::stingray_msg::msg::StingrayControl msg_;
};

class Init_StingrayControl_decrease_altitude
{
public:
  explicit Init_StingrayControl_decrease_altitude(::stingray_msg::msg::StingrayControl & msg)
  : msg_(msg)
  {}
  Init_StingrayControl_horizontal_rotation decrease_altitude(::stingray_msg::msg::StingrayControl::_decrease_altitude_type arg)
  {
    msg_.decrease_altitude = std::move(arg);
    return Init_StingrayControl_horizontal_rotation(msg_);
  }

private:
  ::stingray_msg::msg::StingrayControl msg_;
};

class Init_StingrayControl_increase_altitude
{
public:
  explicit Init_StingrayControl_increase_altitude(::stingray_msg::msg::StingrayControl & msg)
  : msg_(msg)
  {}
  Init_StingrayControl_decrease_altitude increase_altitude(::stingray_msg::msg::StingrayControl::_increase_altitude_type arg)
  {
    msg_.increase_altitude = std::move(arg);
    return Init_StingrayControl_decrease_altitude(msg_);
  }

private:
  ::stingray_msg::msg::StingrayControl msg_;
};

class Init_StingrayControl_left_right
{
public:
  explicit Init_StingrayControl_left_right(::stingray_msg::msg::StingrayControl & msg)
  : msg_(msg)
  {}
  Init_StingrayControl_increase_altitude left_right(::stingray_msg::msg::StingrayControl::_left_right_type arg)
  {
    msg_.left_right = std::move(arg);
    return Init_StingrayControl_increase_altitude(msg_);
  }

private:
  ::stingray_msg::msg::StingrayControl msg_;
};

class Init_StingrayControl_forward_backward
{
public:
  Init_StingrayControl_forward_backward()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_StingrayControl_left_right forward_backward(::stingray_msg::msg::StingrayControl::_forward_backward_type arg)
  {
    msg_.forward_backward = std::move(arg);
    return Init_StingrayControl_left_right(msg_);
  }

private:
  ::stingray_msg::msg::StingrayControl msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::stingray_msg::msg::StingrayControl>()
{
  return stingray_msg::msg::builder::Init_StingrayControl_forward_backward();
}

}  // namespace stingray_msg

#endif  // STINGRAY_MSG__MSG__DETAIL__STINGRAY_CONTROL__BUILDER_HPP_
