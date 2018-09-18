// GGHASH:Vn0R0TDyq80hX7q0qSZd4h8qOc5OhDMv0BkZxDUzbDQ400009309
#ifndef __CL_PLATFORM_H
#define __CL_PLATFORM_H 
#ifdef __cplusplus
#endif
#if defined(_WIN32)
    #define CL_API_ENTRY
    #define CL_API_CALL __stdcall
    #define CL_CALLBACK __stdcall
#else
    #define CL_API_ENTRY
    #define CL_API_CALL
    #define CL_CALLBACK
#endif
#ifdef __APPLE__
    #define CL_EXTENSION_WEAK_LINK __attribute__((weak_import))
    #define CL_API_SUFFIX__VERSION_1_0
    #define CL_EXT_SUFFIX__VERSION_1_0 CL_EXTENSION_WEAK_LINK
    #define CL_API_SUFFIX__VERSION_1_1 CL_EXTENSION_WEAK_LINK
    #define CL_EXT_SUFFIX__VERSION_1_1 CL_EXTENSION_WEAK_LINK
    #define CL_EXT_SUFFIX__VERSION_1_0_DEPRECATED CL_EXTENSION_WEAK_LINK
#else
    #define CL_EXTENSION_WEAK_LINK
    #define CL_API_SUFFIX__VERSION_1_0
    #define CL_EXT_SUFFIX__VERSION_1_0
    #define CL_API_SUFFIX__VERSION_1_1
    #define CL_EXT_SUFFIX__VERSION_1_1
    #define CL_EXT_SUFFIX__VERSION_1_0_DEPRECATED
