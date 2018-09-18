// GGHASH:VvSLATaDSjA9.yc4durdUh4fn.N75sgkxGRZZc.WlSio0000316f
#ifndef FTLCDFIL_H_
#define FTLCDFIL_H_ 
#include <ft2build.h>
#include FT_FREETYPE_H
#ifdef FREETYPE_H
#error "freetype.h of FreeType 1 has been loaded!"
#error "Please fix the directory search order for header files"
#error "so that freetype.h of FreeType 2 is found first."
#endif
#define FT_PARAM_TAG_LCD_FILTER_WEIGHTS FT_MAKE_TAG( 'l', 'c', 'd', 'f' )
#define FT_LCD_FILTER_FIVE_TAPS 5
#endif
