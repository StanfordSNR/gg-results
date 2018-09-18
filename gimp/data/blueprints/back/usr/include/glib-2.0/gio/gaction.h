// GGHASH:VFmYSg9vqRtiYItZxk3d.OU5TZn2BuZvHuy7k2nQsTsU00001202
#ifndef __G_ACTION_H__
#define __G_ACTION_H__ 
#if !defined (__GIO_GIO_H_INSIDE__) && !defined (GIO_COMPILATION)
#error "Only <gio/gio.h> can be included directly."
#endif
#include <gio/giotypes.h>
#define G_TYPE_ACTION (g_action_get_type ())
#define G_ACTION(inst) (G_TYPE_CHECK_INSTANCE_CAST ((inst), G_TYPE_ACTION, GAction))
#define G_IS_ACTION(inst) (G_TYPE_CHECK_INSTANCE_TYPE ((inst), G_TYPE_ACTION))
#define G_ACTION_GET_IFACE(inst) (G_TYPE_INSTANCE_GET_INTERFACE ((inst), G_TYPE_ACTION, GActionInterface))
#endif
