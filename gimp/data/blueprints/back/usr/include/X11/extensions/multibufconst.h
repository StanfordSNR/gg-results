// GGHASH:VBnPw8emPWhIh0mtt3c5C13TcVFM_3z9HSvH6rpfl1wg00000a0f
#ifndef _MULTIBUFCONST_H_
#define _MULTIBUFCONST_H_ 
#define MULTIBUFFER_PROTOCOL_NAME "Multi-Buffering"
#define MULTIBUFFER_MAJOR_VERSION 1
#define MULTIBUFFER_MINOR_VERSION 1
#define MultibufferUpdateActionUndefined 0
#define MultibufferUpdateActionBackground 1
#define MultibufferUpdateActionUntouched 2
#define MultibufferUpdateActionCopied 3
#define MultibufferUpdateHintFrequent 0
#define MultibufferUpdateHintIntermittent 1
#define MultibufferUpdateHintStatic 2
#define MultibufferWindowUpdateHint (1L << 0)
#define MultibufferBufferEventMask (1L << 0)
#define MultibufferModeMono 0
#define MultibufferModeStereo 1
#define MultibufferSideMono 0
#define MultibufferSideLeft 1
#define MultibufferSideRight 2
#define MultibufferUnclobbered 0
#define MultibufferPartiallyClobbered 1
#define MultibufferFullyClobbered 2
#define MultibufferClobberNotifyMask 0x02000000
#define MultibufferUpdateNotifyMask 0x04000000
#define MultibufferClobberNotify 0
#define MultibufferUpdateNotify 1
#define MultibufferNumberEvents (MultibufferUpdateNotify + 1)
#define MultibufferBadBuffer 0
#define MultibufferNumberErrors (MultibufferBadBuffer + 1)
#endif
