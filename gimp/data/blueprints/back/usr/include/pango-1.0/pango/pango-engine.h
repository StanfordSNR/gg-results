// GGHASH:Vy13p7eeeepgnSZP5rb4kJSL7PufGTmk_FP49hMkH2gc00003d04
#ifndef __PANGO_ENGINE_H__
#define __PANGO_ENGINE_H__ 
#include <pango/pango-types.h>
#include <pango/pango-item.h>
#include <pango/pango-font.h>
#include <pango/pango-glyph.h>
#include <pango/pango-script.h>
#ifdef PANGO_ENABLE_ENGINE
#define PANGO_RENDER_TYPE_NONE "PangoRenderNone"
#define PANGO_TYPE_ENGINE (pango_engine_get_type ())
#define PANGO_ENGINE(object) (G_TYPE_CHECK_INSTANCE_CAST ((object), PANGO_TYPE_ENGINE, PangoEngine))
#define PANGO_IS_ENGINE(object) (G_TYPE_CHECK_INSTANCE_TYPE ((object), PANGO_TYPE_ENGINE))
#define PANGO_ENGINE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), PANGO_TYPE_ENGINE, PangoEngineClass))
#define PANGO_IS_ENGINE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), PANGO_TYPE_ENGINE))
#define PANGO_ENGINE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), PANGO_TYPE_ENGINE, PangoEngineClass))
#define PANGO_ENGINE_TYPE_LANG "PangoEngineLang"
#define PANGO_TYPE_ENGINE_LANG (pango_engine_lang_get_type ())
#define PANGO_ENGINE_LANG(object) (G_TYPE_CHECK_INSTANCE_CAST ((object), PANGO_TYPE_ENGINE_LANG, PangoEngineLang))
#define PANGO_IS_ENGINE_LANG(object) (G_TYPE_CHECK_INSTANCE_TYPE ((object), PANGO_TYPE_ENGINE_LANG))
#define PANGO_ENGINE_LANG_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), PANGO_TYPE_ENGINE_LANG, PangoEngineLangClass))
#define PANGO_IS_ENGINE_LANG_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), PANGO_TYPE_ENGINE_LANG))
#define PANGO_ENGINE_LANG_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), PANGO_TYPE_ENGINE_LANG, PangoEngineLangClass))
#define PANGO_ENGINE_TYPE_SHAPE "PangoEngineShape"
#define PANGO_TYPE_ENGINE_SHAPE (pango_engine_shape_get_type ())
#define PANGO_ENGINE_SHAPE(object) (G_TYPE_CHECK_INSTANCE_CAST ((object), PANGO_TYPE_ENGINE_SHAPE, PangoEngineShape))
#define PANGO_IS_ENGINE_SHAPE(object) (G_TYPE_CHECK_INSTANCE_TYPE ((object), PANGO_TYPE_ENGINE_SHAPE))
#define PANGO_ENGINE_SHAPE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), PANGO_TYPE_ENGINE_SHAPE, PangoEngine_ShapeClass))
#define PANGO_IS_ENGINE_SHAPE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), PANGO_TYPE_ENGINE_SHAPE))
#define PANGO_ENGINE_SHAPE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), PANGO_TYPE_ENGINE_SHAPE, PangoEngineShapeClass))
#define PANGO_ENGINE_DEFINE_TYPE(name,prefix,class_init,instance_init,parent_type) static GType prefix ## _type; static void prefix ## _register_type (GTypeModule *module) { const GTypeInfo object_info = { sizeof (name ## Class), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (name), 0, (GInstanceInitFunc) instance_init, NULL }; prefix ## _type = g_type_module_register_type (module, parent_type, #name, &object_info, 0); }
#define PANGO_ENGINE_LANG_DEFINE_TYPE(name,prefix,class_init,instance_init) PANGO_ENGINE_DEFINE_TYPE (name, prefix, class_init, instance_init, PANGO_TYPE_ENGINE_LANG)
#define PANGO_ENGINE_SHAPE_DEFINE_TYPE(name,prefix,class_init,instance_init) PANGO_ENGINE_DEFINE_TYPE (name, prefix, class_init, instance_init, PANGO_TYPE_ENGINE_SHAPE)
#ifdef PANGO_MODULE_PREFIX
#define PANGO_MODULE_ENTRY(func) _PANGO_MODULE_ENTRY2(PANGO_MODULE_PREFIX,func)
#define _PANGO_MODULE_ENTRY2(prefix,func) _PANGO_MODULE_ENTRY3(prefix,func)
#define _PANGO_MODULE_ENTRY3(prefix,func) prefix ##_script_engine_ ##func
#else
#define PANGO_MODULE_ENTRY(func) script_engine_ ##func
#endif
#endif
#endif
