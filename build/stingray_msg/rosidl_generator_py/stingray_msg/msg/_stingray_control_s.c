// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from stingray_msg:msg/StingrayControl.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "stingray_msg/msg/detail/stingray_control__struct.h"
#include "stingray_msg/msg/detail/stingray_control__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool stingray_msg__msg__stingray_control__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[51];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("stingray_msg.msg._stingray_control.StingrayControl", full_classname_dest, 50) == 0);
  }
  stingray_msg__msg__StingrayControl * ros_message = _ros_message;
  {  // forward_backward
    PyObject * field = PyObject_GetAttrString(_pymsg, "forward_backward");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->forward_backward = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // left_right
    PyObject * field = PyObject_GetAttrString(_pymsg, "left_right");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->left_right = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // increase_altitude
    PyObject * field = PyObject_GetAttrString(_pymsg, "increase_altitude");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->increase_altitude = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // decrease_altitude
    PyObject * field = PyObject_GetAttrString(_pymsg, "decrease_altitude");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->decrease_altitude = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // horizontal_rotation
    PyObject * field = PyObject_GetAttrString(_pymsg, "horizontal_rotation");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->horizontal_rotation = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // vertical_rotation
    PyObject * field = PyObject_GetAttrString(_pymsg, "vertical_rotation");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->vertical_rotation = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // light_step
    PyObject * field = PyObject_GetAttrString(_pymsg, "light_step");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->light_step = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // light_brighter
    PyObject * field = PyObject_GetAttrString(_pymsg, "light_brighter");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->light_brighter = (int8_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // light_dimmer
    PyObject * field = PyObject_GetAttrString(_pymsg, "light_dimmer");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->light_dimmer = (int8_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // manual_mode_toggle
    PyObject * field = PyObject_GetAttrString(_pymsg, "manual_mode_toggle");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->manual_mode_toggle = (int8_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // althold_mode_toggle
    PyObject * field = PyObject_GetAttrString(_pymsg, "althold_mode_toggle");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->althold_mode_toggle = (int8_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // camera_angle
    PyObject * field = PyObject_GetAttrString(_pymsg, "camera_angle");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->camera_angle = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // stabilize
    PyObject * field = PyObject_GetAttrString(_pymsg, "stabilize");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->stabilize = (int8_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // arm
    PyObject * field = PyObject_GetAttrString(_pymsg, "arm");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->arm = (int8_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // dissarm
    PyObject * field = PyObject_GetAttrString(_pymsg, "dissarm");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->dissarm = (int8_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // acro
    PyObject * field = PyObject_GetAttrString(_pymsg, "acro");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->acro = (int8_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * stingray_msg__msg__stingray_control__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of StingrayControl */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("stingray_msg.msg._stingray_control");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "StingrayControl");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  stingray_msg__msg__StingrayControl * ros_message = (stingray_msg__msg__StingrayControl *)raw_ros_message;
  {  // forward_backward
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->forward_backward);
    {
      int rc = PyObject_SetAttrString(_pymessage, "forward_backward", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // left_right
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->left_right);
    {
      int rc = PyObject_SetAttrString(_pymessage, "left_right", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // increase_altitude
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->increase_altitude);
    {
      int rc = PyObject_SetAttrString(_pymessage, "increase_altitude", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // decrease_altitude
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->decrease_altitude);
    {
      int rc = PyObject_SetAttrString(_pymessage, "decrease_altitude", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // horizontal_rotation
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->horizontal_rotation);
    {
      int rc = PyObject_SetAttrString(_pymessage, "horizontal_rotation", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vertical_rotation
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->vertical_rotation);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vertical_rotation", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // light_step
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->light_step);
    {
      int rc = PyObject_SetAttrString(_pymessage, "light_step", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // light_brighter
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->light_brighter);
    {
      int rc = PyObject_SetAttrString(_pymessage, "light_brighter", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // light_dimmer
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->light_dimmer);
    {
      int rc = PyObject_SetAttrString(_pymessage, "light_dimmer", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // manual_mode_toggle
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->manual_mode_toggle);
    {
      int rc = PyObject_SetAttrString(_pymessage, "manual_mode_toggle", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // althold_mode_toggle
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->althold_mode_toggle);
    {
      int rc = PyObject_SetAttrString(_pymessage, "althold_mode_toggle", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // camera_angle
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->camera_angle);
    {
      int rc = PyObject_SetAttrString(_pymessage, "camera_angle", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // stabilize
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->stabilize);
    {
      int rc = PyObject_SetAttrString(_pymessage, "stabilize", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // arm
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->arm);
    {
      int rc = PyObject_SetAttrString(_pymessage, "arm", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // dissarm
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->dissarm);
    {
      int rc = PyObject_SetAttrString(_pymessage, "dissarm", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // acro
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->acro);
    {
      int rc = PyObject_SetAttrString(_pymessage, "acro", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
