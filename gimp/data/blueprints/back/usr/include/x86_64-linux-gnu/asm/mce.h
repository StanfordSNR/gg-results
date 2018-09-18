// GGHASH:VJLaKOX6TO1Z1eLS4C27pNeRqrP0ntPCSotvIwo_jtqU00000520
#ifndef _ASM_X86_MCE_H
#define _ASM_X86_MCE_H 
#include <linux/types.h>
#include <linux/ioctl.h>
#define MCE_GET_RECORD_LEN _IOR('M', 1, int)
#define MCE_GET_LOG_LEN _IOR('M', 2, int)
#define MCE_GETCLEAR_FLAGS _IOR('M', 3, int)
#endif