#endif
#if (defined (_WIN32) && defined(_MSC_VER))
#define CL_CHAR_BIT 8
#define CL_SCHAR_MAX 127
#define CL_SCHAR_MIN (-127-1)
#define CL_CHAR_MAX CL_SCHAR_MAX
#define CL_CHAR_MIN CL_SCHAR_MIN
#define CL_UCHAR_MAX 255
#define CL_SHRT_MAX 32767
#define CL_SHRT_MIN (-32767-1)
#define CL_USHRT_MAX 65535
#define CL_INT_MAX 2147483647
#define CL_INT_MIN (-2147483647-1)
#define CL_UINT_MAX 0xffffffffU
#define CL_LONG_MAX ((cl_long) 0x7FFFFFFFFFFFFFFFLL)
#define CL_LONG_MIN ((cl_long) -0x7FFFFFFFFFFFFFFFLL - 1LL)
#define CL_ULONG_MAX ((cl_ulong) 0xFFFFFFFFFFFFFFFFULL)
#define CL_FLT_DIG 6
#define CL_FLT_MANT_DIG 24
#define CL_FLT_MAX_10_EXP +38
#define CL_FLT_MAX_EXP +128
#define CL_FLT_MIN_10_EXP -37
#define CL_FLT_MIN_EXP -125
#define CL_FLT_RADIX 2
#define CL_FLT_MAX 340282346638528859811704183484516925440.0f
#define CL_FLT_MIN 1.175494350822287507969e-38f
#define CL_FLT_EPSILON 0x1.0p-23f
#define CL_DBL_DIG 15
#define CL_DBL_MANT_DIG 53
#define CL_DBL_MAX_10_EXP +308
#define CL_DBL_MAX_EXP +1024
#define CL_DBL_MIN_10_EXP -307
#define CL_DBL_MIN_EXP -1021
#define CL_DBL_RADIX 2
#define CL_DBL_MAX 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.0
#define CL_DBL_MIN 2.225073858507201383090e-308
#define CL_DBL_EPSILON 2.220446049250313080847e-16
#define CL_M_E 2.718281828459045090796
#define CL_M_LOG2E 1.442695040888963387005
#define CL_M_LOG10E 0.434294481903251816668
#define CL_M_LN2 0.693147180559945286227
#define CL_M_LN10 2.302585092994045901094
#define CL_M_PI 3.141592653589793115998
#define CL_M_PI_2 1.570796326794896557999
#define CL_M_PI_4 0.785398163397448278999
#define CL_M_1_PI 0.318309886183790691216
#define CL_M_2_PI 0.636619772367581382433
#define CL_M_2_SQRTPI 1.128379167095512558561
#define CL_M_SQRT2 1.414213562373095145475
#define CL_M_SQRT1_2 0.707106781186547572737
#define CL_M_E_F 2.71828174591064f
#define CL_M_LOG2E_F 1.44269502162933f
#define CL_M_LOG10E_F 0.43429449200630f
#define CL_M_LN2_F 0.69314718246460f
#define CL_M_LN10_F 2.30258512496948f
#define CL_M_PI_F 3.14159274101257f
#define CL_M_PI_2_F 1.57079637050629f
#define CL_M_PI_4_F 0.78539818525314f
#define CL_M_1_PI_F 0.31830987334251f
#define CL_M_2_PI_F 0.63661974668503f
#define CL_M_2_SQRTPI_F 1.12837922573090f
#define CL_M_SQRT2_F 1.41421353816986f
#define CL_M_SQRT1_2_F 0.70710676908493f
#define CL_NAN (CL_INFINITY - CL_INFINITY)
#define CL_HUGE_VALF ((cl_float) 1e50)
#define CL_HUGE_VAL ((cl_double) 1e500)
#define CL_MAXFLOAT CL_FLT_MAX
#define CL_INFINITY CL_HUGE_VALF
#else
#include <stdint.h>
#define CL_CHAR_BIT 8
#define CL_SCHAR_MAX 127
#define CL_SCHAR_MIN (-127-1)
#define CL_CHAR_MAX CL_SCHAR_MAX
#define CL_CHAR_MIN CL_SCHAR_MIN
#define CL_UCHAR_MAX 255
#define CL_SHRT_MAX 32767
#define CL_SHRT_MIN (-32767-1)
#define CL_USHRT_MAX 65535
#define CL_INT_MAX 2147483647
#define CL_INT_MIN (-2147483647-1)
#define CL_UINT_MAX 0xffffffffU
#define CL_LONG_MAX ((cl_long) 0x7FFFFFFFFFFFFFFFLL)
#define CL_LONG_MIN ((cl_long) -0x7FFFFFFFFFFFFFFFLL - 1LL)
#define CL_ULONG_MAX ((cl_ulong) 0xFFFFFFFFFFFFFFFFULL)
#define CL_FLT_DIG 6
#define CL_FLT_MANT_DIG 24
#define CL_FLT_MAX_10_EXP +38
#define CL_FLT_MAX_EXP +128
#define CL_FLT_MIN_10_EXP -37
#define CL_FLT_MIN_EXP -125
#define CL_FLT_RADIX 2
#define CL_FLT_MAX 0x1.fffffep127f
#define CL_FLT_MIN 0x1.0p-126f
#define CL_FLT_EPSILON 0x1.0p-23f
#define CL_DBL_DIG 15
#define CL_DBL_MANT_DIG 53
#define CL_DBL_MAX_10_EXP +308
#define CL_DBL_MAX_EXP +1024
#define CL_DBL_MIN_10_EXP -307
#define CL_DBL_MIN_EXP -1021
#define CL_DBL_RADIX 2
#define CL_DBL_MAX 0x1.fffffffffffffp1023
#define CL_DBL_MIN 0x1.0p-1022
#define CL_DBL_EPSILON 0x1.0p-52
#define CL_M_E 2.718281828459045090796
#define CL_M_LOG2E 1.442695040888963387005
#define CL_M_LOG10E 0.434294481903251816668
#define CL_M_LN2 0.693147180559945286227
#define CL_M_LN10 2.302585092994045901094
#define CL_M_PI 3.141592653589793115998
#define CL_M_PI_2 1.570796326794896557999
#define CL_M_PI_4 0.785398163397448278999
#define CL_M_1_PI 0.318309886183790691216
#define CL_M_2_PI 0.636619772367581382433
#define CL_M_2_SQRTPI 1.128379167095512558561
#define CL_M_SQRT2 1.414213562373095145475
#define CL_M_SQRT1_2 0.707106781186547572737
#define CL_M_E_F 2.71828174591064f
#define CL_M_LOG2E_F 1.44269502162933f
#define CL_M_LOG10E_F 0.43429449200630f
#define CL_M_LN2_F 0.69314718246460f
#define CL_M_LN10_F 2.30258512496948f
#define CL_M_PI_F 3.14159274101257f
#define CL_M_PI_2_F 1.57079637050629f
#define CL_M_PI_4_F 0.78539818525314f
#define CL_M_1_PI_F 0.31830987334251f
#define CL_M_2_PI_F 0.63661974668503f
#define CL_M_2_SQRTPI_F 1.12837922573090f
#define CL_M_SQRT2_F 1.41421353816986f
#define CL_M_SQRT1_2_F 0.70710676908493f
#if defined( __GNUC__ )
   #define CL_HUGE_VALF __builtin_huge_valf()
   #define CL_HUGE_VAL __builtin_huge_val()
   #define CL_NAN __builtin_nanf( "" )
