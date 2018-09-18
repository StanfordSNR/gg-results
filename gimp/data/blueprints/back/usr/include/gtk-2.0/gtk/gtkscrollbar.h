// GGHASH:V0Sa9FGiDMWu_nfUrwlP6NwFtazlUlmykmcYlo7FKijw00000985
#ifndef __GTK_SCROLLBAR_H__
#define __GTK_SCROLLBAR_H__ 
#if defined(GTK_DISABLE_SINGLE_INCLUDES) && !defined (__GTK_H_INSIDE__) && !defined (GTK_COMPILATION)
#error "Only <gtk/gtk.h> can be included directly."
#endif
#include <gtk/gtkrange.h>
#define GTK_TYPE_SCROLLBAR (gtk_scrollbar_get_type ())
#define GTK_SCROLLBAR(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_SCROLLBAR, GtkScrollbar))
#define GTK_SCROLLBAR_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_SCROLLBAR, GtkScrollbarClass))
#define GTK_IS_SCROLLBAR(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_SCROLLBAR))
#define GTK_IS_SCROLLBAR_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_SCROLLBAR))
#define GTK_SCROLLBAR_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_SCROLLBAR, GtkScrollbarClass))
#endif
