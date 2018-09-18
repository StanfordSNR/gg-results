// GGHASH:V2czXRNCeb4frCOAAdAlGI2hfzVx3oChaCYdM1SuNW_U000013a0
#ifndef Py_MODSUPPORT_H
#define Py_MODSUPPORT_H 
#ifdef __cplusplus
#endif
#include <stdarg.h>
#ifdef PY_SSIZE_T_CLEAN
#define PyArg_Parse _PyArg_Parse_SizeT
#define PyArg_ParseTuple _PyArg_ParseTuple_SizeT
#define PyArg_ParseTupleAndKeywords _PyArg_ParseTupleAndKeywords_SizeT
#define PyArg_VaParse _PyArg_VaParse_SizeT
#define PyArg_VaParseTupleAndKeywords _PyArg_VaParseTupleAndKeywords_SizeT
#define Py_BuildValue _Py_BuildValue_SizeT
#define Py_VaBuildValue _Py_VaBuildValue_SizeT
#else
#endif
#define PyModule_AddIntMacro(m,c) PyModule_AddIntConstant(m, #c, c)
#define PyModule_AddStringMacro(m,c) PyModule_AddStringConstant(m, #c, c)
#define PYTHON_API_VERSION 1013
#define PYTHON_API_STRING "1013"
#ifdef MS_WINDOWS
#endif
#if SIZEOF_SIZE_T != SIZEOF_INT
#define Py_InitModule4 Py_InitModule4_64
#endif
#ifdef Py_TRACE_REFS
 #if SIZEOF_SIZE_T != SIZEOF_INT
 #undef Py_InitModule4
 #define Py_InitModule4 Py_InitModule4TraceRefs_64
 #else
 #define Py_InitModule4 Py_InitModule4TraceRefs
 #endif
#endif
#define Py_InitModule(name,methods) Py_InitModule4(name, methods, (char *)NULL, (PyObject *)NULL, PYTHON_API_VERSION)
#define Py_InitModule3(name,methods,doc) Py_InitModule4(name, methods, doc, (PyObject *)NULL, PYTHON_API_VERSION)
#ifdef __cplusplus
#endif
#endif
