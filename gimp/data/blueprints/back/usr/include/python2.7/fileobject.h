// GGHASH:Vzl6Xfa7Jff2jeAe1qZ.QFoUaDJ.TYHReFV87CgFEftI00000e4e
#ifndef Py_FILEOBJECT_H
#define Py_FILEOBJECT_H 
#ifdef __cplusplus
#endif
#define PyFile_Check(op) PyObject_TypeCheck(op, &PyFile_Type)
#define PyFile_CheckExact(op) (Py_TYPE(op) == &PyFile_Type)
#define PY_STDIOTEXTMODE "b"
#if defined _MSC_VER && _MSC_VER >= 1400
#elif defined _MSC_VER && _MSC_VER >= 1200
#define _PyVerify_fd(fd) (_get_osfhandle(fd) >= 0)
#else
#define _PyVerify_fd(A) (1)
#endif
#ifdef HAVE_SELECT
 #define _PyIsSelectable_fd(FD) (((FD) >= 0) && ((FD) < FD_SETSIZE))
#else
 #define _PyIsSelectable_fd(FD) (1)
#endif
#ifdef __cplusplus
#endif
#endif
