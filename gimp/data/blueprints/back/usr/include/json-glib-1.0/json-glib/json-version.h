// GGHASH:VCFjiv0cy7fDxZFPZOKRsreNJmhmo2QU9vrut2n0nzKk00000b3f
#ifndef __JSON_VERSION_H__
#define __JSON_VERSION_H__ 
#if !defined(__JSON_GLIB_INSIDE__) && !defined(JSON_COMPILATION)
#error "Only <json-glib/json-glib.h> can be included directly."
#endif
#define JSON_MAJOR_VERSION (1)
#define JSON_MINOR_VERSION (4)
#define JSON_MICRO_VERSION (2)
#define JSON_VERSION (1.4.2)
#define JSON_VERSION_S "1.4.2"
#define JSON_ENCODE_VERSION(major,minor,micro) ((major) << 24 | (minor) << 16 | (micro) << 8)
#define JSON_VERSION_HEX (JSON_ENCODE_VERSION (JSON_MAJOR_VERSION, JSON_MINOR_VERSION, JSON_MICRO_VERSION))
#define JSON_CHECK_VERSION(major,minor,micro) (JSON_MAJOR_VERSION > (major) || (JSON_MAJOR_VERSION == (major) && JSON_MINOR_VERSION > (minor)) || (JSON_MAJOR_VERSION == (major) && JSON_MINOR_VERSION == (minor) && JSON_MICRO_VERSION >= (micro)))
#endif
