// GGHASH:VAHEbq1Cc_UcB1mxr4QGOJigy7rcGI0ElFci3fdmur7g000037f2
#ifndef __BITS_SOCKET_H
#define __BITS_SOCKET_H 
#ifndef _SYS_SOCKET_H
# error "Never include <bits/socket.h> directly; use <sys/socket.h> instead."
#endif
#define __need_size_t 
#include <stddef.h>
#include <sys/types.h>
#ifndef __socklen_t_defined
#define __socklen_t_defined 
#endif
#include <bits/socket_type.h>
#define PF_UNSPEC 0
#define PF_LOCAL 1
#define PF_UNIX PF_LOCAL
#define PF_FILE PF_LOCAL
#define PF_INET 2
#define PF_AX25 3
#define PF_IPX 4
#define PF_APPLETALK 5
#define PF_NETROM 6
#define PF_BRIDGE 7
#define PF_ATMPVC 8
#define PF_X25 9
#define PF_INET6 10
#define PF_ROSE 11
#define PF_DECnet 12
#define PF_NETBEUI 13
#define PF_SECURITY 14
#define PF_KEY 15
#define PF_NETLINK 16
#define PF_ROUTE PF_NETLINK
#define PF_PACKET 17
#define PF_ASH 18
#define PF_ECONET 19
#define PF_ATMSVC 20
#define PF_RDS 21
#define PF_SNA 22
#define PF_IRDA 23
#define PF_PPPOX 24
#define PF_WANPIPE 25
#define PF_LLC 26
#define PF_IB 27
#define PF_MPLS 28
#define PF_CAN 29
#define PF_TIPC 30
#define PF_BLUETOOTH 31
#define PF_IUCV 32
#define PF_RXRPC 33
#define PF_ISDN 34
#define PF_PHONET 35
#define PF_IEEE802154 36
#define PF_CAIF 37
#define PF_ALG 38
#define PF_NFC 39
#define PF_VSOCK 40
#define PF_KCM 41
#define PF_QIPCRTR 42
#define PF_SMC 43
#define PF_MAX 44
#define AF_UNSPEC PF_UNSPEC
#define AF_LOCAL PF_LOCAL
#define AF_UNIX PF_UNIX
#define AF_FILE PF_FILE
#define AF_INET PF_INET
#define AF_AX25 PF_AX25
#define AF_IPX PF_IPX
#define AF_APPLETALK PF_APPLETALK
#define AF_NETROM PF_NETROM
#define AF_BRIDGE PF_BRIDGE
#define AF_ATMPVC PF_ATMPVC
#define AF_X25 PF_X25
#define AF_INET6 PF_INET6
#define AF_ROSE PF_ROSE
#define AF_DECnet PF_DECnet
#define AF_NETBEUI PF_NETBEUI
#define AF_SECURITY PF_SECURITY
#define AF_KEY PF_KEY
#define AF_NETLINK PF_NETLINK
#define AF_ROUTE PF_ROUTE
#define AF_PACKET PF_PACKET
#define AF_ASH PF_ASH
#define AF_ECONET PF_ECONET
#define AF_ATMSVC PF_ATMSVC
#define AF_RDS PF_RDS
#define AF_SNA PF_SNA
#define AF_IRDA PF_IRDA
#define AF_PPPOX PF_PPPOX
#define AF_WANPIPE PF_WANPIPE
#define AF_LLC PF_LLC
#define AF_IB PF_IB
#define AF_MPLS PF_MPLS
#define AF_CAN PF_CAN
#define AF_TIPC PF_TIPC
#define AF_BLUETOOTH PF_BLUETOOTH
#define AF_IUCV PF_IUCV
#define AF_RXRPC PF_RXRPC
#define AF_ISDN PF_ISDN
#define AF_PHONET PF_PHONET
#define AF_IEEE802154 PF_IEEE802154
#define AF_CAIF PF_CAIF
#define AF_ALG PF_ALG
#define AF_NFC PF_NFC
#define AF_VSOCK PF_VSOCK
#define AF_KCM PF_KCM
#define AF_QIPCRTR PF_QIPCRTR
#define AF_SMC PF_SMC
#define AF_MAX PF_MAX
#define SOL_RAW 255
#define SOL_DECNET 261
#define SOL_X25 262
#define SOL_PACKET 263
#define SOL_ATM 264
#define SOL_AAL 265
#define SOL_IRDA 266
#define SOL_NETBEUI 267
#define SOL_LLC 268
#define SOL_DCCP 269
#define SOL_NETLINK 270
#define SOL_TIPC 271
#define SOL_RXRPC 272
#define SOL_PPPOL2TP 273
#define SOL_BLUETOOTH 274
#define SOL_PNPIPE 275
#define SOL_RDS 276
#define SOL_IUCV 277
#define SOL_CAIF 278
#define SOL_ALG 279
#define SOL_NFC 280
#define SOL_KCM 281
#define SOL_TLS 282
#define SOMAXCONN 128
#include <bits/sockaddr.h>
#define __ss_aligntype unsigned long int
#define _SS_PADSIZE (_SS_SIZE - __SOCKADDR_COMMON_SIZE - sizeof (__ss_aligntype))
#define MSG_OOB MSG_OOB
#define MSG_PEEK MSG_PEEK
#define MSG_DONTROUTE MSG_DONTROUTE
#ifdef __USE_GNU
#define MSG_TRYHARD MSG_DONTROUTE
#endif
#define MSG_CTRUNC MSG_CTRUNC
#define MSG_PROXY MSG_PROXY
#define MSG_TRUNC MSG_TRUNC
#define MSG_DONTWAIT MSG_DONTWAIT
#define MSG_EOR MSG_EOR
#define MSG_WAITALL MSG_WAITALL
#define MSG_FIN MSG_FIN
#define MSG_SYN MSG_SYN
#define MSG_CONFIRM MSG_CONFIRM
#define MSG_RST MSG_RST
#define MSG_ERRQUEUE MSG_ERRQUEUE
#define MSG_NOSIGNAL MSG_NOSIGNAL
#define MSG_MORE MSG_MORE
#define MSG_WAITFORONE MSG_WAITFORONE
#define MSG_BATCH MSG_BATCH
#define MSG_ZEROCOPY MSG_ZEROCOPY
#define MSG_FASTOPEN MSG_FASTOPEN
#define MSG_CMSG_CLOEXEC MSG_CMSG_CLOEXEC
#if __glibc_c99_flexarr_available
#endif
#if __glibc_c99_flexarr_available
#define CMSG_DATA(cmsg) ((cmsg)->__cmsg_data)
#else
#define CMSG_DATA(cmsg) ((unsigned char *) ((struct cmsghdr *) (cmsg) + 1))
#endif
#define CMSG_NXTHDR(mhdr,cmsg) __cmsg_nxthdr (mhdr, cmsg)
#define CMSG_FIRSTHDR(mhdr) ((size_t) (mhdr)->msg_controllen >= sizeof (struct cmsghdr) ? (struct cmsghdr *) (mhdr)->msg_control : (struct cmsghdr *) 0)
#define CMSG_ALIGN(len) (((len) + sizeof (size_t) - 1) & (size_t) ~(sizeof (size_t) - 1))
#define CMSG_SPACE(len) (CMSG_ALIGN (len) + CMSG_ALIGN (sizeof (struct cmsghdr)))
#define CMSG_LEN(len) (CMSG_ALIGN (sizeof (struct cmsghdr)) + (len))
#ifdef __USE_EXTERN_INLINES
# ifndef _EXTERN_INLINE
#define _EXTERN_INLINE __extern_inline
# endif
#endif
#define SCM_RIGHTS SCM_RIGHTS
#ifdef __USE_GNU
#define SCM_CREDENTIALS SCM_CREDENTIALS
#endif
#ifdef __USE_GNU
#endif
#ifndef __USE_MISC
# ifndef FIOGETOWN
#define __SYS_SOCKET_H_undef_FIOGETOWN 
# endif
# ifndef FIOSETOWN
#define __SYS_SOCKET_H_undef_FIOSETOWN 
# endif
# ifndef SIOCATMARK
#define __SYS_SOCKET_H_undef_SIOCATMARK 
# endif
# ifndef SIOCGPGRP
#define __SYS_SOCKET_H_undef_SIOCGPGRP 
# endif
# ifndef SIOCGSTAMP
#define __SYS_SOCKET_H_undef_SIOCGSTAMP 
# endif
# ifndef SIOCGSTAMPNS
#define __SYS_SOCKET_H_undef_SIOCGSTAMPNS 
# endif
# ifndef SIOCSPGRP
#define __SYS_SOCKET_H_undef_SIOCSPGRP 
# endif
#endif
#ifndef IOCSIZE_MASK
#define __SYS_SOCKET_H_undef_IOCSIZE_MASK 
#endif
#ifndef IOCSIZE_SHIFT
#define __SYS_SOCKET_H_undef_IOCSIZE_SHIFT 
#endif
#ifndef IOC_IN
#define __SYS_SOCKET_H_undef_IOC_IN 
#endif
#ifndef IOC_INOUT
#define __SYS_SOCKET_H_undef_IOC_INOUT 
#endif
#ifndef IOC_OUT
#define __SYS_SOCKET_H_undef_IOC_OUT 
#endif
#include <asm/socket.h>
#ifndef __USE_MISC
# ifdef __SYS_SOCKET_H_undef_FIOGETOWN
#undef __SYS_SOCKET_H_undef_FIOGETOWN
#undef FIOGETOWN
# endif
# ifdef __SYS_SOCKET_H_undef_FIOSETOWN
#undef __SYS_SOCKET_H_undef_FIOSETOWN
#undef FIOSETOWN
# endif
# ifdef __SYS_SOCKET_H_undef_SIOCATMARK
#undef __SYS_SOCKET_H_undef_SIOCATMARK
#undef SIOCATMARK
# endif
# ifdef __SYS_SOCKET_H_undef_SIOCGPGRP
#undef __SYS_SOCKET_H_undef_SIOCGPGRP
#undef SIOCGPGRP
# endif
# ifdef __SYS_SOCKET_H_undef_SIOCGSTAMP
#undef __SYS_SOCKET_H_undef_SIOCGSTAMP
#undef SIOCGSTAMP
# endif
# ifdef __SYS_SOCKET_H_undef_SIOCGSTAMPNS
#undef __SYS_SOCKET_H_undef_SIOCGSTAMPNS
#undef SIOCGSTAMPNS
# endif
# ifdef __SYS_SOCKET_H_undef_SIOCSPGRP
#undef __SYS_SOCKET_H_undef_SIOCSPGRP
#undef SIOCSPGRP
# endif
#endif
#ifdef __SYS_SOCKET_H_undef_IOCSIZE_MASK
#undef __SYS_SOCKET_H_undef_IOCSIZE_MASK
#undef IOCSIZE_MASK
#endif
#ifdef __SYS_SOCKET_H_undef_IOCSIZE_SHIFT
#undef __SYS_SOCKET_H_undef_IOCSIZE_SHIFT
#undef IOCSIZE_SHIFT
#endif
#ifdef __SYS_SOCKET_H_undef_IOC_IN
#undef __SYS_SOCKET_H_undef_IOC_IN
#undef IOC_IN
#endif
#ifdef __SYS_SOCKET_H_undef_IOC_INOUT
#undef __SYS_SOCKET_H_undef_IOC_INOUT
#undef IOC_INOUT
#endif
#ifdef __SYS_SOCKET_H_undef_IOC_OUT
#undef __SYS_SOCKET_H_undef_IOC_OUT
#undef IOC_OUT
#endif
#endif
