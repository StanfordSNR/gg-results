// GGHASH:VSjzC4hSfYfSMe29GEcgRXoPT8ZisnHKk.QVp7c4YKjw0000e873
#ifndef __UTEXT_H__
#define __UTEXT_H__ 
#include "unicode/utypes.h"
#include "unicode/uchar.h"
#if U_SHOW_CPLUSPLUS_API
#include "unicode/localpointer.h"
#include "unicode/rep.h"
#include "unicode/unistr.h"
#include "unicode/chariter.h"
#endif
#if U_SHOW_CPLUSPLUS_API
#endif
#if U_SHOW_CPLUSPLUS_API
#endif
#ifndef U_HIDE_INTERNAL_API
#define UTEXT_CURRENT32(ut) ((ut)->chunkOffset < (ut)->chunkLength && ((ut)->chunkContents)[(ut)->chunkOffset]<0xd800 ? ((ut)->chunkContents)[((ut)->chunkOffset)] : utext_current32(ut))
#endif
#define UTEXT_NEXT32(ut) ((ut)->chunkOffset < (ut)->chunkLength && ((ut)->chunkContents)[(ut)->chunkOffset]<0xd800 ? ((ut)->chunkContents)[((ut)->chunkOffset)++] : utext_next32(ut))
#define UTEXT_PREVIOUS32(ut) ((ut)->chunkOffset > 0 && (ut)->chunkContents[(ut)->chunkOffset-1] < 0xd800 ? (ut)->chunkContents[--((ut)->chunkOffset)] : utext_previous32(ut))
#define UTEXT_GETNATIVEINDEX(ut) ((ut)->chunkOffset <= (ut)->nativeIndexingLimit? (ut)->chunkNativeStart+(ut)->chunkOffset : (ut)->pFuncs->mapOffsetToNative(ut))
#define UTEXT_SETNATIVEINDEX(ut,ix) { int64_t __offset = (ix) - (ut)->chunkNativeStart; if (__offset>=0 && __offset<(int64_t)(ut)->nativeIndexingLimit && (ut)->chunkContents[__offset]<0xdc00) { (ut)->chunkOffset=(int32_t)__offset; } else { utext_setNativeIndex((ut), (ix)); } }
#ifndef U_HIDE_INTERNAL_API
#endif
#define UTEXT_INITIALIZER { UTEXT_MAGIC, 0, 0, sizeof(UText), 0, 0, 0, 0, 0, 0, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, 0, 0, 0, 0, 0 }
#endif
