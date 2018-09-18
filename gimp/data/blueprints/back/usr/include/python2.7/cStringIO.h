// GGHASH:VT3wyGoYD3PzDbWjy6y1VtB1MzsEJevXPfIqbvkTyxIk000007d5
#ifndef Py_CSTRINGIO_H
#define Py_CSTRINGIO_H 
#ifdef __cplusplus
#endif
#define PycStringIO_CAPSULE_NAME "cStringIO.cStringIO_CAPI"
#define PycString_IMPORT PycStringIO = ((struct PycStringIO_CAPI*)PyCapsule_Import( PycStringIO_CAPSULE_NAME, 0))
#define PycStringIO_InputCheck(O) (Py_TYPE(O)==PycStringIO->InputType)
#define PycStringIO_OutputCheck(O) (Py_TYPE(O)==PycStringIO->OutputType)
#ifdef __cplusplus
#endif
#endif
