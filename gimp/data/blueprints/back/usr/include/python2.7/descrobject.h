// GGHASH:VXEV1xEq89utO1ZKWC2WNTjAMkcHDETEi706d1.NbkT4000009b0
#ifndef Py_DESCROBJECT_H
#define Py_DESCROBJECT_H 
#ifdef __cplusplus
#endif
#define PyWrapperFlag_KEYWORDS 1
#define PyDescr_COMMON PyObject_HEAD PyTypeObject *d_type; PyObject *d_name
#define PyDescr_IsData(d) (Py_TYPE(d)->tp_descr_set != NULL)
#ifdef __cplusplus
#endif
#endif
