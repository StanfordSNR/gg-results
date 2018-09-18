// GGHASH:Vg5E9q5SdWtyCrG4LpYHxpbVMVaUBMLGXZwDSRTocFBo00001dec
#ifndef __JSON_PARSER_H__
#define __JSON_PARSER_H__ 
#if !defined(__JSON_GLIB_INSIDE__) && !defined(JSON_COMPILATION)
#error "Only <json-glib/json-glib.h> can be included directly."
#endif
#include <gio/gio.h>
#include <json-glib/json-types.h>
#define JSON_TYPE_PARSER (json_parser_get_type ())
#define JSON_PARSER(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), JSON_TYPE_PARSER, JsonParser))
#define JSON_IS_PARSER(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), JSON_TYPE_PARSER))
#define JSON_PARSER_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), JSON_TYPE_PARSER, JsonParserClass))
#define JSON_IS_PARSER_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), JSON_TYPE_PARSER))
#define JSON_PARSER_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), JSON_TYPE_PARSER, JsonParserClass))
#define JSON_PARSER_ERROR (json_parser_error_quark ())
#ifdef G_DEFINE_AUTOPTR_CLEANUP_FUNC
#endif
#endif
