// GGHASH:VNNCjCs1zYXA09DyTJ8WcWLnnyxXXZSGErnxdCDUb_vw00001903
#ifndef Py_PYSTATE_H
#define Py_PYSTATE_H 
#ifdef __cplusplus
#endif
#ifdef HAVE_DLOPEN
#endif
#ifdef WITH_TSC
#endif
#define PyTrace_CALL 0
#define PyTrace_EXCEPTION 1
#define PyTrace_LINE 2
#define PyTrace_RETURN 3
#define PyTrace_C_CALL 4
#define PyTrace_C_EXCEPTION 5
#define PyTrace_C_RETURN 6
#ifdef WITH_THREAD
#endif
#ifdef Py_DEBUG
#define PyThreadState_GET() PyThreadState_Get()
#else
#define PyThreadState_GET() (_PyThreadState_Current)
#endif
#ifdef __cplusplus
#endif
#endif
