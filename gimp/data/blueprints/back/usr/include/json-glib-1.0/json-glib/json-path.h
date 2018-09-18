// GGHASH:VXvDGZd6DmV6N1Bf9LA6wyB7g2.8SECsP5exl8iIMDbY00000bbf
#ifndef __JSON_PATH_H__
#define __JSON_PATH_H__ 
#if !defined(__JSON_GLIB_INSIDE__) && !defined(JSON_COMPILATION)
#error "Only <json-glib/json-glib.h> can be included directly."
#endif
#include <json-glib/json-types.h>
#define JSON_TYPE_PATH (json_path_get_type ())
#define JSON_PATH(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), JSON_TYPE_PATH, JsonPath))
#define JSON_IS_PATH(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), JSON_TYPE_PATH))
#define JSON_PATH_ERROR (json_path_error_quark ())
#ifdef G_DEFINE_AUTOPTR_CLEANUP_FUNC
#endif
#endif
