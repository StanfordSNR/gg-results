// GGHASH:VgFJ1UR4X61kFFdyvArONOFF7h2EB5IVvGSYwKc3_.p4000021b4
#ifndef Py_PYMACTOOLBOX_H
#define Py_PYMACTOOLBOX_H 
#ifdef __cplusplus
#endif
#include <Carbon/Carbon.h>
#ifndef __has_include
#define __has_include(x) 0
#endif
#if __has_include(<Availability.h>)
#include <Availability.h>
#define APPLE_SUPPORTS_QUICKTIME (__MAC_OS_X_VERSION_MAX_ALLOWED < 101200) && !__LP64__
#else
#define APPLE_SUPPORTS_QUICKTIME !__LP64__
#endif
#if APPLE_SUPPORTS_QUICKTIME
#include <QuickTime/QuickTime.h>
#endif
#if APPLE_SUPPORTS_QUICKTIME
#endif
#ifdef USE_TOOLBOX_OBJECT_GLUE
#define PyMac_INIT_TOOLBOX_OBJECT_NEW(object,rtn) { extern PyObject *(*PyMacGluePtr_ ##rtn)(object); PyMacGluePtr_ ##rtn = _ ##rtn; }
#define PyMac_INIT_TOOLBOX_OBJECT_CONVERT(object,rtn) { extern int (*PyMacGluePtr_ ##rtn)(PyObject *, object *); PyMacGluePtr_ ##rtn = _ ##rtn; }
#else
#define PyMac_INIT_TOOLBOX_OBJECT_NEW(object,rtn) 
#define PyMac_INIT_TOOLBOX_OBJECT_CONVERT(object,rtn) 
#endif
#ifndef __LP64__
#endif
#if APPLE_SUPPORTS_QUICKTIME
#endif
#if APPLE_SUPPORTS_QUICKTIME
#endif
#if APPLE_SUPPORTS_QUICKTIME
#endif
#if APPLE_SUPPORTS_QUICKTIME
#endif
#if APPLE_SUPPORTS_QUICKTIME
#endif
#if APPLE_SUPPORTS_QUICKTIME
#endif
#if APPLE_SUPPORTS_QUICKTIME
#endif
#if APPLE_SUPPORTS_QUICKTIME
#endif
#if APPLE_SUPPORTS_QUICKTIME
#endif
#if APPLE_SUPPORTS_QUICKTIME
#endif
#ifdef __cplusplus
#endif
#endif
