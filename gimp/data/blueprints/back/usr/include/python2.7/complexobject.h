// GGHASH:VYKNWuly9qhGWAvIWnsUVJ1sox6xFhHjZkJ2.yB4Ios40000073d
#ifndef Py_COMPLEXOBJECT_H
#define Py_COMPLEXOBJECT_H 
#ifdef __cplusplus
#endif
#define c_sum _Py_c_sum
#define c_diff _Py_c_diff
#define c_neg _Py_c_neg
#define c_prod _Py_c_prod
#define c_quot _Py_c_quot
#define c_pow _Py_c_pow
#define c_abs _Py_c_abs
#define PyComplex_Check(op) PyObject_TypeCheck(op, &PyComplex_Type)
#define PyComplex_CheckExact(op) (Py_TYPE(op) == &PyComplex_Type)
#ifdef __cplusplus
#endif
#endif
