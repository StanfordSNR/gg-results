// GGHASH:VkhuIoWaV46AKJH10dhpPeBEYL8PC56Ab6p1LvkaFc6800000b6f
#ifndef __POPPLER_MEDIA_H__
#define __POPPLER_MEDIA_H__ 
#include <glib-object.h>
#include "poppler.h"
#define POPPLER_TYPE_MEDIA (poppler_media_get_type ())
#define POPPLER_MEDIA(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), POPPLER_TYPE_MEDIA, PopplerMedia))
#define POPPLER_IS_MEDIA(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), POPPLER_TYPE_MEDIA))
#endif
