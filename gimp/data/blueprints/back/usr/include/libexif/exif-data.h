// GGHASH:V6ym.PX6Q6ZsDPiiO_NBNQGRnFbLFWzeEFeLGU3eOyyA000022ac
#ifndef __EXIF_DATA_H__
#define __EXIF_DATA_H__ 
#ifdef __cplusplus
#endif
#include <libexif/exif-byte-order.h>
#include <libexif/exif-data-type.h>
#include <libexif/exif-ifd.h>
#include <libexif/exif-log.h>
#include <libexif/exif-tag.h>
#include <libexif/exif-content.h>
#include <libexif/exif-mnote-data.h>
#include <libexif/exif-mem.h>
#define exif_data_get_entry(d,t) (exif_content_get_entry(d->ifd[EXIF_IFD_0],t) ? exif_content_get_entry(d->ifd[EXIF_IFD_0],t) : exif_content_get_entry(d->ifd[EXIF_IFD_1],t) ? exif_content_get_entry(d->ifd[EXIF_IFD_1],t) : exif_content_get_entry(d->ifd[EXIF_IFD_EXIF],t) ? exif_content_get_entry(d->ifd[EXIF_IFD_EXIF],t) : exif_content_get_entry(d->ifd[EXIF_IFD_GPS],t) ? exif_content_get_entry(d->ifd[EXIF_IFD_GPS],t) : exif_content_get_entry(d->ifd[EXIF_IFD_INTEROPERABILITY],t) ? exif_content_get_entry(d->ifd[EXIF_IFD_INTEROPERABILITY],t) : NULL)
#ifdef __cplusplus
#endif
#endif
