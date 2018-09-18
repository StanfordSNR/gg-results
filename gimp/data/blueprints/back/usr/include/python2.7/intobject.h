// GGHASH:VBpVUpmfQibHTGWeMgIYOvVENwlXt7.8mhQixaAfiHzg00000ad6
#ifndef Py_INTOBJECT_H
#define Py_INTOBJECT_H 
#ifdef __cplusplus
#endif
#define PyInt_Check(op) PyType_FastSubclass(Py_TYPE(op), Py_TPFLAGS_INT_SUBCLASS)
#define PyInt_CheckExact(op) (Py_TYPE(op) == &PyInt_Type)
#ifdef Py_USING_UNICODE
#endif
#ifdef HAVE_LONG_LONG
#endif
#define PyInt_AS_LONG(op) (((PyIntObject *)(op))->ob_ival)
#ifdef __cplusplus
#endif
#endif
