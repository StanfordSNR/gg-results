// GGHASH:VZ0kl4B7Ikx1RQjDpMgNRos7vhBGlLr2B46upHVEfKQI00001117
#ifndef __GEGL_TYPES_H__
#define __GEGL_TYPES_H__ 
#include <glib-object.h>
#include "gegl-enums.h"
#define GEGL_AUTO_ROWSTRIDE 0
#define GEGL_TYPE_CONFIG (gegl_config_get_type ())
#define GEGL_CONFIG(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GEGL_TYPE_CONFIG, GeglConfig))
#define GEGL_IS_CONFIG(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GEGL_TYPE_CONFIG))
#define GEGL_TYPE_STATS (gegl_stats_get_type ())
#define GEGL_STATS(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GEGL_TYPE_STATS, GeglStats))
#define GEGL_IS_STATS(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GEGL_TYPE_STATS))
#define GEGL_TYPE_RECTANGLE (gegl_rectangle_get_type())
#define GEGL_RECTANGLE(x,y,w,h) (&((GeglRectangle){(x), (y), (w), (h)}))
#define GEGL_TYPE_BUFFER (gegl_buffer_get_type ())
#define GEGL_BUFFER(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GEGL_TYPE_BUFFER, GeglBuffer))
#define GEGL_IS_BUFFER(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GEGL_TYPE_BUFFER))
#define GEGL_TYPE_OPERATION (gegl_operation_get_type ())
#define GEGL_OPERATION(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GEGL_TYPE_OPERATION, GeglOperation))
#define GEGL_IS_OPERATION(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GEGL_TYPE_OPERATION))
#define GEGL_TYPE_NODE (gegl_node_get_type())
#define GEGL_NODE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GEGL_TYPE_NODE, GeglNode))
#define GEGL_IS_NODE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GEGL_TYPE_NODE))
#define GEGL_TYPE_PROCESSOR (gegl_processor_get_type())
#define GEGL_PROCESSOR(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GEGL_TYPE_PROCESSOR, GeglProcessor))
#define GEGL_IS_PROCESSOR(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GEGL_TYPE_PROCESSOR))
#define GEGL_TYPE_RANDOM (gegl_random_get_type())
#endif
