// GGHASH:VXvjQq_JED7iWcmT0kTWyd3ASrHt2Cxa6bV.XwQmIpGE00001103
#ifndef __G_SIMPLE_ACTION_GROUP_H__
#define __G_SIMPLE_ACTION_GROUP_H__ 
#if !defined (__GIO_GIO_H_INSIDE__) && !defined (GIO_COMPILATION)
#error "Only <gio/gio.h> can be included directly."
#endif
#include "gactiongroup.h"
#include "gactionmap.h"
#define G_TYPE_SIMPLE_ACTION_GROUP (g_simple_action_group_get_type ())
#define G_SIMPLE_ACTION_GROUP(inst) (G_TYPE_CHECK_INSTANCE_CAST ((inst), G_TYPE_SIMPLE_ACTION_GROUP, GSimpleActionGroup))
#define G_SIMPLE_ACTION_GROUP_CLASS(class) (G_TYPE_CHECK_CLASS_CAST ((class), G_TYPE_SIMPLE_ACTION_GROUP, GSimpleActionGroupClass))
#define G_IS_SIMPLE_ACTION_GROUP(inst) (G_TYPE_CHECK_INSTANCE_TYPE ((inst), G_TYPE_SIMPLE_ACTION_GROUP))
#define G_IS_SIMPLE_ACTION_GROUP_CLASS(class) (G_TYPE_CHECK_CLASS_TYPE ((class), G_TYPE_SIMPLE_ACTION_GROUP))
#define G_SIMPLE_ACTION_GROUP_GET_CLASS(inst) (G_TYPE_INSTANCE_GET_CLASS ((inst), G_TYPE_SIMPLE_ACTION_GROUP, GSimpleActionGroupClass))
#endif
