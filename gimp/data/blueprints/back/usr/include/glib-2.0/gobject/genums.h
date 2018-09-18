// GGHASH:VvC4jpJk.M9n_7qNLwnv8zMs165nRs0kBh6EVhQpwMGw00001f69
#ifndef __G_ENUMS_H__
#define __G_ENUMS_H__ 
#if !defined (__GLIB_GOBJECT_H_INSIDE__) && !defined (GOBJECT_COMPILATION)
#error "Only <glib-object.h> can be included directly."
#endif
#include <gobject/gtype.h>
#define G_TYPE_IS_ENUM(type) (G_TYPE_FUNDAMENTAL (type) == G_TYPE_ENUM)
#define G_ENUM_CLASS(class) (G_TYPE_CHECK_CLASS_CAST ((class), G_TYPE_ENUM, GEnumClass))
#define G_IS_ENUM_CLASS(class) (G_TYPE_CHECK_CLASS_TYPE ((class), G_TYPE_ENUM))
#define G_ENUM_CLASS_TYPE(class) (G_TYPE_FROM_CLASS (class))
#define G_ENUM_CLASS_TYPE_NAME(class) (g_type_name (G_ENUM_CLASS_TYPE (class)))
#define G_TYPE_IS_FLAGS(type) (G_TYPE_FUNDAMENTAL (type) == G_TYPE_FLAGS)
#define G_FLAGS_CLASS(class) (G_TYPE_CHECK_CLASS_CAST ((class), G_TYPE_FLAGS, GFlagsClass))
#define G_IS_FLAGS_CLASS(class) (G_TYPE_CHECK_CLASS_TYPE ((class), G_TYPE_FLAGS))
#define G_FLAGS_CLASS_TYPE(class) (G_TYPE_FROM_CLASS (class))
#define G_FLAGS_CLASS_TYPE_NAME(class) (g_type_name (G_FLAGS_CLASS_TYPE (class)))
#define G_VALUE_HOLDS_ENUM(value) (G_TYPE_CHECK_VALUE_TYPE ((value), G_TYPE_ENUM))
#define G_VALUE_HOLDS_FLAGS(value) (G_TYPE_CHECK_VALUE_TYPE ((value), G_TYPE_FLAGS))
#endif
