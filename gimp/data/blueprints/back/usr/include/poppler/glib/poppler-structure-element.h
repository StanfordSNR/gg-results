// GGHASH:Va7rXrjtgwHXX.LgapS47vCPnD1AdH.n4Hn8zaFlg0mI00004d39
#ifndef __POPPLER_STRUCTURE_ELEMENT_H__
#define __POPPLER_STRUCTURE_ELEMENT_H__ 
#include <glib-object.h>
#include "poppler.h"
#define POPPLER_TYPE_STRUCTURE_ELEMENT (poppler_structure_element_get_type ())
#define POPPLER_STRUCTURE_ELEMENT(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), POPPLER_TYPE_STRUCTURE_ELEMENT, PopplerStructureElement))
#define POPPLER_IS_STRUCTURE_ELEMENT(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), POPPLER_TYPE_STRUCTURE_ELEMENT))
#define POPPLER_TYPE_STRUCTURE_ELEMENT_ITER (poppler_structure_element_iter_get_type ())
#define POPPLER_TYPE_TEXT_SPAN (poppler_text_span_get_type ())
#endif
