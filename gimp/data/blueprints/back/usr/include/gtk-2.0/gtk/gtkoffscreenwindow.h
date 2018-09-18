// GGHASH:VdFUpqaLWcanNkiWzwNsekPZW82rZSoS46_vLlV4_mi000000912
#ifndef __GTK_OFFSCREEN_WINDOW_H__
#define __GTK_OFFSCREEN_WINDOW_H__ 
#if !defined (__GTK_H_INSIDE__) && !defined (GTK_COMPILATION)
#error "Only <gtk/gtk.h> can be included directly."
#endif
#include <gtk/gtkwindow.h>
#define GTK_TYPE_OFFSCREEN_WINDOW (gtk_offscreen_window_get_type ())
#define GTK_OFFSCREEN_WINDOW(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), GTK_TYPE_OFFSCREEN_WINDOW, GtkOffscreenWindow))
#define GTK_OFFSCREEN_WINDOW_CLASS(k) (G_TYPE_CHECK_CLASS_CAST ((k), GTK_TYPE_OFFSCREEN_WINDOW, GtkOffscreenWindowClass))
#define GTK_IS_OFFSCREEN_WINDOW(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), GTK_TYPE_OFFSCREEN_WINDOW))
#define GTK_IS_OFFSCREEN_WINDOW_CLASS(k) (G_TYPE_CHECK_CLASS_TYPE ((k), GTK_TYPE_OFFSCREEN_WINDOW))
#define GTK_OFFSCREEN_WINDOW_GET_CLASS(o) (G_TYPE_INSTANCE_GET_CLASS ((o), GTK_TYPE_OFFSCREEN_WINDOW, GtkOffscreenWindowClass))
#endif
