// GGHASH:V5MgxiARtmEv95r8Ch.zwSjoMeqf8RJtTJBh4AKf3Q4c000019da
#ifndef __GEGL_CURVE_H__
#define __GEGL_CURVE_H__ 
#include <glib-object.h>
#define GEGL_TYPE_CURVE (gegl_curve_get_type ())
#define GEGL_CURVE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GEGL_TYPE_CURVE, GeglCurve))
#define GEGL_CURVE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), GEGL_TYPE_CURVE, GeglCurveClass))
#define GEGL_IS_CURVE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GEGL_TYPE_CURVE))
#define GEGL_IS_CURVE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GEGL_TYPE_CURVE))
#define GEGL_CURVE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), GEGL_TYPE_CURVE, GeglCurveClass))
#define GEGL_TYPE_PARAM_CURVE (gegl_param_curve_get_type ())
#define GEGL_IS_PARAM_SPEC_CURVE(pspec) (G_TYPE_CHECK_INSTANCE_TYPE ((pspec), GEGL_TYPE_PARAM_CURVE))
#endif
