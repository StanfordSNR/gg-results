// GGHASH:VEmboCITpT.q8MxQ6_YjMRD91DxUX2Ktjgm4Um1cCWBQ00003d65
#ifndef __POPPLER_PAGE_H__
#define __POPPLER_PAGE_H__ 
#include <glib-object.h>
#include "poppler.h"
#include <cairo.h>
#define POPPLER_TYPE_PAGE (poppler_page_get_type ())
#define POPPLER_PAGE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), POPPLER_TYPE_PAGE, PopplerPage))
#define POPPLER_IS_PAGE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), POPPLER_TYPE_PAGE))
#define POPPLER_TYPE_RECTANGLE (poppler_rectangle_get_type ())
#define POPPLER_TYPE_POINT (poppler_point_get_type ())
#define POPPLER_TYPE_QUADRILATERAL (poppler_quadrilateral_get_type ())
#define POPPLER_TYPE_COLOR (poppler_color_get_type ())
#define POPPLER_TYPE_TEXT_ATTRIBUTES (poppler_text_attributes_get_type ())
#define POPPLER_TYPE_LINK_MAPPING (poppler_link_mapping_get_type ())
#define POPPLER_TYPE_PAGE_TRANSITION (poppler_page_transition_get_type ())
#define POPPLER_TYPE_IMAGE_MAPPING (poppler_image_mapping_get_type ())
#define POPPLER_TYPE_FORM_FIELD_MAPPING (poppler_form_field_mapping_get_type ())
#define POPPLER_TYPE_ANNOT_MAPPING (poppler_annot_mapping_get_type ())
#endif
