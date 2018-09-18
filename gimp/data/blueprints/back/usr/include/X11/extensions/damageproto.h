// GGHASH:VRcayobTF3x6so1dI8fhll_VriZrkUGu_idtt2itP7ns00000e94
#ifndef _DAMAGEPROTO_H_
#define _DAMAGEPROTO_H_ 
#include <X11/Xmd.h>
#include <X11/extensions/xfixesproto.h>
#include <X11/extensions/damagewire.h>
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
#define Region CARD32
#define Damage CARD32
#define sz_xDamageQueryVersionReq 12
#define sz_xDamageQueryVersionReply 32
#define sz_xDamageCreateReq 16
#define sz_xDamageDestroyReq 8
#define sz_xDamageSubtractReq 16
#define sz_xDamageAddReq 12
#define DamageNotifyMore 0x80
#undef Damage
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
