// GGHASH:VOKefuOnB.ueKjtKJAX73JqnomM3tCW8cafZYnYTpjO80000102c
#ifndef _SYS_SELECT_H
#define _SYS_SELECT_H 1
#include <features.h>
#include <bits/types.h>
#include <bits/select.h>
#include <bits/types/sigset_t.h>
#include <bits/types/time_t.h>
#include <bits/types/struct_timeval.h>
#ifdef __USE_XOPEN2K
# include <bits/types/struct_timespec.h>
#endif
#ifndef __suseconds_t_defined
#define __suseconds_t_defined 
#endif
#undef __NFDBITS
#define __NFDBITS (8 * (int) sizeof (__fd_mask))
#define __FD_ELT(d) ((d) / __NFDBITS)
#define __FD_MASK(d) ((__fd_mask) (1UL << ((d) % __NFDBITS)))
#ifdef __USE_XOPEN
#define __FDS_BITS(set) ((set)->fds_bits)
#else
#define __FDS_BITS(set) ((set)->__fds_bits)
#endif
#define FD_SETSIZE __FD_SETSIZE
#ifdef __USE_MISC
#define NFDBITS __NFDBITS
#endif
#define FD_SET(fd,fdsetp) __FD_SET (fd, fdsetp)
#define FD_CLR(fd,fdsetp) __FD_CLR (fd, fdsetp)
#define FD_ISSET(fd,fdsetp) __FD_ISSET (fd, fdsetp)
#define FD_ZERO(fdsetp) __FD_ZERO (fdsetp)
#ifdef __USE_XOPEN2K
#endif
#if __USE_FORTIFY_LEVEL > 0 && defined __GNUC__
# include <bits/select2.h>
#endif
#endif
