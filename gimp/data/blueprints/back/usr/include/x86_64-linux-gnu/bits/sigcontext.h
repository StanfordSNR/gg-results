// GGHASH:V1TljjXHLRvACDDDoTEZN37hw1b7Nc5Wv4LCna7.hbJY000010a8
#ifndef _BITS_SIGCONTEXT_H
#define _BITS_SIGCONTEXT_H 1
#if !defined _SIGNAL_H && !defined _SYS_UCONTEXT_H
# error "Never use <bits/sigcontext.h> directly; include <signal.h> instead."
#endif
#include <bits/types.h>
#define FP_XSTATE_MAGIC1 0x46505853U
#define FP_XSTATE_MAGIC2 0x46505845U
#define FP_XSTATE_MAGIC2_SIZE sizeof(FP_XSTATE_MAGIC2)
#ifndef __x86_64__
#ifndef sigcontext_struct
#define sigcontext_struct sigcontext
#endif
#define X86_FXSR_MAGIC 0x0000
#else
#endif
#endif
