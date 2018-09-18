// GGHASH:VNbmhyEU9hiGrPmRF6NXW9RXDLjvhpKHFaTlnmiaFhAM00000a5a
#ifndef __GTK_RECENT_CHOOSER_WIDGET_H__
#define __GTK_RECENT_CHOOSER_WIDGET_H__ 
#if defined(GTK_DISABLE_SINGLE_INCLUDES) && !defined (__GTK_H_INSIDE__) && !defined (GTK_COMPILATION)
#error "Only <gtk/gtk.h> can be included directly."
#endif
#include <gtk/gtkrecentchooser.h>
#include <gtk/gtkvbox.h>
#define GTK_TYPE_RECENT_CHOOSER_WIDGET (gtk_recent_chooser_widget_get_type ())
#define GTK_RECENT_CHOOSER_WIDGET(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_RECENT_CHOOSER_WIDGET, GtkRecentChooserWidget))
#define GTK_IS_RECENT_CHOOSER_WIDGET(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_RECENT_CHOOSER_WIDGET))
#define GTK_RECENT_CHOOSER_WIDGET_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_RECENT_CHOOSER_WIDGET, GtkRecentChooserWidgetClass))
#define GTK_IS_RECENT_CHOOSER_WIDGET_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_RECENT_CHOOSER_WIDGET))
#define GTK_RECENT_CHOOSER_WIDGET_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_RECENT_CHOOSER_WIDGET, GtkRecentChooserWidgetClass))
#endif
