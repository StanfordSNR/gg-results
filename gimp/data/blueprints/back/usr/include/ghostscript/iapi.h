// GGHASH:V9Jaw_OGMVPXExOkopjdU0nyL90QNrpdENHuRKl9XvC80000306c
#ifndef iapi_INCLUDED
#define iapi_INCLUDED 
#ifdef __cplusplus
#endif
#if defined(_WINDOWS_) || defined(__WINDOWS__)
# ifndef _Windows
#define _Windows 
# endif
#endif
#ifdef _Windows
# ifndef GSDLLEXPORT
# if 0
#define GSDLLEXPORT __declspec(dllexport)
# else
#define GSDLLEXPORT 
# endif
# endif
# ifndef GSDLLAPI
#define GSDLLAPI __stdcall
# endif
# ifndef GSDLLCALL
#define GSDLLCALL __stdcall
# endif
#endif
#if defined(OS2) && defined(__IBMC__)
# ifndef GSDLLAPI
#define GSDLLAPI _System
# endif
# ifndef GSDLLCALL
#define GSDLLCALL _System
# endif
#endif
#ifdef __MACOS__
#pragma export on
#endif
#ifndef GSDLLEXPORT
#define GSDLLEXPORT 
#endif
#ifndef GSDLLAPI
#define GSDLLAPI 
#endif
#ifndef GSDLLCALL
#define GSDLLCALL 
#endif
#if defined(__IBMC__)
#define GSDLLAPIPTR * GSDLLAPI
#define GSDLLCALLPTR * GSDLLCALL
#else
#define GSDLLAPIPTR GSDLLAPI *
#define GSDLLCALLPTR GSDLLCALL *
#endif
#ifndef display_callback_DEFINED
#define display_callback_DEFINED 
#endif
#ifdef __WIN32__
#endif
#ifdef __WIN32__
#endif
#ifdef __WIN32__
#endif
#ifdef __WIN32__
#endif
#ifdef __MACOS__
#pragma export off
#endif
#ifdef __cplusplus
#endif
#endif
