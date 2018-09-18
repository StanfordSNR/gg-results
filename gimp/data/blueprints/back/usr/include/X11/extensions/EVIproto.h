// GGHASH:VU4gcFD8mHjGIPOaq0AfmEMgD2ZyhBXLop6FuLrrVLRw00000c1e
#ifndef _EVIPROTO_H_
#define _EVIPROTO_H_ 
#include <X11/extensions/EVI.h>
#define X_EVIQueryVersion 0
#define X_EVIGetVisualInfo 1
#define VisualID CARD32
#define sz_VisualID32 4
#define sz_xExtendedVisualInfo 16
#define sz_xEVIQueryVersionReq 4
#define sz_xEVIQueryVersionReply 32
#define sz_xEVIGetVisualInfoReq 8
#define sz_xEVIGetVisualInfoReply 32
#undef VisualID
#endif
