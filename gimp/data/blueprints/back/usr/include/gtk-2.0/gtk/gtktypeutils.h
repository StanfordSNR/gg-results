// GGHASH:VV170FfxP79..myDxMRHE8r5ySmIbavGGep4b2FZP7G00000239f
#ifndef __GTK_TYPE_UTILS_H__
#define __GTK_TYPE_UTILS_H__ 
#if defined(GTK_DISABLE_SINGLE_INCLUDES) && !defined (__GTK_H_INSIDE__) && !defined (GTK_COMPILATION)
#error "Only <gtk/gtk.h> can be included directly."
#endif
#include <gtk/gtktypebuiltins.h>
#define GTK_TYPE_IDENTIFIER (gtk_identifier_get_type ())
#if !defined (GTK_DISABLE_DEPRECATED) || defined (GTK_COMPILATION)
#endif
#ifndef GTK_DISABLE_DEPRECATED
#define GTK_TYPE_INVALID G_TYPE_INVALID
#define GTK_TYPE_NONE G_TYPE_NONE
#define GTK_TYPE_ENUM G_TYPE_ENUM
#define GTK_TYPE_FLAGS G_TYPE_FLAGS
#define GTK_TYPE_CHAR G_TYPE_CHAR
#define GTK_TYPE_UCHAR G_TYPE_UCHAR
#define GTK_TYPE_BOOL G_TYPE_BOOLEAN
#define GTK_TYPE_INT G_TYPE_INT
#define GTK_TYPE_UINT G_TYPE_UINT
#define GTK_TYPE_LONG G_TYPE_LONG
#define GTK_TYPE_ULONG G_TYPE_ULONG
#define GTK_TYPE_FLOAT G_TYPE_FLOAT
#define GTK_TYPE_DOUBLE G_TYPE_DOUBLE
#define GTK_TYPE_STRING G_TYPE_STRING
#define GTK_TYPE_BOXED G_TYPE_BOXED
#define GTK_TYPE_POINTER G_TYPE_POINTER
#define GTK_CLASS_NAME(class) (g_type_name (G_TYPE_FROM_CLASS (class)))
#define GTK_CLASS_TYPE(class) (G_TYPE_FROM_CLASS (class))
#define GTK_TYPE_IS_OBJECT(type) (g_type_is_a ((type), GTK_TYPE_OBJECT))
#define GTK_TYPE_FUNDAMENTAL_LAST (G_TYPE_LAST_RESERVED_FUNDAMENTAL - 1)
#define GTK_TYPE_FUNDAMENTAL_MAX (G_TYPE_FUNDAMENTAL_MAX)
#define GTK_FUNDAMENTAL_TYPE G_TYPE_FUNDAMENTAL
#define GTK_STRUCT_OFFSET G_STRUCT_OFFSET
#define GTK_CHECK_CAST G_TYPE_CHECK_INSTANCE_CAST
#define GTK_CHECK_CLASS_CAST G_TYPE_CHECK_CLASS_CAST
#define GTK_CHECK_GET_CLASS G_TYPE_INSTANCE_GET_CLASS
#define GTK_CHECK_TYPE G_TYPE_CHECK_INSTANCE_TYPE
#define GTK_CHECK_CLASS_TYPE G_TYPE_CHECK_CLASS_TYPE
#define GTK_SIGNAL_FUNC(f) G_CALLBACK(f)
#endif
#if !defined (GTK_DISABLE_DEPRECATED) || defined (GTK_COMPILATION)
#define GTK_VALUE_CHAR(a) ((a).d.char_data)
#define GTK_VALUE_UCHAR(a) ((a).d.uchar_data)
#define GTK_VALUE_BOOL(a) ((a).d.bool_data)
#define GTK_VALUE_INT(a) ((a).d.int_data)
#define GTK_VALUE_UINT(a) ((a).d.uint_data)
#define GTK_VALUE_LONG(a) ((a).d.long_data)
#define GTK_VALUE_ULONG(a) ((a).d.ulong_data)
#define GTK_VALUE_FLOAT(a) ((a).d.float_data)
#define GTK_VALUE_DOUBLE(a) ((a).d.double_data)
#define GTK_VALUE_STRING(a) ((a).d.string_data)
#define GTK_VALUE_ENUM(a) ((a).d.int_data)
#define GTK_VALUE_FLAGS(a) ((a).d.uint_data)
#define GTK_VALUE_BOXED(a) ((a).d.pointer_data)
#define GTK_VALUE_OBJECT(a) ((a).d.object_data)
#define GTK_VALUE_POINTER(a) ((a).d.pointer_data)
#define GTK_VALUE_SIGNAL(a) ((a).d.signal_data)
#endif
#ifndef GTK_DISABLE_DEPRECATED
#define GTK_RETLOC_CHAR(a) ((gchar*) (a).d.pointer_data)
#define GTK_RETLOC_UCHAR(a) ((guchar*) (a).d.pointer_data)
#define GTK_RETLOC_BOOL(a) ((gboolean*) (a).d.pointer_data)
#define GTK_RETLOC_INT(a) ((gint*) (a).d.pointer_data)
#define GTK_RETLOC_UINT(a) ((guint*) (a).d.pointer_data)
#define GTK_RETLOC_LONG(a) ((glong*) (a).d.pointer_data)
#define GTK_RETLOC_ULONG(a) ((gulong*) (a).d.pointer_data)
#define GTK_RETLOC_FLOAT(a) ((gfloat*) (a).d.pointer_data)
#define GTK_RETLOC_DOUBLE(a) ((gdouble*) (a).d.pointer_data)
#define GTK_RETLOC_STRING(a) ((gchar**) (a).d.pointer_data)
#define GTK_RETLOC_ENUM(a) ((gint*) (a).d.pointer_data)
#define GTK_RETLOC_FLAGS(a) ((guint*) (a).d.pointer_data)
#define GTK_RETLOC_BOXED(a) ((gpointer*) (a).d.pointer_data)
#define GTK_RETLOC_OBJECT(a) ((GtkObject**) (a).d.pointer_data)
#define GTK_RETLOC_POINTER(a) ((gpointer*) (a).d.pointer_data)
#define gtk_type_name(type) g_type_name (type)
#define gtk_type_from_name(name) g_type_from_name (name)
#define gtk_type_parent(type) g_type_parent (type)
#define gtk_type_is_a(type,is_a_type) g_type_is_a ((type), (is_a_type))
#endif
#endif
