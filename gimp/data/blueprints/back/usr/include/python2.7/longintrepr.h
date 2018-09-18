// GGHASH:V7BMB.awtLFljUqxM1TPLmJO2K7RfB1d0cFAinHXrA5U00000f43
#ifndef Py_LONGINTREPR_H
#define Py_LONGINTREPR_H 
#ifdef __cplusplus
#endif
#if PYLONG_BITS_IN_DIGIT == 30
#if !(defined HAVE_UINT64_T && defined HAVE_UINT32_T && defined HAVE_INT64_T && defined HAVE_INT32_T)
#error "30-bit long digits requested, but the necessary types are not available on this platform"
#endif
#define PyLong_SHIFT 30
#define _PyLong_DECIMAL_SHIFT 9
#define _PyLong_DECIMAL_BASE ((digit)1000000000)
#elif PYLONG_BITS_IN_DIGIT == 15
#define PyLong_SHIFT 15
#define _PyLong_DECIMAL_SHIFT 4
#define _PyLong_DECIMAL_BASE ((digit)10000)
#else
#error "PYLONG_BITS_IN_DIGIT should be 15 or 30"
#endif
#define PyLong_BASE ((digit)1 << PyLong_SHIFT)
#define PyLong_MASK ((digit)(PyLong_BASE - 1))
#define SHIFT PyLong_SHIFT
#define BASE PyLong_BASE
#define MASK PyLong_MASK
#if PyLong_SHIFT % 5 != 0
#error "longobject.c requires that PyLong_SHIFT be divisible by 5"
#endif
#ifdef __cplusplus
#endif
#endif
