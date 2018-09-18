// GGHASH:Vtxtz2M_7Ct0hLmErSsbw8oz7EdJ8aFMkCQ_3F7t1AjQ000018ce
#ifndef _SHMPROTO_H_
#define _SHMPROTO_H_ 
#include <X11/extensions/shm.h>
#define ShmSeg CARD32
#define Drawable CARD32
#define VisualID CARD32
#define GContext CARD32
#define Pixmap CARD32
#define X_ShmQueryVersion 0
#define X_ShmAttach 1
#define X_ShmDetach 2
#define X_ShmPutImage 3
#define X_ShmGetImage 4
#define X_ShmCreatePixmap 5
#define X_ShmAttachFd 6
#define X_ShmCreateSegment 7
#define sz_xShmQueryVersionReq 4
#define sz_xShmQueryVersionReply 32
#define sz_xShmAttachReq 16
#define sz_xShmDetachReq 8
#define sz_xShmPutImageReq 40
#define sz_xShmGetImageReq 32
#define sz_xShmGetImageReply 32
#define sz_xShmCreatePixmapReq 28
#define sz_xShmCompletionEvent 32
#define sz_xShmAttachFdReq 12
#define sz_xShmCreateSegmentReq 16
#define sz_xShmCreateSegmentReply 32
#undef ShmSeg
#undef Drawable
#undef VisualID
#undef GContext
#undef Pixmap
#endif
