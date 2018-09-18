// GGHASH:VhVfLvRMkSYfTUu77Wcz1U4VzhQuGtDdnxLIbVwLcYnA0000020a
#ifndef Py_ITEROBJECT_H
#define Py_ITEROBJECT_H 
#ifdef __cplusplus
#endif
#define PySeqIter_Check(op) (Py_TYPE(op) == &PySeqIter_Type)
#define PyCallIter_Check(op) (Py_TYPE(op) == &PyCallIter_Type)
#ifdef __cplusplus
#endif
#endif
