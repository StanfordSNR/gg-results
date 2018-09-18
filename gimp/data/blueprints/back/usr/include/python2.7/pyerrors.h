// GGHASH:V_qqoPwEsSLpVeD5bDu4A6t_MdErsBGo2PAVP4HaqLVM00002ddd
#ifndef Py_ERRORS_H
#define Py_ERRORS_H 
#ifdef __cplusplus
#endif
#ifdef Py_USING_UNICODE
#endif
#ifdef MS_WINDOWS
#endif
#ifdef Py_DEBUG
#define _PyErr_OCCURRED() PyErr_Occurred()
#else
#define _PyErr_OCCURRED() (_PyThreadState_Current->curexc_type)
#endif
#define PyExceptionClass_Check(x) (PyClass_Check((x)) || (PyType_Check((x)) && PyType_FastSubclass((PyTypeObject*)(x), Py_TPFLAGS_BASE_EXC_SUBCLASS)))
#define PyExceptionInstance_Check(x) (PyInstance_Check((x)) || PyType_FastSubclass((x)->ob_type, Py_TPFLAGS_BASE_EXC_SUBCLASS))
#define PyExceptionClass_Name(x) (PyClass_Check((x)) ? PyString_AS_STRING(((PyClassObject*)(x))->cl_name) : (char *)(((PyTypeObject*)(x))->tp_name))
#define PyExceptionInstance_Class(x) ((PyInstance_Check((x)) ? (PyObject*)((PyInstanceObject*)(x))->in_class : (PyObject*)((x)->ob_type)))
#ifdef MS_WINDOWS
#endif
#ifdef __VMS
#endif
#ifdef MS_WINDOWS
#endif
#ifdef MS_WINDOWS
#endif
#define PyErr_BadInternalCall() _PyErr_BadInternalCall(__FILE__, __LINE__)
#ifdef Py_USING_UNICODE
#endif
#if defined(MS_WIN32) && !defined(HAVE_SNPRINTF)
#define HAVE_SNPRINTF 
#define snprintf _snprintf
#define vsnprintf _vsnprintf
#endif
#include <stdarg.h>
#ifdef __cplusplus
#endif
#endif
