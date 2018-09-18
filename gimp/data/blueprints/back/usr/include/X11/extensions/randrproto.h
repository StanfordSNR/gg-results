// GGHASH:VZR.A3o30A1WV3hGoLpm3.zjVfJs69Xy3wDb85ZyzfOI00006c68
#ifndef _XRANDRP_H_
#define _XRANDRP_H_ 
#include <X11/extensions/randr.h>
#include <X11/extensions/renderproto.h>
#define Window CARD32
#define Drawable CARD32
#define Font CARD32
#define Pixmap CARD32
#define Cursor CARD32
#define Colormap CARD32
#define GContext CARD32
#define Atom CARD32
#define Time CARD32
#define KeyCode CARD8
#define KeySym CARD32
#define RROutput CARD32
#define RRMode CARD32
#define RRCrtc CARD32
#define RRProvider CARD32
#define RRModeFlags CARD32
#define RRLease CARD32
#define Rotation CARD16
#define SizeID CARD16
#define SubpixelOrder CARD16
#define sz_xScreenSizes 8
#define sz_xRRQueryVersionReq 12
#define sz_xRRQueryVersionReply 32
#define sz_xRRGetScreenInfoReq 8
#define sz_xRRGetScreenInfoReply 32
#define sz_xRR1_0SetScreenConfigReq 20
#define sz_xRRSetScreenConfigReq 24
#define sz_xRRSetScreenConfigReply 32
#define sz_xRRSelectInputReq 12
#define sz_xRRModeInfo 32
#define sz_xRRGetScreenSizeRangeReq 8
#define sz_xRRGetScreenSizeRangeReply 32
#define sz_xRRSetScreenSizeReq 20
#define sz_xRRGetScreenResourcesReq 8
#define sz_xRRGetScreenResourcesReply 32
#define sz_xRRGetOutputInfoReq 12
#define sz_xRRGetOutputInfoReply 36
#define sz_xRRListOutputPropertiesReq 8
#define sz_xRRListOutputPropertiesReply 32
#define sz_xRRQueryOutputPropertyReq 12
#define sz_xRRQueryOutputPropertyReply 32
#define sz_xRRConfigureOutputPropertyReq 16
#define sz_xRRChangeOutputPropertyReq 24
#define sz_xRRDeleteOutputPropertyReq 12
#ifdef __cplusplus
#else
#endif
#define sz_xRRGetOutputPropertyReq 28
#define sz_xRRGetOutputPropertyReply 32
#define sz_xRRCreateModeReq 40
#define sz_xRRCreateModeReply 32
#define sz_xRRDestroyModeReq 8
#define sz_xRRAddOutputModeReq 12
#define sz_xRRDeleteOutputModeReq 12
#define sz_xRRGetCrtcInfoReq 12
#define sz_xRRGetCrtcInfoReply 32
#define sz_xRRSetCrtcConfigReq 28
#define sz_xRRSetCrtcConfigReply 32
#define sz_xRRGetCrtcGammaSizeReq 8
#define sz_xRRGetCrtcGammaSizeReply 32
#define sz_xRRGetCrtcGammaReq 8
#define sz_xRRGetCrtcGammaReply 32
#define sz_xRRSetCrtcGammaReq 12
#define sz_xRRGetScreenResourcesCurrentReq sz_xRRGetScreenResourcesReq
#define sz_xRRGetScreenResourcesCurrentReply sz_xRRGetScreenResourcesReply
#define sz_xRRSetCrtcTransformReq 48
#define sz_xRRGetCrtcTransformReq 8
#define sz_xRRGetCrtcTransformReply 96
#define sz_xRRSetOutputPrimaryReq 12
#define sz_xRRGetOutputPrimaryReq 8
#define sz_xRRGetOutputPrimaryReply 32
#define sz_xRRGetProvidersReq 8
#define sz_xRRGetProvidersReply 32
#define sz_xRRGetProviderInfoReq 12
#define sz_xRRGetProviderInfoReply 32
#define sz_xRRSetProviderOutputSourceReq 16
#define sz_xRRSetProviderOffloadSinkReq 16
#define sz_xRRListProviderPropertiesReq 8
#define sz_xRRListProviderPropertiesReply 32
#define sz_xRRQueryProviderPropertyReq 12
#define sz_xRRQueryProviderPropertyReply 32
#define sz_xRRConfigureProviderPropertyReq 16
#define sz_xRRChangeProviderPropertyReq 24
#define sz_xRRDeleteProviderPropertyReq 12
#ifdef __cplusplus
#else
#endif
#define sz_xRRGetProviderPropertyReq 28
#define sz_xRRGetProviderPropertyReply 32
#define sz_xRRCreateLeaseReq 16
#define sz_xRRCreateLeaseReply 32
#define sz_xRRFreeLeaseReq 12
#define sz_xRRScreenChangeNotifyEvent 32
#define sz_xRRCrtcChangeNotifyEvent 32
#define sz_xRROutputChangeNotifyEvent 32
#define sz_xRROutputPropertyNotifyEvent 32
#define sz_xRRProviderChangeNotifyEvent 32
#define sz_xRRProviderPropertyNotifyEvent 32
#define sz_xRRResourceChangeNotifyEvent 32
#define sz_xRRLeaseNotifyEvent 32
#define sz_xRRGetPanningReq 8
#define sz_xRRGetPanningReply 36
#define sz_xRRSetPanningReq 36
#define sz_xRRSetPanningReply 32
#define sz_xRRMonitorInfo 24
#define sz_xRRGetMonitorsReq 12
#define sz_xRRGetMonitorsReply 32
#define sz_xRRSetMonitorReq 32
#define sz_xRRDeleteMonitorReq 12
#undef RRModeFlags
#undef RRCrtc
#undef RRMode
#undef RROutput
#undef RRMode
#undef RRCrtc
#undef RRProvider
#undef Drawable
#undef Window
#undef Font
#undef Pixmap
#undef Cursor
#undef Colormap
#undef GContext
#undef Atom
#undef Time
#undef KeyCode
#undef KeySym
#undef Rotation
#undef SizeID
#undef SubpixelOrder
#endif
