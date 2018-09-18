// GGHASH:VHOmACqcUxARZPtbdXzHdzZW8Xfcl67h4ArviI2djNMc00001322
#ifndef __G_NOTIFICATION_H__
#define __G_NOTIFICATION_H__ 
#if !defined (__GIO_GIO_H_INSIDE__) && !defined (GIO_COMPILATION)
#error "Only <gio/gio.h> can be included directly."
#endif
#include <gio/giotypes.h>
#include <gio/gioenums.h>
#define G_TYPE_NOTIFICATION (g_notification_get_type ())
#define G_NOTIFICATION(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), G_TYPE_NOTIFICATION, GNotification))
#define G_IS_NOTIFICATION(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), G_TYPE_NOTIFICATION))
#endif
