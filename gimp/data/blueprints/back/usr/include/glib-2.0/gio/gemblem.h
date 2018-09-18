// GGHASH:V6TKMAER5vcjy18Flq_u6L0x9Tq7H.ZRLQLUqFoQO4A40000086b
#ifndef __G_EMBLEM_H__
#define __G_EMBLEM_H__ 
#if !defined (__GIO_GIO_H_INSIDE__) && !defined (GIO_COMPILATION)
#error "Only <gio/gio.h> can be included directly."
#endif
#include <gio/gioenums.h>
#define G_TYPE_EMBLEM (g_emblem_get_type ())
#define G_EMBLEM(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), G_TYPE_EMBLEM, GEmblem))
#define G_EMBLEM_CLASS(k) (G_TYPE_CHECK_CLASS_CAST((k), G_TYPE_EMBLEM, GEmblemClass))
#define G_IS_EMBLEM(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), G_TYPE_EMBLEM))
#define G_IS_EMBLEM_CLASS(k) (G_TYPE_CHECK_CLASS_TYPE ((k), G_TYPE_EMBLEM))
#define G_EMBLEM_GET_CLASS(o) (G_TYPE_INSTANCE_GET_CLASS ((o), G_TYPE_EMBLEM, GEmblemClass))
#endif
