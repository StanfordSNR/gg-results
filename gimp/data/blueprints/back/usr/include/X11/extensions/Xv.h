// GGHASH:Vx5GBIRlsryglfUQb_VOo16Y89gAvhA.ZGhldmN5ysTw00000bd3
#ifndef XV_H
#define XV_H 
#include <X11/X.h>
#define XvName "XVideo"
#define XvVersion 2
#define XvRevision 2
#define XvNone 0
#define XvInput 0
#define XvOutput 1
#define XvInputMask (1<<XvInput)
#define XvOutputMask (1<<XvOutput)
#define XvVideoMask 0x00000004
#define XvStillMask 0x00000008
#define XvImageMask 0x00000010
#define XvPixmapMask 0x00010000
#define XvWindowMask 0x00020000
#define XvGettable 0x01
#define XvSettable 0x02
#define XvRGB 0
#define XvYUV 1
#define XvPacked 0
#define XvPlanar 1
#define XvTopToBottom 0
#define XvBottomToTop 1
#define XvVideoNotify 0
#define XvPortNotify 1
#define XvNumEvents 2
#define XvStarted 0
#define XvStopped 1
#define XvBusy 2
#define XvPreempted 3
#define XvHardError 4
#define XvLastReason 4
#define XvNumReasons (XvLastReason + 1)
#define XvStartedMask (1<<XvStarted)
#define XvStoppedMask (1<<XvStopped)
#define XvBusyMask (1<<XvBusy)
#define XvPreemptedMask (1<<XvPreempted)
#define XvHardErrorMask (1<<XvHardError)
#define XvAnyReasonMask ((1<<XvNumReasons) - 1)
#define XvNoReasonMask 0
#define XvBadPort 0
#define XvBadEncoding 1
#define XvBadControl 2
#define XvNumErrors 3
#define XvBadExtension 1
#define XvAlreadyGrabbed 2
#define XvInvalidTime 3
#define XvBadReply 4
#define XvBadAlloc 5
#endif
