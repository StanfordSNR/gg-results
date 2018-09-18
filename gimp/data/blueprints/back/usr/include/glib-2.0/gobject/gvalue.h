// GGHASH:VmxAyYlhutQ_81kvd1v4TEZ1Qny7ON_CiRF5dSFKVu1o00001618
#ifndef __G_VALUE_H__
#define __G_VALUE_H__ 
#if !defined (__GLIB_GOBJECT_H_INSIDE__) && !defined (GOBJECT_COMPILATION)
#error "Only <glib-object.h> can be included directly."
#endif
#include <gobject/gtype.h>
#define G_TYPE_IS_VALUE(type) (g_type_check_is_value_type (type))
#define G_IS_VALUE(value) (G_TYPE_CHECK_VALUE (value))
#define G_VALUE_TYPE(value) (((GValue*) (value))->g_type)
#define G_VALUE_TYPE_NAME(value) (g_type_name (G_VALUE_TYPE (value)))
#define G_VALUE_HOLDS(value,type) (G_TYPE_CHECK_VALUE_TYPE ((value), (type)))
#define G_VALUE_NOCOPY_CONTENTS (1 << 27)
#define G_VALUE_INIT { 0, { { 0 } } }
#endif
