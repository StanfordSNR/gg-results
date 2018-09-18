// GGHASH:VrgF3VAmJabAZMG8jjmdfnWhKZg722T3xg3q7qhhqkFI00006748
#ifndef _FONTCONFIG_H_
#define _FONTCONFIG_H_ 
#include <sys/types.h>
#include <sys/stat.h>
#include <stdarg.h>
#include <limits.h>
#if defined(__GNUC__) && (__GNUC__ >= 4)
#define FC_ATTRIBUTE_SENTINEL(x) __attribute__((__sentinel__(0)))
#else
#define FC_ATTRIBUTE_SENTINEL(x) 
#endif
#ifndef FcPublic
#define FcPublic 
#endif
#define FC_MAJOR 2
#define FC_MINOR 12
#define FC_REVISION 6
#define FC_VERSION ((FC_MAJOR * 10000) + (FC_MINOR * 100) + (FC_REVISION))
#define FC_CACHE_VERSION_NUMBER 7
#define _FC_STRINGIFY_(s) #s
#define _FC_STRINGIFY(s) _FC_STRINGIFY_(s)
#define FC_CACHE_VERSION _FC_STRINGIFY(FC_CACHE_VERSION_NUMBER)
#define FcTrue 1
#define FcFalse 0
#define FC_FAMILY "family"
#define FC_STYLE "style"
#define FC_SLANT "slant"
#define FC_WEIGHT "weight"
#define FC_SIZE "size"
#define FC_ASPECT "aspect"
#define FC_PIXEL_SIZE "pixelsize"
#define FC_SPACING "spacing"
#define FC_FOUNDRY "foundry"
#define FC_ANTIALIAS "antialias"
#define FC_HINTING "hinting"
#define FC_HINT_STYLE "hintstyle"
#define FC_VERTICAL_LAYOUT "verticallayout"
#define FC_AUTOHINT "autohint"
#define FC_GLOBAL_ADVANCE "globaladvance"
#define FC_WIDTH "width"
#define FC_FILE "file"
#define FC_INDEX "index"
#define FC_FT_FACE "ftface"
#define FC_RASTERIZER "rasterizer"
#define FC_OUTLINE "outline"
#define FC_SCALABLE "scalable"
#define FC_COLOR "color"
#define FC_SCALE "scale"
#define FC_SYMBOL "symbol"
#define FC_DPI "dpi"
#define FC_RGBA "rgba"
#define FC_MINSPACE "minspace"
#define FC_SOURCE "source"
#define FC_CHARSET "charset"
#define FC_LANG "lang"
#define FC_FONTVERSION "fontversion"
#define FC_FULLNAME "fullname"
#define FC_FAMILYLANG "familylang"
#define FC_STYLELANG "stylelang"
#define FC_FULLNAMELANG "fullnamelang"
#define FC_CAPABILITY "capability"
#define FC_FONTFORMAT "fontformat"
#define FC_EMBOLDEN "embolden"
#define FC_EMBEDDED_BITMAP "embeddedbitmap"
#define FC_DECORATIVE "decorative"
#define FC_LCD_FILTER "lcdfilter"
#define FC_FONT_FEATURES "fontfeatures"
#define FC_NAMELANG "namelang"
#define FC_PRGNAME "prgname"
#define FC_HASH "hash"
#define FC_POSTSCRIPT_NAME "postscriptname"
#define FC_CACHE_SUFFIX ".cache-" FC_CACHE_VERSION
#define FC_DIR_CACHE_FILE "fonts.cache-" FC_CACHE_VERSION
#define FC_USER_CACHE_FILE ".fonts.cache-" FC_CACHE_VERSION
#define FC_CHARWIDTH "charwidth"
#define FC_CHAR_WIDTH FC_CHARWIDTH
#define FC_CHAR_HEIGHT "charheight"
#define FC_MATRIX "matrix"
#define FC_WEIGHT_THIN 0
#define FC_WEIGHT_EXTRALIGHT 40
#define FC_WEIGHT_ULTRALIGHT FC_WEIGHT_EXTRALIGHT
#define FC_WEIGHT_LIGHT 50
#define FC_WEIGHT_DEMILIGHT 55
#define FC_WEIGHT_SEMILIGHT FC_WEIGHT_DEMILIGHT
#define FC_WEIGHT_BOOK 75
#define FC_WEIGHT_REGULAR 80
#define FC_WEIGHT_NORMAL FC_WEIGHT_REGULAR
#define FC_WEIGHT_MEDIUM 100
#define FC_WEIGHT_DEMIBOLD 180
#define FC_WEIGHT_SEMIBOLD FC_WEIGHT_DEMIBOLD
#define FC_WEIGHT_BOLD 200
#define FC_WEIGHT_EXTRABOLD 205
#define FC_WEIGHT_ULTRABOLD FC_WEIGHT_EXTRABOLD
#define FC_WEIGHT_BLACK 210
#define FC_WEIGHT_HEAVY FC_WEIGHT_BLACK
#define FC_WEIGHT_EXTRABLACK 215
#define FC_WEIGHT_ULTRABLACK FC_WEIGHT_EXTRABLACK
#define FC_SLANT_ROMAN 0
#define FC_SLANT_ITALIC 100
#define FC_SLANT_OBLIQUE 110
#define FC_WIDTH_ULTRACONDENSED 50
#define FC_WIDTH_EXTRACONDENSED 63
#define FC_WIDTH_CONDENSED 75
#define FC_WIDTH_SEMICONDENSED 87
#define FC_WIDTH_NORMAL 100
#define FC_WIDTH_SEMIEXPANDED 113
#define FC_WIDTH_EXPANDED 125
#define FC_WIDTH_EXTRAEXPANDED 150
#define FC_WIDTH_ULTRAEXPANDED 200
#define FC_PROPORTIONAL 0
#define FC_DUAL 90
#define FC_MONO 100
#define FC_CHARCELL 110
#define FC_RGBA_UNKNOWN 0
#define FC_RGBA_RGB 1
#define FC_RGBA_BGR 2
#define FC_RGBA_VRGB 3
#define FC_RGBA_VBGR 4
#define FC_RGBA_NONE 5
#define FC_HINT_NONE 0
#define FC_HINT_SLIGHT 1
#define FC_HINT_MEDIUM 2
#define FC_HINT_FULL 3
#define FC_LCD_NONE 0
#define FC_LCD_DEFAULT 1
#define FC_LCD_LIGHT 2
#define FC_LCD_LEGACY 3
#define FcMatrixInit(m) ((m)->xx = (m)->yy = 1, (m)->xy = (m)->yx = 0)
#if defined(__cplusplus) || defined(c_plusplus)
#define _FCFUNCPROTOBEGIN extern "C" {
#define _FCFUNCPROTOEND }
#else
#define _FCFUNCPROTOBEGIN 
#define _FCFUNCPROTOEND 
#endif
#define FC_CHARSET_MAP_SIZE (256/32)
#define FC_CHARSET_DONE ((FcChar32) -1)
#define FcIsUpper(c) ((0101 <= (c) && (c) <= 0132))
#define FcIsLower(c) ((0141 <= (c) && (c) <= 0172))
#define FcToLower(c) (FcIsUpper(c) ? (c) - 0101 + 0141 : (c))
#define FC_UTF8_MAX_LEN 6
#undef FC_ATTRIBUTE_SENTINEL
#ifndef _FCINT_H_
#define FcConfigGetRescanInverval FcConfigGetRescanInverval_REPLACE_BY_FcConfigGetRescanInterval
#define FcConfigSetRescanInverval FcConfigSetRescanInverval_REPLACE_BY_FcConfigSetRescanInterval
#endif
#endif
