// GGHASH:V7i4iqGkCyl5pGttEpOrDAniZXlZnh6lMe8tK9BxOO2M000099db
#ifndef FTGLYPH_H_
#define FTGLYPH_H_ 
#include <ft2build.h>
#include FT_FREETYPE_H
#ifdef FREETYPE_H
#error "freetype.h of FreeType 1 has been loaded!"
#error "Please fix the directory search order for header files"
#error "so that freetype.h of FreeType 2 is found first."
#endif
#define ft_glyph_bbox_unscaled FT_GLYPH_BBOX_UNSCALED
#define ft_glyph_bbox_subpixels FT_GLYPH_BBOX_SUBPIXELS
#define ft_glyph_bbox_gridfit FT_GLYPH_BBOX_GRIDFIT
#define ft_glyph_bbox_truncate FT_GLYPH_BBOX_TRUNCATE
#define ft_glyph_bbox_pixels FT_GLYPH_BBOX_PIXELS
#endif
