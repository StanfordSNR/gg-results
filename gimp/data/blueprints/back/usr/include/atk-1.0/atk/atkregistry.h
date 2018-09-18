// GGHASH:VRWkDexbeW7Pu9jMZWA8XHYkbMPjg5TDQuQo6o5JPizo00000a8b
#ifndef __ATK_REGISTRY_H__
#define __ATK_REGISTRY_H__ 
#if defined(ATK_DISABLE_SINGLE_INCLUDES) && !defined (__ATK_H_INSIDE__) && !defined (ATK_COMPILATION)
#error "Only <atk/atk.h> can be included directly."
#endif
#include <glib-object.h>
#include "atkobjectfactory.h"
#define ATK_TYPE_REGISTRY (atk_registry_get_type ())
#define ATK_REGISTRY(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), ATK_TYPE_REGISTRY, AtkRegistry))
#define ATK_REGISTRY_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), ATK_TYPE_REGISTRY, AtkRegistryClass))
#define ATK_IS_REGISTRY(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), ATK_TYPE_REGISTRY))
#define ATK_IS_REGISTRY_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), ATK_TYPE_REGISTRY))
#define ATK_REGISTRY_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), ATK_TYPE_REGISTRY, AtkRegistryClass))
#endif
