// GGHASH:V_39P4roXwIDzIFcUiVA3L1BJOr_ETIM88U2IX_iW0ck00001ef2
#ifndef Py_STRINGOBJECT_H
#define Py_STRINGOBJECT_H 
#ifdef __cplusplus
#endif
#include <stdarg.h>
#define SSTATE_NOT_INTERNED 0
#define SSTATE_INTERNED_MORTAL 1
#define SSTATE_INTERNED_IMMORTAL 2
#define PyString_Check(op) PyType_FastSubclass(Py_TYPE(op), Py_TPFLAGS_STRING_SUBCLASS)
#define PyString_CheckExact(op) (Py_TYPE(op) == &PyString_Type)
#define PyString_CHECK_INTERNED(op) (((PyStringObject *)(op))->ob_sstate)
#define PyString_AS_STRING(op) (((PyStringObject *)(op))->ob_sval)
#define PyString_GET_SIZE(op) Py_SIZE(op)
#ifdef __cplusplus
#endif
#endif
