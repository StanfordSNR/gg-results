// GGHASH:V8BOnZ0bVcFcffa297MOwyw7V1198aQt9T9ajiwKzJRU000009d0
#ifndef __GEGL_OPERATION_COMPOSER_H__
#define __GEGL_OPERATION_COMPOSER_H__ 
#include "gegl-operation.h"
#define GEGL_TYPE_OPERATION_COMPOSER (gegl_operation_composer_get_type ())
#define GEGL_OPERATION_COMPOSER(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GEGL_TYPE_OPERATION_COMPOSER, GeglOperationComposer))
#define GEGL_OPERATION_COMPOSER_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), GEGL_TYPE_OPERATION_COMPOSER, GeglOperationComposerClass))
#define GEGL_IS_OPERATION_COMPOSER(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GEGL_TYPE_OPERATION_COMPOSER))
#define GEGL_IS_OPERATION_COMPOSER_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GEGL_TYPE_OPERATION_COMPOSER))
#define GEGL_OPERATION_COMPOSER_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), GEGL_TYPE_OPERATION_COMPOSER, GeglOperationComposerClass))
#endif
