// GGHASH:VE6qwuZpbj3LdXy2KQM.GjTdmagq9E4bIZqDQnyUsFno0001b0b4
#ifndef CAIRO_H
#define CAIRO_H 
#include "cairo-version.h"
#include "cairo-features.h"
#include "cairo-deprecated.h"
#ifdef __cplusplus
#define CAIRO_BEGIN_DECLS extern "C" {
#define CAIRO_END_DECLS }
#else
#define CAIRO_BEGIN_DECLS 
#define CAIRO_END_DECLS 
#endif
#ifndef cairo_public
# if defined (_MSC_VER) && ! defined (CAIRO_WIN32_STATIC_BUILD)
#define cairo_public __declspec(dllimport)
# else
#define cairo_public 
# endif
#endif
#define CAIRO_VERSION_ENCODE(major,minor,micro) ( ((major) * 10000) + ((minor) * 100) + ((micro) * 1))
#define CAIRO_VERSION CAIRO_VERSION_ENCODE( CAIRO_VERSION_MAJOR, CAIRO_VERSION_MINOR, CAIRO_VERSION_MICRO)
#define CAIRO_VERSION_STRINGIZE_(major,minor,micro) #major"."#minor"."#micro
#define CAIRO_VERSION_STRINGIZE(major,minor,micro) CAIRO_VERSION_STRINGIZE_(major, minor, micro)
#define CAIRO_VERSION_STRING CAIRO_VERSION_STRINGIZE( CAIRO_VERSION_MAJOR, CAIRO_VERSION_MINOR, CAIRO_VERSION_MICRO)
#define CAIRO_TAG_DEST "cairo.dest"
#define CAIRO_TAG_LINK "Link"
#if CAIRO_HAS_PNG_FUNCTIONS
#endif
#define CAIRO_MIME_TYPE_JPEG "image/jpeg"
#define CAIRO_MIME_TYPE_PNG "image/png"
#define CAIRO_MIME_TYPE_JP2 "image/jp2"
#define CAIRO_MIME_TYPE_URI "text/x-uri"
#define CAIRO_MIME_TYPE_UNIQUE_ID "application/x-cairo.uuid"
#define CAIRO_MIME_TYPE_JBIG2 "application/x-cairo.jbig2"
#define CAIRO_MIME_TYPE_JBIG2_GLOBAL "application/x-cairo.jbig2-global"
#define CAIRO_MIME_TYPE_JBIG2_GLOBAL_ID "application/x-cairo.jbig2-global-id"
#define CAIRO_MIME_TYPE_CCITT_FAX "image/g3fax"
#define CAIRO_MIME_TYPE_CCITT_FAX_PARAMS "application/x-cairo.ccitt.params"
#define CAIRO_MIME_TYPE_EPS "application/postscript"
#define CAIRO_MIME_TYPE_EPS_PARAMS "application/x-cairo.eps.params"
#if CAIRO_HAS_PNG_FUNCTIONS
#endif
#endif
