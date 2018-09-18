// GGHASH:VdivtgBAiEF.tz2QC8HtbdmkkXPjaTm_jt73E_p49YJ800000f11
#ifndef _XOPEN_LIM_H
#define _XOPEN_LIM_H 1
#define _XOPEN_IOV_MAX _POSIX_UIO_MAXIOV
#include <bits/uio_lim.h>
#ifdef __IOV_MAX
#define IOV_MAX __IOV_MAX
#else
#undef IOV_MAX
#endif
#define NL_ARGMAX _POSIX_ARG_MAX
#define NL_LANGMAX _POSIX2_LINE_MAX
#define NL_MSGMAX INT_MAX
#if defined __USE_GNU || !defined __USE_XOPEN2K8
#define NL_NMAX INT_MAX
#endif
#define NL_SETMAX INT_MAX
#define NL_TEXTMAX INT_MAX
#define NZERO 20
#ifdef INT_MAX
# if INT_MAX == 32767
#define WORD_BIT 16
# else
# if INT_MAX == 2147483647
#define WORD_BIT 32
# else
#define WORD_BIT 64
# endif
# endif
#elif defined __INT_MAX__
# if __INT_MAX__ == 32767
#define WORD_BIT 16
# else
# if __INT_MAX__ == 2147483647
#define WORD_BIT 32
# else
#define WORD_BIT 64
# endif
# endif
#else
#define WORD_BIT 32
#endif
#ifdef LONG_MAX
# if LONG_MAX == 2147483647
#define LONG_BIT 32
# else
#define LONG_BIT 64
# endif
#elif defined __LONG_MAX__
# if __LONG_MAX__ == 2147483647
#define LONG_BIT 32
# else
#define LONG_BIT 64
# endif
#else
# include <bits/wordsize.h>
# if __WORDSIZE == 64
#define LONG_BIT 64
# else
#define LONG_BIT 32
# endif
#endif
#endif
