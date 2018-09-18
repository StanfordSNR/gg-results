// GGHASH:VwtyBEetDJaQ52RGSxmgn4enJraSXTUU_JC3NMKutagU00000df9
#ifndef CAIRO_XLIB_H
#define CAIRO_XLIB_H 
#include "cairo.h"
#if CAIRO_HAS_XLIB_SURFACE
#include <X11/Xlib.h>
#else
# error Cairo was not compiled with support for the xlib backend
#endif
#endif
