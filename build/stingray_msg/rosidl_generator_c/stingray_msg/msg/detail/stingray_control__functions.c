// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from stingray_msg:msg/StingrayControl.idl
// generated code does not contain a copyright notice
#include "stingray_msg/msg/detail/stingray_control__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
stingray_msg__msg__StingrayControl__init(stingray_msg__msg__StingrayControl * msg)
{
  if (!msg) {
    return false;
  }
  // forward_backward
  // left_right
  // increase_altitude
  // decrease_altitude
  // horizontal_rotation
  // vertical_rotation
  // light_step
  // light_brighter
  // light_dimmer
  // manual_mode_toggle
  // althold_mode_toggle
  // camera_angle
  // stabilize
  // arm
  // dissarm
  // acro
  return true;
}

void
stingray_msg__msg__StingrayControl__fini(stingray_msg__msg__StingrayControl * msg)
{
  if (!msg) {
    return;
  }
  // forward_backward
  // left_right
  // increase_altitude
  // decrease_altitude
  // horizontal_rotation
  // vertical_rotation
  // light_step
  // light_brighter
  // light_dimmer
  // manual_mode_toggle
  // althold_mode_toggle
  // camera_angle
  // stabilize
  // arm
  // dissarm
  // acro
}

bool
stingray_msg__msg__StingrayControl__are_equal(const stingray_msg__msg__StingrayControl * lhs, const stingray_msg__msg__StingrayControl * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // forward_backward
  if (lhs->forward_backward != rhs->forward_backward) {
    return false;
  }
  // left_right
  if (lhs->left_right != rhs->left_right) {
    return false;
  }
  // increase_altitude
  if (lhs->increase_altitude != rhs->increase_altitude) {
    return false;
  }
  // decrease_altitude
  if (lhs->decrease_altitude != rhs->decrease_altitude) {
    return false;
  }
  // horizontal_rotation
  if (lhs->horizontal_rotation != rhs->horizontal_rotation) {
    return false;
  }
  // vertical_rotation
  if (lhs->vertical_rotation != rhs->vertical_rotation) {
    return false;
  }
  // light_step
  if (lhs->light_step != rhs->light_step) {
    return false;
  }
  // light_brighter
  if (lhs->light_brighter != rhs->light_brighter) {
    return false;
  }
  // light_dimmer
  if (lhs->light_dimmer != rhs->light_dimmer) {
    return false;
  }
  // manual_mode_toggle
  if (lhs->manual_mode_toggle != rhs->manual_mode_toggle) {
    return false;
  }
  // althold_mode_toggle
  if (lhs->althold_mode_toggle != rhs->althold_mode_toggle) {
    return false;
  }
  // camera_angle
  if (lhs->camera_angle != rhs->camera_angle) {
    return false;
  }
  // stabilize
  if (lhs->stabilize != rhs->stabilize) {
    return false;
  }
  // arm
  if (lhs->arm != rhs->arm) {
    return false;
  }
  // dissarm
  if (lhs->dissarm != rhs->dissarm) {
    return false;
  }
  // acro
  if (lhs->acro != rhs->acro) {
    return false;
  }
  return true;
}

bool
stingray_msg__msg__StingrayControl__copy(
  const stingray_msg__msg__StingrayControl * input,
  stingray_msg__msg__StingrayControl * output)
{
  if (!input || !output) {
    return false;
  }
  // forward_backward
  output->forward_backward = input->forward_backward;
  // left_right
  output->left_right = input->left_right;
  // increase_altitude
  output->increase_altitude = input->increase_altitude;
  // decrease_altitude
  output->decrease_altitude = input->decrease_altitude;
  // horizontal_rotation
  output->horizontal_rotation = input->horizontal_rotation;
  // vertical_rotation
  output->vertical_rotation = input->vertical_rotation;
  // light_step
  output->light_step = input->light_step;
  // light_brighter
  output->light_brighter = input->light_brighter;
  // light_dimmer
  output->light_dimmer = input->light_dimmer;
  // manual_mode_toggle
  output->manual_mode_toggle = input->manual_mode_toggle;
  // althold_mode_toggle
  output->althold_mode_toggle = input->althold_mode_toggle;
  // camera_angle
  output->camera_angle = input->camera_angle;
  // stabilize
  output->stabilize = input->stabilize;
  // arm
  output->arm = input->arm;
  // dissarm
  output->dissarm = input->dissarm;
  // acro
  output->acro = input->acro;
  return true;
}

stingray_msg__msg__StingrayControl *
stingray_msg__msg__StingrayControl__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  stingray_msg__msg__StingrayControl * msg = (stingray_msg__msg__StingrayControl *)allocator.allocate(sizeof(stingray_msg__msg__StingrayControl), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(stingray_msg__msg__StingrayControl));
  bool success = stingray_msg__msg__StingrayControl__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
stingray_msg__msg__StingrayControl__destroy(stingray_msg__msg__StingrayControl * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    stingray_msg__msg__StingrayControl__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
stingray_msg__msg__StingrayControl__Sequence__init(stingray_msg__msg__StingrayControl__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  stingray_msg__msg__StingrayControl * data = NULL;

  if (size) {
    data = (stingray_msg__msg__StingrayControl *)allocator.zero_allocate(size, sizeof(stingray_msg__msg__StingrayControl), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = stingray_msg__msg__StingrayControl__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        stingray_msg__msg__StingrayControl__fini(&data[i - 1]);
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
stingray_msg__msg__StingrayControl__Sequence__fini(stingray_msg__msg__StingrayControl__Sequence * array)
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
      stingray_msg__msg__StingrayControl__fini(&array->data[i]);
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

stingray_msg__msg__StingrayControl__Sequence *
stingray_msg__msg__StingrayControl__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  stingray_msg__msg__StingrayControl__Sequence * array = (stingray_msg__msg__StingrayControl__Sequence *)allocator.allocate(sizeof(stingray_msg__msg__StingrayControl__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = stingray_msg__msg__StingrayControl__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
stingray_msg__msg__StingrayControl__Sequence__destroy(stingray_msg__msg__StingrayControl__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    stingray_msg__msg__StingrayControl__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
stingray_msg__msg__StingrayControl__Sequence__are_equal(const stingray_msg__msg__StingrayControl__Sequence * lhs, const stingray_msg__msg__StingrayControl__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!stingray_msg__msg__StingrayControl__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
stingray_msg__msg__StingrayControl__Sequence__copy(
  const stingray_msg__msg__StingrayControl__Sequence * input,
  stingray_msg__msg__StingrayControl__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(stingray_msg__msg__StingrayControl);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    stingray_msg__msg__StingrayControl * data =
      (stingray_msg__msg__StingrayControl *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!stingray_msg__msg__StingrayControl__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          stingray_msg__msg__StingrayControl__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!stingray_msg__msg__StingrayControl__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
