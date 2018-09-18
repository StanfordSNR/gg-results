// GGHASH:V23XwmQwG5Aon9cf59.oKIf8tndb6BzkNMqj9NXerFX400003341
#ifndef __G_VARIANT_TYPE_H__
#define __G_VARIANT_TYPE_H__ 
#if !defined (__GLIB_H_INSIDE__) && !defined (GLIB_COMPILATION)
#error "Only <glib.h> can be included directly."
#endif
#include <glib/gtypes.h>
#define G_VARIANT_TYPE_BOOLEAN ((const GVariantType *) "b")
#define G_VARIANT_TYPE_BYTE ((const GVariantType *) "y")
#define G_VARIANT_TYPE_INT16 ((const GVariantType *) "n")
#define G_VARIANT_TYPE_UINT16 ((const GVariantType *) "q")
#define G_VARIANT_TYPE_INT32 ((const GVariantType *) "i")
#define G_VARIANT_TYPE_UINT32 ((const GVariantType *) "u")
#define G_VARIANT_TYPE_INT64 ((const GVariantType *) "x")
#define G_VARIANT_TYPE_UINT64 ((const GVariantType *) "t")
#define G_VARIANT_TYPE_DOUBLE ((const GVariantType *) "d")
#define G_VARIANT_TYPE_STRING ((const GVariantType *) "s")
#define G_VARIANT_TYPE_OBJECT_PATH ((const GVariantType *) "o")
#define G_VARIANT_TYPE_SIGNATURE ((const GVariantType *) "g")
#define G_VARIANT_TYPE_VARIANT ((const GVariantType *) "v")
#define G_VARIANT_TYPE_HANDLE ((const GVariantType *) "h")
#define G_VARIANT_TYPE_UNIT ((const GVariantType *) "()")
#define G_VARIANT_TYPE_ANY ((const GVariantType *) "*")
#define G_VARIANT_TYPE_BASIC ((const GVariantType *) "?")
#define G_VARIANT_TYPE_MAYBE ((const GVariantType *) "m*")
#define G_VARIANT_TYPE_ARRAY ((const GVariantType *) "a*")
#define G_VARIANT_TYPE_TUPLE ((const GVariantType *) "r")
#define G_VARIANT_TYPE_DICT_ENTRY ((const GVariantType *) "{?*}")
#define G_VARIANT_TYPE_DICTIONARY ((const GVariantType *) "a{?*}")
#define G_VARIANT_TYPE_STRING_ARRAY ((const GVariantType *) "as")
#define G_VARIANT_TYPE_OBJECT_PATH_ARRAY ((const GVariantType *) "ao")
#define G_VARIANT_TYPE_BYTESTRING ((const GVariantType *) "ay")
#define G_VARIANT_TYPE_BYTESTRING_ARRAY ((const GVariantType *) "aay")
#define G_VARIANT_TYPE_VARDICT ((const GVariantType *) "a{sv}")
#ifndef G_DISABLE_CHECKS
#define G_VARIANT_TYPE(type_string) (g_variant_type_checked_ ((type_string)))
#else
#define G_VARIANT_TYPE(type_string) ((const GVariantType *) (type_string))
#endif
#endif
