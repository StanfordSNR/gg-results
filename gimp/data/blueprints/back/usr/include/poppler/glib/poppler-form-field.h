// GGHASH:VVOhyWPjgJNPctYC3B5AGqdWNmqpoEY0InzGnwpBl1Ho00001446
#ifndef __POPPLER_FORM_FIELD_H__
#define __POPPLER_FORM_FIELD_H__ 
#include <glib-object.h>
#include "poppler.h"
#define POPPLER_TYPE_FORM_FIELD (poppler_form_field_get_type ())
#define POPPLER_FORM_FIELD(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), POPPLER_TYPE_FORM_FIELD, PopplerFormField))
#define POPPLER_IS_FORM_FIELD(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), POPPLER_TYPE_FORM_FIELD))
#endif
