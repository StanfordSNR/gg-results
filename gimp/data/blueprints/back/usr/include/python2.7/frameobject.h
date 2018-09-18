// GGHASH:VqxQ.4uwnvyIB2KoEH9mQf9avaCl80Z5zYLkPlpuwDzQ00000c6d
#ifndef Py_FRAMEOBJECT_H
#define Py_FRAMEOBJECT_H 
#ifdef __cplusplus
#endif
#define PyFrame_Check(op) (Py_TYPE(op) == &PyFrame_Type)
#define PyFrame_IsRestricted(f) ((f)->f_builtins != (f)->f_tstate->interp->builtins)
#ifdef __cplusplus
#endif
#endif
