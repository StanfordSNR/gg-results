// GGHASH:V5Ma1fIMXoP_RSan7YktIQgoEqSzFr8phUQ1_bDMI9oI0000422d
#ifndef __POPPLER_DOCUMENT_H__
#define __POPPLER_DOCUMENT_H__ 
#include <glib-object.h>
#include <gio/gio.h>
#include "poppler.h"
#define POPPLER_TYPE_DOCUMENT (poppler_document_get_type ())
#define POPPLER_DOCUMENT(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), POPPLER_TYPE_DOCUMENT, PopplerDocument))
#define POPPLER_IS_DOCUMENT(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), POPPLER_TYPE_DOCUMENT))
#define POPPLER_TYPE_INDEX_ITER (poppler_index_iter_get_type ())
#define POPPLER_TYPE_FONT_INFO (poppler_font_info_get_type ())
#define POPPLER_FONT_INFO(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), POPPLER_TYPE_FONT_INFO, PopplerFontInfo))
#define POPPLER_IS_FONT_INFO(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), POPPLER_TYPE_FONT_INFO))
#define POPPLER_TYPE_FONTS_ITER (poppler_fonts_iter_get_type ())
#define POPPLER_TYPE_LAYERS_ITER (poppler_layers_iter_get_type ())
#define POPPLER_TYPE_PS_FILE (poppler_ps_file_get_type ())
#define POPPLER_PS_FILE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), POPPLER_TYPE_PS_FILE, PopplerPSFile))
#define POPPLER_IS_PS_FILE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), POPPLER_TYPE_PS_FILE))
#endif
