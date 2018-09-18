// GGHASH:V0g.N_SuhAU807rtGZIE4_EsE2to4NePYrTSR0a17CaE0000143a
#ifndef _AGPROTO_H_
#define _AGPROTO_H_ 
#include <X11/extensions/ag.h>
#define X_XagQueryVersion 0
#define X_XagCreate 1
#define X_XagDestroy 2
#define X_XagGetAttr 3
#define X_XagQuery 4
#define X_XagCreateAssoc 5
#define X_XagDestroyAssoc 6
#define XAppGroup CARD32
#define Colormap CARD32
#define VisualID CARD32
#define Window CARD32
#define sz_xXagQueryVersionReq 8
#define sz_xXagQueryVersionReply 32
#define XagSingleScreenMask 1 << 0
#define XagDefaultRootMask 1 << XagNdefaultRoot
#define XagRootVisualMask 1 << XagNrootVisual
#define XagDefaultColormapMask 1 << XagNdefaultColormap
#define XagBlackPixelMask 1 << XagNblackPixel
#define XagWhitePixelMask 1 << XagNwhitePixel
#define XagAppGroupLeaderMask 1 << XagNappGroupLeader
#define sz_xXagCreateReq 12
#define sz_xXagDestroyReq 8
#define sz_xXagGetAttrReq 8
#define sz_xXagGetAttrReply 32
#define sz_xXagQueryReq 8
#define sz_xXagQueryReply 32
#define sz_xXagCreateAssocReq 12
#define sz_xXagDestroyAssocReq 8
#undef XAppGroup
#undef Window
#undef Colormap
#undef VisualID
#endif
