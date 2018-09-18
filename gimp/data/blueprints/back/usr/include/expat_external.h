// GGHASH:V6hB217H3Y6XaD4KRADqL3ZiH_yjOrmKgcK3lfzqToM80000159c
#ifndef Expat_External_INCLUDED
#define Expat_External_INCLUDED 1
#if defined(_MSC_EXTENSIONS) && !defined(__BEOS__) && !defined(__CYGWIN__)
#define XML_USE_MSC_EXTENSIONS 1
#endif
#ifndef XMLCALL
# if defined(_MSC_VER)
#define XMLCALL __cdecl
# elif defined(__GNUC__) && defined(__i386) && !defined(__INTEL_COMPILER)
#define XMLCALL __attribute__((cdecl))
# else
#define XMLCALL 
# endif
#endif
#if !defined(XML_STATIC) && !defined(XMLIMPORT)
# ifndef XML_BUILDING_EXPAT
# ifdef XML_USE_MSC_EXTENSIONS
#define XMLIMPORT __declspec(dllimport)
# endif
# endif
#endif
#if !defined(XMLIMPORT) && defined(__GNUC__) && (__GNUC__ >= 4)
#define XMLIMPORT __attribute__ ((visibility ("default")))
#endif
#ifndef XMLIMPORT
#define XMLIMPORT 
#endif
#if defined(__GNUC__) && (__GNUC__ > 2 || (__GNUC__ == 2 && __GNUC_MINOR__ >= 96))
#define XML_ATTR_MALLOC __attribute__((__malloc__))
#else
#define XML_ATTR_MALLOC 
#endif
#if defined(__GNUC__) && ((__GNUC__ > 4) || (__GNUC__ == 4 && __GNUC_MINOR__ >= 3))
#define XML_ATTR_ALLOC_SIZE(x) __attribute__((__alloc_size__(x)))
#else
#define XML_ATTR_ALLOC_SIZE(x) 
#endif
#define XMLPARSEAPI(type) XMLIMPORT type XMLCALL
#ifdef __cplusplus
#endif
#ifdef XML_UNICODE_WCHAR_T
# ifndef XML_UNICODE
#define XML_UNICODE 
# endif
# if defined(__SIZEOF_WCHAR_T__) && (__SIZEOF_WCHAR_T__ != 2)
# error "sizeof(wchar_t) != 2; Need -fshort-wchar for both Expat and libc"
# endif
#endif
#ifdef XML_UNICODE
# ifdef XML_UNICODE_WCHAR_T
# else
# endif
#else
#endif
#ifdef XML_LARGE_SIZE
# if defined(XML_USE_MSC_EXTENSIONS) && _MSC_VER < 1400
# else
# endif
#else
#endif
#ifdef __cplusplus
#endif
#endif
