// GGHASH:VHxDLA28B7pN0wD6TQTS9atZJ4sHGIhcqMIkJRCmqZ1w00001271
#ifndef __EXIF_CONTENT_H__
#define __EXIF_CONTENT_H__ 
#ifdef __cplusplus
#endif
#include <libexif/exif-tag.h>
#include <libexif/exif-entry.h>
#include <libexif/exif-data.h>
#include <libexif/exif-log.h>
#include <libexif/exif-mem.h>
#define exif_content_get_value(c,t,v,m) (exif_content_get_entry (c,t) ? exif_entry_get_value (exif_content_get_entry (c,t),v,m) : NULL)
#ifdef __cplusplus
#endif
#endif
