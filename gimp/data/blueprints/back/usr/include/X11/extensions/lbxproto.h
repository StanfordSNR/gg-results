// GGHASH:VllINHVioUle7vpmKDCZEGDnEzIbMlvqKLCic81EM9EQ000064e0
#ifndef _LBXPROTO_H_
#define _LBXPROTO_H_ 
#include <X11/extensions/lbx.h>
#define X_LbxQueryVersion 0
#define X_LbxStartProxy 1
#define X_LbxStopProxy 2
#define X_LbxSwitch 3
#define X_LbxNewClient 4
#define X_LbxCloseClient 5
#define X_LbxModifySequence 6
#define X_LbxAllowMotion 7
#define X_LbxIncrementPixel 8
#define X_LbxDelta 9
#define X_LbxGetModifierMapping 10
#define X_LbxInvalidateTag 12
#define X_LbxPolyPoint 13
#define X_LbxPolyLine 14
#define X_LbxPolySegment 15
#define X_LbxPolyRectangle 16
#define X_LbxPolyArc 17
#define X_LbxFillPoly 18
#define X_LbxPolyFillRectangle 19
#define X_LbxPolyFillArc 20
#define X_LbxGetKeyboardMapping 21
#define X_LbxQueryFont 22
#define X_LbxChangeProperty 23
#define X_LbxGetProperty 24
#define X_LbxTagData 25
#define X_LbxCopyArea 26
#define X_LbxCopyPlane 27
#define X_LbxPolyText8 28
#define X_LbxPolyText16 29
#define X_LbxImageText8 30
#define X_LbxImageText16 31
#define X_LbxQueryExtension 32
#define X_LbxPutImage 33
#define X_LbxGetImage 34
#define X_LbxBeginLargeRequest 35
#define X_LbxLargeRequestData 36
#define X_LbxEndLargeRequest 37
#define X_LbxInternAtoms 38
#define X_LbxGetWinAttrAndGeom 39
#define X_LbxGrabCmap 40
#define X_LbxReleaseCmap 41
#define X_LbxAllocColor 42
#define X_LbxSync 43
#define XID CARD32
#define Atom CARD32
#define Colormap CARD32
#define Drawable CARD32
#define VisualID CARD32
#define Window CARD32
#define sz_xLbxQueryVersionReq 4
#define sz_xLbxQueryVersionReply 32
#define sz_xLbxStartProxyReq 4
#define sz_xLbxStopProxyReq 4
#define sz_xLbxSwitchReq 8
#define sz_xLbxNewClientReq 8
#define sz_xLbxCloseClientReq 8
#define sz_xLbxModifySequenceReq 8
#define sz_xLbxAllowMotionReq 8
#define sz_xLbxGrabCmapReq 8
#define LBX_SMART_GRAB 0x80
#define LBX_AUTO_RELEASE 0x40
#define LBX_3CHANNELS 0x20
#define LBX_2BYTE_PIXELS 0x10
#define LBX_RGB_BITS_MASK 0x0f
#define LBX_LIST_END 0
#define LBX_PIXEL_PRIVATE 1
#define LBX_PIXEL_SHARED 2
#define LBX_PIXEL_RANGE_PRIVATE 3
#define LBX_PIXEL_RANGE_SHARED 4
#define LBX_NEXT_CHANNEL 5
#define sz_xLbxGrabCmapReply 32
#define sz_xLbxGrabCmapReplyHdr 8
#define sz_xLbxReleaseCmapReq 8
#define sz_xLbxAllocColorReq 20
#define sz_xLbxIncrementPixelReq 12
#define sz_xLbxDeltaReq 6
#define sz_xLbxGetModifierMappingReq 4
#define sz_xLbxGetModifierMappingReply 32
#define sz_xLbxGetKeyboardMappingReq 8
#define sz_xLbxGetKeyboardMappingReply 32
#define sz_xLbxQueryFontReq 8
#define sz_xLbxInternAtomsReq 6
#define sz_xLbxInternAtomsReply 32
#define sz_xLbxInternAtomsReplyHdr 8
#define sz_xLbxGetWinAttrAndGeomReq 8
#if defined(__cplusplus) || defined(c_plusplus)
#else
#endif
#define sz_xLbxGetWinAttrAndGeomReply 60
#define sz_xLbxSyncReq 4
#define sz_xLbxSyncReply 32
#define LBX_WIDTH_SHIFT 26
#define LBX_LEFT_SHIFT 20
#define LBX_RIGHT_SHIFT 13
#define LBX_ASCENT_SHIFT 7
#define LBX_DESCENT_SHIFT 0
#define LBX_WIDTH_BITS 6
#define LBX_LEFT_BITS 6
#define LBX_RIGHT_BITS 7
#define LBX_ASCENT_BITS 6
#define LBX_DESCENT_BITS 7
#define LBX_WIDTH_MASK 0xfc000000
#define LBX_LEFT_MASK 0x03f00000
#define LBX_RIGHT_MASK 0x000fe000
#define LBX_ASCENT_MASK 0x00001f80
#define LBX_DESCENT_MASK 0x0000007f
#define LBX_MASK_BITS(val,n) ((unsigned int) ((val) & ((1 << (n)) - 1)))
#ifndef WORD64
#endif
#ifndef WORD64
#endif
#define sz_xLbxQueryFontReply 32
#define sz_xLbxChangePropertyReq 24
#define sz_xLbxChangePropertyReply 32
#define sz_xLbxGetPropertyReq 28
#define sz_xLbxGetPropertyReply 32
#define sz_xLbxTagDataReq 12
#define sz_xLbxInvalidateTagReq 8
#define sz_xLbxPutImageReq 7
#define sz_xLbxGetImageReq 24
#define sz_xLbxGetImageReply 32
#define GFX_CACHE_SIZE 15
#define GFXdCacheEnt(e) ((e) & 0xf)
#define GFXgCacheEnt(e) (((e) >> 4) & 0xf)
#define GFXCacheEnts(d,g) (((d) & 0xf) | (((g) & 0xf) << 4))
#define GFXCacheNone 0xf
#define sz_xLbxPolyPointReq 6
#define sz_xLbxPolyLineReq sz_xLbxPolyPointReq
#define sz_xLbxPolySegmentReq sz_xLbxPolyPointReq
#define sz_xLbxPolyRectangleReq sz_xLbxPolyPointReq
#define sz_xLbxPolyArcReq sz_xLbxPolyPointReq
#define sz_xLbxPolyFillRectangleReq sz_xLbxPolyPointReq
#define sz_xLbxPolyFillArc sz_xLbxPolyPointReq
#define sz_xLbxFillPolyReq 7
#define sz_xLbxCopyAreaReq 6
#define sz_xLbxCopyPlaneReq 10
#define sz_xLbxPolyTextReq 5
#define sz_xLbxPolyTextReq 5
#define sz_xLbxPolyText8Req 5
#define sz_xLbxPolyText16Req 5
#define sz_xLbxImageTextReq 6
#define sz_xLbxImageText8Req 6
#define sz_xLbxImageText16Req 6
#define sz_xLbxDiffItem 2
#define sz_xLbxStartReply 32
#define sz_xLbxStartReplyHdr 8
#define sz_xLbxQueryExtensionReq 8
#define sz_xLbxQueryExtensionReply 32
#define sz_BeginLargeRequestReq 8
#define sz_LargeRequestDataReq 4
#define sz_EndLargeRequestReq 4
#define sz_xLbxSwitchEvent 8
#define sz_xLbxCloseEvent 32
#define sz_xLbxInvalidateTagEvent 32
#define sz_xLbxSendTagDataEvent 32
#define sz_xLbxListenToOneEvent 32
#define sz_xLbxListenToOneEvent 32
#define sz_xLbxReleaseCmapEvent 32
#define sz_xLbxFreeCellsEvent 32
#define lbxsz_KeyButtonEvent 32
#define lbxupsz_KeyButtonEvent 31
#define lbxsz_EnterLeaveEvent 32
#define lbxupsz_EnterLeaveEvent 32
#define lbxsz_FocusEvent 12
#define lbxupsz_FocusEvent 9
#define lbxsz_KeymapEvent 32
#define lbxupsz_KeymapEvent 32
#define lbxsz_ExposeEvent 20
#define lbxupsz_ExposeEvent 18
#define lbxsz_GfxExposeEvent 24
#define lbxupsz_GfxExposeEvent 21
#define lbxsz_NoExposeEvent 12
#define lbxupsz_NoExposeEvent 11
#define lbxsz_VisibilityEvent 12
#define lbxupsz_VisibilityEvent 9
#define lbxsz_CreateNotifyEvent 24
#define lbxupsz_CreateNotifyEvent 23
#define lbxsz_DestroyNotifyEvent 12
#define lbxupsz_DestroyNotifyEvent 12
#define lbxsz_UnmapNotifyEvent 16
#define lbxupsz_UnmapNotifyEvent 13
#define lbxsz_MapNotifyEvent 16
#define lbxupsz_MapNotifyEvent 13
#define lbxsz_MapRequestEvent 12
#define lbxupsz_MapRequestEvent 12
#define lbxsz_ReparentEvent 24
#define lbxupsz_ReparentEvent 21
#define lbxsz_ConfigureNotifyEvent 28
#define lbxupsz_ConfigureNotifyEvent 27
#define lbxsz_ConfigureRequestEvent 28
#define lbxupsz_ConfigureRequestEvent 28
#define lbxsz_GravityEvent 16
#define lbxupsz_GravityEvent 16
#define lbxsz_ResizeRequestEvent 12
#define lbxupsz_ResizeRequestEvent 12
#define lbxsz_CirculateEvent 20
#define lbxupsz_CirculateEvent 17
#define lbxsz_PropertyEvent 20
#define lbxupsz_PropertyEvent 17
#define lbxsz_SelectionClearEvent 16
#define lbxupsz_SelectionClearEvent 16
#define lbxsz_SelectionRequestEvent 28
#define lbxupsz_SelectionRequestEvent 28
#define lbxsz_SelectionNotifyEvent 24
#define lbxupsz_SelectionNotifyEvent 24
#define lbxsz_ColormapEvent 16
#define lbxupsz_ColormapEvent 14
#define lbxsz_MappingNotifyEvent 8
#define lbxupsz_MappingNotifyEvent 7
#define lbxsz_ClientMessageEvent 32
#define lbxupsz_ClientMessageEvent 32
#define lbxsz_UnknownEvent 32
#ifdef DEBUG
#define DBG_SWITCH 0x00000001
#define DBG_CLOSE 0x00000002
#define DBG_IO 0x00000004
#define DBG_READ_REQ 0x00000008
#define DBG_LEN 0x00000010
#define DBG_BLOCK 0x00000020
#define DBG_CLIENT 0x00000040
#define DBG_DELTA 0x00000080
#endif
#undef XID
#undef Atom
#undef Colormap
#undef Drawable
#undef VisualID
#undef Window
#endif
