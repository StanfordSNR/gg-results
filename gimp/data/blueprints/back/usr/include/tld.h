// GGHASH:VI2z1Wk1.UVls3ASaH5XLBuIBmHOdSFZ6SzxANIW0R3w0000122a
#ifndef TLD_H
#define TLD_H 
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
# include <stdlib.h>
# include <idn-int.h>
# ifdef __cplusplus
# endif
#endif
