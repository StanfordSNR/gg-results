// GGHASH:VPDrgDAScMO4u2ApVDqzs.MJg3thbvHZij9ualmjg22o00001365
#ifndef __G_TYPE_PLUGIN_H__
#define __G_TYPE_PLUGIN_H__ 
#if !defined (__GLIB_GOBJECT_H_INSIDE__) && !defined (GOBJECT_COMPILATION)
#error "Only <glib-object.h> can be included directly."
#endif
#include <gobject/gtype.h>
#define G_TYPE_TYPE_PLUGIN (g_type_plugin_get_type ())
#define G_TYPE_PLUGIN(inst) (G_TYPE_CHECK_INSTANCE_CAST ((inst), G_TYPE_TYPE_PLUGIN, GTypePlugin))
#define G_TYPE_PLUGIN_CLASS(vtable) (G_TYPE_CHECK_CLASS_CAST ((vtable), G_TYPE_TYPE_PLUGIN, GTypePluginClass))
#define G_IS_TYPE_PLUGIN(inst) (G_TYPE_CHECK_INSTANCE_TYPE ((inst), G_TYPE_TYPE_PLUGIN))
#define G_IS_TYPE_PLUGIN_CLASS(vtable) (G_TYPE_CHECK_CLASS_TYPE ((vtable), G_TYPE_TYPE_PLUGIN))
#define G_TYPE_PLUGIN_GET_CLASS(inst) (G_TYPE_INSTANCE_GET_INTERFACE ((inst), G_TYPE_TYPE_PLUGIN, GTypePluginClass))
#endif
