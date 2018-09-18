// GGHASH:Vowk3bfKLLd0KJ_YhNi87gZlNFhOGqM7lXmCaCch_4u8000009a8
#ifndef IDN_FREE_H
#define IDN_FREE_H 
# ifndef IDNAPI
# if defined LIBIDN_BUILDING && defined HAVE_VISIBILITY && HAVE_VISIBILITY
#define IDNAPI __attribute__((__visibility__("default")))
# elif defined LIBIDN_BUILDING && defined _MSC_VER && ! defined LIBIDN_STATIC
#define IDNAPI __declspec(dllexport)
# elif defined _MSC_VER && ! defined LIBIDN_STATIC
#define IDNAPI __declspec(dllimport)
# else
#define IDNAPI 
# endif
# endif
# ifdef __cplusplus
# endif
# ifdef __cplusplus
# endif
#endif
