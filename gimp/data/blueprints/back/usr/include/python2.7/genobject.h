// GGHASH:VX_QkNipIvQ84StudasT2kUIqC0I5XICopl.Q_7Lmf1A0000037b
#ifndef Py_GENOBJECT_H
#define Py_GENOBJECT_H 
#ifdef __cplusplus
#endif
#define PyGen_Check(op) PyObject_TypeCheck(op, &PyGen_Type)
#define PyGen_CheckExact(op) (Py_TYPE(op) == &PyGen_Type)
#ifdef __cplusplus
#endif
#endif
