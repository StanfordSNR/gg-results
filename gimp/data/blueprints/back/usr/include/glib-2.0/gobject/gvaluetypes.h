// GGHASH:V502_E5ctDHP3xEFPzaX9QZdznetwRs.7OFQ0ADTMleI000025b5
#ifndef __G_VALUETYPES_H__
#define __G_VALUETYPES_H__ 
#if !defined (__GLIB_GOBJECT_H_INSIDE__) && !defined (GOBJECT_COMPILATION)
#error "Only <glib-object.h> can be included directly."
#endif
#include <gobject/gvalue.h>
#define G_VALUE_HOLDS_CHAR(value) (G_TYPE_CHECK_VALUE_TYPE ((value), G_TYPE_CHAR))
#define G_VALUE_HOLDS_UCHAR(value) (G_TYPE_CHECK_VALUE_TYPE ((value), G_TYPE_UCHAR))
#define G_VALUE_HOLDS_BOOLEAN(value) (G_TYPE_CHECK_VALUE_TYPE ((value), G_TYPE_BOOLEAN))
#define G_VALUE_HOLDS_INT(value) (G_TYPE_CHECK_VALUE_TYPE ((value), G_TYPE_INT))
#define G_VALUE_HOLDS_UINT(value) (G_TYPE_CHECK_VALUE_TYPE ((value), G_TYPE_UINT))
#define G_VALUE_HOLDS_LONG(value) (G_TYPE_CHECK_VALUE_TYPE ((value), G_TYPE_LONG))
#define G_VALUE_HOLDS_ULONG(value) (G_TYPE_CHECK_VALUE_TYPE ((value), G_TYPE_ULONG))
#define G_VALUE_HOLDS_INT64(value) (G_TYPE_CHECK_VALUE_TYPE ((value), G_TYPE_INT64))
#define G_VALUE_HOLDS_UINT64(value) (G_TYPE_CHECK_VALUE_TYPE ((value), G_TYPE_UINT64))
#define G_VALUE_HOLDS_FLOAT(value) (G_TYPE_CHECK_VALUE_TYPE ((value), G_TYPE_FLOAT))
#define G_VALUE_HOLDS_DOUBLE(value) (G_TYPE_CHECK_VALUE_TYPE ((value), G_TYPE_DOUBLE))
#define G_VALUE_HOLDS_STRING(value) (G_TYPE_CHECK_VALUE_TYPE ((value), G_TYPE_STRING))
#define G_VALUE_HOLDS_POINTER(value) (G_TYPE_CHECK_VALUE_TYPE ((value), G_TYPE_POINTER))
#define G_TYPE_GTYPE (g_gtype_get_type())
#define G_VALUE_HOLDS_GTYPE(value) (G_TYPE_CHECK_VALUE_TYPE ((value), G_TYPE_GTYPE))
#define G_VALUE_HOLDS_VARIANT(value) (G_TYPE_CHECK_VALUE_TYPE ((value), G_TYPE_VARIANT))
#endif
