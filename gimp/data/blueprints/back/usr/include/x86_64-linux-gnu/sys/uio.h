// GGHASH:VrEHOKrEtReXB1SuNSTREO85xa1mvpd9iHSmqFghDR0000001887
#ifndef _SYS_UIO_H
#define _SYS_UIO_H 1
#include <features.h>
#include <sys/types.h>
#include <bits/types/struct_iovec.h>
#include <bits/uio_lim.h>
#ifdef __IOV_MAX
#define UIO_MAXIOV __IOV_MAX
#else
#undef UIO_MAXIOV
#endif
#ifdef __USE_MISC
# ifndef __USE_FILE_OFFSET64
# else
# ifdef __REDIRECT
# else
#define preadv preadv64
#define pwritev pwritev64
# endif
# endif
# ifdef __USE_LARGEFILE64
# endif
#endif
#ifdef __USE_GNU
# ifndef __USE_FILE_OFFSET64
# else
# ifdef __REDIRECT
# else
#define preadv2 preadv64v2
#define pwritev2 pwritev64v2
# endif
# endif
# ifdef __USE_LARGEFILE64
# endif
#endif
#ifdef __USE_GNU
# include <bits/uio-ext.h>
#endif
#endif
