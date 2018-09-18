// GGHASH:V6ozv3b.YGFzvfGVDYgx4zD8S0G334ASpO6H93I6qcts00001153
#ifndef __PANGO_GRAVITY_H__
#define __PANGO_GRAVITY_H__ 
#include <glib.h>
#define PANGO_GRAVITY_IS_VERTICAL(gravity) ((gravity) == PANGO_GRAVITY_EAST || (gravity) == PANGO_GRAVITY_WEST)
#define PANGO_GRAVITY_IS_IMPROPER(gravity) ((gravity) == PANGO_GRAVITY_WEST || (gravity) == PANGO_GRAVITY_NORTH)
#include <pango/pango-matrix.h>
#include <pango/pango-script.h>
#endif
