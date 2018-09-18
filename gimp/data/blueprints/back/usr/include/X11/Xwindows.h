// GGHASH:V5qIpKJN0yFeiGHTcMBEKOOQtk3mBLRVqi.t.K0xJLjI00000cd3
#undef _XFree86Server
#ifdef XFree86Server
#define _XFree86Server 
#undef XFree86Server
#endif
#define NOMINMAX 
#define _NO_BOOL_TYPEDEF 
#define BOOL WINBOOL
#define INT32 wINT32
#ifdef __x86_64__
#define INT64 wINT64
#define LONG64 wLONG64
#endif
#undef Status
#define Status wStatus
#define ATOM wATOM
#define BYTE wBYTE
#define FreeResource wFreeResource
#include <windows.h>
#undef NOMINMAX
#undef Status
#define Status int
#undef BYTE
#undef BOOL
#undef INT32
#undef INT64
#undef LONG64
#undef ATOM
#undef FreeResource
#undef CreateWindowA
#define wBOOL WINBOOL
#ifdef RESOURCE_H
#undef RT_FONT
#undef RT_CURSOR
#define RT_FONT ((RESTYPE)4)
#define RT_CURSOR ((RESTYPE)5)
#endif
#ifndef __CYGWIN__
#define sleep(x) Sleep((x) * 1000)
#endif
#if defined(WIN32) && (!defined(PATH_MAX) || PATH_MAX < 1024)
#undef PATH_MAX
#define PATH_MAX 1024
#endif
#ifdef _XFree86Server
#define XFree86Server 
#undef _XFree86Server
#endif
