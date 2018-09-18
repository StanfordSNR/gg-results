// GGHASH:V5SmiC7NwVpfDi3TAbMF0eSOLUIZ4aIJRG8ZiwSjn_CE0000111f
#ifndef __JSON_BUILDER_H__
#define __JSON_BUILDER_H__ 
#if !defined(__JSON_GLIB_INSIDE__) && !defined(JSON_COMPILATION)
#error "Only <json-glib/json-glib.h> can be included directly."
#endif
#include <json-glib/json-types.h>
#define JSON_TYPE_BUILDER (json_builder_get_type ())
#define JSON_BUILDER(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), JSON_TYPE_BUILDER, JsonBuilder))
#define JSON_IS_BUILDER(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), JSON_TYPE_BUILDER))
#define JSON_BUILDER_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), JSON_TYPE_BUILDER, JsonBuilderClass))
#define JSON_IS_BUILDER_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), JSON_TYPE_BUILDER))
#define JSON_BUILDER_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), JSON_TYPE_BUILDER, JsonBuilderClass))
#ifdef G_DEFINE_AUTOPTR_CLEANUP_FUNC
#endif
#endif
