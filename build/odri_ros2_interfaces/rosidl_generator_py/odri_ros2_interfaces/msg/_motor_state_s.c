// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from odri_ros2_interfaces:msg/MotorState.idl
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
#include "odri_ros2_interfaces/msg/detail/motor_state__struct.h"
#include "odri_ros2_interfaces/msg/detail/motor_state__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool odri_ros2_interfaces__msg__motor_state__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[49];
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
    assert(strncmp("odri_ros2_interfaces.msg._motor_state.MotorState", full_classname_dest, 48) == 0);
  }
  odri_ros2_interfaces__msg__MotorState * ros_message = _ros_message;
  {  // position
    PyObject * field = PyObject_GetAttrString(_pymsg, "position");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->position = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // velocity
    PyObject * field = PyObject_GetAttrString(_pymsg, "velocity");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->velocity = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // torque
    PyObject * field = PyObject_GetAttrString(_pymsg, "torque");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->torque = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // is_enabled
    PyObject * field = PyObject_GetAttrString(_pymsg, "is_enabled");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->is_enabled = (Py_True == field);
    Py_DECREF(field);
  }
  {  // has_index_been_detected
    PyObject * field = PyObject_GetAttrString(_pymsg, "has_index_been_detected");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->has_index_been_detected = (Py_True == field);
    Py_DECREF(field);
  }
  {  // index_toogle_bit
    PyObject * field = PyObject_GetAttrString(_pymsg, "index_toogle_bit");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->index_toogle_bit = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * odri_ros2_interfaces__msg__motor_state__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of MotorState */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("odri_ros2_interfaces.msg._motor_state");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "MotorState");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  odri_ros2_interfaces__msg__MotorState * ros_message = (odri_ros2_interfaces__msg__MotorState *)raw_ros_message;
  {  // position
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->position);
    {
      int rc = PyObject_SetAttrString(_pymessage, "position", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // velocity
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->velocity);
    {
      int rc = PyObject_SetAttrString(_pymessage, "velocity", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // torque
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->torque);
    {
      int rc = PyObject_SetAttrString(_pymessage, "torque", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // is_enabled
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->is_enabled ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "is_enabled", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // has_index_been_detected
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->has_index_been_detected ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "has_index_been_detected", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // index_toogle_bit
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->index_toogle_bit ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "index_toogle_bit", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
