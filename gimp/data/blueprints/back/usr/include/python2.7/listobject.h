// GGHASH:VT8RA3GAVgZCFWyermjnLPcYjgZEEXIbdnPptZQmzSpg000009d2
#ifndef Py_LISTOBJECT_H
#define Py_LISTOBJECT_H 
#ifdef __cplusplus
#endif
#define PyList_Check(op) PyType_FastSubclass(Py_TYPE(op), Py_TPFLAGS_LIST_SUBCLASS)
#define PyList_CheckExact(op) (Py_TYPE(op) == &PyList_Type)
#define PyList_GET_ITEM(op,i) (((PyListObject *)(op))->ob_item[i])
#define PyList_SET_ITEM(op,i,v) (((PyListObject *)(op))->ob_item[i] = (v))
#define PyList_GET_SIZE(op) Py_SIZE(op)
#ifdef __cplusplus
#endif
#endif
