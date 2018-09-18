// GGHASH:Vh74iLeETRiS74UM72FEpstY.khed.Tb5VouAbePd8HI00001339
#ifndef __GTK_PAGE_SETUP_H__
#define __GTK_PAGE_SETUP_H__ 
#if defined(GTK_DISABLE_SINGLE_INCLUDES) && !defined (__GTK_H_INSIDE__) && !defined (GTK_COMPILATION)
#error "Only <gtk/gtk.h> can be included directly."
#endif
#include <gtk/gtkpapersize.h>
#define GTK_TYPE_PAGE_SETUP (gtk_page_setup_get_type ())
#define GTK_PAGE_SETUP(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_PAGE_SETUP, GtkPageSetup))
#define GTK_IS_PAGE_SETUP(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_PAGE_SETUP))
#endif
