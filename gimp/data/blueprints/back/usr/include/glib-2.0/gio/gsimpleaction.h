// GGHASH:V7W9z8kJ36iCygFsW7IFx8o6yd5n1LAUQnX_xe1xk6Sg00000b63
#ifndef __G_SIMPLE_ACTION_H__
#define __G_SIMPLE_ACTION_H__ 
#if !defined (__GIO_GIO_H_INSIDE__) && !defined (GIO_COMPILATION)
#error "Only <gio/gio.h> can be included directly."
#endif
#include <gio/giotypes.h>
#define G_TYPE_SIMPLE_ACTION (g_simple_action_get_type ())
#define G_SIMPLE_ACTION(inst) (G_TYPE_CHECK_INSTANCE_CAST ((inst), G_TYPE_SIMPLE_ACTION, GSimpleAction))
#define G_IS_SIMPLE_ACTION(inst) (G_TYPE_CHECK_INSTANCE_TYPE ((inst), G_TYPE_SIMPLE_ACTION))
#endif
