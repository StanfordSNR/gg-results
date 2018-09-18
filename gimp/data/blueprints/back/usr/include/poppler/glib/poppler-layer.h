// GGHASH:VLkDyFL4Qcghq0oSGSHUL0PAyTtN1SrDyihPsMdcMcok000006e9
#ifndef __POPPLER_LAYER_H__
#define __POPPLER_LAYER_H__ 
#include <glib-object.h>
#include "poppler.h"
#define POPPLER_TYPE_LAYER (poppler_layer_get_type ())
#define POPPLER_LAYER(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), POPPLER_TYPE_LAYER, PopplerLayer))
#define POPPLER_IS_LAYER(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), POPPLER_TYPE_LAYER))
#endif
