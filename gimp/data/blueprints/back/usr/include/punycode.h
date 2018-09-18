// GGHASH:VskKC0w1v2GLo5nwPYnxQ.4W.FeRGwC0y7LYis7GXf0Q000024a8
#ifndef PUNYCODE_H
#define PUNYCODE_H 
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
#ifdef __cplusplus
#endif
#include <stddef.h>
#include <idn-int.h>
#ifdef __cplusplus
#endif
#endif
