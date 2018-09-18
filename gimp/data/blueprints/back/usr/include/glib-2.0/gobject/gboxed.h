// GGHASH:V3.TsPZHfM_HMCY31JqTpENsnGF.CsyCQ_j78t.3RJTo00000f7d
#ifndef __G_BOXED_H__
#define __G_BOXED_H__ 
#if !defined (__GLIB_GOBJECT_H_INSIDE__) && !defined (GOBJECT_COMPILATION)
#error "Only <glib-object.h> can be included directly."
#endif
#include <gobject/gtype.h>
#ifndef __GI_SCANNER__
#include <gobject/glib-types.h>
#endif
#define G_TYPE_IS_BOXED(type) (G_TYPE_FUNDAMENTAL (type) == G_TYPE_BOXED)
#define G_VALUE_HOLDS_BOXED(value) (G_TYPE_CHECK_VALUE_TYPE ((value), G_TYPE_BOXED))
#define G_TYPE_CLOSURE (g_closure_get_type ())
#define G_TYPE_VALUE (g_value_get_type ())
#endif
