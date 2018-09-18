// GGHASH:VNM825YEC.bPXR92awOOzlMNQ9ALsUwqJUC.0tjp8kRQ00001b56
#ifndef __GEGL_COLOR_H__
#define __GEGL_COLOR_H__ 
#include <glib-object.h>
#define GEGL_TYPE_COLOR (gegl_color_get_type ())
#define GEGL_COLOR(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GEGL_TYPE_COLOR, GeglColor))
#define GEGL_COLOR_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), GEGL_TYPE_COLOR, GeglColorClass))
#define GEGL_IS_COLOR(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GEGL_TYPE_COLOR))
#define GEGL_IS_COLOR_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GEGL_TYPE_COLOR))
#define GEGL_COLOR_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), GEGL_TYPE_COLOR, GeglColorClass))
#define GEGL_TYPE_PARAM_COLOR (gegl_param_color_get_type ())
#define GEGL_IS_PARAM_SPEC_COLOR(pspec) (G_TYPE_CHECK_INSTANCE_TYPE ((pspec), GEGL_TYPE_PARAM_COLOR))
#endif
