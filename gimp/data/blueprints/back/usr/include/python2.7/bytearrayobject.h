// GGHASH:VRub7FYF6UvyIVV_aLeUt87bYqfgNpdBukNJfuo9dg5c00000795
#ifndef Py_BYTEARRAYOBJECT_H
#define Py_BYTEARRAYOBJECT_H 
#ifdef __cplusplus
#endif
#include <stdarg.h>
#define PyByteArray_Check(self) PyObject_TypeCheck(self, &PyByteArray_Type)
#define PyByteArray_CheckExact(self) (Py_TYPE(self) == &PyByteArray_Type)
#define PyByteArray_AS_STRING(self) (assert(PyByteArray_Check(self)), Py_SIZE(self) ? ((PyByteArrayObject *)(self))->ob_bytes : _PyByteArray_empty_string)
#define PyByteArray_GET_SIZE(self) (assert(PyByteArray_Check(self)),Py_SIZE(self))
#ifdef __cplusplus
#endif
#endif
