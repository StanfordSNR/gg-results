// GGHASH:VLf3oeM5af7F4xa1gIIX16LW4clS1_lbYYsCtmOQd1sU000087c1
#ifndef __G_PARAMSPECS_H__
#define __G_PARAMSPECS_H__ 
#if !defined (__GLIB_GOBJECT_H_INSIDE__) && !defined (GOBJECT_COMPILATION)
#error "Only <glib-object.h> can be included directly."
#endif
#include <gobject/gvalue.h>
#include <gobject/genums.h>
#include <gobject/gboxed.h>
#include <gobject/gobject.h>
#define G_TYPE_PARAM_CHAR (g_param_spec_types[0])
#define G_IS_PARAM_SPEC_CHAR(pspec) (G_TYPE_CHECK_INSTANCE_TYPE ((pspec), G_TYPE_PARAM_CHAR))
#define G_PARAM_SPEC_CHAR(pspec) (G_TYPE_CHECK_INSTANCE_CAST ((pspec), G_TYPE_PARAM_CHAR, GParamSpecChar))
#define G_TYPE_PARAM_UCHAR (g_param_spec_types[1])
#define G_IS_PARAM_SPEC_UCHAR(pspec) (G_TYPE_CHECK_INSTANCE_TYPE ((pspec), G_TYPE_PARAM_UCHAR))
#define G_PARAM_SPEC_UCHAR(pspec) (G_TYPE_CHECK_INSTANCE_CAST ((pspec), G_TYPE_PARAM_UCHAR, GParamSpecUChar))
#define G_TYPE_PARAM_BOOLEAN (g_param_spec_types[2])
#define G_IS_PARAM_SPEC_BOOLEAN(pspec) (G_TYPE_CHECK_INSTANCE_TYPE ((pspec), G_TYPE_PARAM_BOOLEAN))
#define G_PARAM_SPEC_BOOLEAN(pspec) (G_TYPE_CHECK_INSTANCE_CAST ((pspec), G_TYPE_PARAM_BOOLEAN, GParamSpecBoolean))
#define G_TYPE_PARAM_INT (g_param_spec_types[3])
#define G_IS_PARAM_SPEC_INT(pspec) (G_TYPE_CHECK_INSTANCE_TYPE ((pspec), G_TYPE_PARAM_INT))
#define G_PARAM_SPEC_INT(pspec) (G_TYPE_CHECK_INSTANCE_CAST ((pspec), G_TYPE_PARAM_INT, GParamSpecInt))
#define G_TYPE_PARAM_UINT (g_param_spec_types[4])
#define G_IS_PARAM_SPEC_UINT(pspec) (G_TYPE_CHECK_INSTANCE_TYPE ((pspec), G_TYPE_PARAM_UINT))
#define G_PARAM_SPEC_UINT(pspec) (G_TYPE_CHECK_INSTANCE_CAST ((pspec), G_TYPE_PARAM_UINT, GParamSpecUInt))
#define G_TYPE_PARAM_LONG (g_param_spec_types[5])
#define G_IS_PARAM_SPEC_LONG(pspec) (G_TYPE_CHECK_INSTANCE_TYPE ((pspec), G_TYPE_PARAM_LONG))
#define G_PARAM_SPEC_LONG(pspec) (G_TYPE_CHECK_INSTANCE_CAST ((pspec), G_TYPE_PARAM_LONG, GParamSpecLong))
#define G_TYPE_PARAM_ULONG (g_param_spec_types[6])
#define G_IS_PARAM_SPEC_ULONG(pspec) (G_TYPE_CHECK_INSTANCE_TYPE ((pspec), G_TYPE_PARAM_ULONG))
#define G_PARAM_SPEC_ULONG(pspec) (G_TYPE_CHECK_INSTANCE_CAST ((pspec), G_TYPE_PARAM_ULONG, GParamSpecULong))
#define G_TYPE_PARAM_INT64 (g_param_spec_types[7])
#define G_IS_PARAM_SPEC_INT64(pspec) (G_TYPE_CHECK_INSTANCE_TYPE ((pspec), G_TYPE_PARAM_INT64))
#define G_PARAM_SPEC_INT64(pspec) (G_TYPE_CHECK_INSTANCE_CAST ((pspec), G_TYPE_PARAM_INT64, GParamSpecInt64))
#define G_TYPE_PARAM_UINT64 (g_param_spec_types[8])
#define G_IS_PARAM_SPEC_UINT64(pspec) (G_TYPE_CHECK_INSTANCE_TYPE ((pspec), G_TYPE_PARAM_UINT64))
#define G_PARAM_SPEC_UINT64(pspec) (G_TYPE_CHECK_INSTANCE_CAST ((pspec), G_TYPE_PARAM_UINT64, GParamSpecUInt64))
#define G_TYPE_PARAM_UNICHAR (g_param_spec_types[9])
#define G_PARAM_SPEC_UNICHAR(pspec) (G_TYPE_CHECK_INSTANCE_CAST ((pspec), G_TYPE_PARAM_UNICHAR, GParamSpecUnichar))
#define G_IS_PARAM_SPEC_UNICHAR(pspec) (G_TYPE_CHECK_INSTANCE_TYPE ((pspec), G_TYPE_PARAM_UNICHAR))
#define G_TYPE_PARAM_ENUM (g_param_spec_types[10])
#define G_IS_PARAM_SPEC_ENUM(pspec) (G_TYPE_CHECK_INSTANCE_TYPE ((pspec), G_TYPE_PARAM_ENUM))
#define G_PARAM_SPEC_ENUM(pspec) (G_TYPE_CHECK_INSTANCE_CAST ((pspec), G_TYPE_PARAM_ENUM, GParamSpecEnum))
#define G_TYPE_PARAM_FLAGS (g_param_spec_types[11])
#define G_IS_PARAM_SPEC_FLAGS(pspec) (G_TYPE_CHECK_INSTANCE_TYPE ((pspec), G_TYPE_PARAM_FLAGS))
#define G_PARAM_SPEC_FLAGS(pspec) (G_TYPE_CHECK_INSTANCE_CAST ((pspec), G_TYPE_PARAM_FLAGS, GParamSpecFlags))
#define G_TYPE_PARAM_FLOAT (g_param_spec_types[12])
#define G_IS_PARAM_SPEC_FLOAT(pspec) (G_TYPE_CHECK_INSTANCE_TYPE ((pspec), G_TYPE_PARAM_FLOAT))
#define G_PARAM_SPEC_FLOAT(pspec) (G_TYPE_CHECK_INSTANCE_CAST ((pspec), G_TYPE_PARAM_FLOAT, GParamSpecFloat))
#define G_TYPE_PARAM_DOUBLE (g_param_spec_types[13])
#define G_IS_PARAM_SPEC_DOUBLE(pspec) (G_TYPE_CHECK_INSTANCE_TYPE ((pspec), G_TYPE_PARAM_DOUBLE))
#define G_PARAM_SPEC_DOUBLE(pspec) (G_TYPE_CHECK_INSTANCE_CAST ((pspec), G_TYPE_PARAM_DOUBLE, GParamSpecDouble))
#define G_TYPE_PARAM_STRING (g_param_spec_types[14])
#define G_IS_PARAM_SPEC_STRING(pspec) (G_TYPE_CHECK_INSTANCE_TYPE ((pspec), G_TYPE_PARAM_STRING))
#define G_PARAM_SPEC_STRING(pspec) (G_TYPE_CHECK_INSTANCE_CAST ((pspec), G_TYPE_PARAM_STRING, GParamSpecString))
#define G_TYPE_PARAM_PARAM (g_param_spec_types[15])
#define G_IS_PARAM_SPEC_PARAM(pspec) (G_TYPE_CHECK_INSTANCE_TYPE ((pspec), G_TYPE_PARAM_PARAM))
#define G_PARAM_SPEC_PARAM(pspec) (G_TYPE_CHECK_INSTANCE_CAST ((pspec), G_TYPE_PARAM_PARAM, GParamSpecParam))
#define G_TYPE_PARAM_BOXED (g_param_spec_types[16])
#define G_IS_PARAM_SPEC_BOXED(pspec) (G_TYPE_CHECK_INSTANCE_TYPE ((pspec), G_TYPE_PARAM_BOXED))
#define G_PARAM_SPEC_BOXED(pspec) (G_TYPE_CHECK_INSTANCE_CAST ((pspec), G_TYPE_PARAM_BOXED, GParamSpecBoxed))
#define G_TYPE_PARAM_POINTER (g_param_spec_types[17])
#define G_IS_PARAM_SPEC_POINTER(pspec) (G_TYPE_CHECK_INSTANCE_TYPE ((pspec), G_TYPE_PARAM_POINTER))
#define G_PARAM_SPEC_POINTER(pspec) (G_TYPE_CHECK_INSTANCE_CAST ((pspec), G_TYPE_PARAM_POINTER, GParamSpecPointer))
#define G_TYPE_PARAM_VALUE_ARRAY (g_param_spec_types[18])
#define G_IS_PARAM_SPEC_VALUE_ARRAY(pspec) (G_TYPE_CHECK_INSTANCE_TYPE ((pspec), G_TYPE_PARAM_VALUE_ARRAY))
#define G_PARAM_SPEC_VALUE_ARRAY(pspec) (G_TYPE_CHECK_INSTANCE_CAST ((pspec), G_TYPE_PARAM_VALUE_ARRAY, GParamSpecValueArray))
#define G_TYPE_PARAM_OBJECT (g_param_spec_types[19])
#define G_IS_PARAM_SPEC_OBJECT(pspec) (G_TYPE_CHECK_INSTANCE_TYPE ((pspec), G_TYPE_PARAM_OBJECT))
#define G_PARAM_SPEC_OBJECT(pspec) (G_TYPE_CHECK_INSTANCE_CAST ((pspec), G_TYPE_PARAM_OBJECT, GParamSpecObject))
#define G_TYPE_PARAM_OVERRIDE (g_param_spec_types[20])
#define G_IS_PARAM_SPEC_OVERRIDE(pspec) (G_TYPE_CHECK_INSTANCE_TYPE ((pspec), G_TYPE_PARAM_OVERRIDE))
#define G_PARAM_SPEC_OVERRIDE(pspec) (G_TYPE_CHECK_INSTANCE_CAST ((pspec), G_TYPE_PARAM_OVERRIDE, GParamSpecOverride))
#define G_TYPE_PARAM_GTYPE (g_param_spec_types[21])
#define G_IS_PARAM_SPEC_GTYPE(pspec) (G_TYPE_CHECK_INSTANCE_TYPE ((pspec), G_TYPE_PARAM_GTYPE))
#define G_PARAM_SPEC_GTYPE(pspec) (G_TYPE_CHECK_INSTANCE_CAST ((pspec), G_TYPE_PARAM_GTYPE, GParamSpecGType))
#define G_TYPE_PARAM_VARIANT (g_param_spec_types[22])
#define G_IS_PARAM_SPEC_VARIANT(pspec) (G_TYPE_CHECK_INSTANCE_TYPE ((pspec), G_TYPE_PARAM_VARIANT))
#define G_PARAM_SPEC_VARIANT(pspec) (G_TYPE_CHECK_INSTANCE_CAST ((pspec), G_TYPE_PARAM_VARIANT, GParamSpecVariant))
#ifndef GOBJECT_VAR
# ifdef G_PLATFORM_WIN32
# ifdef GOBJECT_STATIC_COMPILATION
#define GOBJECT_VAR extern
# else
# ifdef GOBJECT_COMPILATION
# ifdef DLL_EXPORT
#define GOBJECT_VAR __declspec(dllexport)
# else
#define GOBJECT_VAR extern
# endif
# else
#define GOBJECT_VAR extern __declspec(dllimport)
# endif
# endif
# else
#define GOBJECT_VAR _GLIB_EXTERN
# endif
#endif
#endif
