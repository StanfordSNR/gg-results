// GGHASH:VRGvPsoVLpKqUG7S343K6hgbV7NGrMNQTzTdut37RBfA00003205
#ifndef _XRENDER_H_
#define _XRENDER_H_ 
#include <X11/Xlib.h>
#include <X11/Xfuncproto.h>
#include <X11/Xosdefs.h>
#include <X11/Xutil.h>
#include <X11/extensions/render.h>
#define PictFormatID (1 << 0)
#define PictFormatType (1 << 1)
#define PictFormatDepth (1 << 2)
#define PictFormatRed (1 << 3)
#define PictFormatRedMask (1 << 4)
#define PictFormatGreen (1 << 5)
#define PictFormatGreenMask (1 << 6)
#define PictFormatBlue (1 << 7)
#define PictFormatBlueMask (1 << 8)
#define PictFormatAlpha (1 << 9)
#define PictFormatAlphaMask (1 << 10)
#define PictFormatColormap (1 << 11)
#define XDoubleToFixed(f) ((XFixed) ((f) * 65536))
#define XFixedToDouble(f) (((XDouble) (f)) / 65536)
#define PictStandardARGB32 0
#define PictStandardRGB24 1
#define PictStandardA8 2
#define PictStandardA4 3
#define PictStandardA1 4
#define PictStandardNUM 5
#endif
