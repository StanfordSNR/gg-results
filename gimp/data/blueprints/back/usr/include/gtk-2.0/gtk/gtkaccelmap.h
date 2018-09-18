// GGHASH:VjjfVSVj8sl2wptFGPoX4b_iH1Z_U3v4MbTvDPlNW4us00000ef4
#ifndef __GTK_ACCEL_MAP_H__
#define __GTK_ACCEL_MAP_H__ 
#if defined(GTK_DISABLE_SINGLE_INCLUDES) && !defined (__GTK_H_INSIDE__) && !defined (GTK_COMPILATION)
#error "Only <gtk/gtk.h> can be included directly."
#endif
#include <gtk/gtkaccelgroup.h>
#define GTK_TYPE_ACCEL_MAP (gtk_accel_map_get_type ())
#define GTK_ACCEL_MAP(accel_map) (G_TYPE_CHECK_INSTANCE_CAST ((accel_map), GTK_TYPE_ACCEL_MAP, GtkAccelMap))
#define GTK_ACCEL_MAP_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_ACCEL_MAP, GtkAccelMapClass))
#define GTK_IS_ACCEL_MAP(accel_map) (G_TYPE_CHECK_INSTANCE_TYPE ((accel_map), GTK_TYPE_ACCEL_MAP))
#define GTK_IS_ACCEL_MAP_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_ACCEL_MAP))
#define GTK_ACCEL_MAP_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_ACCEL_MAP, GtkAccelMapClass))
#ifdef G_OS_WIN32
#define gtk_accel_map_load gtk_accel_map_load_utf8
#define gtk_accel_map_save gtk_accel_map_save_utf8
#endif
#endif
