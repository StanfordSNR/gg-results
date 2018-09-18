// GGHASH:VedJbS.ZkYlsA4veL4PZXsqseEUprlIsiZCvATlDbK9Y0000110c
#ifndef __GEGL_TILE_HANDLER_H__
#define __GEGL_TILE_HANDLER_H__ 
#include "gegl-tile-source.h"
#define GEGL_TYPE_TILE_HANDLER (gegl_tile_handler_get_type ())
#define GEGL_TILE_HANDLER(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GEGL_TYPE_TILE_HANDLER, GeglTileHandler))
#define GEGL_TILE_HANDLER_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), GEGL_TYPE_TILE_HANDLER, GeglTileHandlerClass))
#define GEGL_IS_TILE_HANDLER(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GEGL_TYPE_TILE_HANDLER))
#define GEGL_IS_TILE_HANDLER_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GEGL_TYPE_TILE_HANDLER))
#define GEGL_TILE_HANDLER_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), GEGL_TYPE_TILE_HANDLER, GeglTileHandlerClass))
#define gegl_tile_handler_get_source(handler) (((GeglTileHandler*)handler)->source)
#define gegl_tile_handler_source_command(handler,command,x,y,z,data) (gegl_tile_handler_get_source(handler)?gegl_tile_source_command(gegl_tile_handler_get_source(handler), command, x, y, z, data):NULL)
#endif
