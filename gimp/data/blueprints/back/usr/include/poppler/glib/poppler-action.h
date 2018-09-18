// GGHASH:VFtfsdjM53HivMfev64GZUysz1u6b9RuEZSCzk3P8CHc0000229b
#ifndef __POPPLER_ACTION_H__
#define __POPPLER_ACTION_H__ 
#include <glib-object.h>
#include "poppler.h"
#define POPPLER_TYPE_ACTION (poppler_action_get_type ())
#define POPPLER_ACTION(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), POPPLER_TYPE_ACTION, PopplerAction))
#define POPPLER_TYPE_DEST (poppler_dest_get_type ())
#endif
