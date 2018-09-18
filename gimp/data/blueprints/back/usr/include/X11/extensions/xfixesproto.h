// GGHASH:VnBbZgaeywDEKerFEUY..6WpxdbtZ48KCoQszTTfC54o00003476
#ifndef _XFIXESPROTO_H_
#define _XFIXESPROTO_H_ 
#include <X11/Xmd.h>
#include <X11/extensions/xfixeswire.h>
#include <X11/extensions/shapeconst.h>
#define Window CARD32
#define Drawable CARD32
#define Font CARD32
#define Pixmap CARD32
#define Cursor CARD32
#define Colormap CARD32
#define GContext CARD32
#define Atom CARD32
#define VisualID CARD32
#define Time CARD32
#define KeyCode CARD8
#define KeySym CARD32
#define Picture CARD32
#define sz_xXFixesQueryVersionReq 12
#define sz_xXFixesQueryVersionReply 32
#define sz_xXFixesChangeSaveSetReq 12
#define sz_xXFixesSelectSelectionInputReq 16
#define sz_xXFixesSelectCursorInputReq 12
#define sz_xXFixesGetCursorImageReq 4
#define sz_xXFixesGetCursorImageReply 32
#define Region CARD32
#define sz_xXFixesCreateRegionReq 8
#define sz_xXFixesCreateRegionFromBitmapReq 12
#define sz_xXFixesCreateRegionFromWindowReq 16
#define sz_xXFixesCreateRegionFromGCReq 12
#define sz_xXFixesCreateRegionFromPictureReq 12
#define sz_xXFixesDestroyRegionReq 8
#define sz_xXFixesSetRegionReq 8
#define sz_xXFixesCopyRegionReq 12
#define sz_xXFixesCombineRegionReq 16
#define sz_xXFixesUnionRegionReq sz_xXFixesCombineRegionReq
#define sz_xXFixesIntersectRegionReq sz_xXFixesCombineRegionReq
#define sz_xXFixesSubtractRegionReq sz_xXFixesCombineRegionReq
#define sz_xXFixesInvertRegionReq 20
#define sz_xXFixesTranslateRegionReq 12
#define sz_xXFixesRegionExtentsReq 12
#define sz_xXFixesFetchRegionReq 8
#define sz_xXFixesFetchRegionReply 32
#define sz_xXFixesSetGCClipRegionReq 16
#define sz_xXFixesSetWindowShapeRegionReq 20
#define sz_xXFixesSetPictureClipRegionReq 16
#define sz_xXFixesSetCursorNameReq 12
#define sz_xXFixesGetCursorNameReq 8
#define sz_xXFixesGetCursorNameReply 32
#define sz_xXFixesGetCursorImageAndNameReq 4
#define sz_xXFixesGetCursorImageAndNameReply 32
#define sz_xXFixesChangeCursorReq 12
#define sz_xXFixesChangeCursorByNameReq 12
#define sz_xXFixesExpandRegionReq 20
#define sz_xXFixesHideCursorReq sizeof(xXFixesHideCursorReq)
#define sz_xXFixesShowCursorReq sizeof(xXFixesShowCursorReq)
#define Barrier CARD32
#define sz_xXFixesCreatePointerBarrierReq 28
#define sz_xXFixesDestroyPointerBarrierReq 8
#undef Barrier
#undef Region
#undef Picture
#undef Window
#undef Drawable
#undef Font
#undef Pixmap
#undef Cursor
#undef Colormap
#undef GContext
#undef Atom
#undef VisualID
#undef Time
#undef KeyCode
#undef KeySym
#endif
