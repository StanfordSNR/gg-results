// GGHASH:VrKYC3RupVU2wGDee4r0Yk.sgszc2Ugay9GEfWg6NakM00002108
#ifndef _APPLEWMPROTO_H_
#define _APPLEWMPROTO_H_ 
#include <X11/extensions/applewmconst.h>
#include <X11/X.h>
#include <X11/Xmd.h>
#define APPLEWMNAME "Apple-WM"
#define APPLE_WM_MAJOR_VERSION 1
#define APPLE_WM_MINOR_VERSION 3
#define APPLE_WM_PATCH_VERSION 0
#define X_AppleWMQueryVersion 0
#define X_AppleWMFrameGetRect 1
#define X_AppleWMFrameHitTest 2
#define X_AppleWMFrameDraw 3
#define X_AppleWMDisableUpdate 4
#define X_AppleWMReenableUpdate 5
#define X_AppleWMSelectInput 6
#define X_AppleWMSetWindowMenuCheck 7
#define X_AppleWMSetFrontProcess 8
#define X_AppleWMSetWindowLevel 9
#define X_AppleWMSetCanQuit 10
#define X_AppleWMSetWindowMenu 11
#define X_AppleWMSendPSN 12
#define X_AppleWMAttachTransient 13
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
#define sz_xAppleWMQueryVersionReq 4
#define sz_xAppleWMQueryVersionReply 32
#define sz_xAppleWMDisableUpdateReq 8
#define sz_xAppleWMReenableUpdateReq 8
#define sz_xAppleWMSelectInputReq 8
#define sz_xAppleWMNotifyEvent 32
#define sz_xAppleWMSetWindowMenuReq 8
#define sz_xAppleWMSetWindowMenuCheckReq 8
#define sz_xAppleWMSetFrontProcessReq 4
#define sz_xAppleWMSetWindowLevelReq 12
#define sz_xAppleWMSendPSNReq 12
#define sz_xAppleWMAttachTransientReq 12
#define sz_xAppleWMSetCanQuitReq 8
#define sz_xAppleWMFrameGetRectReq 24
#define sz_xAppleWMFrameGetRectReply 32
#define sz_xAppleWMFrameHitTestReq 28
#define sz_xAppleWMFrameHitTestReply 32
#define sz_xAppleWMFrameDrawReq 36
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
