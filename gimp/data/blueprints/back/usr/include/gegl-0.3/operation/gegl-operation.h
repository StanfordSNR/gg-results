// GGHASH:VvI7gEZdgTeTeuydi1j2I73r41XIyRegWuYzw2mj14FI00003396
#ifndef __GEGL_OPERATION_H__
#define __GEGL_OPERATION_H__ 
#include <glib-object.h>
#include <babl/babl.h>
#include "gegl-buffer.h"
#include "opencl/gegl-cl.h"
#define GEGL_OPERATION_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), GEGL_TYPE_OPERATION, GeglOperationClass))
#define GEGL_IS_OPERATION_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GEGL_TYPE_OPERATION))
#define GEGL_OPERATION_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), GEGL_TYPE_OPERATION, GeglOperationClass))
#endif
