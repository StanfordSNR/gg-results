// GGHASH:VflpMJv4gByYSUyzibE6mAL1VurpMy_HrcWHK9zsd42c00001847
#ifndef __EXIF_ENTRY_H__
#define __EXIF_ENTRY_H__ 
#ifdef __cplusplus
#endif
#include <libexif/exif-content.h>
#include <libexif/exif-format.h>
#include <libexif/exif-mem.h>
#define exif_entry_get_ifd(e) ((e)?exif_content_get_ifd((e)->parent):EXIF_IFD_COUNT)
#ifdef __cplusplus
#endif
#endif
