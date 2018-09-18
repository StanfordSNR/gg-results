// GGHASH:VfkuCAkSBKR9A5NlaO_ziRXky3u3Fiv3LOkIBpXLOZAU00001b7a
#ifndef _SHAPEPROTO_H_
#define _SHAPEPROTO_H_ 
#include <X11/extensions/shapeconst.h>
#define Window CARD32
#define Time CARD32
#define X_ShapeQueryVersion 0
#define X_ShapeRectangles 1
#define X_ShapeMask 2
#define X_ShapeCombine 3
#define X_ShapeOffset 4
#define X_ShapeQueryExtents 5
#define X_ShapeSelectInput 6
#define X_ShapeInputSelected 7
#define X_ShapeGetRectangles 8
#define sz_xShapeQueryVersionReq 4
#define sz_xShapeQueryVersionReply 32
#define sz_xShapeRectanglesReq 16
#define sz_xShapeMaskReq 20
#define sz_xShapeCombineReq 20
#define sz_xShapeOffsetReq 16
#define sz_xShapeQueryExtentsReq 8
#define sz_xShapeQueryExtentsReply 32
#define sz_xShapeSelectInputReq 12
#define sz_xShapeNotifyEvent 32
#define sz_xShapeInputSelectedReq 8
#define sz_xShapeInputSelectedReply 32
#define sz_xShapeGetRectanglesReq 12
#define sz_xShapeGetRectanglesReply 32
#undef Window
#undef Time
#endif
