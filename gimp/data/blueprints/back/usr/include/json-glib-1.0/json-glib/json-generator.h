// GGHASH:VY8WQCbuuwgm5I5CZ1qXeVAxNUj_hoNvYQvSbFagnVAo000012fd
#ifndef __JSON_GENERATOR_H__
#define __JSON_GENERATOR_H__ 
#if !defined(__JSON_GLIB_INSIDE__) && !defined(JSON_COMPILATION)
#error "Only <json-glib/json-glib.h> can be included directly."
#endif
#include <json-glib/json-types.h>
#include <gio/gio.h>
#define JSON_TYPE_GENERATOR (json_generator_get_type ())
#define JSON_GENERATOR(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), JSON_TYPE_GENERATOR, JsonGenerator))
#define JSON_IS_GENERATOR(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), JSON_TYPE_GENERATOR))
#define JSON_GENERATOR_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), JSON_TYPE_GENERATOR, JsonGeneratorClass))
#define JSON_IS_GENERATOR_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), JSON_TYPE_GENERATOR))
#define JSON_GENERATOR_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), JSON_TYPE_GENERATOR, JsonGeneratorClass))
#ifdef G_DEFINE_AUTOPTR_CLEANUP_FUNC
#endif
#endif
