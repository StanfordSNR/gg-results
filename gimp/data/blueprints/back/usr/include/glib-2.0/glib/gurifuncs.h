// GGHASH:VlWihsotc5NT9MvFUkhRwbH7PW_QQVhTkzInhePr5Dak00000a9c
#ifndef __G_URI_FUNCS_H__
#define __G_URI_FUNCS_H__ 
#if !defined (__GLIB_H_INSIDE__) && !defined (GLIB_COMPILATION)
#error "Only <glib.h> can be included directly."
#endif
#include <glib/gtypes.h>
#define G_URI_RESERVED_CHARS_GENERIC_DELIMITERS ":/?#[]@"
#define G_URI_RESERVED_CHARS_SUBCOMPONENT_DELIMITERS "!$&'()*+,;="
#define G_URI_RESERVED_CHARS_ALLOWED_IN_PATH_ELEMENT G_URI_RESERVED_CHARS_SUBCOMPONENT_DELIMITERS ":@"
#define G_URI_RESERVED_CHARS_ALLOWED_IN_PATH G_URI_RESERVED_CHARS_ALLOWED_IN_PATH_ELEMENT "/"
#define G_URI_RESERVED_CHARS_ALLOWED_IN_USERINFO G_URI_RESERVED_CHARS_SUBCOMPONENT_DELIMITERS ":"
#endif