#else
   #define CL_HUGE_VALF ((cl_float) 1e50)
   #define CL_HUGE_VAL ((cl_double) 1e500)
   #define CL_NAN nanf( "" )
#endif
#define CL_MAXFLOAT CL_FLT_MAX
#define CL_INFINITY CL_HUGE_VALF
#endif
#include <stddef.h>
#if defined( __VEC__ )
   #include <altivec.h>
   #define __CL_UCHAR16__ 1
   #define __CL_CHAR16__ 1
   #define __CL_USHORT8__ 1
   #define __CL_SHORT8__ 1
   #define __CL_UINT4__ 1
   #define __CL_INT4__ 1
   #define __CL_FLOAT4__ 1
#endif
#if defined( __SSE__ )
    #if defined( __MINGW64__ )
        #include <intrin.h>
    #else
        #include <xmmintrin.h>
    #endif
    #if defined( __GNUC__ )
    #else
    #endif
    #define __CL_FLOAT4__ 1
#endif
#if defined( __SSE2__ )
    #if defined( __MINGW64__ )
        #include <intrin.h>
    #else
        #include <emmintrin.h>
    #endif
    #if defined( __GNUC__ )
    #else
    #endif
    #define __CL_UCHAR16__ 1
    #define __CL_CHAR16__ 1
    #define __CL_USHORT8__ 1
    #define __CL_SHORT8__ 1
    #define __CL_INT4__ 1
    #define __CL_UINT4__ 1
    #define __CL_ULONG2__ 1
    #define __CL_LONG2__ 1
    #define __CL_DOUBLE2__ 1
#endif
#if defined( __MMX__ )
    #include <mmintrin.h>
    #if defined( __GNUC__ )
    #else
    #endif
    #define __CL_UCHAR8__ 1
    #define __CL_CHAR8__ 1
    #define __CL_USHORT4__ 1
    #define __CL_SHORT4__ 1
    #define __CL_INT2__ 1
    #define __CL_UINT2__ 1
    #define __CL_ULONG1__ 1
    #define __CL_LONG1__ 1
    #define __CL_FLOAT2__ 1
#endif
#if defined( __AVX__ )
    #if defined( __MINGW64__ )
        #include <intrin.h>
    #else
        #include <immintrin.h>
    #endif
    #if defined( __GNUC__ )
    #else
    #endif
    #define __CL_FLOAT8__ 1
    #define __CL_DOUBLE4__ 1
#endif
#if defined( __GNUC__ )
    #define CL_ALIGNED(_x) __attribute__ ((aligned(_x)))
#elif defined( _WIN32) && (_MSC_VER)
    #define CL_ALIGNED(_x)
#else
   #warning Need to implement some method to align data here
   #define CL_ALIGNED(_x)
#endif
#if defined( __GNUC__) && ! defined( __STRICT_ANSI__ )
    #define CL_HAS_NAMED_VECTOR_FIELDS 1
    #define CL_HAS_HI_LO_VECTOR_FIELDS 1
