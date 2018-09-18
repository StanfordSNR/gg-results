// GGHASH:Vdngqo0F5ye0R.imWqTAtQ_Nv_CebquBs_MH4GW4kxtw00000dc6
#ifndef __GTK_HSV_H__
#define __GTK_HSV_H__ 
#if !defined (__GTK_H_INSIDE__) && !defined (GTK_COMPILATION)
#error "Only <gtk/gtk.h> can be included directly."
#endif
#include <gtk/gtkwidget.h>
#define GTK_TYPE_HSV (gtk_hsv_get_type ())
#define GTK_HSV(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_HSV, GtkHSV))
#define GTK_HSV_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_HSV, GtkHSVClass))
#define GTK_IS_HSV(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_HSV))
#define GTK_IS_HSV_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_HSV))
#define GTK_HSV_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_HSV, GtkHSVClass))
#endif
