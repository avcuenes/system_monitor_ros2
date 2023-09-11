// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from system_monitor_msgs:msg/Ethernet.idl
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
#include "system_monitor_msgs/msg/detail/ethernet__struct.h"
#include "system_monitor_msgs/msg/detail/ethernet__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool system_monitor_msgs__msg__ethernet__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[43];
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
    assert(strncmp("system_monitor_msgs.msg._ethernet.Ethernet", full_classname_dest, 42) == 0);
  }
  system_monitor_msgs__msg__Ethernet * ros_message = _ros_message;
  {  // rx
    PyObject * field = PyObject_GetAttrString(_pymsg, "rx");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->rx = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // tx
    PyObject * field = PyObject_GetAttrString(_pymsg, "tx");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->tx = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * system_monitor_msgs__msg__ethernet__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Ethernet */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("system_monitor_msgs.msg._ethernet");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Ethernet");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  system_monitor_msgs__msg__Ethernet * ros_message = (system_monitor_msgs__msg__Ethernet *)raw_ros_message;
  {  // rx
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->rx);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rx", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // tx
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->tx);
    {
      int rc = PyObject_SetAttrString(_pymessage, "tx", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
