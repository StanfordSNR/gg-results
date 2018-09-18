// GGHASH:VX0qF4bFzymEc2IC6RYUps68yqBE_6qdfigQNDHOtPHM00000b1f
#ifndef __GEGL_PLUGIN_H__
#define __GEGL_PLUGIN_H__ 
#ifdef HAVE_CONFIG_H
#include "config.h"
#endif
#include <string.h>
#include <glib-object.h>
#include <gmodule.h>
#include <gegl.h>
#include <gegl-types.h>
#include <gegl-paramspecs.h>
#include <gegl-audio-fragment.h>
#define GEGL_MODULE_ABI_VERSION 0x000A
#include <operation/gegl-operation.h>
#include <operation/gegl-operation-context.h>
#include <operation/gegl-operation-filter.h>
#include <operation/gegl-operation-area-filter.h>
#include <operation/gegl-operation-point-filter.h>
#include <operation/gegl-operation-composer.h>
#include <operation/gegl-operation-composer3.h>
#include <operation/gegl-operation-point-composer.h>
#include <operation/gegl-operation-point-composer3.h>
#include <operation/gegl-operation-point-render.h>
#include <operation/gegl-operation-temporal.h>
#include <operation/gegl-operation-source.h>
#include <operation/gegl-operation-sink.h>
#include <operation/gegl-operation-meta.h>
#include <operation/gegl-extension-handler.h>
#include <operation/gegl-operation-handlers.h>
#include <operation/gegl-operation-property-keys.h>
#endif
