// GGHASH:VK0wDhcO3nwhSHWU4qeTcJHqGsBV_oho4QPQqIm4Pd_Q00001721
#ifndef __JSON_VERSION_MACROS_H__
#define __JSON_VERSION_MACROS_H__ 
#if !defined(__JSON_GLIB_INSIDE__) && !defined(JSON_COMPILATION)
#error "Only <json-glib/json-glib.h> can be included directly."
#endif
#include "json-version.h"
#ifndef _JSON_EXTERN
#define _JSON_EXTERN extern
#endif
#ifdef JSON_DISABLE_DEPRECATION_WARNINGS
#define JSON_DEPRECATED _JSON_EXTERN
#define JSON_DEPRECATED_FOR(f) _JSON_EXTERN
#define JSON_UNAVAILABLE(maj,min) _JSON_EXTERN
#else
#define JSON_DEPRECATED G_DEPRECATED _JSON_EXTERN
#define JSON_DEPRECATED_FOR(f) G_DEPRECATED_FOR(f) _JSON_EXTERN
#define JSON_UNAVAILABLE(maj,min) G_UNAVAILABLE(maj,min) _JSON_EXTERN
#endif
#define JSON_VERSION_1_0 (G_ENCODE_VERSION (1, 0))
#define JSON_VERSION_1_2 (G_ENCODE_VERSION (1, 2))
#define JSON_VERSION_1_4 (G_ENCODE_VERSION (1, 4))
#if (JSON_MINOR_VERSION == 99)
#define JSON_VERSION_CUR_STABLE (G_ENCODE_VERSION (JSON_MAJOR_VERSION + 1, 0))
#elif (JSON_MINOR_VERSION % 2)
#define JSON_VERSION_CUR_STABLE (G_ENCODE_VERSION (JSON_MAJOR_VERSION, JSON_MINOR_VERSION + 1))
#else
#define JSON_VERSION_CUR_STABLE (G_ENCODE_VERSION (JSON_MAJOR_VERSION, JSON_MINOR_VERSION))
#endif
#if (JSON_MINOR_VERSION == 99)
#define JSON_VERSION_PREV_STABLE (G_ENCODE_VERSION (JSON_MAJOR_VERSION + 1, 0))
#elif (JSON_MINOR_VERSION % 2)
#define JSON_VERSION_PREV_STABLE (G_ENCODE_VERSION (JSON_MAJOR_VERSION, JSON_MINOR_VERSION - 1))
#else
#define JSON_VERSION_PREV_STABLE (G_ENCODE_VERSION (JSON_MAJOR_VERSION, JSON_MINOR_VERSION - 2))
#endif
#ifndef JSON_VERSION_MIN_REQUIRED
#define JSON_VERSION_MIN_REQUIRED (JSON_VERSION_CUR_STABLE)
#endif
#ifndef JSON_VERSION_MAX_ALLOWED
# if JSON_VERSION_MIN_REQUIRED > JSON_VERSION_PREV_STABLE
#define JSON_VERSION_MAX_ALLOWED (JSON_VERSION_MIN_REQUIRED)
# else
#define JSON_VERSION_MAX_ALLOWED (JSON_VERSION_CUR_STABLE)
# endif
#endif
#if JSON_VERSION_MAX_ALLOWED < JSON_VERSION_MIN_REQUIRED
#error "JSON_VERSION_MAX_ALLOWED must be >= JSON_VERSION_MIN_REQUIRED"
#endif
#if JSON_VERSION_MIN_REQUIRED < JSON_VERSION_1_0
#error "JSON_VERSION_MIN_REQUIRED must be >= JSON_VERSION_1_0"
#endif
#if JSON_VERSION_MIN_REQUIRED >= JSON_VERSION_1_0
#define JSON_DEPRECATED_IN_1_0 JSON_DEPRECATED
#define JSON_DEPRECATED_IN_1_0_FOR(f) JSON_DEPRECATED_FOR(f)
#else
#define JSON_DEPRECATED_IN_1_0 _JSON_EXTERN
#define JSON_DEPRECATED_IN_1_0_FOR(f) _JSON_EXTERN
#endif
#if JSON_VERSION_MAX_ALLOWED < JSON_VERSION_1_0
#define JSON_AVAILABLE_IN_1_0 JSON_UNAVAILABLE(1, 0)
#else
#define JSON_AVAILABLE_IN_1_0 _JSON_EXTERN
#endif
#if JSON_VERSION_MIN_REQUIRED >= JSON_VERSION_1_2
#define JSON_DEPRECATED_IN_1_2 JSON_DEPRECATED
#define JSON_DEPRECATED_IN_1_2_FOR(f) JSON_DEPRECATED_FOR(f)
#else
#define JSON_DEPRECATED_IN_1_2 _JSON_EXTERN
#define JSON_DEPRECATED_IN_1_2_FOR(f) _JSON_EXTERN
#endif
#if JSON_VERSION_MAX_ALLOWED < JSON_VERSION_1_2
#define JSON_AVAILABLE_IN_1_2 JSON_UNAVAILABLE(1, 2)
#else
#define JSON_AVAILABLE_IN_1_2 _JSON_EXTERN
#endif
#if JSON_VERSION_MIN_REQUIRED >= JSON_VERSION_1_4
#define JSON_DEPRECATED_IN_1_4 JSON_DEPRECATED
#define JSON_DEPRECATED_IN_1_4_FOR(f) JSON_DEPRECATED_FOR(f)
#else
#define JSON_DEPRECATED_IN_1_4 _JSON_EXTERN
#define JSON_DEPRECATED_IN_1_4_FOR(f) _JSON_EXTERN
#endif
#if JSON_VERSION_MAX_ALLOWED < JSON_VERSION_1_4
#define JSON_AVAILABLE_IN_1_4 JSON_UNAVAILABLE(1, 4)
#else
#define JSON_AVAILABLE_IN_1_4 _JSON_EXTERN
#endif
#endif