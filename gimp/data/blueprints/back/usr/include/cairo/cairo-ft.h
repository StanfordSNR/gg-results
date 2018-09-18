// GGHASH:VSJ90qFIzn8BOsR4m3dIlNuAUeWfqZ7MB9mNuIbt8Ffo00000e89
#ifndef CAIRO_FT_H
#define CAIRO_FT_H 
#include "cairo.h"
#if CAIRO_HAS_FT_FONT
#include <ft2build.h>
#include FT_FREETYPE_H
#if CAIRO_HAS_FC_FONT
#include <fontconfig/fontconfig.h>
#endif
#if CAIRO_HAS_FC_FONT
#endif
#else
# error Cairo was not compiled with support for the freetype font backend
#endif
#endif
