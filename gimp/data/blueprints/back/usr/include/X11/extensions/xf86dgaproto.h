// GGHASH:Vd3WDZ1bq2NB4X65EanM8MpLxLEfbPxPk8JqBnGvlSKA00001e33
#ifndef _XF86DGAPROTO_H_
#define _XF86DGAPROTO_H_ 
#include <X11/extensions/xf86dga1proto.h>
#include <X11/extensions/xf86dgaconst.h>
#define XF86DGANAME "XFree86-DGA"
#define XDGA_MAJOR_VERSION 2
#define XDGA_MINOR_VERSION 0
#define sz_xXDGAQueryVersionReq 4
#define sz_xXDGAQueryVersionReply 32
#define sz_xXDGAQueryModesReq 8
#define sz_xXDGAQueryModesReply 32
#define sz_xXDGASetModeReq 16
#define sz_xXDGASetModeReply 32
#define sz_xXDGAModeInfo 72
#define sz_xXDGAOpenFramebufferReq 8
#define sz_xXDGAOpenFramebufferReply 32
#define sz_xXDGACloseFramebufferReq 8
#define sz_xXDGASetViewportReq 16
#define sz_xXDGAInstallColormapReq 12
#define sz_xXDGASelectInputReq 12
#define sz_xXDGAFillRectangleReq 20
#define sz_xXDGACopyAreaReq 20
#define sz_xXDGACopyTransparentAreaReq 24
#define sz_xXDGAGetViewportStatusReq 8
#define sz_xXDGAGetViewportStatusReply 32
#define sz_xXDGASyncReq 8
#define sz_xXDGASyncReply 32
#define sz_xXDGASetClientVersionReq 8
#define sz_xXDGAChangePixmapModeReq 16
#define sz_xXDGAChangePixmapModeReply 32
#define sz_xXDGACreateColormapReq 20
#endif
