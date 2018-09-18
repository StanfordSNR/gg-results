// GGHASH:V7twHoYWJHK9k.6yyFuTQf.XxO1pKs3EFNxpR7MmRiSs0000341a
#ifndef LIBFFI_H
#define LIBFFI_H 
#ifdef __cplusplus
#endif
#ifndef X86_64
#define X86_64 
#endif
#include <ffitarget.h>
#ifndef LIBFFI_ASM
#if defined(_MSC_VER) && !defined(__clang__)
#define __attribute__(X) 
#endif
#include <stddef.h>
#include <limits.h>
#define FFI_64_BIT_MAX 9223372036854775807
#ifdef LONG_LONG_MAX
#define FFI_LONG_LONG_MAX LONG_LONG_MAX
#else
# ifdef LLONG_MAX
#define FFI_LONG_LONG_MAX LLONG_MAX
# ifdef _AIX52
#undef FFI_64_BIT_MAX
#define FFI_64_BIT_MAX 9223372036854775807LL
# endif
# else
# ifdef __GNUC__
#define FFI_LONG_LONG_MAX __LONG_LONG_MAX__
# endif
# ifdef _AIX
# ifndef __PPC64__
# if defined (__IBMC__) || defined (__IBMCPP__)
#define FFI_LONG_LONG_MAX LONGLONG_MAX
# endif
# endif
#undef FFI_64_BIT_MAX
#define FFI_64_BIT_MAX 9223372036854775807LL
# endif
# endif
#endif
#ifndef LIBFFI_HIDE_BASIC_TYPES
#if SCHAR_MAX == 127
#define ffi_type_uchar ffi_type_uint8
#define ffi_type_schar ffi_type_sint8
#else
 #error "char size not supported"
#endif
#if SHRT_MAX == 32767
#define ffi_type_ushort ffi_type_uint16
#define ffi_type_sshort ffi_type_sint16
#elif SHRT_MAX == 2147483647
#define ffi_type_ushort ffi_type_uint32
#define ffi_type_sshort ffi_type_sint32
#else
 #error "short size not supported"
#endif
#if INT_MAX == 32767
#define ffi_type_uint ffi_type_uint16
#define ffi_type_sint ffi_type_sint16
#elif INT_MAX == 2147483647
#define ffi_type_uint ffi_type_uint32
#define ffi_type_sint ffi_type_sint32
#elif INT_MAX == 9223372036854775807
#define ffi_type_uint ffi_type_uint64
#define ffi_type_sint ffi_type_sint64
#else
 #error "int size not supported"
#endif
#if LONG_MAX == 2147483647
# if FFI_LONG_LONG_MAX != FFI_64_BIT_MAX
 #error "no 64-bit data type supported"
# endif
#elif LONG_MAX != FFI_64_BIT_MAX
 #error "long size not supported"
#endif
#if LONG_MAX == 2147483647
#define ffi_type_ulong ffi_type_uint32
#define ffi_type_slong ffi_type_sint32
#elif LONG_MAX == FFI_64_BIT_MAX
#define ffi_type_ulong ffi_type_uint64
#define ffi_type_slong ffi_type_sint64
#else
 #error "long size not supported"
#endif
#if defined _MSC_VER && !defined FFI_BUILDING
#define FFI_EXTERN extern __declspec(dllimport)
#else
#define FFI_EXTERN extern
#endif
#if 1
#else
#define ffi_type_longdouble ffi_type_double
#endif
#ifdef FFI_TARGET_HAS_COMPLEX_TYPE
#if 1
#else
#define ffi_type_complex_longdouble ffi_type_complex_double
#endif
#endif
#endif
#ifdef FFI_EXTRA_CIF_FIELDS
#endif
#if 0
#endif
#ifndef FFI_SIZEOF_ARG
# if LONG_MAX == 2147483647
#define FFI_SIZEOF_ARG 4
# elif LONG_MAX == FFI_64_BIT_MAX
#define FFI_SIZEOF_ARG 8
# endif
#endif
#ifndef FFI_SIZEOF_JAVA_RAW
#define FFI_SIZEOF_JAVA_RAW FFI_SIZEOF_ARG
#endif
#if FFI_SIZEOF_JAVA_RAW == 4 && FFI_SIZEOF_ARG == 8
#else
#endif
#if FFI_CLOSURES
#ifdef _MSC_VER
#endif
#if 0
#else
#endif
#ifdef __GNUC__
#else
# ifdef __sgi
#pragma pack 0
# endif
#endif
#ifdef __sgi
#pragma pack 8
#endif
#if 0
#else
#endif
#if !FFI_NATIVE_RAW_API
#endif
#if 0
#else
#endif
#if !FFI_NATIVE_RAW_API
#endif
#endif
#define FFI_FN(f) ((void (*)(void))f)
#endif
#define FFI_TYPE_VOID 0
#define FFI_TYPE_INT 1
#define FFI_TYPE_FLOAT 2
#define FFI_TYPE_DOUBLE 3
#if 1
#define FFI_TYPE_LONGDOUBLE 4
#else
#define FFI_TYPE_LONGDOUBLE FFI_TYPE_DOUBLE
#endif
#define FFI_TYPE_UINT8 5
#define FFI_TYPE_SINT8 6
#define FFI_TYPE_UINT16 7
#define FFI_TYPE_SINT16 8
#define FFI_TYPE_UINT32 9
#define FFI_TYPE_SINT32 10
#define FFI_TYPE_UINT64 11
#define FFI_TYPE_SINT64 12
#define FFI_TYPE_STRUCT 13
#define FFI_TYPE_POINTER 14
#define FFI_TYPE_COMPLEX 15
#define FFI_TYPE_LAST FFI_TYPE_COMPLEX
#ifdef __cplusplus
#endif
#endif
