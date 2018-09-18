// GGHASH:VTSCM4rnHFcjOfafJRKqpXqrzFLslDFF4P20LVH.MMPg00001150
#ifndef __GTK_PROGRESS_H__
#define __GTK_PROGRESS_H__ 
#include <gtk/gtkwidget.h>
#include <gtk/gtkadjustment.h>
#if !defined (GTK_DISABLE_DEPRECATED) || defined (__GTK_PROGRESS_C__) || defined (__GTK_PROGRESS_BAR_C__)
#define GTK_TYPE_PROGRESS (gtk_progress_get_type ())
#define GTK_PROGRESS(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_PROGRESS, GtkProgress))
#define GTK_PROGRESS_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_PROGRESS, GtkProgressClass))
#define GTK_IS_PROGRESS(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_PROGRESS))
#define GTK_IS_PROGRESS_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_PROGRESS))
#define GTK_PROGRESS_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_PROGRESS, GtkProgressClass))
#endif
#if !defined (GTK_DISABLE_DEPRECATED) || defined (__GTK_PROGRESS_C__) || defined (__GTK_PROGRESS_BAR_C__)
#endif
#endif
