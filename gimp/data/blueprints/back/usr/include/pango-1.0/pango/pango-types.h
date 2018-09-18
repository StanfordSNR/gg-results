// GGHASH:Vwpzv0vxZg0__KVfCOfHea3TQ2vQXII1mhI9EKhE.my000001761
#ifndef __PANGO_TYPES_H__
#define __PANGO_TYPES_H__ 
#include <glib.h>
#include <glib-object.h>
#include <pango/pango-version-macros.h>
#define PANGO_SCALE 1024
#define PANGO_PIXELS(d) (((int)(d) + 512) >> 10)
#define PANGO_PIXELS_FLOOR(d) (((int)(d)) >> 10)
#define PANGO_PIXELS_CEIL(d) (((int)(d) + 1023) >> 10)
#define PANGO_UNITS_ROUND(d) (((d) + (PANGO_SCALE >> 1)) & ~(PANGO_SCALE - 1))
#define PANGO_ASCENT(rect) (-(rect).y)
#define PANGO_DESCENT(rect) ((rect).y + (rect).height)
#define PANGO_LBEARING(rect) ((rect).x)
#define PANGO_RBEARING(rect) ((rect).x + (rect).width)
#include <pango/pango-gravity.h>
#include <pango/pango-language.h>
#include <pango/pango-matrix.h>
#include <pango/pango-script.h>
#include <pango/pango-bidi-type.h>
#endif
