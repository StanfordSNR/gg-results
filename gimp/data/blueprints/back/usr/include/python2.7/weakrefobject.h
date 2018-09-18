// GGHASH:Vr.0qK3qnATmH9sGcWqnSzcmo5_oko27lmOrO47xmROc00000af1
#ifndef Py_WEAKREFOBJECT_H
#define Py_WEAKREFOBJECT_H 
#ifdef __cplusplus
#endif
#define PyWeakref_CheckRef(op) PyObject_TypeCheck(op, &_PyWeakref_RefType)
#define PyWeakref_CheckRefExact(op) (Py_TYPE(op) == &_PyWeakref_RefType)
#define PyWeakref_CheckProxy(op) ((Py_TYPE(op) == &_PyWeakref_ProxyType) || (Py_TYPE(op) == &_PyWeakref_CallableProxyType))
#define PyWeakref_Check(op) (PyWeakref_CheckRef(op) || PyWeakref_CheckProxy(op))
#define PyWeakref_GET_OBJECT(ref) (Py_REFCNT(((PyWeakReference *)(ref))->wr_object) > 0 ? ((PyWeakReference *)(ref))->wr_object : Py_None)
#ifdef __cplusplus
#endif
#endif
