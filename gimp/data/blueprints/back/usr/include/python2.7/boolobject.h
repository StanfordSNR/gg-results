// GGHASH:V79zrN5W7ziw.zs8BqDRhRpebnV.hkXm754m7fCyFvtQ00000390
#ifndef Py_BOOLOBJECT_H
#define Py_BOOLOBJECT_H 
#ifdef __cplusplus
#endif
#define PyBool_Check(x) (Py_TYPE(x) == &PyBool_Type)
#define Py_False ((PyObject *) &_Py_ZeroStruct)
#define Py_True ((PyObject *) &_Py_TrueStruct)
#define Py_RETURN_TRUE return Py_INCREF(Py_True), Py_True
#define Py_RETURN_FALSE return Py_INCREF(Py_False), Py_False
#ifdef __cplusplus
#endif
#endif
