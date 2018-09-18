// GGHASH:VDzEUAPu2Wa19bDBYXmt1DymJMOuF3cvOWaisQBz.QaE00001061
#ifndef LIBFFI_TARGET_H
#define LIBFFI_TARGET_H 
#ifndef LIBFFI_H
#error "Please do not include ffitarget.h directly into your source.  Use ffi.h instead."
#endif
#define X86_ANY 
#if defined (X86_64) && defined (__i386__)
#undef X86_64
#define X86 
#endif
#ifdef X86_WIN64
#define FFI_SIZEOF_ARG 8
#define USE_BUILTIN_FFS 0
#endif
#define FFI_TARGET_SPECIFIC_STACK_SPACE_ALLOCATION 
#define FFI_TARGET_HAS_COMPLEX_TYPE 
#ifndef LIBFFI_ASM
#ifdef X86_WIN64
#ifdef _MSC_VER
#else
#endif
#else
#if defined __x86_64__ && defined __ILP32__
#define FFI_SIZEOF_ARG 8
#define FFI_SIZEOF_JAVA_RAW 4
#else
#endif
#endif
#ifdef X86_WIN32
#ifdef _MSC_VER
#else
#endif
#elif defined(X86_WIN64)
#else
#if defined(__i386__) || defined(__i386)
#else
#endif
#endif
#endif
#define FFI_CLOSURES 1
#define FFI_TYPE_SMALL_STRUCT_1B (FFI_TYPE_LAST + 1)
#define FFI_TYPE_SMALL_STRUCT_2B (FFI_TYPE_LAST + 2)
#define FFI_TYPE_SMALL_STRUCT_4B (FFI_TYPE_LAST + 3)
#define FFI_TYPE_MS_STRUCT (FFI_TYPE_LAST + 4)
#if defined (X86_64) || (defined (__x86_64__) && defined (X86_DARWIN))
#define FFI_TRAMPOLINE_SIZE 24
#define FFI_NATIVE_RAW_API 0
#else
#ifdef X86_WIN32
#define FFI_TRAMPOLINE_SIZE 52
#else
#ifdef X86_WIN64
#define FFI_TRAMPOLINE_SIZE 29
#define FFI_NATIVE_RAW_API 0
#define FFI_NO_RAW_API 1
#else
#define FFI_TRAMPOLINE_SIZE 10
#endif
#endif
#ifndef X86_WIN64
#define FFI_NATIVE_RAW_API 1
#endif
#endif
#endif
