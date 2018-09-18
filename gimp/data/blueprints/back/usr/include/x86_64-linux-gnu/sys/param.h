// GGHASH:VXkROiLWfIx5xE1eR4UcRw9xBOoVCo0k9Jpe2W1eYHbI00000c4c
#ifndef _SYS_PARAM_H
#define _SYS_PARAM_H 1
#define __need_NULL 
#include <stddef.h>
#include <sys/types.h>
#include <limits.h>
#include <endian.h>
#include <signal.h>
#include <bits/param.h>
#define NBBY CHAR_BIT
#if !defined NGROUPS && defined NGROUPS_MAX
#define NGROUPS NGROUPS_MAX
#endif
#if !defined MAXSYMLINKS && defined SYMLOOP_MAX
#define MAXSYMLINKS SYMLOOP_MAX
#endif
#if !defined CANBSIZ && defined MAX_CANON
#define CANBSIZ MAX_CANON
#endif
#if !defined MAXPATHLEN && defined PATH_MAX
#define MAXPATHLEN PATH_MAX
#endif
#if !defined NOFILE && defined OPEN_MAX
#define NOFILE OPEN_MAX
#endif
#if !defined MAXHOSTNAMELEN && defined HOST_NAME_MAX
#define MAXHOSTNAMELEN HOST_NAME_MAX
#endif
#ifndef NCARGS
# ifdef ARG_MAX
#define NCARGS ARG_MAX
# else
#define NCARGS INT_MAX
# endif
#endif
#ifndef NOGROUP
#define NOGROUP 65535
#endif
#ifndef NODEV
#define NODEV ((dev_t) -1)
#endif
#ifndef DEV_BSIZE
#define DEV_BSIZE 512
#endif
#define setbit(a,i) ((a)[(i)/NBBY] |= 1<<((i)%NBBY))
#define clrbit(a,i) ((a)[(i)/NBBY] &= ~(1<<((i)%NBBY)))
#define isset(a,i) ((a)[(i)/NBBY] & (1<<((i)%NBBY)))
#define isclr(a,i) (((a)[(i)/NBBY] & (1<<((i)%NBBY))) == 0)
#ifndef howmany
#define howmany(x,y) (((x) + ((y) - 1)) / (y))
#endif
#ifdef __GNUC__
#define roundup(x,y) (__builtin_constant_p (y) && powerof2 (y) ? (((x) + (y) - 1) & ~((y) - 1)) : ((((x) + ((y) - 1)) / (y)) * (y)))
#else
#define roundup(x,y) ((((x) + ((y) - 1)) / (y)) * (y))
#endif
#define powerof2(x) ((((x) - 1) & (x)) == 0)
#define MIN(a,b) (((a)<(b))?(a):(b))
#define MAX(a,b) (((a)>(b))?(a):(b))
#endif
