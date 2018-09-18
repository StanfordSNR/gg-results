// GGHASH:VeOXpLLVpusD7S3iXnDdUKgOS_VLGGU9Ys2ZJD3lzqto00000e97
#ifndef __GTK_RADIO_ACTION_H__
#define __GTK_RADIO_ACTION_H__ 
#if defined(GTK_DISABLE_SINGLE_INCLUDES) && !defined (__GTK_H_INSIDE__) && !defined (GTK_COMPILATION)
#error "Only <gtk/gtk.h> can be included directly."
#endif
#include <gtk/gtktoggleaction.h>
#define GTK_TYPE_RADIO_ACTION (gtk_radio_action_get_type ())
#define GTK_RADIO_ACTION(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_RADIO_ACTION, GtkRadioAction))
#define GTK_RADIO_ACTION_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_RADIO_ACTION, GtkRadioActionClass))
#define GTK_IS_RADIO_ACTION(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_RADIO_ACTION))
#define GTK_IS_RADIO_ACTION_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_RADIO_ACTION))
#define GTK_RADIO_ACTION_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS((obj), GTK_TYPE_RADIO_ACTION, GtkRadioActionClass))
#endif
