// GGHASH:VGJyYr0QR4kPwgqL7RrC8JC_HDxMuNOkz.FMPV5gCUc000001fbd
#ifndef __GTK_RECENT_CHOOSER_H__
#define __GTK_RECENT_CHOOSER_H__ 
#if defined(GTK_DISABLE_SINGLE_INCLUDES) && !defined (__GTK_H_INSIDE__) && !defined (GTK_COMPILATION)
#error "Only <gtk/gtk.h> can be included directly."
#endif
#include <gtk/gtkwidget.h>
#include <gtk/gtkrecentmanager.h>
#include <gtk/gtkrecentfilter.h>
#define GTK_TYPE_RECENT_CHOOSER (gtk_recent_chooser_get_type ())
#define GTK_RECENT_CHOOSER(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_RECENT_CHOOSER, GtkRecentChooser))
#define GTK_IS_RECENT_CHOOSER(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_RECENT_CHOOSER))
#define GTK_RECENT_CHOOSER_GET_IFACE(inst) (G_TYPE_INSTANCE_GET_INTERFACE ((inst), GTK_TYPE_RECENT_CHOOSER, GtkRecentChooserIface))
#define GTK_RECENT_CHOOSER_ERROR (gtk_recent_chooser_error_quark ())
#ifndef GTK_DISABLE_DEPRECATED
#endif
#endif
