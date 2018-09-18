// GGHASH:VdtCxQC465pMAw4.oaB9775X08abovgSaWP6abv3H.9A00000184
#ifndef _LINUX_SIGNAL_H
#define _LINUX_SIGNAL_H 
#include <asm/signal.h>
#include <asm/siginfo.h>
#define SS_ONSTACK 1
#define SS_DISABLE 2
#define SS_AUTODISARM (1U << 31)
#define SS_FLAG_BITS SS_AUTODISARM
#endif
