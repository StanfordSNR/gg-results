// GGHASH:V7ab4F1sK21eHqXiddOLDeNCk7qxCeiBSxViDA.BtkgY00005369
#ifndef _X11_XUTIL_H_
#define _X11_XUTIL_H_ 
#include <X11/Xlib.h>
#include <X11/keysym.h>
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wpadded"
#endif
#define NoValue 0x0000
#define XValue 0x0001
#define YValue 0x0002
#define WidthValue 0x0004
#define HeightValue 0x0008
#define AllValues 0x000F
#define XNegative 0x0010
#define YNegative 0x0020
#define USPosition (1L << 0)
#define USSize (1L << 1)
#define PPosition (1L << 2)
#define PSize (1L << 3)
#define PMinSize (1L << 4)
#define PMaxSize (1L << 5)
#define PResizeInc (1L << 6)
#define PAspect (1L << 7)
#define PBaseSize (1L << 8)
#define PWinGravity (1L << 9)
#define PAllHints (PPosition|PSize|PMinSize|PMaxSize|PResizeInc|PAspect)
#define InputHint (1L << 0)
#define StateHint (1L << 1)
#define IconPixmapHint (1L << 2)
#define IconWindowHint (1L << 3)
#define IconPositionHint (1L << 4)
#define IconMaskHint (1L << 5)
#define WindowGroupHint (1L << 6)
#define AllHints (InputHint|StateHint|IconPixmapHint|IconWindowHint| IconPositionHint|IconMaskHint|WindowGroupHint)
#define XUrgencyHint (1L << 8)
#define WithdrawnState 0
#define NormalState 1
#define IconicState 3
#define DontCareState 0
#define ZoomState 2
#define InactiveState 4
#define XNoMemory -1
#define XLocaleNotSupported -2
#define XConverterNotFound -3
#ifdef XUTIL_DEFINE_FUNCTIONS
#else
#define XDestroyImage(ximage) ((*((ximage)->f.destroy_image))((ximage)))
#define XGetPixel(ximage,x,y) ((*((ximage)->f.get_pixel))((ximage), (x), (y)))
#define XPutPixel(ximage,x,y,pixel) ((*((ximage)->f.put_pixel))((ximage), (x), (y), (pixel)))
#define XSubImage(ximage,x,y,width,height) ((*((ximage)->f.sub_image))((ximage), (x), (y), (width), (height)))
#define XAddPixel(ximage,value) ((*((ximage)->f.add_pixel))((ximage), (value)))
#endif
#define IsKeypadKey(keysym) (((KeySym)(keysym) >= XK_KP_Space) && ((KeySym)(keysym) <= XK_KP_Equal))
#define IsPrivateKeypadKey(keysym) (((KeySym)(keysym) >= 0x11000000) && ((KeySym)(keysym) <= 0x1100FFFF))
#define IsCursorKey(keysym) (((KeySym)(keysym) >= XK_Home) && ((KeySym)(keysym) < XK_Select))
#define IsPFKey(keysym) (((KeySym)(keysym) >= XK_KP_F1) && ((KeySym)(keysym) <= XK_KP_F4))
#define IsFunctionKey(keysym) (((KeySym)(keysym) >= XK_F1) && ((KeySym)(keysym) <= XK_F35))
#define IsMiscFunctionKey(keysym) (((KeySym)(keysym) >= XK_Select) && ((KeySym)(keysym) <= XK_Break))
#ifdef XK_XKB_KEYS
#define IsModifierKey(keysym) ((((KeySym)(keysym) >= XK_Shift_L) && ((KeySym)(keysym) <= XK_Hyper_R)) || (((KeySym)(keysym) >= XK_ISO_Lock) && ((KeySym)(keysym) <= XK_ISO_Level5_Lock)) || ((KeySym)(keysym) == XK_Mode_switch) || ((KeySym)(keysym) == XK_Num_Lock))
#else
#define IsModifierKey(keysym) ((((KeySym)(keysym) >= XK_Shift_L) && ((KeySym)(keysym) <= XK_Hyper_R)) || ((KeySym)(keysym) == XK_Mode_switch) || ((KeySym)(keysym) == XK_Num_Lock))
#endif
#define RectangleOut 0
#define RectangleIn 1
#define RectanglePart 2
#if defined(__cplusplus) || defined(c_plusplus)
#else
#endif
#define VisualNoMask 0x0
#define VisualIDMask 0x1
#define VisualScreenMask 0x2
#define VisualDepthMask 0x4
#define VisualClassMask 0x8
#define VisualRedMaskMask 0x10
#define VisualGreenMaskMask 0x20
#define VisualBlueMaskMask 0x40
#define VisualColormapSizeMask 0x80
#define VisualBitsPerRGBMask 0x100
#define VisualAllMask 0x1FF
#define ReleaseByFreeingColormap ((XID) 1L)
#define BitmapSuccess 0
#define BitmapOpenFailed 1
#define BitmapFileInvalid 2
#define BitmapNoMemory 3
#define XCSUCCESS 0
#define XCNOMEM 1
#define XCNOENT 2
#define XUniqueContext() ((XContext) XrmUniqueQuark())
#define XStringToContext(string) ((XContext) XrmStringToQuark(string))
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif
