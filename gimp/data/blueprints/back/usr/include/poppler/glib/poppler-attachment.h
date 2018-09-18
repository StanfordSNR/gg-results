// GGHASH:VIe23d7EJTm1.zkzXVkoZOB9OPswi52wfmI16W_FcKQw00000b9e
#ifndef __POPPLER_ATTACHMENT_H__
#define __POPPLER_ATTACHMENT_H__ 
#include <glib.h>
#include <glib-object.h>
#include "poppler.h"
#define POPPLER_TYPE_ATTACHMENT (poppler_attachment_get_type ())
#define POPPLER_ATTACHMENT(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), POPPLER_TYPE_ATTACHMENT, PopplerAttachment))
#define POPPLER_IS_ATTACHMENT(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), POPPLER_TYPE_ATTACHMENT))
#endif
