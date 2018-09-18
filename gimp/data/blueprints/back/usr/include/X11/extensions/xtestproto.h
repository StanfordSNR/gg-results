// GGHASH:VrAkNEnI2nH38BMLguWUERwM4ktXXZG1H6oYI3Sk45Ak00000d3a
#ifndef _XTESTPROTO_H_
#define _XTESTPROTO_H_ 
#include <X11/extensions/xtestconst.h>
#define Window CARD32
#define Time CARD32
#define Cursor CARD32
#define X_XTestGetVersion 0
#define X_XTestCompareCursor 1
#define X_XTestFakeInput 2
#define X_XTestGrabControl 3
#define sz_xXTestGetVersionReq 8
#define sz_xXTestGetVersionReply 32
#define sz_xXTestCompareCursorReq 12
#define sz_xXTestCompareCursorReply 32
#define sz_xXTestFakeInputReq 36
#define sz_xXTestGrabControlReq 8
#undef Window
#undef Time
#undef Cursor
#endif
