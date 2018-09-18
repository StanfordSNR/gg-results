// GGHASH:VNKZMSlZfM.b76sOM22Z8Wthi.39vmuCBiz_uCQify_c00002325
#ifndef _MULTIBUFPROTO_H_
#define _MULTIBUFPROTO_H_ 
#include <X11/extensions/multibufconst.h>
#define Window CARD32
#define Drawable CARD32
#define VisualID CARD32
#define Multibuffer CARD32
#define X_MbufGetBufferVersion 0
#define X_MbufCreateImageBuffers 1
#define X_MbufDestroyImageBuffers 2
#define X_MbufDisplayImageBuffers 3
#define X_MbufSetMBufferAttributes 4
#define X_MbufGetMBufferAttributes 5
#define X_MbufSetBufferAttributes 6
#define X_MbufGetBufferAttributes 7
#define X_MbufGetBufferInfo 8
#define X_MbufCreateStereoWindow 9
#define X_MbufClearImageBufferArea 10
#define sz_xMbufBufferInfo 8
#define sz_xMbufGetBufferVersionReq 4
#define sz_xMbufGetBufferVersionReply 32
#define sz_xMbufCreateImageBuffersReq 12
#define sz_xMbufCreateImageBuffersReply 32
#define sz_xMbufDestroyImageBuffersReq 8
#define sz_xMbufDisplayImageBuffersReq 8
#define sz_xMbufSetMBufferAttributesReq 12
#define sz_xMbufGetMBufferAttributesReq 8
#define sz_xMbufGetMBufferAttributesReply 32
#define sz_xMbufSetBufferAttributesReq 12
#define sz_xMbufGetBufferAttributesReq 8
#define sz_xMbufGetBufferAttributesReply 32
#define sz_xMbufGetBufferInfoReq 8
#define sz_xMbufGetBufferInfoReply 32
#if defined(__cplusplus) || defined(c_plusplus)
#else
#endif
#define sz_xMbufCreateStereoWindowReq 44
#define sz_xMbufClearImageBufferAreaReq 20
#undef Window
#undef Drawable
#undef VisualID
#undef Multibuffer
#endif
