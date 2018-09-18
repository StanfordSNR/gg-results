// GGHASH:VMoNCH0X8M10_lxT7VJPWM.XVNg.uyuyKAKRlgFI8r.Q000016b1
#ifndef Py_LONGOBJECT_H
#define Py_LONGOBJECT_H 
#ifdef __cplusplus
#endif
#define PyLong_Check(op) PyType_FastSubclass(Py_TYPE(op), Py_TPFLAGS_LONG_SUBCLASS)
#define PyLong_CheckExact(op) (Py_TYPE(op) == &PyLong_Type)
#define _PyLong_AsSsize_t PyLong_AsSsize_t
#define _PyLong_FromSize_t PyLong_FromSize_t
#define _PyLong_FromSsize_t PyLong_FromSsize_t
#ifdef HAVE_LONG_LONG
#endif
#ifdef Py_USING_UNICODE
#endif
#ifdef __cplusplus
#endif
#endif
