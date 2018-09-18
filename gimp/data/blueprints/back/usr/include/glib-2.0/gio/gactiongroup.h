// GGHASH:V4vWXO_KPtrkwpA8CaRsFszlBVOWbEpJ00.ongfSw8Kg000023cf
#ifndef __G_ACTION_GROUP_H__
#define __G_ACTION_GROUP_H__ 
#if !defined (__GIO_GIO_H_INSIDE__) && !defined (GIO_COMPILATION)
#error "Only <gio/gio.h> can be included directly."
#endif
#include <gio/giotypes.h>
#define G_TYPE_ACTION_GROUP (g_action_group_get_type ())
#define G_ACTION_GROUP(inst) (G_TYPE_CHECK_INSTANCE_CAST ((inst), G_TYPE_ACTION_GROUP, GActionGroup))
#define G_IS_ACTION_GROUP(inst) (G_TYPE_CHECK_INSTANCE_TYPE ((inst), G_TYPE_ACTION_GROUP))
#define G_ACTION_GROUP_GET_IFACE(inst) (G_TYPE_INSTANCE_GET_INTERFACE ((inst), G_TYPE_ACTION_GROUP, GActionGroupInterface))
#endif
