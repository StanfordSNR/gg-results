// GGHASH:VkbLamFsLPGaH.YOO_37PVKSphjl9_zQuVqMuPl0uj3800000cf2
#ifndef GTK_DISABLE_DEPRECATED
#ifndef __GTK_CURVE_H__
#define __GTK_CURVE_H__ 
#include <gtk/gtkdrawingarea.h>
#define GTK_TYPE_CURVE (gtk_curve_get_type ())
#define GTK_CURVE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_CURVE, GtkCurve))
#define GTK_CURVE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_CURVE, GtkCurveClass))
#define GTK_IS_CURVE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_CURVE))
#define GTK_IS_CURVE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_CURVE))
#define GTK_CURVE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_CURVE, GtkCurveClass))
#endif
#endif
