// GGHASH:VfTc3UNWzFSCG1hC_GRSVLGPNwNqbS3WeX0RA433fOWE00000dec
#ifndef IDNA_H
#define IDNA_H 
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
# include <stddef.h>
# include <idn-int.h>
# ifdef __cplusplus
# endif
# ifndef IDNA_ACE_PREFIX
#define IDNA_ACE_PREFIX "xn--"
# endif
# ifdef __cplusplus
# endif
#endif
