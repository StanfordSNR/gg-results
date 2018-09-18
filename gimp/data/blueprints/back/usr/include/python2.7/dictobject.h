// GGHASH:VduSYCHogADbzVY.2NgobC2nemCmiKJ2A1vT6QmEEi1E00001ab5
#ifndef Py_DICTOBJECT_H
#define Py_DICTOBJECT_H 
#ifdef __cplusplus
#endif
#define PyDict_MINSIZE 8
#define PyDict_Check(op) PyType_FastSubclass(Py_TYPE(op), Py_TPFLAGS_DICT_SUBCLASS)
#define PyDict_CheckExact(op) (Py_TYPE(op) == &PyDict_Type)
#define PyDictKeys_Check(op) (Py_TYPE(op) == &PyDictKeys_Type)
#define PyDictItems_Check(op) (Py_TYPE(op) == &PyDictItems_Type)
#define PyDictValues_Check(op) (Py_TYPE(op) == &PyDictValues_Type)
#define PyDictViewSet_Check(op) (PyDictKeys_Check(op) || PyDictItems_Check(op))
#ifdef __cplusplus
#endif
#endif
