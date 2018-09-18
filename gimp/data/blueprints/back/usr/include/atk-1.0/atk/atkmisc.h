// GGHASH:Vc0nwRcfxkF7RoalzhLS_QXi0brEtfWPRzqGY6YdyHFY00000e33
#ifndef __ATK_MISC_H__
#define __ATK_MISC_H__ 
#if defined(ATK_DISABLE_SINGLE_INCLUDES) && !defined (__ATK_H_INSIDE__) && !defined (ATK_COMPILATION)
#error "Only <atk/atk.h> can be included directly."
#endif
#include <glib-object.h>
#include <atk/atkversion.h>
#ifndef ATK_VAR
# ifdef G_PLATFORM_WIN32
# ifdef ATK_STATIC_COMPILATION
#define ATK_VAR extern
# else
# ifdef ATK_COMPILATION
# ifdef DLL_EXPORT
#define ATK_VAR _ATK_EXTERN
# else
#define ATK_VAR extern
# endif
# else
#define ATK_VAR extern __declspec(dllimport)
# endif
# endif
# else
#define ATK_VAR _ATK_EXTERN
# endif
#endif
#define ATK_TYPE_MISC (atk_misc_get_type ())
#define ATK_IS_MISC(obj) G_TYPE_CHECK_INSTANCE_TYPE ((obj), ATK_TYPE_MISC)
#define ATK_MISC(obj) G_TYPE_CHECK_INSTANCE_CAST ((obj), ATK_TYPE_MISC, AtkMisc)
#define ATK_MISC_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), ATK_TYPE_MISC, AtkMiscClass))
#define ATK_IS_MISC_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), ATK_TYPE_MISC))
#define ATK_MISC_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), ATK_TYPE_MISC, AtkMiscClass))
#ifndef _TYPEDEF_ATK_MISC_
#define _TYPEDEF_ATK_MISC_ 
#endif
#endif
