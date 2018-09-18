// GGHASH:Vs9UJCFMcz2jLWbErnuSkbWTf9kg2fo14lzZfhSFLmkw00003ffc
#ifndef __G_PARAM_H__
#define __G_PARAM_H__ 
#if !defined (__GLIB_GOBJECT_H_INSIDE__) && !defined (GOBJECT_COMPILATION)
#error "Only <glib-object.h> can be included directly."
#endif
#include <gobject/gvalue.h>
#define G_TYPE_IS_PARAM(type) (G_TYPE_FUNDAMENTAL (type) == G_TYPE_PARAM)
#define G_PARAM_SPEC(pspec) (G_TYPE_CHECK_INSTANCE_CAST ((pspec), G_TYPE_PARAM, GParamSpec))
#if GLIB_VERSION_MAX_ALLOWED >= GLIB_VERSION_2_42
#define G_IS_PARAM_SPEC(pspec) (G_TYPE_CHECK_INSTANCE_FUNDAMENTAL_TYPE ((pspec), G_TYPE_PARAM))
#else
#define G_IS_PARAM_SPEC(pspec) (G_TYPE_CHECK_INSTANCE_TYPE ((pspec), G_TYPE_PARAM))
#endif
#define G_PARAM_SPEC_CLASS(pclass) (G_TYPE_CHECK_CLASS_CAST ((pclass), G_TYPE_PARAM, GParamSpecClass))
#define G_IS_PARAM_SPEC_CLASS(pclass) (G_TYPE_CHECK_CLASS_TYPE ((pclass), G_TYPE_PARAM))
#define G_PARAM_SPEC_GET_CLASS(pspec) (G_TYPE_INSTANCE_GET_CLASS ((pspec), G_TYPE_PARAM, GParamSpecClass))
#define G_PARAM_SPEC_TYPE(pspec) (G_TYPE_FROM_INSTANCE (pspec))
#define G_PARAM_SPEC_TYPE_NAME(pspec) (g_type_name (G_PARAM_SPEC_TYPE (pspec)))
#define G_PARAM_SPEC_VALUE_TYPE(pspec) (G_PARAM_SPEC (pspec)->value_type)
#define G_VALUE_HOLDS_PARAM(value) (G_TYPE_CHECK_VALUE_TYPE ((value), G_TYPE_PARAM))
#ifndef G_DISABLE_DEPRECATED
#endif
#define G_PARAM_STATIC_STRINGS (G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB)
#define G_PARAM_MASK (0x000000ff)
#define G_PARAM_USER_SHIFT (8)
#endif
