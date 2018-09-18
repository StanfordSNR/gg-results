// GGHASH:VCV1EFVR0b1XO.lcrquI19zKVIVJqcSEMKzgsOy_VNtI00000b07
#ifndef Py_MEMORYOBJECT_H
#define Py_MEMORYOBJECT_H 
#ifdef __cplusplus
#endif
#define PyMemoryView_Check(op) (Py_TYPE(op) == &PyMemoryView_Type)
#define PyMemoryView_GET_BUFFER(op) (&((PyMemoryViewObject *)(op))->view)
#define PyMemoryView_GET_BASE(op) (((PyMemoryViewObject *)(op))->view.obj)
#ifdef __cplusplus
#endif
#endif
