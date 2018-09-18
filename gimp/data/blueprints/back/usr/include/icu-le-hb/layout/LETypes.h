// GGHASH:VqAzcFRF4Ti72ffbsGG8JOvU_HTdhzDzIpy9_7SBKgBE00005968
#ifndef __LETYPES_H
#define __LETYPES_H 
#if !defined(LE_USE_CMEMORY) && (defined(U_LAYOUT_IMPLEMENTATION) || defined(U_LAYOUTEX_IMPLEMENTATION) || defined(U_STATIC_IMPLEMENTATION) || defined(U_COMBINED_IMPLEMENTATION))
#define LE_USE_CMEMORY 
#endif
#include "unicode/utypes.h"
#ifdef __cplusplus
#include "unicode/uobject.h"
#endif
#ifdef LE_USE_CMEMORY
#include "cmemory.h"
#endif
#ifndef NULL
#define NULL 0
#endif
#define LE_GLYPH_MASK 0x0000FFFF
#define LE_GLYPH_SHIFT 0
#define LE_SUB_FONT_MASK 0x00FF0000
#define LE_SUB_FONT_SHIFT 16
#define LE_CLIENT_MASK 0xFF000000
#define LE_CLIENT_SHIFT 24
#define LE_GET_GLYPH(gid) ((gid & LE_GLYPH_MASK) >> LE_GLYPH_SHIFT)
#define LE_GET_SUB_FONT(gid) ((gid & LE_SUB_FONT_MASK) >> LE_SUB_FONT_SHIFT)
#define LE_GET_CLIENT(gid) ((gid & LE_CLIENT_MASK) >> LE_CLIENT_SHIFT)
#define LE_SET_GLYPH(gid,glyph) ((gid & ~LE_GLYPH_MASK) | ((glyph << LE_GLYPH_SHIFT) & LE_GLYPH_MASK))
#define LE_SET_SUB_FONT(gid,font) ((gid & ~LE_SUB_FONT_MASK) | ((font << LE_SUB_FONT_SHIFT) & LE_SUB_FONT_MASK))
#define LE_SET_CLIENT(gid,client) ((gid & ~LE_CLIENT_MASK) | ((client << LE_CLIENT_SHIFT) & LE_CLIENT_MASK))
#ifndef U_HIDE_DEPRECATED_API
#endif
#ifndef __cplusplus
#endif
#ifndef U_HIDE_INTERNAL_API
#ifndef LE_ASSERT_BAD_FONT
#define LE_ASSERT_BAD_FONT 0
#endif
#if LE_ASSERT_BAD_FONT
#include <stdio.h>
#define LE_DEBUG_BAD_FONT(x) fprintf(stderr,"%s:%d: BAD FONT: %s\n", __FILE__, __LINE__, (x));
#else
#define LE_DEBUG_BAD_FONT(x) 
#endif
#ifndef UINT32_MAX
#define LE_UINT32_MAX 0xFFFFFFFFU
#else
#define LE_UINT32_MAX UINT32_MAX
#endif
#ifndef UINTPTR_MAX
#define LE_UINTPTR_MAX LE_UINT32_MAX
#else
#define LE_UINTPTR_MAX UINTPTR_MAX
#endif
#define LE_RANGE_CHECK(type,count,ptrfn) (( (LE_UINTPTR_MAX / sizeof(type)) < (count) ) ? NULL : (ptrfn))
#define LE_ARRAY_SIZE(array) (sizeof array / sizeof array[0])
#ifdef LE_USE_CMEMORY
#define LE_ARRAY_COPY(dst,src,count) uprv_memcpy((void *) (dst), (void *) (src), (count) * sizeof (src)[0])
#define LE_NEW_ARRAY(type,count) (type *) LE_RANGE_CHECK(type,count,uprv_malloc((count) * sizeof(type)))
#define LE_GROW_ARRAY(array,newSize) uprv_realloc((void *) (array), (newSize) * sizeof (array)[0])
#define LE_DELETE_ARRAY(array) uprv_free((void *) (array))
#else
#include <stdlib.h>
#include <string.h>
#define LE_ARRAY_SIZE(array) (sizeof array / sizeof array[0])
#define LE_ARRAY_COPY(dst,src,count) memcpy((void *) (dst), (void *) (src), (count) * sizeof (src)[0])
#define LE_NEW_ARRAY(type,count) LE_RANGE_CHECK(type,count,(type *) malloc((count) * sizeof(type)))
#define LE_GROW_ARRAY(array,newSize) realloc((void *) (array), (newSize) * sizeof (array)[0])
#define LE_DELETE_ARRAY(array) free((void *) (array))
#endif
#endif
#define LE_MAKE_TAG(a,b,c,d) (((le_uint32)(a) << 24) | ((le_uint32)(b) << 16) | ((le_uint32)(c) << 8) | (le_uint32)(d))
#define LE_Kerning_FEATURE_FLAG (1 << LE_Kerning_FEATURE_ENUM)
#define LE_Ligatures_FEATURE_FLAG (1 << LE_Ligatures_FEATURE_ENUM)
#define LE_CLIG_FEATURE_FLAG (1 << LE_CLIG_FEATURE_ENUM)
#define LE_DLIG_FEATURE_FLAG (1 << LE_DLIG_FEATURE_ENUM)
#define LE_HLIG_FEATURE_FLAG (1 << LE_HLIG_FEATURE_ENUM)
#define LE_LIGA_FEATURE_FLAG (1 << LE_LIGA_FEATURE_ENUM)
#define LE_RLIG_FEATURE_FLAG (1 << LE_RLIG_FEATURE_ENUM)
#define LE_SMCP_FEATURE_FLAG (1 << LE_SMCP_FEATURE_ENUM)
#define LE_FRAC_FEATURE_FLAG (1 << LE_FRAC_FEATURE_ENUM)
#define LE_AFRC_FEATURE_FLAG (1 << LE_AFRC_FEATURE_ENUM)
#define LE_ZERO_FEATURE_FLAG (1 << LE_ZERO_FEATURE_ENUM)
#define LE_SWSH_FEATURE_FLAG (1 << LE_SWSH_FEATURE_ENUM)
#define LE_CSWH_FEATURE_FLAG (1 << LE_CSWH_FEATURE_ENUM)
#define LE_SALT_FEATURE_FLAG (1 << LE_SALT_FEATURE_ENUM)
#define LE_NALT_FEATURE_FLAG (1 << LE_NALT_FEATURE_ENUM)
#define LE_RUBY_FEATURE_FLAG (1 << LE_RUBY_FEATURE_ENUM)
#define LE_SS01_FEATURE_FLAG (1 << LE_SS01_FEATURE_ENUM)
#define LE_SS02_FEATURE_FLAG (1 << LE_SS02_FEATURE_ENUM)
#define LE_SS03_FEATURE_FLAG (1 << LE_SS03_FEATURE_ENUM)
#define LE_SS04_FEATURE_FLAG (1 << LE_SS04_FEATURE_ENUM)
#define LE_SS05_FEATURE_FLAG (1 << LE_SS05_FEATURE_ENUM)
#define LE_SS06_FEATURE_FLAG (1 << LE_SS06_FEATURE_ENUM)
#define LE_SS07_FEATURE_FLAG (1 << LE_SS07_FEATURE_ENUM)
#define LE_CHAR_FILTER_FEATURE_FLAG (1 << LE_CHAR_FILTER_FEATURE_ENUM)
#define LE_DEFAULT_FEATURE_FLAG (LE_Kerning_FEATURE_FLAG | LE_Ligatures_FEATURE_FLAG)
#ifndef __cplusplus
#endif
#define LE_SUCCESS(code) (U_SUCCESS((UErrorCode)code))
#define LE_FAILURE(code) (U_FAILURE((UErrorCode)code))
#endif
