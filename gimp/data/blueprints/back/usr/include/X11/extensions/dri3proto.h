// GGHASH:Vwvf_3HpS1iboQ2jZuU9zRYLPxDXPxrXzgZ5UyuMJFC400001959
#ifndef _DRI3_PROTO_H_
#define _DRI3_PROTO_H_ 
#define DRI3_NAME "DRI3"
#define DRI3_MAJOR 1
#define DRI3_MINOR 2
#define DRI3NumberErrors 0
#define DRI3NumberEvents 0
#define X_DRI3QueryVersion 0
#define X_DRI3Open 1
#define X_DRI3PixmapFromBuffer 2
#define X_DRI3BufferFromPixmap 3
#define X_DRI3FenceFromFD 4
#define X_DRI3FDFromFence 5
#define xDRI3GetSupportedModifiers 6
#define xDRI3PixmapFromBuffers 7
#define xDRI3BuffersFromPixmap 8
#define DRI3NumberRequests 9
#define sz_xDRI3QueryVersionReq 12
#define sz_xDRI3QueryVersionReply 32
#define sz_xDRI3OpenReq 12
#define sz_xDRI3OpenReply 32
#define sz_xDRI3PixmapFromBufferReq 24
#define sz_xDRI3BufferFromPixmapReq 8
#define sz_xDRI3BufferFromPixmapReply 32
#define sz_xDRI3FenceFromFDReq 16
#define sz_xDRI3FDFromFenceReq 12
#define sz_xDRI3FDFromFenceReply 32
#define sz_xDRI3GetSupportedModifiersReq 12
#define sz_xDRI3GetSupportedModifiersReply 32
#define sz_xDRI3PixmapFromBuffersReq 64
#define sz_xDRI3BuffersFromPixmapReq 8
#define sz_xDRI3BuffersFromPixmapReply 32
#endif
