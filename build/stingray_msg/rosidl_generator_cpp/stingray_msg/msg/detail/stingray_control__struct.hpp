// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from stingray_msg:msg/StingrayControl.idl
// generated code does not contain a copyright notice

#ifndef STINGRAY_MSG__MSG__DETAIL__STINGRAY_CONTROL__STRUCT_HPP_
#define STINGRAY_MSG__MSG__DETAIL__STINGRAY_CONTROL__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__stingray_msg__msg__StingrayControl __attribute__((deprecated))
#else
# define DEPRECATED__stingray_msg__msg__StingrayControl __declspec(deprecated)
#endif

namespace stingray_msg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct StingrayControl_
{
  using Type = StingrayControl_<ContainerAllocator>;

  explicit StingrayControl_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->forward_backward = 0.0f;
      this->left_right = 0.0f;
      this->increase_altitude = 0.0f;
      this->decrease_altitude = 0.0f;
      this->horizontal_rotation = 0.0f;
      this->vertical_rotation = 0.0f;
      this->light_step = 0l;
      this->light_brighter = 0;
      this->light_dimmer = 0;
      this->manual_mode_toggle = 0;
      this->althold_mode_toggle = 0;
      this->camera_angle = 0l;
      this->stabilize = 0;
      this->arm = 0;
      this->dissarm = 0;
      this->acro = 0;
    }
  }

  explicit StingrayControl_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->forward_backward = 0.0f;
      this->left_right = 0.0f;
      this->increase_altitude = 0.0f;
      this->decrease_altitude = 0.0f;
      this->horizontal_rotation = 0.0f;
      this->vertical_rotation = 0.0f;
      this->light_step = 0l;
      this->light_brighter = 0;
      this->light_dimmer = 0;
      this->manual_mode_toggle = 0;
      this->althold_mode_toggle = 0;
      this->camera_angle = 0l;
      this->stabilize = 0;
      this->arm = 0;
      this->dissarm = 0;
      this->acro = 0;
    }
  }

  // field types and members
  using _forward_backward_type =
    float;
  _forward_backward_type forward_backward;
  using _left_right_type =
    float;
  _left_right_type left_right;
  using _increase_altitude_type =
    float;
  _increase_altitude_type increase_altitude;
  using _decrease_altitude_type =
    float;
  _decrease_altitude_type decrease_altitude;
  using _horizontal_rotation_type =
    float;
  _horizontal_rotation_type horizontal_rotation;
  using _vertical_rotation_type =
    float;
  _vertical_rotation_type vertical_rotation;
  using _light_step_type =
    int32_t;
  _light_step_type light_step;
  using _light_brighter_type =
    int8_t;
  _light_brighter_type light_brighter;
  using _light_dimmer_type =
    int8_t;
  _light_dimmer_type light_dimmer;
  using _manual_mode_toggle_type =
    int8_t;
  _manual_mode_toggle_type manual_mode_toggle;
  using _althold_mode_toggle_type =
    int8_t;
  _althold_mode_toggle_type althold_mode_toggle;
  using _camera_angle_type =
    int32_t;
  _camera_angle_type camera_angle;
  using _stabilize_type =
    int8_t;
  _stabilize_type stabilize;
  using _arm_type =
    int8_t;
  _arm_type arm;
  using _dissarm_type =
    int8_t;
  _dissarm_type dissarm;
  using _acro_type =
    int8_t;
  _acro_type acro;

  // setters for named parameter idiom
  Type & set__forward_backward(
    const float & _arg)
  {
    this->forward_backward = _arg;
    return *this;
  }
  Type & set__left_right(
    const float & _arg)
  {
    this->left_right = _arg;
    return *this;
  }
  Type & set__increase_altitude(
    const float & _arg)
  {
    this->increase_altitude = _arg;
    return *this;
  }
  Type & set__decrease_altitude(
    const float & _arg)
  {
    this->decrease_altitude = _arg;
    return *this;
  }
  Type & set__horizontal_rotation(
    const float & _arg)
  {
    this->horizontal_rotation = _arg;
    return *this;
  }
  Type & set__vertical_rotation(
    const float & _arg)
  {
    this->vertical_rotation = _arg;
    return *this;
  }
  Type & set__light_step(
    const int32_t & _arg)
  {
    this->light_step = _arg;
    return *this;
  }
  Type & set__light_brighter(
    const int8_t & _arg)
  {
    this->light_brighter = _arg;
    return *this;
  }
  Type & set__light_dimmer(
    const int8_t & _arg)
  {
    this->light_dimmer = _arg;
    return *this;
  }
  Type & set__manual_mode_toggle(
    const int8_t & _arg)
  {
    this->manual_mode_toggle = _arg;
    return *this;
  }
  Type & set__althold_mode_toggle(
    const int8_t & _arg)
  {
    this->althold_mode_toggle = _arg;
    return *this;
  }
  Type & set__camera_angle(
    const int32_t & _arg)
  {
    this->camera_angle = _arg;
    return *this;
  }
  Type & set__stabilize(
    const int8_t & _arg)
  {
    this->stabilize = _arg;
    return *this;
  }
  Type & set__arm(
    const int8_t & _arg)
  {
    this->arm = _arg;
    return *this;
  }
  Type & set__dissarm(
    const int8_t & _arg)
  {
    this->dissarm = _arg;
    return *this;
  }
  Type & set__acro(
    const int8_t & _arg)
  {
    this->acro = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    stingray_msg::msg::StingrayControl_<ContainerAllocator> *;
  using ConstRawPtr =
    const stingray_msg::msg::StingrayControl_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<stingray_msg::msg::StingrayControl_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<stingray_msg::msg::StingrayControl_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      stingray_msg::msg::StingrayControl_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<stingray_msg::msg::StingrayControl_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      stingray_msg::msg::StingrayControl_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<stingray_msg::msg::StingrayControl_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<stingray_msg::msg::StingrayControl_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<stingray_msg::msg::StingrayControl_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__stingray_msg__msg__StingrayControl
    std::shared_ptr<stingray_msg::msg::StingrayControl_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__stingray_msg__msg__StingrayControl
    std::shared_ptr<stingray_msg::msg::StingrayControl_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const StingrayControl_ & other) const
  {
    if (this->forward_backward != other.forward_backward) {
      return false;
    }
    if (this->left_right != other.left_right) {
      return false;
    }
    if (this->increase_altitude != other.increase_altitude) {
      return false;
    }
    if (this->decrease_altitude != other.decrease_altitude) {
      return false;
    }
    if (this->horizontal_rotation != other.horizontal_rotation) {
      return false;
    }
    if (this->vertical_rotation != other.vertical_rotation) {
      return false;
    }
    if (this->light_step != other.light_step) {
      return false;
    }
    if (this->light_brighter != other.light_brighter) {
      return false;
    }
    if (this->light_dimmer != other.light_dimmer) {
      return false;
    }
    if (this->manual_mode_toggle != other.manual_mode_toggle) {
      return false;
    }
    if (this->althold_mode_toggle != other.althold_mode_toggle) {
      return false;
    }
    if (this->camera_angle != other.camera_angle) {
      return false;
    }
    if (this->stabilize != other.stabilize) {
      return false;
    }
    if (this->arm != other.arm) {
      return false;
    }
    if (this->dissarm != other.dissarm) {
      return false;
    }
    if (this->acro != other.acro) {
      return false;
    }
    return true;
  }
  bool operator!=(const StingrayControl_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct StingrayControl_

// alias to use template instance with default allocator
using StingrayControl =
  stingray_msg::msg::StingrayControl_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace stingray_msg

#endif  // STINGRAY_MSG__MSG__DETAIL__STINGRAY_CONTROL__STRUCT_HPP_
