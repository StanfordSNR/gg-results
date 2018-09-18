// GGHASH:ViaVPKEG4SfAK0UCiq9I6ws0vw_aCr_iBLxWWgT6Tw3g00000d91
#ifndef __GTK_TOOLTIP_H__
#define __GTK_TOOLTIP_H__ 
#if defined(GTK_DISABLE_SINGLE_INCLUDES) && !defined (__GTK_H_INSIDE__) && !defined (GTK_COMPILATION)
#error "Only <gtk/gtk.h> can be included directly."
#endif
#include <gtk/gtkwindow.h>
#define GTK_TYPE_TOOLTIP (gtk_tooltip_get_type ())
#define GTK_TOOLTIP(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_TOOLTIP, GtkTooltip))
#define GTK_IS_TOOLTIP(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_TOOLTIP))
#endif
