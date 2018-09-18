// GGHASH:VxhwlRXZNWu2.GP592EQz7Qo9n6F1oM1.u.ULijAmqfg0000028b
#ifndef Py_CELLOBJECT_H
#define Py_CELLOBJECT_H 
#ifdef __cplusplus
#endif
#define PyCell_Check(op) (Py_TYPE(op) == &PyCell_Type)
#define PyCell_GET(op) (((PyCellObject *)(op))->ob_ref)
#define PyCell_SET(op,v) (((PyCellObject *)(op))->ob_ref = v)
#ifdef __cplusplus
#endif
#endif
