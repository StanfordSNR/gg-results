// GGHASH:VPnUEJNaEs1qLbov.zv7lAwYlo93iGZ7IuU327IgS..Y000001cf
#ifndef Py_STRCMP_H
#define Py_STRCMP_H 
#ifdef __cplusplus
#endif
#if defined(MS_WINDOWS) || defined(PYOS_OS2)
#define PyOS_strnicmp strnicmp
#define PyOS_stricmp stricmp
#else
#define PyOS_strnicmp PyOS_mystrnicmp
#define PyOS_stricmp PyOS_mystricmp
#endif
#ifdef __cplusplus
#endif
#endif
