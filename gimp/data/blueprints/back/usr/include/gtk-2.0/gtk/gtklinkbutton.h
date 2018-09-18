// GGHASH:VJPCjrsPa1CgQoBD5G8nqjukAqTzuw4H2vsbcIYXWciU00000d40
#ifndef __GTK_LINK_BUTTON_H__
#define __GTK_LINK_BUTTON_H__ 
#if defined(GTK_DISABLE_SINGLE_INCLUDES) && !defined (__GTK_H_INSIDE__) && !defined (GTK_COMPILATION)
#error "Only <gtk/gtk.h> can be included directly."
#endif
#include <gtk/gtkbutton.h>
#define GTK_TYPE_LINK_BUTTON (gtk_link_button_get_type ())
#define GTK_LINK_BUTTON(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_LINK_BUTTON, GtkLinkButton))
#define GTK_IS_LINK_BUTTON(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_LINK_BUTTON))
#define GTK_LINK_BUTTON_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_LINK_BUTTON, GtkLinkButtonClass))
#define GTK_IS_LINK_BUTTON_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_LINK_BUTTON))
#define GTK_LINK_BUTTON_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_LINK_BUTTON, GtkLinkButtonClass))
#ifndef GTK_DISABLE_DEPRECATED
#endif
#endif
