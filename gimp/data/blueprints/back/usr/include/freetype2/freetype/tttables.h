// GGHASH:VDEGspjgh1pobfe178gXgN.HFNNyFUEhGWLra08H19ec0000b294
#ifndef TTTABLES_H_
#define TTTABLES_H_ 
#include <ft2build.h>
#include FT_FREETYPE_H
#ifdef FREETYPE_H
#error "freetype.h of FreeType 1 has been loaded!"
#error "Please fix the directory search order for header files"
#error "so that freetype.h of FreeType 2 is found first."
#endif
#define ft_sfnt_head FT_SFNT_HEAD
#define ft_sfnt_maxp FT_SFNT_MAXP
#define ft_sfnt_os2 FT_SFNT_OS2
#define ft_sfnt_hhea FT_SFNT_HHEA
#define ft_sfnt_vhea FT_SFNT_VHEA
#define ft_sfnt_post FT_SFNT_POST
#define ft_sfnt_pclt FT_SFNT_PCLT
#endif
