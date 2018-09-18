// GGHASH:V21v0w8nbhSusUz31SXnmt8x1JzJPNIWCy2adlAyDT5M00000984
#ifndef CAIRO_XLIB_XRENDER_H
#define CAIRO_XLIB_XRENDER_H 
#include "cairo.h"
#if CAIRO_HAS_XLIB_XRENDER_SURFACE
#include <X11/Xlib.h>
#include <X11/extensions/Xrender.h>
#else
# error Cairo was not compiled with support for the xlib XRender backend
#endif
#endif
