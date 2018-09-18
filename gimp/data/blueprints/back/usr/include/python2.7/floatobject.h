// GGHASH:VllAG2xW6jyOPzobzbO0CJAL4xk89uRlUmyng62iZOo4000015c2
#ifndef Py_FLOATOBJECT_H
#define Py_FLOATOBJECT_H 
#ifdef __cplusplus
#endif
#define PyFloat_Check(op) PyObject_TypeCheck(op, &PyFloat_Type)
#define PyFloat_CheckExact(op) (Py_TYPE(op) == &PyFloat_Type)
#define PyFloat_STR_PRECISION 12
#ifdef Py_NAN
#define Py_RETURN_NAN return PyFloat_FromDouble(Py_NAN)
#endif
#define Py_RETURN_INF(sign) do if (copysign(1., sign) == 1.) { return PyFloat_FromDouble(Py_HUGE_VAL); } else { return PyFloat_FromDouble(-Py_HUGE_VAL); } while(0)
#define PyFloat_AS_DOUBLE(op) (((PyFloatObject *)(op))->ob_fval)
#ifdef __cplusplus
#endif
#endif
