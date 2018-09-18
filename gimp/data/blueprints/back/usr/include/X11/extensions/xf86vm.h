// GGHASH:VJh3JEpg4JG7QclzeuBKempDdFWDPeM.YUDUrCbIyY0k0000083d
#ifndef _XF86VM_H_
#define _XF86VM_H_ 
#include <X11/Xmd.h>
#define CLKFLAG_PROGRAMABLE 1
#ifdef XF86VIDMODE_EVENTS
#define XF86VidModeNotify 0
#define XF86VidModeNumberEvents (XF86VidModeNotify + 1)
#define XF86VidModeNotifyMask 0x00000001
#define XF86VidModeNonEvent 0
#define XF86VidModeModeChange 1
#else
#define XF86VidModeNumberEvents 0
#endif
#define XF86VidModeBadClock 0
#define XF86VidModeBadHTimings 1
#define XF86VidModeBadVTimings 2
#define XF86VidModeModeUnsuitable 3
#define XF86VidModeExtensionDisabled 4
#define XF86VidModeClientNotLocal 5
#define XF86VidModeZoomLocked 6
#define XF86VidModeNumberErrors (XF86VidModeZoomLocked + 1)
#define XF86VM_READ_PERMISSION 1
#define XF86VM_WRITE_PERMISSION 2
#endif
