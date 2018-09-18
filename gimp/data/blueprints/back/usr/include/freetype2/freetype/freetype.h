// GGHASH:VwU3xLR5woAcLpUG3Ae3sdB8w_02gciX5RiZSKK3d3Vc00046479
#ifndef FREETYPE_H_
#define FREETYPE_H_ 
#ifndef FT_FREETYPE_H
#error "`ft2build.h' hasn't been included yet!"
#error "Please always use macros to include FreeType header files."
#error "Example:"
#error "  #include <ft2build.h>"
#error "  #include FT_FREETYPE_H"
#endif
#include <ft2build.h>
#include FT_CONFIG_CONFIG_H
#include FT_TYPES_H
#include FT_ERRORS_H
#ifndef FT_ENC_TAG
#define FT_ENC_TAG(value,a,b,c,d) value = ( ( (FT_UInt32)(a) << 24 ) | ( (FT_UInt32)(b) << 16 ) | ( (FT_UInt32)(c) << 8 ) | (FT_UInt32)(d) )
#endif
#define ft_encoding_none FT_ENCODING_NONE
#define ft_encoding_unicode FT_ENCODING_UNICODE
#define ft_encoding_symbol FT_ENCODING_MS_SYMBOL
#define ft_encoding_latin_1 FT_ENCODING_ADOBE_LATIN_1
#define ft_encoding_latin_2 FT_ENCODING_OLD_LATIN_2
#define ft_encoding_sjis FT_ENCODING_SJIS
#define ft_encoding_gb2312 FT_ENCODING_PRC
#define ft_encoding_big5 FT_ENCODING_BIG5
#define ft_encoding_wansung FT_ENCODING_WANSUNG
#define ft_encoding_johab FT_ENCODING_JOHAB
#define ft_encoding_adobe_standard FT_ENCODING_ADOBE_STANDARD
#define ft_encoding_adobe_expert FT_ENCODING_ADOBE_EXPERT
#define ft_encoding_adobe_custom FT_ENCODING_ADOBE_CUSTOM
#define ft_encoding_apple_roman FT_ENCODING_APPLE_ROMAN
#define FT_FACE_FLAG_SCALABLE ( 1L << 0 )
#define FT_FACE_FLAG_FIXED_SIZES ( 1L << 1 )
#define FT_FACE_FLAG_FIXED_WIDTH ( 1L << 2 )
#define FT_FACE_FLAG_SFNT ( 1L << 3 )
#define FT_FACE_FLAG_HORIZONTAL ( 1L << 4 )
#define FT_FACE_FLAG_VERTICAL ( 1L << 5 )
#define FT_FACE_FLAG_KERNING ( 1L << 6 )
#define FT_FACE_FLAG_FAST_GLYPHS ( 1L << 7 )
#define FT_FACE_FLAG_MULTIPLE_MASTERS ( 1L << 8 )
#define FT_FACE_FLAG_GLYPH_NAMES ( 1L << 9 )
#define FT_FACE_FLAG_EXTERNAL_STREAM ( 1L << 10 )
#define FT_FACE_FLAG_HINTER ( 1L << 11 )
#define FT_FACE_FLAG_CID_KEYED ( 1L << 12 )
#define FT_FACE_FLAG_TRICKY ( 1L << 13 )
#define FT_FACE_FLAG_COLOR ( 1L << 14 )
#define FT_HAS_HORIZONTAL(face) ( (face)->face_flags & FT_FACE_FLAG_HORIZONTAL )
#define FT_HAS_VERTICAL(face) ( (face)->face_flags & FT_FACE_FLAG_VERTICAL )
#define FT_HAS_KERNING(face) ( (face)->face_flags & FT_FACE_FLAG_KERNING )
#define FT_IS_SCALABLE(face) ( (face)->face_flags & FT_FACE_FLAG_SCALABLE )
#define FT_IS_SFNT(face) ( (face)->face_flags & FT_FACE_FLAG_SFNT )
#define FT_IS_FIXED_WIDTH(face) ( (face)->face_flags & FT_FACE_FLAG_FIXED_WIDTH )
#define FT_HAS_FIXED_SIZES(face) ( (face)->face_flags & FT_FACE_FLAG_FIXED_SIZES )
#define FT_HAS_FAST_GLYPHS(face) 0
#define FT_HAS_GLYPH_NAMES(face) ( (face)->face_flags & FT_FACE_FLAG_GLYPH_NAMES )
#define FT_HAS_MULTIPLE_MASTERS(face) ( (face)->face_flags & FT_FACE_FLAG_MULTIPLE_MASTERS )
#define FT_IS_NAMED_INSTANCE(face) ( (face)->face_index & 0x7FFF0000L )
#define FT_IS_CID_KEYED(face) ( (face)->face_flags & FT_FACE_FLAG_CID_KEYED )
#define FT_IS_TRICKY(face) ( (face)->face_flags & FT_FACE_FLAG_TRICKY )
#define FT_HAS_COLOR(face) ( (face)->face_flags & FT_FACE_FLAG_COLOR )
#define FT_STYLE_FLAG_ITALIC ( 1 << 0 )
#define FT_STYLE_FLAG_BOLD ( 1 << 1 )
#define FT_OPEN_MEMORY 0x1
#define FT_OPEN_STREAM 0x2
#define FT_OPEN_PATHNAME 0x4
#define FT_OPEN_DRIVER 0x8
#define FT_OPEN_PARAMS 0x10
#define ft_open_memory FT_OPEN_MEMORY
#define ft_open_stream FT_OPEN_STREAM
#define ft_open_pathname FT_OPEN_PATHNAME
#define ft_open_driver FT_OPEN_DRIVER
#define ft_open_params FT_OPEN_PARAMS
#define FT_LOAD_DEFAULT 0x0
#define FT_LOAD_NO_SCALE ( 1L << 0 )
#define FT_LOAD_NO_HINTING ( 1L << 1 )
#define FT_LOAD_RENDER ( 1L << 2 )
#define FT_LOAD_NO_BITMAP ( 1L << 3 )
#define FT_LOAD_VERTICAL_LAYOUT ( 1L << 4 )
#define FT_LOAD_FORCE_AUTOHINT ( 1L << 5 )
#define FT_LOAD_CROP_BITMAP ( 1L << 6 )
#define FT_LOAD_PEDANTIC ( 1L << 7 )
#define FT_LOAD_IGNORE_GLOBAL_ADVANCE_WIDTH ( 1L << 9 )
#define FT_LOAD_NO_RECURSE ( 1L << 10 )
#define FT_LOAD_IGNORE_TRANSFORM ( 1L << 11 )
#define FT_LOAD_MONOCHROME ( 1L << 12 )
#define FT_LOAD_LINEAR_DESIGN ( 1L << 13 )
#define FT_LOAD_NO_AUTOHINT ( 1L << 15 )
#define FT_LOAD_COLOR ( 1L << 20 )
#define FT_LOAD_COMPUTE_METRICS ( 1L << 21 )
#define FT_LOAD_BITMAP_METRICS_ONLY ( 1L << 22 )
#define FT_LOAD_ADVANCE_ONLY ( 1L << 8 )
#define FT_LOAD_SBITS_ONLY ( 1L << 14 )
#define FT_LOAD_TARGET_(x) ( (FT_Int32)( (x) & 15 ) << 16 )
#define FT_LOAD_TARGET_NORMAL FT_LOAD_TARGET_( FT_RENDER_MODE_NORMAL )
#define FT_LOAD_TARGET_LIGHT FT_LOAD_TARGET_( FT_RENDER_MODE_LIGHT )
#define FT_LOAD_TARGET_MONO FT_LOAD_TARGET_( FT_RENDER_MODE_MONO )
#define FT_LOAD_TARGET_LCD FT_LOAD_TARGET_( FT_RENDER_MODE_LCD )
#define FT_LOAD_TARGET_LCD_V FT_LOAD_TARGET_( FT_RENDER_MODE_LCD_V )
#define FT_LOAD_TARGET_MODE(x) ( (FT_Render_Mode)( ( (x) >> 16 ) & 15 ) )
#define ft_render_mode_normal FT_RENDER_MODE_NORMAL
#define ft_render_mode_mono FT_RENDER_MODE_MONO
#define ft_kerning_default FT_KERNING_DEFAULT
#define ft_kerning_unfitted FT_KERNING_UNFITTED
#define ft_kerning_unscaled FT_KERNING_UNSCALED
#define FT_SUBGLYPH_FLAG_ARGS_ARE_WORDS 1
#define FT_SUBGLYPH_FLAG_ARGS_ARE_XY_VALUES 2
#define FT_SUBGLYPH_FLAG_ROUND_XY_TO_GRID 4
#define FT_SUBGLYPH_FLAG_SCALE 8
#define FT_SUBGLYPH_FLAG_XY_SCALE 0x40
#define FT_SUBGLYPH_FLAG_2X2 0x80
#define FT_SUBGLYPH_FLAG_USE_MY_METRICS 0x200
#define FT_FSTYPE_INSTALLABLE_EMBEDDING 0x0000
#define FT_FSTYPE_RESTRICTED_LICENSE_EMBEDDING 0x0002
#define FT_FSTYPE_PREVIEW_AND_PRINT_EMBEDDING 0x0004
#define FT_FSTYPE_EDITABLE_EMBEDDING 0x0008
#define FT_FSTYPE_NO_SUBSETTING 0x0100
#define FT_FSTYPE_BITMAP_EMBEDDING_ONLY 0x0200
#define FREETYPE_MAJOR 2
#define FREETYPE_MINOR 8
#define FREETYPE_PATCH 1
#endif
