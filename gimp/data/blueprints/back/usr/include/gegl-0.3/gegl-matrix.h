// GGHASH:VRsEqD1uePf3hggxZYcvxFa5mVkurbFm21oyGlK5c7bI00001785
#ifndef __GEGL_MATRIX_H__
#define __GEGL_MATRIX_H__ 
#include <glib.h>
#include <glib-object.h>
#define GEGL_TYPE_MATRIX3 (gegl_matrix3_get_type ())
#define GEGL_VALUE_HOLDS_MATRIX3(value) (G_TYPE_CHECK_VALUE_TYPE ((value), GEGL_TYPE_MATRIX3))
#endif
