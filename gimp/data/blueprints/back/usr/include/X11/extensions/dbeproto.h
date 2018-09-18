// GGHASH:VrzHI3DyrhtZUYdpbdnJoa9v3R6cSM7vBEuKUVfSnZb000001d47
#ifndef DBE_PROTO_H
#define DBE_PROTO_H 
#include <X11/extensions/dbe.h>
#define X_DbeGetVersion 0
#define X_DbeAllocateBackBufferName 1
#define X_DbeDeallocateBackBufferName 2
#define X_DbeSwapBuffers 3
#define X_DbeBeginIdiom 4
#define X_DbeEndIdiom 5
#define X_DbeGetVisualInfo 6
#define X_DbeGetBackBufferAttributes 7
#define sz_xDbeVisInfo 8
#define sz_xDbeGetVersionReq 8
#define sz_xDbeGetVersionReply 32
#define sz_xDbeAllocateBackBufferNameReq 16
#define sz_xDbeDeallocateBackBufferNameReq 8
#define sz_xDbeSwapBuffersReq 8
#define sz_xDbeBeginIdiomReq 4
#define sz_xDbeEndIdiomReq 4
#define sz_xDbeGetVisualInfoReq 8
#define sz_xDbeGetVisualInfoReply 32
#define sz_xDbeGetBackBufferAttributesReq 8
#define sz_xDbeGetBackBufferAttributesReply 32
#endif
