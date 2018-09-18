// GGHASH:Voy2WBlg95TA0xrLIZE6JzVWS4ReKAeRF0fd5CWPJq_w00001222
#ifdef _ASSERT_H
#undef _ASSERT_H
#undef assert
#undef __ASSERT_VOID_CAST
# ifdef __USE_GNU
#undef assert_perror
# endif
#endif
#define _ASSERT_H 1
#include <features.h>
#if defined __cplusplus && __GNUC_PREREQ (2,95)
#define __ASSERT_VOID_CAST static_cast<void>
#else
#define __ASSERT_VOID_CAST (void)
#endif
#ifdef NDEBUG
#define assert(expr) (__ASSERT_VOID_CAST (0))
# ifdef __USE_GNU
#define assert_perror(errnum) (__ASSERT_VOID_CAST (0))
# endif
#else
#ifndef _ASSERT_H_DECLS
#define _ASSERT_H_DECLS 
#endif
# if defined __cplusplus
#define assert(expr) (static_cast <bool> (expr) ? void (0) : __assert_fail (#expr, __FILE__, __LINE__, __ASSERT_FUNCTION))
# elif !defined __GNUC__ || defined __STRICT_ANSI__
#define assert(expr) ((expr) ? __ASSERT_VOID_CAST (0) : __assert_fail (#expr, __FILE__, __LINE__, __ASSERT_FUNCTION))
# else
#define assert(expr) ((void) sizeof ((expr) ? 1 : 0), __extension__ ({ if (expr) ; else __assert_fail (#expr, __FILE__, __LINE__, __ASSERT_FUNCTION); }))
# endif
# ifdef __USE_GNU
#define assert_perror(errnum) (!(errnum) ? __ASSERT_VOID_CAST (0) : __assert_perror_fail ((errnum), __FILE__, __LINE__, __ASSERT_FUNCTION))
# endif
# if defined __cplusplus ? __GNUC_PREREQ (2, 6) : __GNUC_PREREQ (2, 4)
#define __ASSERT_FUNCTION __extension__ __PRETTY_FUNCTION__
# else
# if defined __STDC_VERSION__ && __STDC_VERSION__ >= 199901L
#define __ASSERT_FUNCTION __func__
# else
#define __ASSERT_FUNCTION ((const char *) 0)
# endif
# endif
#endif
#if defined __USE_ISOC11 && !defined __cplusplus
#undef static_assert
#define static_assert _Static_assert
#endif
