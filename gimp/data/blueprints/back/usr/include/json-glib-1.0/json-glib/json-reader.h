// GGHASH:VxY60TOXuO3s604L2rHghpMpxV8cEuK0jOwZDmdjAGJM00001776
#ifndef __JSON_READER_H__
#define __JSON_READER_H__ 
#if !defined(__JSON_GLIB_INSIDE__) && !defined(JSON_COMPILATION)
#error "Only <json-glib/json-glib.h> can be included directly."
#endif
#include <json-glib/json-types.h>
#define JSON_TYPE_READER (json_reader_get_type ())
#define JSON_READER(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), JSON_TYPE_READER, JsonReader))
#define JSON_IS_READER(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), JSON_TYPE_READER))
#define JSON_READER_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), JSON_TYPE_READER, JsonReaderClass))
#define JSON_IS_READER_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), JSON_TYPE_READER))
#define JSON_READER_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), JSON_TYPE_READER, JsonReaderClass))
#define JSON_READER_ERROR (json_reader_error_quark ())
#ifdef G_DEFINE_AUTOPTR_CLEANUP_FUNC
#endif
#endif
