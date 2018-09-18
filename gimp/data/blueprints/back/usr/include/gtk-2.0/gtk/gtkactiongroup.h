// GGHASH:VMYPoDejry3R4QYjnkeEx1.Awidc86QlLfxE9qsz94pM00002006
#ifndef __GTK_ACTION_GROUP_H__
#define __GTK_ACTION_GROUP_H__ 
#if defined(GTK_DISABLE_SINGLE_INCLUDES) && !defined (__GTK_H_INSIDE__) && !defined (GTK_COMPILATION)
#error "Only <gtk/gtk.h> can be included directly."
#endif
#include <gtk/gtkaction.h>
#include <gtk/gtktypeutils.h>
#define GTK_TYPE_ACTION_GROUP (gtk_action_group_get_type ())
#define GTK_ACTION_GROUP(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_ACTION_GROUP, GtkActionGroup))
#define GTK_ACTION_GROUP_CLASS(vtable) (G_TYPE_CHECK_CLASS_CAST ((vtable), GTK_TYPE_ACTION_GROUP, GtkActionGroupClass))
#define GTK_IS_ACTION_GROUP(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_ACTION_GROUP))
#define GTK_IS_ACTION_GROUP_CLASS(vtable) (G_TYPE_CHECK_CLASS_TYPE ((vtable), GTK_TYPE_ACTION_GROUP))
#define GTK_ACTION_GROUP_GET_CLASS(inst) (G_TYPE_INSTANCE_GET_CLASS ((inst), GTK_TYPE_ACTION_GROUP, GtkActionGroupClass))
#endif
