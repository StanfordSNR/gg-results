// GGHASH:V5nrGER_Rv.3ZVwv4Wbx8qENspVz2QITqSH0.9vy5PCk00000696
#ifndef __G_SIMPLE_PERMISSION_H__
#define __G_SIMPLE_PERMISSION_H__ 
#if !defined (__GIO_GIO_H_INSIDE__) && !defined (GIO_COMPILATION)
#error "Only <gio/gio.h> can be included directly."
#endif
#include <gio/giotypes.h>
#define G_TYPE_SIMPLE_PERMISSION (g_simple_permission_get_type ())
#define G_SIMPLE_PERMISSION(inst) (G_TYPE_CHECK_INSTANCE_CAST ((inst), G_TYPE_SIMPLE_PERMISSION, GSimplePermission))
#define G_IS_SIMPLE_PERMISSION(inst) (G_TYPE_CHECK_INSTANCE_TYPE ((inst), G_TYPE_SIMPLE_PERMISSION))
#endif