#endif
#if defined( __GNUC__) && ! defined( __STRICT_ANSI__ )
#endif
#if defined( __CL_CHAR2__)
#endif
#if defined( __GNUC__) && ! defined( __STRICT_ANSI__ )
#endif
#if defined( __CL_CHAR2__)
#endif
#if defined( __CL_CHAR4__)
#endif
#if defined( __GNUC__) && ! defined( __STRICT_ANSI__ )
#endif
#if defined( __CL_CHAR2__)
#endif
#if defined( __CL_CHAR4__)
#endif
#if defined( __CL_CHAR8__ )
#endif
#if defined( __GNUC__) && ! defined( __STRICT_ANSI__ )
#endif
#if defined( __CL_CHAR2__)
#endif
#if defined( __CL_CHAR4__)
#endif
#if defined( __CL_CHAR8__ )
#endif
#if defined( __CL_CHAR16__ )
#endif
#if defined( __GNUC__) && ! defined( __STRICT_ANSI__ )
#endif
#if defined( __cl_uchar2__)
#endif
#if defined( __GNUC__) && ! defined( __STRICT_ANSI__ )
#endif
#if defined( __CL_UCHAR2__)
#endif
#if defined( __CL_UCHAR4__)
#endif
#if defined( __GNUC__) && ! defined( __STRICT_ANSI__ )
#endif
#if defined( __CL_UCHAR2__)
#endif
#if defined( __CL_UCHAR4__)
#endif
#if defined( __CL_UCHAR8__ )
#endif
#if defined( __GNUC__) && ! defined( __STRICT_ANSI__ )
#endif
#if defined( __CL_UCHAR2__)
#endif
#if defined( __CL_UCHAR4__)
#endif
#if defined( __CL_UCHAR8__ )
#endif
#if defined( __CL_UCHAR16__ )
#endif
#if defined( __GNUC__) && ! defined( __STRICT_ANSI__ )
#endif
#if defined( __CL_SHORT2__)
#endif
#if defined( __GNUC__) && ! defined( __STRICT_ANSI__ )
#endif
#if defined( __CL_SHORT2__)
#endif
#if defined( __CL_SHORT4__)
#endif
#if defined( __GNUC__) && ! defined( __STRICT_ANSI__ )
#endif
#if defined( __CL_SHORT2__)
#endif
#if defined( __CL_SHORT4__)
#endif
#if defined( __CL_SHORT8__ )
#endif
#if defined( __GNUC__) && ! defined( __STRICT_ANSI__ )
#endif
#if defined( __CL_SHORT2__)
#endif
#if defined( __CL_SHORT4__)
#endif
#if defined( __CL_SHORT8__ )
#endif
#if defined( __CL_SHORT16__ )
#endif
#if defined( __GNUC__) && ! defined( __STRICT_ANSI__ )
#endif
#if defined( __CL_USHORT2__)
#endif
#if defined( __GNUC__) && ! defined( __STRICT_ANSI__ )
#endif
#if defined( __CL_USHORT2__)
#endif
#if defined( __CL_USHORT4__)
#endif
#if defined( __GNUC__) && ! defined( __STRICT_ANSI__ )
#endif
#if defined( __CL_USHORT2__)
#endif
#if defined( __CL_USHORT4__)
#endif
#if defined( __CL_USHORT8__ )
#endif
#if defined( __GNUC__) && ! defined( __STRICT_ANSI__ )
#endif
#if defined( __CL_USHORT2__)
#endif
#if defined( __CL_USHORT4__)
#endif
#if defined( __CL_USHORT8__ )
#endif
#if defined( __CL_USHORT16__ )
#endif
#if defined( __GNUC__) && ! defined( __STRICT_ANSI__ )
#endif
#if defined( __CL_INT2__)
#endif
#if defined( __GNUC__) && ! defined( __STRICT_ANSI__ )
#endif
#if defined( __CL_INT2__)
#endif
#if defined( __CL_INT4__)
#endif
#if defined( __GNUC__) && ! defined( __STRICT_ANSI__ )
#endif
#if defined( __CL_INT2__)
#endif
#if defined( __CL_INT4__)
#endif
#if defined( __CL_INT8__ )
#endif
#if defined( __GNUC__) && ! defined( __STRICT_ANSI__ )
#endif
#if defined( __CL_INT2__)
#endif
#if defined( __CL_INT4__)
#endif
#if defined( __CL_INT8__ )
#endif
#if defined( __CL_INT16__ )
#endif
#if defined( __GNUC__) && ! defined( __STRICT_ANSI__ )
#endif
#if defined( __CL_UINT2__)
#endif
#if defined( __GNUC__) && ! defined( __STRICT_ANSI__ )
#endif
#if defined( __CL_UINT2__)
#endif
#if defined( __CL_UINT4__)
#endif
#if defined( __GNUC__) && ! defined( __STRICT_ANSI__ )
#endif
#if defined( __CL_UINT2__)
#endif
#if defined( __CL_UINT4__)
#endif
#if defined( __CL_UINT8__ )
#endif
#if defined( __GNUC__) && ! defined( __STRICT_ANSI__ )
#endif
#if defined( __CL_UINT2__)
#endif
#if defined( __CL_UINT4__)
#endif
#if defined( __CL_UINT8__ )
#endif
#if defined( __CL_UINT16__ )
#endif
#if defined( __GNUC__) && ! defined( __STRICT_ANSI__ )
#endif
#if defined( __CL_LONG2__)
#endif
#if defined( __GNUC__) && ! defined( __STRICT_ANSI__ )
#endif
#if defined( __CL_LONG2__)
#endif
#if defined( __CL_LONG4__)
#endif
#if defined( __GNUC__) && ! defined( __STRICT_ANSI__ )
#endif
#if defined( __CL_LONG2__)
#endif
#if defined( __CL_LONG4__)
#endif
#if defined( __CL_LONG8__ )
#endif
#if defined( __GNUC__) && ! defined( __STRICT_ANSI__ )
#endif
#if defined( __CL_LONG2__)
#endif
#if defined( __CL_LONG4__)
#endif
#if defined( __CL_LONG8__ )
#endif
#if defined( __CL_LONG16__ )
#endif
#if defined( __GNUC__) && ! defined( __STRICT_ANSI__ )
#endif
#if defined( __CL_ULONG2__)
#endif
#if defined( __GNUC__) && ! defined( __STRICT_ANSI__ )
#endif
#if defined( __CL_ULONG2__)
#endif
#if defined( __CL_ULONG4__)
#endif
#if defined( __GNUC__) && ! defined( __STRICT_ANSI__ )
#endif
#if defined( __CL_ULONG2__)
#endif
#if defined( __CL_ULONG4__)
#endif
#if defined( __CL_ULONG8__ )
#endif
#if defined( __GNUC__) && ! defined( __STRICT_ANSI__ )
#endif
#if defined( __CL_ULONG2__)
#endif
#if defined( __CL_ULONG4__)
#endif
#if defined( __CL_ULONG8__ )
#endif
#if defined( __CL_ULONG16__ )
#endif
#if defined( __GNUC__) && ! defined( __STRICT_ANSI__ )
#endif
#if defined( __CL_FLOAT2__)
#endif
#if defined( __GNUC__) && ! defined( __STRICT_ANSI__ )
#endif
#if defined( __CL_FLOAT2__)
#endif
#if defined( __CL_FLOAT4__)
#endif
#if defined( __GNUC__) && ! defined( __STRICT_ANSI__ )
#endif
#if defined( __CL_FLOAT2__)
#endif
#if defined( __CL_FLOAT4__)
#endif
#if defined( __CL_FLOAT8__ )
#endif
#if defined( __GNUC__) && ! defined( __STRICT_ANSI__ )
#endif
#if defined( __CL_FLOAT2__)
#endif
#if defined( __CL_FLOAT4__)
#endif
#if defined( __CL_FLOAT8__ )
#endif
#if defined( __CL_FLOAT16__ )
#endif
#if defined( __GNUC__) && ! defined( __STRICT_ANSI__ )
#endif
#if defined( __CL_DOUBLE2__)
#endif
#if defined( __GNUC__) && ! defined( __STRICT_ANSI__ )
#endif
#if defined( __CL_DOUBLE2__)
#endif
#if defined( __CL_DOUBLE4__)
#endif
#if defined( __GNUC__) && ! defined( __STRICT_ANSI__ )
#endif
#if defined( __CL_DOUBLE2__)
#endif
#if defined( __CL_DOUBLE4__)
#endif
#if defined( __CL_DOUBLE8__ )
#endif
#if defined( __GNUC__) && ! defined( __STRICT_ANSI__ )
#endif
#if defined( __CL_DOUBLE2__)
#endif
#if defined( __CL_DOUBLE4__)
#endif
#if defined( __CL_DOUBLE8__ )
#endif
#if defined( __CL_DOUBLE16__ )
#endif
#define __CL_STRINGIFY(_x) #_x
#define _CL_STRINGIFY(_x) __CL_STRINGIFY( _x )
#define CL_PROGRAM_STRING_DEBUG_INFO "#line " _CL_STRINGIFY(__LINE__) " \"" __FILE__ "\" \n\n"
#ifdef __cplusplus
#endif
#endif
