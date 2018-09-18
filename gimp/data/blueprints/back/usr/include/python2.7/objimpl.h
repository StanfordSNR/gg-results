// GGHASH:V6I.9ciin5yMAv4jvsmCvQoEjKSV1ZKIAMvmhbO9rvMw0000368f
#ifndef Py_OBJIMPL_H
#define Py_OBJIMPL_H 
#include "pymem.h"
#ifdef __cplusplus
#endif
#ifdef WITH_PYMALLOC
#ifdef PYMALLOC_DEBUG
#define PyObject_MALLOC _PyObject_DebugMalloc
#define PyObject_Malloc _PyObject_DebugMalloc
#define PyObject_REALLOC _PyObject_DebugRealloc
#define PyObject_Realloc _PyObject_DebugRealloc
#define PyObject_FREE _PyObject_DebugFree
#define PyObject_Free _PyObject_DebugFree
#else
#define PyObject_MALLOC PyObject_Malloc
#define PyObject_REALLOC PyObject_Realloc
#define PyObject_FREE PyObject_Free
#endif
#else
#define PyObject_MALLOC PyMem_MALLOC
#define PyObject_REALLOC PyMem_REALLOC
#define PyObject_FREE PyMem_FREE
#endif
#define PyObject_Del PyObject_Free
#define PyObject_DEL PyObject_FREE
#define _PyObject_Del PyObject_Free
#define PyObject_New(type,typeobj) ( (type *) _PyObject_New(typeobj) )
#define PyObject_NewVar(type,typeobj,n) ( (type *) _PyObject_NewVar((typeobj), (n)) )
#define PyObject_INIT(op,typeobj) ( Py_TYPE(op) = (typeobj), _Py_NewReference((PyObject *)(op)), (op) )
#define PyObject_INIT_VAR(op,typeobj,size) ( Py_SIZE(op) = (size), PyObject_INIT((op), (typeobj)) )
#define _PyObject_SIZE(typeobj) ( (typeobj)->tp_basicsize )
#if ((SIZEOF_VOID_P - 1) & SIZEOF_VOID_P) != 0
# error "_PyObject_VAR_SIZE requires SIZEOF_VOID_P be a power of 2"
#endif
#define _PyObject_VAR_SIZE(typeobj,nitems) (size_t) ( ( (typeobj)->tp_basicsize + (nitems)*(typeobj)->tp_itemsize + (SIZEOF_VOID_P - 1) ) & ~(SIZEOF_VOID_P - 1) )
#define PyObject_NEW(type,typeobj) ( (type *) PyObject_Init( (PyObject *) PyObject_MALLOC( _PyObject_SIZE(typeobj) ), (typeobj)) )
#define PyObject_NEW_VAR(type,typeobj,n) ( (type *) PyObject_InitVar( (PyVarObject *) PyObject_MALLOC(_PyObject_VAR_SIZE((typeobj),(n)) ), (typeobj), (n)) )
#define PyType_IS_GC(t) PyType_HasFeature((t), Py_TPFLAGS_HAVE_GC)
#define PyObject_IS_GC(o) (PyType_IS_GC(Py_TYPE(o)) && (Py_TYPE(o)->tp_is_gc == NULL || Py_TYPE(o)->tp_is_gc(o)))
#define PyObject_GC_Resize(type,op,n) ( (type *) _PyObject_GC_Resize((PyVarObject *)(op), (n)) )
#define _PyObject_GC_Del PyObject_GC_Del
#define _Py_AS_GC(o) ((PyGC_Head *)(o)-1)
#define _PyGC_REFS_UNTRACKED (-2)
#define _PyGC_REFS_REACHABLE (-3)
#define _PyGC_REFS_TENTATIVELY_UNREACHABLE (-4)
#define _PyObject_GC_TRACK(o) do { PyGC_Head *g = _Py_AS_GC(o); if (g->gc.gc_refs != _PyGC_REFS_UNTRACKED) Py_FatalError("GC object already tracked"); g->gc.gc_refs = _PyGC_REFS_REACHABLE; g->gc.gc_next = _PyGC_generation0; g->gc.gc_prev = _PyGC_generation0->gc.gc_prev; g->gc.gc_prev->gc.gc_next = g; _PyGC_generation0->gc.gc_prev = g; } while (0);
#define _PyObject_GC_UNTRACK(o) do { PyGC_Head *g = _Py_AS_GC(o); assert(g->gc.gc_refs != _PyGC_REFS_UNTRACKED); g->gc.gc_refs = _PyGC_REFS_UNTRACKED; g->gc.gc_prev->gc.gc_next = g->gc.gc_next; g->gc.gc_next->gc.gc_prev = g->gc.gc_prev; g->gc.gc_next = NULL; } while (0);
#define _PyObject_GC_IS_TRACKED(o) ((_Py_AS_GC(o))->gc.gc_refs != _PyGC_REFS_UNTRACKED)
#define _PyObject_GC_MAY_BE_TRACKED(obj) (PyObject_IS_GC(obj) && (!PyTuple_CheckExact(obj) || _PyObject_GC_IS_TRACKED(obj)))
#define PyObject_GC_New(type,typeobj) ( (type *) _PyObject_GC_New(typeobj) )
#define PyObject_GC_NewVar(type,typeobj,n) ( (type *) _PyObject_GC_NewVar((typeobj), (n)) )
#define Py_VISIT(op) do { if (op) { int vret = visit((PyObject *)(op), arg); if (vret) return vret; } } while (0)
#define PyGC_HEAD_SIZE 0
#define PyObject_GC_Init(op) 
#define PyObject_GC_Fini(op) 
#define PyObject_AS_GC(op) (op)
#define PyObject_FROM_GC(op) (op)
#define PyType_SUPPORTS_WEAKREFS(t) (PyType_HasFeature((t), Py_TPFLAGS_HAVE_WEAKREFS) && ((t)->tp_weaklistoffset > 0))
#define PyObject_GET_WEAKREFS_LISTPTR(o) ((PyObject **) (((char *) (o)) + Py_TYPE(o)->tp_weaklistoffset))
#ifdef __cplusplus
#endif
#endif
