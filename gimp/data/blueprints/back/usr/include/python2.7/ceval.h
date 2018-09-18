// GGHASH:V9m1v9RYz2MP5hWzbicGUGeYcWvl1vSZnSPD5D_ttZhk000013c5
#ifndef Py_CEVAL_H
#define Py_CEVAL_H 
#ifdef __cplusplus
#endif
#define PyEval_CallObject(func,arg) PyEval_CallObjectWithKeywords(func, arg, (PyObject *)NULL)
#define Py_EnterRecursiveCall(where) (_Py_MakeRecCheck(PyThreadState_GET()->recursion_depth) && _Py_CheckRecursiveCall(where))
#define Py_LeaveRecursiveCall() (--PyThreadState_GET()->recursion_depth)
#ifdef USE_STACKCHECK
#define _Py_MakeRecCheck(x) (++(x) > --_Py_CheckRecursionLimit)
#else
#define _Py_MakeRecCheck(x) (++(x) > _Py_CheckRecursionLimit)
#endif
#ifdef WITH_THREAD
#define Py_BEGIN_ALLOW_THREADS { PyThreadState *_save; _save = PyEval_SaveThread();
#define Py_BLOCK_THREADS PyEval_RestoreThread(_save);
#define Py_UNBLOCK_THREADS _save = PyEval_SaveThread();
#define Py_END_ALLOW_THREADS PyEval_RestoreThread(_save); }
#else
#define Py_BEGIN_ALLOW_THREADS {
#define Py_BLOCK_THREADS 
#define Py_UNBLOCK_THREADS 
#define Py_END_ALLOW_THREADS }
#endif
#ifdef __cplusplus
#endif
#endif
