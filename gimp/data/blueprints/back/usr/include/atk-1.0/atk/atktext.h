// GGHASH:VCXukpmNzrUWGSiGbG4IjeVTlT8krJU30gOnUhg.ykxc000055bf
#ifndef __ATK_TEXT_H__
#define __ATK_TEXT_H__ 
#if defined(ATK_DISABLE_SINGLE_INCLUDES) && !defined (__ATK_H_INSIDE__) && !defined (ATK_COMPILATION)
#error "Only <atk/atk.h> can be included directly."
#endif
#include <glib-object.h>
#include <atk/atkobject.h>
#include <atk/atkutil.h>
#define ATK_TYPE_TEXT (atk_text_get_type ())
#define ATK_IS_TEXT(obj) G_TYPE_CHECK_INSTANCE_TYPE ((obj), ATK_TYPE_TEXT)
#define ATK_TEXT(obj) G_TYPE_CHECK_INSTANCE_CAST ((obj), ATK_TYPE_TEXT, AtkText)
#define ATK_TEXT_GET_IFACE(obj) (G_TYPE_INSTANCE_GET_INTERFACE ((obj), ATK_TYPE_TEXT, AtkTextIface))
#ifndef _TYPEDEF_ATK_TEXT_
#define _TYPEDEF_ATK_TEXT_ 
#endif
#endif
