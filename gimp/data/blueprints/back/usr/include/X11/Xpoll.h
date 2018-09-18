// GGHASH:Vs1_YEFyl.zapx3F4GOaEbAWJBIMeNRzu.HK9DxRf6_c00001e3f
#ifndef _XPOLL_H_
#define _XPOLL_H_ 
#if !defined(WIN32) || defined(__CYGWIN__)
#ifndef USE_POLL
#include <X11/Xos.h>
#include <sys/select.h>
#include <X11/Xmd.h>
#ifdef CSRG_BASED
#include <sys/param.h>
# if BSD < 199103
# endif
#endif
#if defined(FD_SETSIZE) && FD_SETSIZE < 512
#define XFD_SETSIZE FD_SETSIZE
#else
#define XFD_SETSIZE 512
# ifndef FD_SETSIZE
#define FD_SETSIZE XFD_SETSIZE
# endif
#endif
#ifndef NBBY
#define NBBY 8
#endif
#ifndef NFDBITS
#define NFDBITS (sizeof(fd_mask) * NBBY)
#endif
#ifndef howmany
#define howmany(x,y) (((x)+((y)-1))/(y))
#endif
#if defined(BSD) && BSD < 198911
#endif
#define Select(n,r,w,e,t) select(n,(fd_set*)r,(fd_set*)w,(fd_set*)e,(struct timeval*)t)
#define __X_FDS_BITS __fds_bits
#ifndef __FDS_BITS
#define __FDS_BITS(p) ((p)->__X_FDS_BITS)
#endif
#define __XFDS_BITS(p,n) (__FDS_BITS(p))[n]
#ifndef FD_SET
#define FD_SET(n,p) (__XFDS_BITS(p, ((n)/NFDBITS)) |= ((fd_mask)1 << ((n) % NFDBITS)))
#endif
#ifndef FD_CLR
#define FD_CLR(n,p) (__XFDS_BITS((p), ((n)/NFDBITS)) &= ~((fd_mask)1 << ((n) % NFDBITS)))
#endif
#ifndef FD_ISSET
#define FD_ISSET(n,p) ((__XFDS_BITS((p), ((n)/NFDBITS))) & ((fd_mask)1 << ((n) % NFDBITS)))
#endif
#ifndef FD_ZERO
#define FD_ZERO(p) bzero((char *)(p), sizeof(*(p)))
#endif
#define XFD_ANYSET(p) ((howmany(FD_SETSIZE, NFDBITS) > 0 && (__XFDS_BITS(p, 0))) || (howmany(FD_SETSIZE, NFDBITS) > 1 && (__XFDS_BITS(p, 1))) || (howmany(FD_SETSIZE, NFDBITS) > 2 && (__XFDS_BITS(p, 2))) || (howmany(FD_SETSIZE, NFDBITS) > 3 && (__XFDS_BITS(p, 3))) || (howmany(FD_SETSIZE, NFDBITS) > 4 && (__XFDS_BITS(p, 4))) || (howmany(FD_SETSIZE, NFDBITS) > 5 && (__XFDS_BITS(p, 5))) || (howmany(FD_SETSIZE, NFDBITS) > 6 && (__XFDS_BITS(p, 6))) || (howmany(FD_SETSIZE, NFDBITS) > 7 && (__XFDS_BITS(p, 7))) || (howmany(FD_SETSIZE, NFDBITS) > 8 && (__XFDS_BITS(p, 8))) || (howmany(FD_SETSIZE, NFDBITS) > 9 && (__XFDS_BITS(p, 9))) || (howmany(FD_SETSIZE, NFDBITS) > 10 && (__XFDS_BITS(p, 10))) || (howmany(FD_SETSIZE, NFDBITS) > 11 && (__XFDS_BITS(p, 11))) || (howmany(FD_SETSIZE, NFDBITS) > 12 && (__XFDS_BITS(p, 12))) || (howmany(FD_SETSIZE, NFDBITS) > 13 && (__XFDS_BITS(p, 13))) || (howmany(FD_SETSIZE, NFDBITS) > 14 && (__XFDS_BITS(p, 14))) || (howmany(FD_SETSIZE, NFDBITS) > 15 && (__XFDS_BITS(p, 15))))
#define XFD_COPYSET(src,dst) { int __i__; for (__i__ = 0; __i__ < howmany(FD_SETSIZE, NFDBITS); __i__++) __XFDS_BITS((dst), __i__) = __XFDS_BITS((src), __i__); }
#define XFD_ANDSET(dst,b1,b2) { int __i__; for (__i__ = 0; __i__ < howmany(FD_SETSIZE, NFDBITS); __i__++) __XFDS_BITS((dst), __i__) = ((__XFDS_BITS((b1), __i__)) & (__XFDS_BITS((b2), __i__))); }
#define XFD_ORSET(dst,b1,b2) { int __i__; for (__i__ = 0; __i__ < howmany(FD_SETSIZE, NFDBITS); __i__++) __XFDS_BITS((dst), __i__) = ((__XFDS_BITS((b1), __i__)) | (__XFDS_BITS((b2), __i__))); }
#define XFD_UNSET(dst,b1) { int __i__; for (__i__ = 0; __i__ < howmany(FD_SETSIZE, NFDBITS); __i__++) __XFDS_BITS((dst), __i__) &= ~(__XFDS_BITS((b1), __i__)); }
#else
#include <sys/poll.h>
#endif
#else
#define XFD_SETSIZE 512
#ifndef FD_SETSIZE
#define FD_SETSIZE XFD_SETSIZE
#endif
#include <X11/Xwinsock.h>
#define Select(n,r,w,e,t) select(0,(fd_set*)r,(fd_set*)w,(fd_set*)e,(struct timeval*)t)
#define XFD_SETCOUNT(p) (((fd_set FAR *)(p))->fd_count)
#define XFD_FD(p,i) (((fd_set FAR *)(p))->fd_array[i])
#define XFD_ANYSET(p) XFD_SETCOUNT(p)
#define XFD_COPYSET(src,dst) { u_int __i; FD_ZERO(dst); for (__i = 0; __i < XFD_SETCOUNT(src) ; __i++) { XFD_FD(dst,__i) = XFD_FD(src,__i); } XFD_SETCOUNT(dst) = XFD_SETCOUNT(src); }
#define XFD_ANDSET(dst,b1,b2) { u_int __i; FD_ZERO(dst); for (__i = 0; __i < XFD_SETCOUNT(b1) ; __i++) { if (FD_ISSET(XFD_FD(b1,__i), b2)) FD_SET(XFD_FD(b1,__i), dst); } }
#define XFD_ORSET(dst,b1,b2) { u_int __i; if (dst != b1) XFD_COPYSET(b1,dst); for (__i = 0; __i < XFD_SETCOUNT(b2) ; __i++) { if (!FD_ISSET(XFD_FD(b2,__i), dst)) FD_SET(XFD_FD(b2,__i), dst); } }
#define XFD_UNSET(dst,b1) { u_int __i; for (__i = 0; __i < XFD_SETCOUNT(b1) ; __i++) { FD_CLR(XFD_FD(b1,__i), dst); } }
#undef FD_SET
#define FD_SET(fd,set) do { if (XFD_SETCOUNT(set) < FD_SETSIZE && !FD_ISSET(fd,set)) XFD_FD(set,XFD_SETCOUNT(set)++)=(fd); } while(0)
#define getdtablesize() FD_SETSIZE
#endif
#endif
