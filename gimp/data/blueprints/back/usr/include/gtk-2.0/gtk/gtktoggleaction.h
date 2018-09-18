// GGHASH:VqqESnhb.GxJkfjIWlp3EIMMZv2OQUvmGxx8IIuLIjGY00000e5f
#ifndef __GTK_TOGGLE_ACTION_H__
#define __GTK_TOGGLE_ACTION_H__ 
#if defined(GTK_DISABLE_SINGLE_INCLUDES) && !defined (__GTK_H_INSIDE__) && !defined (GTK_COMPILATION)
#error "Only <gtk/gtk.h> can be included directly."
#endif
#include <gtk/gtkaction.h>
#define GTK_TYPE_TOGGLE_ACTION (gtk_toggle_action_get_type ())
#define GTK_TOGGLE_ACTION(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_TOGGLE_ACTION, GtkToggleAction))
#define GTK_TOGGLE_ACTION_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_TOGGLE_ACTION, GtkToggleActionClass))
#define GTK_IS_TOGGLE_ACTION(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_TOGGLE_ACTION))
#define GTK_IS_TOGGLE_ACTION_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_TOGGLE_ACTION))
#define GTK_TOGGLE_ACTION_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS((obj), GTK_TYPE_TOGGLE_ACTION, GtkToggleActionClass))
#endif
