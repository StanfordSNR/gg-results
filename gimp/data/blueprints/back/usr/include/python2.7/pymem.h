// GGHASH:VrMO04VqPUChtrFbAk5LMefbYphF4qQ5dQNvTeM9Zv7A00001268
#ifndef Py_PYMEM_H
#define Py_PYMEM_H 
#include "pyport.h"
#ifdef __cplusplus
#endif
#ifdef PYMALLOC_DEBUG
#define PyMem_MALLOC _PyMem_DebugMalloc
#define PyMem_REALLOC _PyMem_DebugRealloc
#define PyMem_FREE _PyMem_DebugFree
#else
#define PyMem_MALLOC(n) ((size_t)(n) > (size_t)PY_SSIZE_T_MAX ? NULL : malloc(((n) != 0) ? (n) : 1))
#define PyMem_REALLOC(p,n) ((size_t)(n) > (size_t)PY_SSIZE_T_MAX ? NULL : realloc((p), ((n) != 0) ? (n) : 1))
#define PyMem_FREE free
#endif
#define PyMem_New(type,n) ( ((size_t)(n) > PY_SSIZE_T_MAX / sizeof(type)) ? NULL : ( (type *) PyMem_Malloc((n) * sizeof(type)) ) )
#define PyMem_NEW(type,n) ( ((size_t)(n) > PY_SSIZE_T_MAX / sizeof(type)) ? NULL : ( (type *) PyMem_MALLOC((n) * sizeof(type)) ) )
#define PyMem_Resize(p,type,n) ( (p) = ((size_t)(n) > PY_SSIZE_T_MAX / sizeof(type)) ? NULL : (type *) PyMem_Realloc((p), (n) * sizeof(type)) )
#define PyMem_RESIZE(p,type,n) ( (p) = ((size_t)(n) > PY_SSIZE_T_MAX / sizeof(type)) ? NULL : (type *) PyMem_REALLOC((p), (n) * sizeof(type)) )
#define PyMem_Del PyMem_Free
#define PyMem_DEL PyMem_FREE
#ifdef __cplusplus
#endif
#endif
