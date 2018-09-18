// GGHASH:VEcadmzKZTh9em_0ITZ.9sFGj2fbJcje3_6iyI_wBZaM00003342
#ifndef XVPROTO_H
#define XVPROTO_H 
#include <X11/Xmd.h>
#define XvPortID CARD32
#define XvEncodingID CARD32
#define ShmSeg CARD32
#define VisualID CARD32
#define Drawable CARD32
#define GContext CARD32
#define Time CARD32
#define Atom CARD32
#define sz_xvRational 8
#define sz_xvAdaptorInfo 12
#define sz_xvEncodingInfo (12 + sz_xvRational)
#define sz_xvFormat 8
#define sz_xvAttributeInfo 16
#define sz_xvImageFormatInfo 128
#define xv_QueryExtension 0
#define xv_QueryAdaptors 1
#define xv_QueryEncodings 2
#define xv_GrabPort 3
#define xv_UngrabPort 4
#define xv_PutVideo 5
#define xv_PutStill 6
#define xv_GetVideo 7
#define xv_GetStill 8
#define xv_StopVideo 9
#define xv_SelectVideoNotify 10
#define xv_SelectPortNotify 11
#define xv_QueryBestSize 12
#define xv_SetPortAttribute 13
#define xv_GetPortAttribute 14
#define xv_QueryPortAttributes 15
#define xv_ListImageFormats 16
#define xv_QueryImageAttributes 17
#define xv_PutImage 18
#define xv_ShmPutImage 19
#define xv_LastRequest xv_ShmPutImage
#define xvNumRequests (xv_LastRequest + 1)
#define sz_xvQueryExtensionReq 4
#define sz_xvQueryAdaptorsReq 8
#define sz_xvQueryEncodingsReq 8
#define sz_xvPutVideoReq 32
#define sz_xvPutStillReq 32
#define sz_xvGetVideoReq 32
#define sz_xvGetStillReq 32
#define sz_xvGrabPortReq 12
#define sz_xvUngrabPortReq 12
#define sz_xvSelectVideoNotifyReq 12
#define sz_xvSelectPortNotifyReq 12
#define sz_xvStopVideoReq 12
#define sz_xvSetPortAttributeReq 16
#define sz_xvGetPortAttributeReq 12
#define sz_xvQueryBestSizeReq 20
#define sz_xvQueryPortAttributesReq 8
#define sz_xvPutImageReq 40
#define sz_xvShmPutImageReq 52
#define sz_xvListImageFormatsReq 8
#define sz_xvQueryImageAttributesReq 16
#define sz_xvQueryExtensionReply 32
#define sz_xvQueryAdaptorsReply 32
#define sz_xvQueryEncodingsReply 32
#define sz_xvGrabPortReply 32
#define sz_xvGetPortAttributeReply 32
#define sz_xvQueryBestSizeReply 32
#define sz_xvQueryPortAttributesReply 32
#define sz_xvListImageFormatsReply 32
#define sz_xvQueryImageAttributesReply 32
#undef XvPortID
#undef XvEncodingID
#undef ShmSeg
#undef VisualID
#undef Drawable
#undef GContext
#undef Time
#undef Atom
#endif
