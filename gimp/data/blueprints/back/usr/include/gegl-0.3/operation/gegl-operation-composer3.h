// GGHASH:VjTddjTjN2b0BBoU1KN7rXD9RsA6okvkxl7kdeDnye8Q0000097c
#ifndef __GEGL_OPERATION_COMPOSER3_H__
#define __GEGL_OPERATION_COMPOSER3_H__ 
#include "gegl-operation.h"
#define GEGL_TYPE_OPERATION_COMPOSER3 (gegl_operation_composer3_get_type ())
#define GEGL_OPERATION_COMPOSER3(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GEGL_TYPE_OPERATION_COMPOSER3, GeglOperationComposer3))
#define GEGL_OPERATION_COMPOSER3_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), GEGL_TYPE_OPERATION_COMPOSER3, GeglOperationComposer3Class))
#define GEGL_IS_OPERATION_COMPOSER3(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GEGL_TYPE_OPERATION_COMPOSER3))
#define GEGL_IS_OPERATION_COMPOSER3_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GEGL_TYPE_OPERATION_COMPOSER3))
#define GEGL_OPERATION_COMPOSER3_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), GEGL_TYPE_OPERATION_COMPOSER3, GeglOperationComposer3Class))
#endif