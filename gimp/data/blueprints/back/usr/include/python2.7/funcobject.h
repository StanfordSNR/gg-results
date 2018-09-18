// GGHASH:VmTnIpPUNEvDm18VEuDwlpb4UaB4kedE.Len_FceSgNQ00000bb3
#ifndef Py_FUNCOBJECT_H
#define Py_FUNCOBJECT_H 
#ifdef __cplusplus
#endif
#define PyFunction_Check(op) (Py_TYPE(op) == &PyFunction_Type)
#define PyFunction_GET_CODE(func) (((PyFunctionObject *)func) -> func_code)
#define PyFunction_GET_GLOBALS(func) (((PyFunctionObject *)func) -> func_globals)
#define PyFunction_GET_MODULE(func) (((PyFunctionObject *)func) -> func_module)
#define PyFunction_GET_DEFAULTS(func) (((PyFunctionObject *)func) -> func_defaults)
#define PyFunction_GET_CLOSURE(func) (((PyFunctionObject *)func) -> func_closure)
#ifdef __cplusplus
#endif
#endif
