// GGHASH:Vxjv6WONs.xuXjXzjnYwu.jYFLbbSTFEVOWQdNL8x3_w00001c81
#ifndef __GEGL_TILE_SOURCE_H__
#define __GEGL_TILE_SOURCE_H__ 
#include <glib-object.h>
#include <babl/babl.h>
#include "gegl-tile.h"
#define GEGL_TYPE_TILE_SOURCE (gegl_tile_source_get_type ())
#define GEGL_TILE_SOURCE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GEGL_TYPE_TILE_SOURCE, GeglTileSource))
#define GEGL_TILE_SOURCE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), GEGL_TYPE_TILE_SOURCE, GeglTileSourceClass))
#define GEGL_IS_TILE_SOURCE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GEGL_TYPE_TILE_SOURCE))
#define GEGL_IS_TILE_SOURCE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GEGL_TYPE_TILE_SOURCE))
#define GEGL_TILE_SOURCE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), GEGL_TYPE_TILE_SOURCE, GeglTileSourceClass))
#endif
