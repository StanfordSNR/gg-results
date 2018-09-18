// GGHASH:VU4X.a9x5nAJekRQjzxV1Yo7z_mClHmJAdeKFowSv44c00000c05
#ifndef Py_SETOBJECT_H
#define Py_SETOBJECT_H 
#ifdef __cplusplus
#endif
#define PySet_MINSIZE 8
#define PyFrozenSet_CheckExact(ob) (Py_TYPE(ob) == &PyFrozenSet_Type)
#define PyAnySet_CheckExact(ob) (Py_TYPE(ob) == &PySet_Type || Py_TYPE(ob) == &PyFrozenSet_Type)
#define PyAnySet_Check(ob) (Py_TYPE(ob) == &PySet_Type || Py_TYPE(ob) == &PyFrozenSet_Type || PyType_IsSubtype(Py_TYPE(ob), &PySet_Type) || PyType_IsSubtype(Py_TYPE(ob), &PyFrozenSet_Type))
#define PySet_Check(ob) (Py_TYPE(ob) == &PySet_Type || PyType_IsSubtype(Py_TYPE(ob), &PySet_Type))
#define PyFrozenSet_Check(ob) (Py_TYPE(ob) == &PyFrozenSet_Type || PyType_IsSubtype(Py_TYPE(ob), &PyFrozenSet_Type))
#define PySet_GET_SIZE(so) (((PySetObject *)(so))->used)
#ifdef __cplusplus
#endif
#endif
