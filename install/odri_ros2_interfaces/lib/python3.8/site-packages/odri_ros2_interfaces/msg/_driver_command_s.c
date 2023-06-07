// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from odri_ros2_interfaces:msg/DriverCommand.idl
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
#include "odri_ros2_interfaces/msg/detail/driver_command__struct.h"
#include "odri_ros2_interfaces/msg/detail/driver_command__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);
bool odri_ros2_interfaces__msg__motor_command__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * odri_ros2_interfaces__msg__motor_command__convert_to_py(void * raw_ros_message);
bool odri_ros2_interfaces__msg__motor_command__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * odri_ros2_interfaces__msg__motor_command__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool odri_ros2_interfaces__msg__driver_command__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[55];
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
    assert(strncmp("odri_ros2_interfaces.msg._driver_command.DriverCommand", full_classname_dest, 54) == 0);
  }
  odri_ros2_interfaces__msg__DriverCommand * ros_message = _ros_message;
  {  // header
    PyObject * field = PyObject_GetAttrString(_pymsg, "header");
    if (!field) {
      return false;
    }
    if (!std_msgs__msg__header__convert_from_py(field, &ros_message->header)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // motor1
    PyObject * field = PyObject_GetAttrString(_pymsg, "motor1");
    if (!field) {
      return false;
    }
    if (!odri_ros2_interfaces__msg__motor_command__convert_from_py(field, &ros_message->motor1)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // motor2
    PyObject * field = PyObject_GetAttrString(_pymsg, "motor2");
    if (!field) {
      return false;
    }
    if (!odri_ros2_interfaces__msg__motor_command__convert_from_py(field, &ros_message->motor2)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * odri_ros2_interfaces__msg__driver_command__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of DriverCommand */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("odri_ros2_interfaces.msg._driver_command");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "DriverCommand");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  odri_ros2_interfaces__msg__DriverCommand * ros_message = (odri_ros2_interfaces__msg__DriverCommand *)raw_ros_message;
  {  // header
    PyObject * field = NULL;
    field = std_msgs__msg__header__convert_to_py(&ros_message->header);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "header", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // motor1
    PyObject * field = NULL;
    field = odri_ros2_interfaces__msg__motor_command__convert_to_py(&ros_message->motor1);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "motor1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // motor2
    PyObject * field = NULL;
    field = odri_ros2_interfaces__msg__motor_command__convert_to_py(&ros_message->motor2);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "motor2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
