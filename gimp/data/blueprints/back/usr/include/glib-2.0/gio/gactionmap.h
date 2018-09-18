// GGHASH:V8FeDu8Kf0pkthyIGb.O6QL5ixMUnHsqMu_OTodmTFtE00000f9c
#ifndef __G_ACTION_MAP_H__
#define __G_ACTION_MAP_H__ 
#if !defined (__GIO_GIO_H_INSIDE__) && !defined (GIO_COMPILATION)
#error "Only <gio/gio.h> can be included directly."
#endif
#include <gio/giotypes.h>
#define G_TYPE_ACTION_MAP (g_action_map_get_type ())
#define G_ACTION_MAP(inst) (G_TYPE_CHECK_INSTANCE_CAST ((inst), G_TYPE_ACTION_MAP, GActionMap))
#define G_IS_ACTION_MAP(inst) (G_TYPE_CHECK_INSTANCE_TYPE ((inst), G_TYPE_ACTION_MAP))
#define G_ACTION_MAP_GET_IFACE(inst) (G_TYPE_INSTANCE_GET_INTERFACE ((inst), G_TYPE_ACTION_MAP, GActionMapInterface))
#endif
