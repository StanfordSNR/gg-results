// GGHASH:VGUG5d_5RgIdFoiQkMN7XoHgY_y4nttwW_fh_fEEb03w00000ebf
#ifndef CAIRO_XCB_H
#define CAIRO_XCB_H 
#include "cairo.h"
#if CAIRO_HAS_XCB_SURFACE
#include <xcb/xcb.h>
#include <xcb/render.h>
#else
# error Cairo was not compiled with support for the xcb backend
#endif
#endif
