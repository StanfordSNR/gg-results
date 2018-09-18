// GGHASH:VRTWymFY1VShAvJ0nty0F6CKApVglAILL63iyw4OYvTA000025fc
#ifndef _ASM_X86_SIGCONTEXT_H
#define _ASM_X86_SIGCONTEXT_H 
#include <linux/types.h>
#define FP_XSTATE_MAGIC1 0x46505853U
#define FP_XSTATE_MAGIC2 0x46505845U
#define FP_XSTATE_MAGIC2_SIZE sizeof(FP_XSTATE_MAGIC2)
#define X86_FXSR_MAGIC 0x0000
#ifdef __i386__
#define _fpstate _fpstate_32
#else
#define _fpstate _fpstate_64
#endif
#define _fpstate_ia32 _fpstate_32
#define sigcontext_ia32 sigcontext_32
# ifdef __i386__
# else
# ifdef __ILP32__
# endif
# endif
#endif
