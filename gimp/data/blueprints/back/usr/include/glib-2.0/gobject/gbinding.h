// GGHASH:V9.OtcYvroSHll1M3ftX5z3dablhYom3f5daE5dzy9Wc000018c6
#ifndef __G_BINDING_H__
#define __G_BINDING_H__ 
#if !defined (__GLIB_GOBJECT_H_INSIDE__) && !defined (GOBJECT_COMPILATION)
#error "Only <glib-object.h> can be included directly."
#endif
#include <glib.h>
#include <gobject/gobject.h>
#define G_TYPE_BINDING_FLAGS (g_binding_flags_get_type ())
#define G_TYPE_BINDING (g_binding_get_type ())
#define G_BINDING(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), G_TYPE_BINDING, GBinding))
#define G_IS_BINDING(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), G_TYPE_BINDING))
#endif
