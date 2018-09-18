// GGHASH:VkkkF5yWU6bo8piagKRy9400ecxg76QySZRdcgXFxy98000036a5
#ifndef _XRENDERP_H_
#define _XRENDERP_H_ 
#include <X11/Xmd.h>
#include <X11/extensions/render.h>
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
#define PictFormat CARD32
#define Fixed INT32
#define Glyphset CARD32
#define sz_xDirectFormat 16
#define sz_xPictFormInfo 28
#define sz_xPictVisual 8
#define sz_xPictDepth 8
#define sz_xPictScreen 8
#define sz_xIndexValue 12
#define sz_xRenderColor 8
#define sz_xPointFixed 8
#define sz_xLineFixed 16
#define sz_xTriangle 24
#define sz_xTrapezoid 40
#define sz_xGlyphInfo 12
#define sz_xGlyphElt 8
#define sz_xSpanFix 12
#define sz_xTrap 24
#define sz_xRenderQueryVersionReq 12
#define sz_xRenderQueryVersionReply 32
#define sz_xRenderQueryPictFormatsReq 4
#define sz_xRenderQueryPictFormatsReply 32
#define sz_xRenderQueryPictIndexValuesReq 8
#define sz_xRenderQueryPictIndexValuesReply 32
#define sz_xRenderCreatePictureReq 20
#define sz_xRenderChangePictureReq 12
#define sz_xRenderSetPictureClipRectanglesReq 12
#define sz_xRenderFreePictureReq 8
#define sz_xRenderCompositeReq 36
#define sz_xRenderScaleReq 32
#define sz_xRenderTrapezoidsReq 24
#define sz_xRenderTrianglesReq 24
#define sz_xRenderTriStripReq 24
#define sz_xRenderTriFanReq 24
#define sz_xRenderCreateGlyphSetReq 12
#define sz_xRenderReferenceGlyphSetReq 24
#define sz_xRenderFreeGlyphSetReq 8
#define sz_xRenderAddGlyphsReq 12
#define sz_xRenderFreeGlyphsReq 8
#define sz_xRenderCompositeGlyphs8Req 28
#define sz_xRenderCompositeGlyphs16Req 28
#define sz_xRenderCompositeGlyphs32Req 28
#define sz_xRenderFillRectanglesReq 20
#define sz_xRenderCreateCursorReq 16
#define sz_xRenderTransform 36
#define sz_xRenderSetPictureTransformReq 44
#define sz_xRenderQueryFiltersReq 8
#define sz_xRenderQueryFiltersReply 32
#define sz_xRenderSetPictureFilterReq 12
#define sz_xAnimCursorElt 8
#define sz_xRenderCreateAnimCursorReq 8
#define sz_xRenderAddTrapsReq 12
#define sz_xRenderCreateSolidFillReq 16
#define sz_xRenderCreateLinearGradientReq 28
#define sz_xRenderCreateRadialGradientReq 36
#define sz_xRenderCreateConicalGradientReq 24
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
#undef Picture
#undef PictFormat
#undef Fixed
#undef Glyphset
#endif
