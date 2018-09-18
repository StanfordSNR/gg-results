// GGHASH:Vod0YxOXDlCK4b_5rWIlgkhwrFmvYDp9inygvHj44S.A00000845
#ifndef _ASM_X86_UCONTEXT_H
#define _ASM_X86_UCONTEXT_H 
#define UC_FP_XSTATE 0x1
#ifdef __x86_64__
#define UC_SIGCONTEXT_SS 0x2
#define UC_STRICT_RESTORE_SS 0x4
#endif
#include <asm-generic/ucontext.h>
#endif
