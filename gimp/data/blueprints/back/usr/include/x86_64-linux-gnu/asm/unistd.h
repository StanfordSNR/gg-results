// GGHASH:V3QZuCx1maWJoanH5K791l2kuepm7ucw_Kl17WwvDdMQ00000167
#ifndef _ASM_X86_UNISTD_H
#define _ASM_X86_UNISTD_H 
#define __X32_SYSCALL_BIT 0x40000000
# ifdef __i386__
# include <asm/unistd_32.h>
# elif defined(__ILP32__)
# include <asm/unistd_x32.h>
# else
# include <asm/unistd_64.h>
# endif
#endif
