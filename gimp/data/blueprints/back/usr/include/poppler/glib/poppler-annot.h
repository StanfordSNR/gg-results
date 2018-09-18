// GGHASH:V5sFbwT0RZbr55gNI8Jk.h4qTzYjx5rIWpZVymDUxgUo00004397
#ifndef __POPPLER_ANNOT_H__
#define __POPPLER_ANNOT_H__ 
#include <glib-object.h>
#include "poppler.h"
#define POPPLER_TYPE_ANNOT (poppler_annot_get_type ())
#define POPPLER_ANNOT(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), POPPLER_TYPE_ANNOT, PopplerAnnot))
#define POPPLER_IS_ANNOT(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), POPPLER_TYPE_ANNOT))
#define POPPLER_TYPE_ANNOT_MARKUP (poppler_annot_markup_get_type ())
#define POPPLER_ANNOT_MARKUP(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), POPPLER_TYPE_ANNOT_MARKUP, PopplerAnnotMarkup))
#define POPPLER_IS_ANNOT_MARKUP(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), POPPLER_TYPE_ANNOT_MARKUP))
#define POPPLER_TYPE_ANNOT_TEXT (poppler_annot_text_get_type ())
#define POPPLER_ANNOT_TEXT(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), POPPLER_TYPE_ANNOT_TEXT, PopplerAnnotText))
#define POPPLER_IS_ANNOT_TEXT(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), POPPLER_TYPE_ANNOT_TEXT))
#define POPPLER_TYPE_ANNOT_TEXT_MARKUP (poppler_annot_text_markup_get_type ())
#define POPPLER_ANNOT_TEXT_MARKUP(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), POPPLER_TYPE_ANNOT_TEXT_MARKUP, PopplerAnnotTextMarkup))
#define POPPLER_IS_ANNOT_TEXT_MARKUP(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), POPPLER_TYPE_ANNOT_TEXT_MARKUP))
#define POPPLER_TYPE_ANNOT_FREE_TEXT (poppler_annot_free_text_get_type ())
#define POPPLER_ANNOT_FREE_TEXT(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), POPPLER_TYPE_ANNOT_FREE_TEXT, PopplerAnnotFreeText))
#define POPPLER_IS_ANNOT_FREE_TEXT(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), POPPLER_TYPE_ANNOT_FREE_TEXT))
#define POPPLER_TYPE_ANNOT_FILE_ATTACHMENT (poppler_annot_file_attachment_get_type ())
#define POPPLER_ANNOT_FILE_ATTACHMENT(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), POPPLER_TYPE_ANNOT_MARKUP, PopplerAnnotFileAttachment))
#define POPPLER_IS_ANNOT_FILE_ATTACHMENT(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), POPPLER_TYPE_ANNOT_FILE_ATTACHMENT))
#define POPPLER_TYPE_ANNOT_MOVIE (poppler_annot_movie_get_type ())
#define POPPLER_ANNOT_MOVIE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), POPPLER_TYPE_ANNOT_MOVIE, PopplerAnnotMovie))
#define POPPLER_IS_ANNOT_MOVIE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), POPPLER_TYPE_ANNOT_MOVIE))
#define POPPLER_TYPE_ANNOT_SCREEN (poppler_annot_screen_get_type ())
#define POPPLER_ANNOT_SCREEN(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), POPPLER_TYPE_ANNOT_SCREEN, PopplerAnnotScreen))
#define POPPLER_IS_ANNOT_SCREEN(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), POPPLER_TYPE_ANNOT_SCREEN))
#define POPPLER_TYPE_ANNOT_LINE (poppler_annot_line_get_type ())
#define POPPLER_ANNOT_LINE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), POPPLER_TYPE_ANNOT_LINE, PopplerAnnotLine))
#define POPPLER_IS_ANNOT_LINE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), POPPLER_TYPE_ANNOT_LINE))
#define POPPLER_TYPE_ANNOT_CALLOUT_LINE (poppler_annot_callout_line_get_type ())
#define POPPLER_TYPE_ANNOT_CIRCLE (poppler_annot_circle_get_type ())
#define POPPLER_ANNOT_CIRCLE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), POPPLER_TYPE_ANNOT_CIRCLE, PopplerAnnotCircle))
#define POPPLER_IS_ANNOT_CIRCLE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), POPPLER_TYPE_ANNOT_CIRCLE))
#define POPPLER_TYPE_ANNOT_SQUARE (poppler_annot_square_get_type ())
#define POPPLER_ANNOT_SQUARE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), POPPLER_TYPE_ANNOT_SQUARE, PopplerAnnotSquare))
#define POPPLER_IS_ANNOT_SQUARE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), POPPLER_TYPE_ANNOT_SQUARE))
#define POPPLER_ANNOT_TEXT_ICON_NOTE "Note"
#define POPPLER_ANNOT_TEXT_ICON_COMMENT "Comment"
#define POPPLER_ANNOT_TEXT_ICON_KEY "Key"
#define POPPLER_ANNOT_TEXT_ICON_HELP "Help"
#define POPPLER_ANNOT_TEXT_ICON_NEW_PARAGRAPH "NewParagraph"
#define POPPLER_ANNOT_TEXT_ICON_PARAGRAPH "Paragraph"
#define POPPLER_ANNOT_TEXT_ICON_INSERT "Insert"
#define POPPLER_ANNOT_TEXT_ICON_CROSS "Cross"
#define POPPLER_ANNOT_TEXT_ICON_CIRCLE "Circle"
#endif