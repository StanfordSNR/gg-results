// GGHASH:Vb23DONVlwXx69Q.1qEsNxS7dtnxfPMnP855sE1fxz0s000127a2
#ifndef FTIMAGE_H_
#define FTIMAGE_H_ 
#ifndef STANDALONE_
#include <ft2build.h>
#endif
#define ft_pixel_mode_none FT_PIXEL_MODE_NONE
#define ft_pixel_mode_mono FT_PIXEL_MODE_MONO
#define ft_pixel_mode_grays FT_PIXEL_MODE_GRAY
#define ft_pixel_mode_pal2 FT_PIXEL_MODE_GRAY2
#define ft_pixel_mode_pal4 FT_PIXEL_MODE_GRAY4
#define FT_OUTLINE_CONTOURS_MAX SHRT_MAX
#define FT_OUTLINE_POINTS_MAX SHRT_MAX
#define FT_OUTLINE_NONE 0x0
#define FT_OUTLINE_OWNER 0x1
#define FT_OUTLINE_EVEN_ODD_FILL 0x2
#define FT_OUTLINE_REVERSE_FILL 0x4
#define FT_OUTLINE_IGNORE_DROPOUTS 0x8
#define FT_OUTLINE_SMART_DROPOUTS 0x10
#define FT_OUTLINE_INCLUDE_STUBS 0x20
#define FT_OUTLINE_HIGH_PRECISION 0x100
#define FT_OUTLINE_SINGLE_PASS 0x200
#define ft_outline_none FT_OUTLINE_NONE
#define ft_outline_owner FT_OUTLINE_OWNER
#define ft_outline_even_odd_fill FT_OUTLINE_EVEN_ODD_FILL
#define ft_outline_reverse_fill FT_OUTLINE_REVERSE_FILL
#define ft_outline_ignore_dropouts FT_OUTLINE_IGNORE_DROPOUTS
#define ft_outline_high_precision FT_OUTLINE_HIGH_PRECISION
#define ft_outline_single_pass FT_OUTLINE_SINGLE_PASS
#define FT_CURVE_TAG(flag) ( flag & 3 )
#define FT_CURVE_TAG_ON 1
#define FT_CURVE_TAG_CONIC 0
#define FT_CURVE_TAG_CUBIC 2
#define FT_CURVE_TAG_HAS_SCANMODE 4
#define FT_CURVE_TAG_TOUCH_X 8
#define FT_CURVE_TAG_TOUCH_Y 16
#define FT_CURVE_TAG_TOUCH_BOTH ( FT_CURVE_TAG_TOUCH_X | FT_CURVE_TAG_TOUCH_Y )
#define FT_Curve_Tag_On FT_CURVE_TAG_ON
#define FT_Curve_Tag_Conic FT_CURVE_TAG_CONIC
#define FT_Curve_Tag_Cubic FT_CURVE_TAG_CUBIC
#define FT_Curve_Tag_Touch_X FT_CURVE_TAG_TOUCH_X
#define FT_Curve_Tag_Touch_Y FT_CURVE_TAG_TOUCH_Y
#define FT_Outline_MoveTo_Func FT_Outline_MoveToFunc
#define FT_Outline_LineTo_Func FT_Outline_LineToFunc
#define FT_Outline_ConicTo_Func FT_Outline_ConicToFunc
#define FT_Outline_CubicTo_Func FT_Outline_CubicToFunc
#ifndef FT_IMAGE_TAG
#define FT_IMAGE_TAG(value,_x1,_x2,_x3,_x4) value = ( ( (unsigned long)_x1 << 24 ) | ( (unsigned long)_x2 << 16 ) | ( (unsigned long)_x3 << 8 ) | (unsigned long)_x4 )
#endif
#define ft_glyph_format_none FT_GLYPH_FORMAT_NONE
#define ft_glyph_format_composite FT_GLYPH_FORMAT_COMPOSITE
#define ft_glyph_format_bitmap FT_GLYPH_FORMAT_BITMAP
#define ft_glyph_format_outline FT_GLYPH_FORMAT_OUTLINE
#define ft_glyph_format_plotter FT_GLYPH_FORMAT_PLOTTER
#define FT_Raster_Span_Func FT_SpanFunc
#define FT_RASTER_FLAG_DEFAULT 0x0
#define FT_RASTER_FLAG_AA 0x1
#define FT_RASTER_FLAG_DIRECT 0x2
#define FT_RASTER_FLAG_CLIP 0x4
#define ft_raster_flag_default FT_RASTER_FLAG_DEFAULT
#define ft_raster_flag_aa FT_RASTER_FLAG_AA
#define ft_raster_flag_direct FT_RASTER_FLAG_DIRECT
#define ft_raster_flag_clip FT_RASTER_FLAG_CLIP
#define FT_Raster_New_Func FT_Raster_NewFunc
#define FT_Raster_Done_Func FT_Raster_DoneFunc
#define FT_Raster_Reset_Func FT_Raster_ResetFunc
#define FT_Raster_Set_Mode_Func FT_Raster_SetModeFunc
#define FT_Raster_Render_Func FT_Raster_RenderFunc
#endif
