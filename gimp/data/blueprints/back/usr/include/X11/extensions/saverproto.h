// GGHASH:VA54XD6BiLKaViONxZpfDlFVk716NV8gPBRdocv7kWIQ00001490
#ifndef _SAVERPROTO_H_
#define _SAVERPROTO_H_ 
#include <X11/extensions/saver.h>
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
#define X_ScreenSaverQueryVersion 0
#define sz_xScreenSaverQueryVersionReq 8
#define sz_xScreenSaverQueryVersionReply 32
#define X_ScreenSaverQueryInfo 1
#define sz_xScreenSaverQueryInfoReq 8
#define sz_xScreenSaverQueryInfoReply 32
#define X_ScreenSaverSelectInput 2
#define sz_xScreenSaverSelectInputReq 12
#define X_ScreenSaverSetAttributes 3
#define sz_xScreenSaverSetAttributesReq 28
#define X_ScreenSaverUnsetAttributes 4
#define sz_xScreenSaverUnsetAttributesReq 8
#define X_ScreenSaverSuspend 5
#define sz_xScreenSaverSuspendReq 8
#define sz_xScreenSaverNotifyEvent 32
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
