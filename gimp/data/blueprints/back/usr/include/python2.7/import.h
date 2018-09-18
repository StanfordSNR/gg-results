// GGHASH:Vaw5k8cQaleg7reCCNnjpyurNfCX28GgXYPit6vbdqpQ000008af
#ifndef Py_IMPORT_H
#define Py_IMPORT_H 
#ifdef __cplusplus
#endif
#define PyImport_ImportModuleEx(n,g,l,f) PyImport_ImportModuleLevel(n, g, l, f, -1)
#ifdef WITH_THREAD
#else
#define _PyImport_AcquireLock() 
#define _PyImport_ReleaseLock() 1
#endif
#ifdef __cplusplus
#endif
#endif
