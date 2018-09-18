// GGHASH:Vnv_GMoqx53lSeURWCedRSsg95mLU0ohUHt3rxvGwGpQ00000c2e
#ifndef _ASM_X86_VM86_H
#define _ASM_X86_VM86_H 
#include <asm/processor-flags.h>
#define BIOSSEG 0x0f000
#define CPU_086 0
#define CPU_186 1
#define CPU_286 2
#define CPU_386 3
#define CPU_486 4
#define CPU_586 5
#define VM86_TYPE(retval) ((retval) & 0xff)
#define VM86_ARG(retval) ((retval) >> 8)
#define VM86_SIGNAL 0
#define VM86_UNKNOWN 1
#define VM86_INTx 2
#define VM86_STI 3
#define VM86_PICRETURN 4
#define VM86_TRAP 6
#define VM86_PLUS_INSTALL_CHECK 0
#define VM86_ENTER 1
#define VM86_ENTER_NO_BYPASS 2
#define VM86_REQUEST_IRQ 3
#define VM86_FREE_IRQ 4
#define VM86_GET_IRQ_BITS 5
#define VM86_GET_AND_RESET_IRQ 6
#define VM86_SCREEN_BITMAP 0x0001
#endif
