// GGHASH:VBAXfbY7uLffy0pHKQ_W7ZSzX4Bbo38QAylhyq7MyYmY00009435
#ifndef FTMODAPI_H_
#define FTMODAPI_H_ 
#include <ft2build.h>
#include FT_FREETYPE_H
#ifdef FREETYPE_H
#error "freetype.h of FreeType 1 has been loaded!"
#error "Please fix the directory search order for header files"
#error "so that freetype.h of FreeType 2 is found first."
#endif
#define FT_MODULE_FONT_DRIVER 1
#define FT_MODULE_RENDERER 2
#define FT_MODULE_HINTER 4
#define FT_MODULE_STYLER 8
#define FT_MODULE_DRIVER_SCALABLE 0x100
#define FT_MODULE_DRIVER_NO_OUTLINES 0x200
#define FT_MODULE_DRIVER_HAS_HINTER 0x400
#define FT_MODULE_DRIVER_HINTS_LIGHTLY 0x800
#define ft_module_font_driver FT_MODULE_FONT_DRIVER
#define ft_module_renderer FT_MODULE_RENDERER
#define ft_module_hinter FT_MODULE_HINTER
#define ft_module_styler FT_MODULE_STYLER
#define ft_module_driver_scalable FT_MODULE_DRIVER_SCALABLE
#define ft_module_driver_no_outlines FT_MODULE_DRIVER_NO_OUTLINES
#define ft_module_driver_has_hinter FT_MODULE_DRIVER_HAS_HINTER
#define ft_module_driver_hints_lightly FT_MODULE_DRIVER_HINTS_LIGHTLY
#endif
