// GGHASH:V4Dn5FOJ95cGSkROwm.tIAF00Jftll85Yu22RzIHGpu40000167e
#ifndef _SYS_UCONTEXT_H
#define _SYS_UCONTEXT_H 1
#include <features.h>
#include <bits/types.h>
#include <bits/types/sigset_t.h>
#include <bits/types/stack_t.h>
#ifdef __USE_MISC
#define __ctx(fld) fld
#else
#define __ctx(fld) __ ## fld
#endif
#ifdef __x86_64__
#define __NGREG 23
#ifdef __USE_MISC
#define NGREG __NGREG
#endif
#ifdef __USE_GNU
#define REG_R8 REG_R8
#define REG_R9 REG_R9
#define REG_R10 REG_R10
#define REG_R11 REG_R11
#define REG_R12 REG_R12
#define REG_R13 REG_R13
#define REG_R14 REG_R14
#define REG_R15 REG_R15
#define REG_RDI REG_RDI
#define REG_RSI REG_RSI
#define REG_RBP REG_RBP
#define REG_RBX REG_RBX
#define REG_RDX REG_RDX
#define REG_RAX REG_RAX
#define REG_RCX REG_RCX
#define REG_RSP REG_RSP
#define REG_RIP REG_RIP
#define REG_EFL REG_EFL
#define REG_CSGSFS REG_CSGSFS
#define REG_ERR REG_ERR
#define REG_TRAPNO REG_TRAPNO
#define REG_OLDMASK REG_OLDMASK
#define REG_CR2 REG_CR2
#endif
#else
#define __NGREG 19
#ifdef __USE_MISC
#define NGREG __NGREG
#endif
#ifdef __USE_GNU
#define REG_GS REG_GS
#define REG_FS REG_FS
#define REG_ES REG_ES
#define REG_DS REG_DS
#define REG_EDI REG_EDI
#define REG_ESI REG_ESI
#define REG_EBP REG_EBP
#define REG_ESP REG_ESP
#define REG_EBX REG_EBX
#define REG_EDX REG_EDX
#define REG_ECX REG_ECX
#define REG_EAX REG_EAX
#define REG_TRAPNO REG_TRAPNO
#define REG_ERR REG_ERR
#define REG_EIP REG_EIP
#define REG_CS REG_CS
#define REG_EFL REG_EFL
#define REG_UESP REG_UESP
#define REG_SS REG_SS
#endif
#endif
#undef __ctx
#endif
