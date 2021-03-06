// GGHASH:Vtp.fvxaslghnmyU_rMycWa7g0SSBojRIOkh9FDrOfM40000099c
#ifndef __GTK_CELL_RENDERER_COMBO_H__
#define __GTK_CELL_RENDERER_COMBO_H__ 
#if defined(GTK_DISABLE_SINGLE_INCLUDES) && !defined (__GTK_H_INSIDE__) && !defined (GTK_COMPILATION)
#error "Only <gtk/gtk.h> can be included directly."
#endif
#include <gtk/gtktreemodel.h>
#include <gtk/gtkcellrenderertext.h>
#define GTK_TYPE_CELL_RENDERER_COMBO (gtk_cell_renderer_combo_get_type ())
#define GTK_CELL_RENDERER_COMBO(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_CELL_RENDERER_COMBO, GtkCellRendererCombo))
#define GTK_CELL_RENDERER_COMBO_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_CELL_RENDERER_COMBO, GtkCellRendererComboClass))
#define GTK_IS_CELL_RENDERER_COMBO(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_CELL_RENDERER_COMBO))
#define GTK_IS_CELL_RENDERER_COMBO_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_CELL_RENDERER_COMBO))
#define GTK_CELL_RENDERER_COMBO_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_CELL_RENDERER_COMBO, GtkCellRendererTextClass))
#endif
