// GGHASH:VzusXoDL9fO_jPI3SCOb2fsAvFdcYGNGKd6XdGkc.d5E00001a65
#if !defined (DBUS_INSIDE_DBUS_H) && !defined (DBUS_COMPILATION)
#error "Only <dbus/dbus.h> can be included directly, this file may disappear or change contents."
#endif
#ifndef DBUS_MACROS_H
#define DBUS_MACROS_H 
#ifdef __cplusplus
#define DBUS_BEGIN_DECLS extern "C" {
#define DBUS_END_DECLS }
#else
#define DBUS_BEGIN_DECLS 
#define DBUS_END_DECLS 
#endif
#ifndef TRUE
#define TRUE 1
#endif
#ifndef FALSE
#define FALSE 0
#endif
#ifndef NULL
# ifdef __cplusplus
#define NULL (0L)
# else
#define NULL ((void*) 0)
# endif
#endif
#if __GNUC__ > 3 || (__GNUC__ == 3 && __GNUC_MINOR__ >= 1)
#define DBUS_DEPRECATED __attribute__ ((__deprecated__))
#elif defined(_MSC_VER) && (_MSC_VER >= 1300)
#define DBUS_DEPRECATED __declspec(deprecated)
#else
#define DBUS_DEPRECATED 
#endif
#if __GNUC__ > 2 || (__GNUC__ == 2 && __GNUC_MINOR__ >= 8)
#define _DBUS_GNUC_EXTENSION __extension__
#else
#define _DBUS_GNUC_EXTENSION 
#endif
#if (__GNUC__ > 2 || (__GNUC__ == 2 && __GNUC_MINOR__ > 4)) || defined(__clang__)
#define _DBUS_GNUC_PRINTF(format_idx,arg_idx) __attribute__((__format__ (__printf__, format_idx, arg_idx)))
#define _DBUS_GNUC_NORETURN __attribute__((__noreturn__))
#define _DBUS_GNUC_UNUSED __attribute__((__unused__))
#else
#define _DBUS_GNUC_PRINTF(format_idx,arg_idx) 
#define _DBUS_GNUC_NORETURN 
#define _DBUS_GNUC_UNUSED 
#endif
#if __GNUC__ > 2 || (__GNUC__ == 2 && __GNUC_MINOR__ >= 96)
#define DBUS_MALLOC __attribute__((__malloc__))
#else
#define DBUS_MALLOC 
#endif
#if (__GNUC__ > 4) || (__GNUC__ == 4 && __GNUC_MINOR__ >= 3)
#define DBUS_ALLOC_SIZE(x) __attribute__((__alloc_size__(x)))
#define DBUS_ALLOC_SIZE2(x,y) __attribute__((__alloc_size__(x,y)))
#else
#define DBUS_ALLOC_SIZE(x) 
#define DBUS_ALLOC_SIZE2(x,y) 
#endif
#if (__GNUC__ > 3) || (__GNUC__ == 3 && __GNUC_MINOR__ >= 4)
#define _DBUS_GNUC_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
#else
#define _DBUS_GNUC_WARN_UNUSED_RESULT 
#endif
#if defined(DBUS_EXPORT)
#elif defined(_WIN32)
# if defined(DBUS_STATIC_BUILD)
#define DBUS_EXPORT 
# elif defined(dbus_1_EXPORTS)
#define DBUS_EXPORT __declspec(dllexport)
# else
#define DBUS_EXPORT __declspec(dllimport)
# endif
#elif defined(__GNUC__) && __GNUC__ >= 4
#define DBUS_EXPORT __attribute__ ((__visibility__ ("default")))
#else
#define DBUS_EXPORT 
#endif
#if defined(DBUS_PRIVATE_EXPORT)
#elif defined(_WIN32)
# if defined(DBUS_STATIC_BUILD)
#define DBUS_PRIVATE_EXPORT 
# elif defined(dbus_1_EXPORTS)
#define DBUS_PRIVATE_EXPORT __declspec(dllexport)
# else
#define DBUS_PRIVATE_EXPORT __declspec(dllimport)
# endif
#elif defined(__GNUC__) && __GNUC__ >= 4
#define DBUS_PRIVATE_EXPORT __attribute__ ((__visibility__ ("default")))
#else
#define DBUS_PRIVATE_EXPORT 
#endif
#define _dbus_clear_pointer_impl(T,pointer_to_pointer,destroy) do { T **_pp = (pointer_to_pointer); T *_value = *_pp; *_pp = NULL; if (_value != NULL) destroy (_value); } while (0)
#endif
