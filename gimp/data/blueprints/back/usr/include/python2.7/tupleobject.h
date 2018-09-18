// GGHASH:VQoehjxdnVIeiNqatMcY_n2jWdiGs32IEkZAd_nVYEzU0000087f
#ifndef Py_TUPLEOBJECT_H
#define Py_TUPLEOBJECT_H 
#ifdef __cplusplus
#endif
#define PyTuple_Check(op) PyType_FastSubclass(Py_TYPE(op), Py_TPFLAGS_TUPLE_SUBCLASS)
#define PyTuple_CheckExact(op) (Py_TYPE(op) == &PyTuple_Type)
#define PyTuple_GET_ITEM(op,i) (((PyTupleObject *)(op))->ob_item[i])
#define PyTuple_GET_SIZE(op) Py_SIZE(op)
#define PyTuple_SET_ITEM(op,i,v) (((PyTupleObject *)(op))->ob_item[i] = v)
#ifdef __cplusplus
#endif
#endif
