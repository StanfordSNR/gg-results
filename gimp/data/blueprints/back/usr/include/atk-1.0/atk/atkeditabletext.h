// GGHASH:Vnxf0nbC98kZK2ufwL7NKcVfIr_fLz2mpkevx7TIH3s40000135d
#ifndef __ATK_EDITABLE_TEXT_H__
#define __ATK_EDITABLE_TEXT_H__ 
#if defined(ATK_DISABLE_SINGLE_INCLUDES) && !defined (__ATK_H_INSIDE__) && !defined (ATK_COMPILATION)
#error "Only <atk/atk.h> can be included directly."
#endif
#include <atk/atkobject.h>
#include <atk/atktext.h>
#define ATK_TYPE_EDITABLE_TEXT (atk_editable_text_get_type ())
#define ATK_IS_EDITABLE_TEXT(obj) G_TYPE_CHECK_INSTANCE_TYPE ((obj), ATK_TYPE_EDITABLE_TEXT)
#define ATK_EDITABLE_TEXT(obj) G_TYPE_CHECK_INSTANCE_CAST ((obj), ATK_TYPE_EDITABLE_TEXT, AtkEditableText)
#define ATK_EDITABLE_TEXT_GET_IFACE(obj) (G_TYPE_INSTANCE_GET_INTERFACE ((obj), ATK_TYPE_EDITABLE_TEXT, AtkEditableTextIface))
#ifndef _TYPEDEF_ATK_EDITABLE_TEXT_
#define _TYPEDEF_ATK_EDITABLE_TEXT_ 
#endif
#endif
