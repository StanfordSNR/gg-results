// GGHASH:V_HrQFlDQLVo6YpEDQw4kzRBtFuZY9VBpoS.YPdBuncg000015f7
#ifndef _COMPOSITEPROTO_H_
#define _COMPOSITEPROTO_H_ 
#include <X11/Xmd.h>
#include <X11/extensions/composite.h>
#define Window CARD32
#define Region CARD32
#define Pixmap CARD32
#define sz_xCompositeQueryVersionReq 12
#define sz_xCompositeQueryVersionReply 32
#define sz_xCompositeRedirectWindowReq 12
#define sz_xCompositeRedirectSubwindowsReq 12
#define sz_xCompositeUnredirectWindowReq 12
#define sz_xCompositeUnredirectSubwindowsReq 12
#define sz_xCompositeCreateRegionFromBorderClipReq 12
#define sz_xCompositeNameWindowPixmapReq 12
#define sz_xCompositeGetOverlayWindowReq sizeof(xCompositeGetOverlayWindowReq)
#define sz_xCompositeGetOverlayWindowReply sizeof(xCompositeGetOverlayWindowReply)
#define sz_xCompositeReleaseOverlayWindowReq sizeof(xCompositeReleaseOverlayWindowReq)
#undef Window
#undef Region
#undef Pixmap
#endif
