// GGHASH:VtDsIKZMxRVlb9bctbbT3qd5_L_XHyGvI.tkB4WKCt7k00000ca6
#ifndef Py_METHODOBJECT_H
#define Py_METHODOBJECT_H 
#ifdef __cplusplus
#endif
#define PyCFunction_Check(op) (Py_TYPE(op) == &PyCFunction_Type)
#define PyCFunction_GET_FUNCTION(func) (((PyCFunctionObject *)func) -> m_ml -> ml_meth)
#define PyCFunction_GET_SELF(func) (((PyCFunctionObject *)func) -> m_self)
#define PyCFunction_GET_FLAGS(func) (((PyCFunctionObject *)func) -> m_ml -> ml_flags)
#define PyCFunction_New(ML,SELF) PyCFunction_NewEx((ML), (SELF), NULL)
#define METH_OLDARGS 0x0000
#define METH_VARARGS 0x0001
#define METH_KEYWORDS 0x0002
#define METH_NOARGS 0x0004
#define METH_O 0x0008
#define METH_CLASS 0x0010
#define METH_STATIC 0x0020
#define METH_COEXIST 0x0040
#ifdef __cplusplus
#endif
#endif
