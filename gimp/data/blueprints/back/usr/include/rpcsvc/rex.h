// GGHASH:V97CqDju0_KztWr4sYRh7nBKnFCoKWQfgpHaxz1qzpEA00001484
#ifndef _REX_H_RPCGEN
#define _REX_H_RPCGEN 
#include <rpc/rpc.h>
#ifdef __cplusplus
#endif
#define STRINGSIZE 1024
#define SIGINT 2
#define REX_INTERACTIVE 1
#define B0 0
#define B50 1
#define B75 2
#define B110 3
#define B134 4
#define B150 5
#define B200 6
#define B300 7
#define B600 8
#define B1200 9
#define B1800 10
#define B2400 11
#define B4800 12
#define B9600 13
#define B19200 14
#define B38400 15
#define TANDEM 0x00000001
#define CBREAK 0x00000002
#define LCASE 0x00000004
#define ECHO 0x00000008
#define CRMOD 0x00000010
#define RAW 0x00000020
#define ODDP 0x00000040
#define EVENP 0x00000080
#define ANYP 0x000000c0
#define NLDELAY 0x00000300
#define NL0 0x00000000
#define NL1 0x00000100
#define NL2 0x00000200
#define NL3 0x00000300
#define TBDELAY 0x00000c00
#define TAB0 0x00000000
#define TAB1 0x00000400
#define TAB2 0x00000800
#define XTABS 0x00000c00
#define CRDELAY 0x00003000
#define CR0 0x00000000
#define CR1 0x00001000
#define CR2 0x00002000
#define CR3 0x00003000
#define VTDELAY 0x00004000
#define FF0 0x00000000
#define FF1 0x00004000
#define BSDELAY 0x00008000
#define BS0 0x00000000
#define BS1 0x00008000
#define CRTBS 0x00010000
#define PRTERA 0x00020000
#define CRTERA 0x00040000
#define TILDE 0x00080000
#define MDMBUF 0x00100000
#define LITOUT 0x00200000
#define TOSTOP 0x00400000
#define FLUSHO 0x00800000
#define NOHANG 0x01000000
#define L001000 0x02000000
#define CRTKIL 0x04000000
#define PASS8 0x08000000
#define CTLECH 0x10000000
#define PENDIN 0x20000000
#define DECCTQ 0x40000000
#define NOFLSH 0x80000000
#define LCRTBS 0x0001
#define LPRTERA 0x0002
#define LCRTERA 0x0004
#define LTILDE 0x0008
#define LMDMBUF 0x0010
#define LLITOUT 0x0020
#define LTOSTOP 0x0040
#define LFLUSHO 0x0080
#define LNOHANG 0x0100
#define LL001000 0x0200
#define LCRTKIL 0x0400
#define LPASS8 0x0800
#define LCTLECH 0x1000
#define LPENDIN 0x2000
#define LDECCTQ 0x4000
#define LNOFLSH 0x8000
#define REXPROG 100017
#define REXVERS 1
#if defined(__STDC__) || defined(__cplusplus)
#define REXPROC_START 1
#define REXPROC_WAIT 2
#define REXPROC_MODES 3
#define REXPROC_WINCH 4
#define REXPROC_SIGNAL 5
#else
#define REXPROC_START 1
#define REXPROC_WAIT 2
#define REXPROC_MODES 3
#define REXPROC_WINCH 4
#define REXPROC_SIGNAL 5
#endif
#if defined(__STDC__) || defined(__cplusplus)
#else
#endif
#ifdef __cplusplus
#endif
#endif
