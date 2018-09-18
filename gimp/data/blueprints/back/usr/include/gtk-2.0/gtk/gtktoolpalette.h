// GGHASH:VW00GczKUigREI6LNvadZAs0OMPOIkWlVJwIfLWk6IWg00001e05
#ifndef __GTK_TOOL_PALETTE_H__
#define __GTK_TOOL_PALETTE_H__ 
#if !defined (__GTK_H_INSIDE__) && !defined (GTK_COMPILATION)
#error "Only <gtk/gtk.h> can be included directly."
#endif
#include <gtk/gtkcontainer.h>
#include <gtk/gtkdnd.h>
#include <gtk/gtktoolitem.h>
#define GTK_TYPE_TOOL_PALETTE (gtk_tool_palette_get_type ())
#define GTK_TOOL_PALETTE(obj) (G_TYPE_CHECK_INSTANCE_CAST (obj, GTK_TYPE_TOOL_PALETTE, GtkToolPalette))
#define GTK_TOOL_PALETTE_CLASS(cls) (G_TYPE_CHECK_CLASS_CAST (cls, GTK_TYPE_TOOL_PALETTE, GtkToolPaletteClass))
#define GTK_IS_TOOL_PALETTE(obj) (G_TYPE_CHECK_INSTANCE_TYPE (obj, GTK_TYPE_TOOL_PALETTE))
#define GTK_IS_TOOL_PALETTE_CLASS(obj) (G_TYPE_CHECK_CLASS_TYPE (obj, GTK_TYPE_TOOL_PALETTE))
#define GTK_TOOL_PALETTE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_TOOL_PALETTE, GtkToolPaletteClass))
#endif
