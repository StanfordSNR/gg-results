// GGHASH:VC5lflHkfYXSgI9j9rUysKFjAkeFgjtu7BNzFgcV56JM00023315
#ifndef PNG_H
#define PNG_H 
#define PNG_LIBPNG_VER_STRING "1.6.34"
#define PNG_HEADER_VERSION_STRING " libpng version 1.6.34 - September 29, 2017\n"
#define PNG_LIBPNG_VER_SONUM 16
#define PNG_LIBPNG_VER_DLLNUM 16
#define PNG_LIBPNG_VER_MAJOR 1
#define PNG_LIBPNG_VER_MINOR 6
#define PNG_LIBPNG_VER_RELEASE 34
#define PNG_LIBPNG_VER_BUILD 0
#define PNG_LIBPNG_BUILD_ALPHA 1
#define PNG_LIBPNG_BUILD_BETA 2
#define PNG_LIBPNG_BUILD_RC 3
#define PNG_LIBPNG_BUILD_STABLE 4
#define PNG_LIBPNG_BUILD_RELEASE_STATUS_MASK 7
#define PNG_LIBPNG_BUILD_PATCH 8
#define PNG_LIBPNG_BUILD_PRIVATE 16
#define PNG_LIBPNG_BUILD_SPECIAL 32
#define PNG_LIBPNG_BUILD_BASE_TYPE PNG_LIBPNG_BUILD_STABLE
#define PNG_LIBPNG_VER 10634
#ifndef PNGLCONF_H
# include "pnglibconf.h"
#endif
#ifndef PNG_VERSION_INFO_ONLY
# include "pngconf.h"
#endif
#ifdef PNG_USER_PRIVATEBUILD
#define PNG_LIBPNG_BUILD_TYPE (PNG_LIBPNG_BUILD_BASE_TYPE | PNG_LIBPNG_BUILD_PRIVATE)
#else
# ifdef PNG_LIBPNG_SPECIALBUILD
#define PNG_LIBPNG_BUILD_TYPE (PNG_LIBPNG_BUILD_BASE_TYPE | PNG_LIBPNG_BUILD_SPECIAL)
# else
#define PNG_LIBPNG_BUILD_TYPE (PNG_LIBPNG_BUILD_BASE_TYPE)
# endif
#endif
#ifndef PNG_VERSION_INFO_ONLY
#ifdef __cplusplus
#endif
#define png_libpng_ver png_get_header_ver(NULL)
#ifdef PNG_TEXT_SUPPORTED
#endif
#define PNG_TEXT_COMPRESSION_NONE_WR -3
#define PNG_TEXT_COMPRESSION_zTXt_WR -2
#define PNG_TEXT_COMPRESSION_NONE -1
#define PNG_TEXT_COMPRESSION_zTXt 0
#define PNG_ITXT_COMPRESSION_NONE 1
#define PNG_ITXT_COMPRESSION_zTXt 2
#define PNG_TEXT_COMPRESSION_LAST 3
#if defined(PNG_STORE_UNKNOWN_CHUNKS_SUPPORTED) || defined(PNG_USER_CHUNKS_SUPPORTED)
#endif
#define PNG_HAVE_IHDR 0x01
#define PNG_HAVE_PLTE 0x02
#define PNG_AFTER_IDAT 0x08
#define PNG_UINT_31_MAX ((png_uint_32)0x7fffffffL)
#define PNG_UINT_32_MAX ((png_uint_32)(-1))
#define PNG_SIZE_MAX ((png_size_t)(-1))
#define PNG_FP_1 100000
#define PNG_FP_HALF 50000
#define PNG_FP_MAX ((png_fixed_point)0x7fffffffL)
#define PNG_FP_MIN (-PNG_FP_MAX)
#define PNG_COLOR_MASK_PALETTE 1
#define PNG_COLOR_MASK_COLOR 2
#define PNG_COLOR_MASK_ALPHA 4
#define PNG_COLOR_TYPE_GRAY 0
#define PNG_COLOR_TYPE_PALETTE (PNG_COLOR_MASK_COLOR | PNG_COLOR_MASK_PALETTE)
#define PNG_COLOR_TYPE_RGB (PNG_COLOR_MASK_COLOR)
#define PNG_COLOR_TYPE_RGB_ALPHA (PNG_COLOR_MASK_COLOR | PNG_COLOR_MASK_ALPHA)
#define PNG_COLOR_TYPE_GRAY_ALPHA (PNG_COLOR_MASK_ALPHA)
#define PNG_COLOR_TYPE_RGBA PNG_COLOR_TYPE_RGB_ALPHA
#define PNG_COLOR_TYPE_GA PNG_COLOR_TYPE_GRAY_ALPHA
#define PNG_COMPRESSION_TYPE_BASE 0
#define PNG_COMPRESSION_TYPE_DEFAULT PNG_COMPRESSION_TYPE_BASE
#define PNG_FILTER_TYPE_BASE 0
#define PNG_INTRAPIXEL_DIFFERENCING 64
#define PNG_FILTER_TYPE_DEFAULT PNG_FILTER_TYPE_BASE
#define PNG_INTERLACE_NONE 0
#define PNG_INTERLACE_ADAM7 1
#define PNG_INTERLACE_LAST 2
#define PNG_OFFSET_PIXEL 0
#define PNG_OFFSET_MICROMETER 1
#define PNG_OFFSET_LAST 2
#define PNG_EQUATION_LINEAR 0
#define PNG_EQUATION_BASE_E 1
#define PNG_EQUATION_ARBITRARY 2
#define PNG_EQUATION_HYPERBOLIC 3
#define PNG_EQUATION_LAST 4
#define PNG_SCALE_UNKNOWN 0
#define PNG_SCALE_METER 1
#define PNG_SCALE_RADIAN 2
#define PNG_SCALE_LAST 3
#define PNG_RESOLUTION_UNKNOWN 0
#define PNG_RESOLUTION_METER 1
#define PNG_RESOLUTION_LAST 2
#define PNG_sRGB_INTENT_PERCEPTUAL 0
#define PNG_sRGB_INTENT_RELATIVE 1
#define PNG_sRGB_INTENT_SATURATION 2
#define PNG_sRGB_INTENT_ABSOLUTE 3
#define PNG_sRGB_INTENT_LAST 4
#define PNG_KEYWORD_MAX_LENGTH 79
#define PNG_MAX_PALETTE_LENGTH 256
#define PNG_INFO_gAMA 0x0001U
#define PNG_INFO_sBIT 0x0002U
#define PNG_INFO_cHRM 0x0004U
#define PNG_INFO_PLTE 0x0008U
#define PNG_INFO_tRNS 0x0010U
#define PNG_INFO_bKGD 0x0020U
#define PNG_INFO_hIST 0x0040U
#define PNG_INFO_pHYs 0x0080U
#define PNG_INFO_oFFs 0x0100U
#define PNG_INFO_tIME 0x0200U
#define PNG_INFO_pCAL 0x0400U
#define PNG_INFO_sRGB 0x0800U
#define PNG_INFO_iCCP 0x1000U
#define PNG_INFO_sPLT 0x2000U
#define PNG_INFO_sCAL 0x4000U
#define PNG_INFO_IDAT 0x8000U
#define PNG_INFO_eXIf 0x10000U
#ifdef PNG_PROGRESSIVE_READ_SUPPORTED
#endif
#if defined(PNG_READ_USER_TRANSFORM_SUPPORTED) || defined(PNG_WRITE_USER_TRANSFORM_SUPPORTED)
#endif
#ifdef PNG_USER_CHUNKS_SUPPORTED
#endif
#ifdef PNG_UNKNOWN_CHUNKS_SUPPORTED
#endif
#ifdef PNG_SETJMP_SUPPORTED
#endif
#define PNG_TRANSFORM_IDENTITY 0x0000
#define PNG_TRANSFORM_STRIP_16 0x0001
#define PNG_TRANSFORM_STRIP_ALPHA 0x0002
#define PNG_TRANSFORM_PACKING 0x0004
#define PNG_TRANSFORM_PACKSWAP 0x0008
#define PNG_TRANSFORM_EXPAND 0x0010
#define PNG_TRANSFORM_INVERT_MONO 0x0020
#define PNG_TRANSFORM_SHIFT 0x0040
#define PNG_TRANSFORM_BGR 0x0080
#define PNG_TRANSFORM_SWAP_ALPHA 0x0100
#define PNG_TRANSFORM_SWAP_ENDIAN 0x0200
#define PNG_TRANSFORM_INVERT_ALPHA 0x0400
#define PNG_TRANSFORM_STRIP_FILLER 0x0800
#define PNG_TRANSFORM_STRIP_FILLER_BEFORE PNG_TRANSFORM_STRIP_FILLER
#define PNG_TRANSFORM_STRIP_FILLER_AFTER 0x1000
#define PNG_TRANSFORM_GRAY_TO_RGB 0x2000
#define PNG_TRANSFORM_EXPAND_16 0x4000
#if INT_MAX >= 0x8000
#define PNG_TRANSFORM_SCALE_16 0x8000
#endif
#define PNG_FLAG_MNG_EMPTY_PLTE 0x01
#define PNG_FLAG_MNG_FILTER_64 0x04
#define PNG_ALL_MNG_FEATURES 0x05
#define png_check_sig(sig,n) !png_sig_cmp((sig), 0, (n))
#ifdef PNG_SETJMP_SUPPORTED
#define png_jmpbuf(png_ptr) (*png_set_longjmp_fn((png_ptr), longjmp, (sizeof (jmp_buf))))
#else
#define png_jmpbuf(png_ptr) (LIBPNG_WAS_COMPILED_WITH__PNG_NO_SETJMP)
#endif
#ifdef PNG_READ_SUPPORTED
#endif
#ifdef PNG_USER_MEM_SUPPORTED
#endif
#ifdef PNG_SEQUENTIAL_READ_SUPPORTED
#endif
#ifdef PNG_TIME_RFC1123_SUPPORTED
#if PNG_LIBPNG_VER < 10700
#endif
#endif
#ifdef PNG_CONVERT_tIME_SUPPORTED
#endif
#ifdef PNG_READ_EXPAND_SUPPORTED
#endif
#ifdef PNG_READ_EXPAND_16_SUPPORTED
#endif
#if defined(PNG_READ_BGR_SUPPORTED) || defined(PNG_WRITE_BGR_SUPPORTED)
#endif
#ifdef PNG_READ_GRAY_TO_RGB_SUPPORTED
#endif
#ifdef PNG_READ_RGB_TO_GRAY_SUPPORTED
#define PNG_ERROR_ACTION_NONE 1
#define PNG_ERROR_ACTION_WARN 2
#define PNG_ERROR_ACTION_ERROR 3
#define PNG_RGB_TO_GRAY_DEFAULT (-1)
#endif
#ifdef PNG_BUILD_GRAYSCALE_PALETTE_SUPPORTED
#endif
#ifdef PNG_READ_ALPHA_MODE_SUPPORTED
#define PNG_ALPHA_PNG 0
#define PNG_ALPHA_STANDARD 1
#define PNG_ALPHA_ASSOCIATED 1
#define PNG_ALPHA_PREMULTIPLIED 1
#define PNG_ALPHA_OPTIMIZED 2
#define PNG_ALPHA_BROKEN 3
#endif
#if defined(PNG_GAMMA_SUPPORTED) || defined(PNG_READ_ALPHA_MODE_SUPPORTED)
#define PNG_DEFAULT_sRGB -1
#define PNG_GAMMA_MAC_18 -2
#define PNG_GAMMA_sRGB 220000
#define PNG_GAMMA_LINEAR PNG_FP_1
#endif
#ifdef PNG_READ_STRIP_ALPHA_SUPPORTED
#endif
#if defined(PNG_READ_SWAP_ALPHA_SUPPORTED) || defined(PNG_WRITE_SWAP_ALPHA_SUPPORTED)
#endif
#if defined(PNG_READ_INVERT_ALPHA_SUPPORTED) || defined(PNG_WRITE_INVERT_ALPHA_SUPPORTED)
#endif
#if defined(PNG_READ_FILLER_SUPPORTED) || defined(PNG_WRITE_FILLER_SUPPORTED)
#define PNG_FILLER_BEFORE 0
#define PNG_FILLER_AFTER 1
#endif
#if defined(PNG_READ_SWAP_SUPPORTED) || defined(PNG_WRITE_SWAP_SUPPORTED)
#endif
#if defined(PNG_READ_PACK_SUPPORTED) || defined(PNG_WRITE_PACK_SUPPORTED)
#endif
#if defined(PNG_READ_PACKSWAP_SUPPORTED) || defined(PNG_WRITE_PACKSWAP_SUPPORTED)
#endif
#if defined(PNG_READ_SHIFT_SUPPORTED) || defined(PNG_WRITE_SHIFT_SUPPORTED)
#endif
#if defined(PNG_READ_INTERLACING_SUPPORTED) || defined(PNG_WRITE_INTERLACING_SUPPORTED)
#endif
#if defined(PNG_READ_INVERT_SUPPORTED) || defined(PNG_WRITE_INVERT_SUPPORTED)
#endif
#ifdef PNG_READ_BACKGROUND_SUPPORTED
#endif
#ifdef PNG_READ_BACKGROUND_SUPPORTED
#define PNG_BACKGROUND_GAMMA_UNKNOWN 0
#define PNG_BACKGROUND_GAMMA_SCREEN 1
#define PNG_BACKGROUND_GAMMA_FILE 2
#define PNG_BACKGROUND_GAMMA_UNIQUE 3
#endif
#ifdef PNG_READ_SCALE_16_TO_8_SUPPORTED
#endif
#ifdef PNG_READ_STRIP_16_TO_8_SUPPORTED
#define PNG_READ_16_TO_8_SUPPORTED 
#endif
#ifdef PNG_READ_QUANTIZE_SUPPORTED
#endif
#ifdef PNG_READ_GAMMA_SUPPORTED
#define PNG_GAMMA_THRESHOLD (PNG_GAMMA_THRESHOLD_FIXED*.00001)
#endif
#ifdef PNG_WRITE_FLUSH_SUPPORTED
#endif
#ifdef PNG_SEQUENTIAL_READ_SUPPORTED
#endif
#ifdef PNG_SEQUENTIAL_READ_SUPPORTED
#endif
#ifdef PNG_SEQUENTIAL_READ_SUPPORTED
#endif
#ifdef PNG_SEQUENTIAL_READ_SUPPORTED
#endif
#define PNG_CRC_DEFAULT 0
#define PNG_CRC_ERROR_QUIT 1
#define PNG_CRC_WARN_DISCARD 2
#define PNG_CRC_WARN_USE 3
#define PNG_CRC_QUIET_USE 4
#define PNG_CRC_NO_CHANGE 5
#ifdef PNG_WRITE_SUPPORTED
#endif
#define PNG_NO_FILTERS 0x00
#define PNG_FILTER_NONE 0x08
#define PNG_FILTER_SUB 0x10
#define PNG_FILTER_UP 0x20
#define PNG_FILTER_AVG 0x40
#define PNG_FILTER_PAETH 0x80
#define PNG_FAST_FILTERS (PNG_FILTER_NONE | PNG_FILTER_SUB | PNG_FILTER_UP)
#define PNG_ALL_FILTERS (PNG_FAST_FILTERS | PNG_FILTER_AVG | PNG_FILTER_PAETH)
#define PNG_FILTER_VALUE_NONE 0
#define PNG_FILTER_VALUE_SUB 1
#define PNG_FILTER_VALUE_UP 2
#define PNG_FILTER_VALUE_AVG 3
#define PNG_FILTER_VALUE_PAETH 4
#define PNG_FILTER_VALUE_LAST 5
#ifdef PNG_WRITE_SUPPORTED
#ifdef PNG_WRITE_WEIGHTED_FILTER_SUPPORTED
#endif
#define PNG_FILTER_HEURISTIC_DEFAULT 0
#define PNG_FILTER_HEURISTIC_UNWEIGHTED 1
#define PNG_FILTER_HEURISTIC_WEIGHTED 2
#define PNG_FILTER_HEURISTIC_LAST 3
#ifdef PNG_WRITE_CUSTOMIZE_COMPRESSION_SUPPORTED
#endif
#ifdef PNG_WRITE_CUSTOMIZE_ZTXT_COMPRESSION_SUPPORTED
#endif
#endif
#ifdef PNG_STDIO_SUPPORTED
#endif
#ifdef PNG_USER_MEM_SUPPORTED
#endif
#ifdef PNG_READ_USER_TRANSFORM_SUPPORTED
#endif
#ifdef PNG_WRITE_USER_TRANSFORM_SUPPORTED
#endif
#ifdef PNG_USER_TRANSFORM_PTR_SUPPORTED
#endif
#ifdef PNG_USER_TRANSFORM_INFO_SUPPORTED
#endif
#ifdef PNG_READ_USER_CHUNKS_SUPPORTED
#endif
#ifdef PNG_USER_CHUNKS_SUPPORTED
#endif
#ifdef PNG_PROGRESSIVE_READ_SUPPORTED
#endif
#define PNG_DESTROY_WILL_FREE_DATA 1
#define PNG_SET_WILL_FREE_DATA 1
#define PNG_USER_WILL_FREE_DATA 2
#define PNG_FREE_HIST 0x0008U
#define PNG_FREE_ICCP 0x0010U
#define PNG_FREE_SPLT 0x0020U
#define PNG_FREE_ROWS 0x0040U
#define PNG_FREE_PCAL 0x0080U
#define PNG_FREE_SCAL 0x0100U
#ifdef PNG_STORE_UNKNOWN_CHUNKS_SUPPORTED
#define PNG_FREE_UNKN 0x0200U
#endif
#define PNG_FREE_PLTE 0x1000U
#define PNG_FREE_TRNS 0x2000U
#define PNG_FREE_TEXT 0x4000U
#define PNG_FREE_EXIF 0x8000U
#define PNG_FREE_ALL 0xffffU
#define PNG_FREE_MUL 0x4220U
#ifdef PNG_USER_MEM_SUPPORTED
#endif
#ifdef PNG_ERROR_TEXT_SUPPORTED
#else
#define png_error(s1,s2) png_err(s1)
#define png_chunk_error(s1,s2) png_err(s1)
#endif
#ifdef PNG_WARNINGS_SUPPORTED
#else
#define png_warning(s1,s2) ((void)(s1))
#define png_chunk_warning(s1,s2) ((void)(s1))
#endif
#ifdef PNG_BENIGN_ERRORS_SUPPORTED
#ifdef PNG_READ_SUPPORTED
#endif
#else
# ifdef PNG_ALLOW_BENIGN_ERRORS
#define png_benign_error png_warning
#define png_chunk_benign_error png_chunk_warning
# else
#define png_benign_error png_error
#define png_chunk_benign_error png_chunk_error
# endif
#endif
#ifdef PNG_INFO_IMAGE_SUPPORTED
#endif
#ifdef PNG_EASY_ACCESS_SUPPORTED
#endif
#ifdef PNG_READ_SUPPORTED
#endif
#ifdef PNG_bKGD_SUPPORTED
#endif
#ifdef PNG_bKGD_SUPPORTED
#endif
#ifdef PNG_cHRM_SUPPORTED
#endif
#ifdef PNG_cHRM_SUPPORTED
#endif
#ifdef PNG_eXIf_SUPPORTED
#endif
#ifdef PNG_gAMA_SUPPORTED
#endif
#ifdef PNG_gAMA_SUPPORTED
#endif
#ifdef PNG_hIST_SUPPORTED
#endif
#ifdef PNG_oFFs_SUPPORTED
#endif
#ifdef PNG_oFFs_SUPPORTED
#endif
#ifdef PNG_pCAL_SUPPORTED
#endif
#ifdef PNG_pCAL_SUPPORTED
#endif
#ifdef PNG_pHYs_SUPPORTED
#endif
#ifdef PNG_pHYs_SUPPORTED
#endif
#ifdef PNG_sBIT_SUPPORTED
#endif
#ifdef PNG_sBIT_SUPPORTED
#endif
#ifdef PNG_sRGB_SUPPORTED
#endif
#ifdef PNG_sRGB_SUPPORTED
#endif
#ifdef PNG_iCCP_SUPPORTED
#endif
#ifdef PNG_iCCP_SUPPORTED
#endif
#ifdef PNG_sPLT_SUPPORTED
#endif
#ifdef PNG_sPLT_SUPPORTED
#endif
#ifdef PNG_TEXT_SUPPORTED
#endif
#ifdef PNG_TEXT_SUPPORTED
#endif
#ifdef PNG_tIME_SUPPORTED
#endif
#ifdef PNG_tIME_SUPPORTED
#endif
#ifdef PNG_tRNS_SUPPORTED
#endif
#ifdef PNG_tRNS_SUPPORTED
#endif
#ifdef PNG_sCAL_SUPPORTED
#if defined(PNG_FLOATING_ARITHMETIC_SUPPORTED) || defined(PNG_FLOATING_POINT_SUPPORTED)
#endif
#endif
#ifdef PNG_SET_UNKNOWN_CHUNKS_SUPPORTED
#ifdef PNG_HANDLE_AS_UNKNOWN_SUPPORTED
#endif
#endif
#ifdef PNG_STORE_UNKNOWN_CHUNKS_SUPPORTED
#endif
#ifdef PNG_INFO_IMAGE_SUPPORTED
#ifdef PNG_SEQUENTIAL_READ_SUPPORTED
#endif
#ifdef PNG_WRITE_SUPPORTED
#endif
#endif
#ifdef PNG_MNG_FEATURES_SUPPORTED
#endif
#define PNG_HANDLE_CHUNK_AS_DEFAULT 0
#define PNG_HANDLE_CHUNK_NEVER 1
#define PNG_HANDLE_CHUNK_IF_SAFE 2
#define PNG_HANDLE_CHUNK_ALWAYS 3
#define PNG_HANDLE_CHUNK_LAST 4
#ifdef PNG_ERROR_NUMBERS_SUPPORTED
#endif
#ifdef PNG_SET_USER_LIMITS_SUPPORTED
#endif
#if defined(PNG_INCH_CONVERSIONS_SUPPORTED)
#ifdef PNG_FIXED_POINT_SUPPORTED
#endif
#ifdef PNG_FIXED_POINT_SUPPORTED
#endif
# ifdef PNG_pHYs_SUPPORTED
# endif
#endif
#ifdef PNG_IO_STATE_SUPPORTED
#define PNG_IO_NONE 0x0000
#define PNG_IO_READING 0x0001
#define PNG_IO_WRITING 0x0002
#define PNG_IO_SIGNATURE 0x0010
#define PNG_IO_CHUNK_HDR 0x0020
#define PNG_IO_CHUNK_DATA 0x0040
#define PNG_IO_CHUNK_CRC 0x0080
#define PNG_IO_MASK_OP 0x000f
#define PNG_IO_MASK_LOC 0x00f0
#endif
#define PNG_INTERLACE_ADAM7_PASSES 7
#define PNG_PASS_START_ROW(pass) (((1&~(pass))<<(3-((pass)>>1)))&7)
#define PNG_PASS_START_COL(pass) (((1& (pass))<<(3-(((pass)+1)>>1)))&7)
#define PNG_PASS_ROW_OFFSET(pass) ((pass)>2?(8>>(((pass)-1)>>1)):8)
#define PNG_PASS_COL_OFFSET(pass) (1<<((7-(pass))>>1))
#define PNG_PASS_ROW_SHIFT(pass) ((pass)>2?(8-(pass))>>1:3)
#define PNG_PASS_COL_SHIFT(pass) ((pass)>1?(7-(pass))>>1:3)
#define PNG_PASS_ROWS(height,pass) (((height)+(((1<<PNG_PASS_ROW_SHIFT(pass)) -1)-PNG_PASS_START_ROW(pass)))>>PNG_PASS_ROW_SHIFT(pass))
#define PNG_PASS_COLS(width,pass) (((width)+(((1<<PNG_PASS_COL_SHIFT(pass)) -1)-PNG_PASS_START_COL(pass)))>>PNG_PASS_COL_SHIFT(pass))
#define PNG_ROW_FROM_PASS_ROW(y_in,pass) (((y_in)<<PNG_PASS_ROW_SHIFT(pass))+PNG_PASS_START_ROW(pass))
#define PNG_COL_FROM_PASS_COL(x_in,pass) (((x_in)<<PNG_PASS_COL_SHIFT(pass))+PNG_PASS_START_COL(pass))
#define PNG_PASS_MASK(pass,off) ( ((0x110145AF>>(((7-(off))-(pass))<<2)) & 0xF) | ((0x01145AF0>>(((7-(off))-(pass))<<2)) & 0xF0))
#define PNG_ROW_IN_INTERLACE_PASS(y,pass) ((PNG_PASS_MASK(pass,0) >> ((y)&7)) & 1)
#define PNG_COL_IN_INTERLACE_PASS(x,pass) ((PNG_PASS_MASK(pass,1) >> ((x)&7)) & 1)
#ifdef PNG_READ_COMPOSITE_NODIV_SUPPORTED
#define png_composite(composite,fg,alpha,bg) { png_uint_16 temp = (png_uint_16)((png_uint_16)(fg) * (png_uint_16)(alpha) + (png_uint_16)(bg)*(png_uint_16)(255 - (png_uint_16)(alpha)) + 128); (composite) = (png_byte)(((temp + (temp >> 8)) >> 8) & 0xff); }
#define png_composite_16(composite,fg,alpha,bg) { png_uint_32 temp = (png_uint_32)((png_uint_32)(fg) * (png_uint_32)(alpha) + (png_uint_32)(bg)*(65535 - (png_uint_32)(alpha)) + 32768); (composite) = (png_uint_16)(0xffff & ((temp + (temp >> 16)) >> 16)); }
#else
#define png_composite(composite,fg,alpha,bg) (composite) = (png_byte)(0xff & (((png_uint_16)(fg) * (png_uint_16)(alpha) + (png_uint_16)(bg) * (png_uint_16)(255 - (png_uint_16)(alpha)) + 127) / 255))
#define png_composite_16(composite,fg,alpha,bg) (composite) = (png_uint_16)(0xffff & (((png_uint_32)(fg) * (png_uint_32)(alpha) + (png_uint_32)(bg)*(png_uint_32)(65535 - (png_uint_32)(alpha)) + 32767) / 65535))
#endif
#ifdef PNG_READ_INT_FUNCTIONS_SUPPORTED
#endif
#ifdef PNG_WRITE_INT_FUNCTIONS_SUPPORTED
#endif
#ifdef PNG_SAVE_INT_32_SUPPORTED
#endif
#ifdef PNG_WRITE_INT_FUNCTIONS_SUPPORTED
#endif
#ifdef PNG_USE_READ_MACROS
#define PNG_get_uint_32(buf) (((png_uint_32)(*(buf)) << 24) + ((png_uint_32)(*((buf) + 1)) << 16) + ((png_uint_32)(*((buf) + 2)) << 8) + ((png_uint_32)(*((buf) + 3))))
#define PNG_get_uint_16(buf) ((png_uint_16) (((unsigned int)(*(buf)) << 8) + ((unsigned int)(*((buf) + 1)))))
#define PNG_get_int_32(buf) ((png_int_32)((*(buf) & 0x80) ? -((png_int_32)(((png_get_uint_32(buf)^0xffffffffU)+1U)&0x7fffffffU)) : (png_int_32)png_get_uint_32(buf)))
# ifndef PNG_PREFIX
#define png_get_uint_32(buf) PNG_get_uint_32(buf)
#define png_get_uint_16(buf) PNG_get_uint_16(buf)
#define png_get_int_32(buf) PNG_get_int_32(buf)
# endif
#else
# ifdef PNG_PREFIX
#define PNG_get_uint_32 (png_get_uint_32)
#define PNG_get_uint_16 (png_get_uint_16)
#define PNG_get_int_32 (png_get_int_32)
# endif
#endif
#ifdef PNG_CHECK_FOR_INVALID_INDEX_SUPPORTED
# ifdef PNG_GET_PALETTE_MAX_SUPPORTED
# endif
#endif
#if defined(PNG_SIMPLIFIED_READ_SUPPORTED) || defined(PNG_SIMPLIFIED_WRITE_SUPPORTED)
#define PNG_IMAGE_VERSION 1
#define PNG_IMAGE_WARNING 1
#define PNG_IMAGE_ERROR 2
#define PNG_IMAGE_FAILED(png_cntrl) ((((png_cntrl).warning_or_error)&0x03)>1)
#define PNG_FORMAT_FLAG_ALPHA 0x01U
#define PNG_FORMAT_FLAG_COLOR 0x02U
#define PNG_FORMAT_FLAG_LINEAR 0x04U
#define PNG_FORMAT_FLAG_COLORMAP 0x08U
#ifdef PNG_FORMAT_BGR_SUPPORTED
#define PNG_FORMAT_FLAG_BGR 0x10U
#endif
#ifdef PNG_FORMAT_AFIRST_SUPPORTED
#define PNG_FORMAT_FLAG_AFIRST 0x20U
#endif
#define PNG_FORMAT_FLAG_ASSOCIATED_ALPHA 0x40U
#define PNG_FORMAT_GRAY 0
#define PNG_FORMAT_GA PNG_FORMAT_FLAG_ALPHA
#define PNG_FORMAT_AG (PNG_FORMAT_GA|PNG_FORMAT_FLAG_AFIRST)
#define PNG_FORMAT_RGB PNG_FORMAT_FLAG_COLOR
#define PNG_FORMAT_BGR (PNG_FORMAT_FLAG_COLOR|PNG_FORMAT_FLAG_BGR)
#define PNG_FORMAT_RGBA (PNG_FORMAT_RGB|PNG_FORMAT_FLAG_ALPHA)
#define PNG_FORMAT_ARGB (PNG_FORMAT_RGBA|PNG_FORMAT_FLAG_AFIRST)
#define PNG_FORMAT_BGRA (PNG_FORMAT_BGR|PNG_FORMAT_FLAG_ALPHA)
#define PNG_FORMAT_ABGR (PNG_FORMAT_BGRA|PNG_FORMAT_FLAG_AFIRST)
#define PNG_FORMAT_LINEAR_Y PNG_FORMAT_FLAG_LINEAR
#define PNG_FORMAT_LINEAR_Y_ALPHA (PNG_FORMAT_FLAG_LINEAR|PNG_FORMAT_FLAG_ALPHA)
#define PNG_FORMAT_LINEAR_RGB (PNG_FORMAT_FLAG_LINEAR|PNG_FORMAT_FLAG_COLOR)
#define PNG_FORMAT_LINEAR_RGB_ALPHA (PNG_FORMAT_FLAG_LINEAR|PNG_FORMAT_FLAG_COLOR|PNG_FORMAT_FLAG_ALPHA)
#define PNG_FORMAT_RGB_COLORMAP (PNG_FORMAT_RGB|PNG_FORMAT_FLAG_COLORMAP)
#define PNG_FORMAT_BGR_COLORMAP (PNG_FORMAT_BGR|PNG_FORMAT_FLAG_COLORMAP)
#define PNG_FORMAT_RGBA_COLORMAP (PNG_FORMAT_RGBA|PNG_FORMAT_FLAG_COLORMAP)
#define PNG_FORMAT_ARGB_COLORMAP (PNG_FORMAT_ARGB|PNG_FORMAT_FLAG_COLORMAP)
#define PNG_FORMAT_BGRA_COLORMAP (PNG_FORMAT_BGRA|PNG_FORMAT_FLAG_COLORMAP)
#define PNG_FORMAT_ABGR_COLORMAP (PNG_FORMAT_ABGR|PNG_FORMAT_FLAG_COLORMAP)
#define PNG_IMAGE_SAMPLE_CHANNELS(fmt) (((fmt)&(PNG_FORMAT_FLAG_COLOR|PNG_FORMAT_FLAG_ALPHA))+1)
#define PNG_IMAGE_SAMPLE_COMPONENT_SIZE(fmt) ((((fmt) & PNG_FORMAT_FLAG_LINEAR) >> 2)+1)
#define PNG_IMAGE_SAMPLE_SIZE(fmt) (PNG_IMAGE_SAMPLE_CHANNELS(fmt) * PNG_IMAGE_SAMPLE_COMPONENT_SIZE(fmt))
#define PNG_IMAGE_MAXIMUM_COLORMAP_COMPONENTS(fmt) (PNG_IMAGE_SAMPLE_CHANNELS(fmt) * 256)
#define PNG_IMAGE_PIXEL_(test,fmt) (((fmt)&PNG_FORMAT_FLAG_COLORMAP)?1:test(fmt))
#define PNG_IMAGE_PIXEL_CHANNELS(fmt) PNG_IMAGE_PIXEL_(PNG_IMAGE_SAMPLE_CHANNELS,fmt)
#define PNG_IMAGE_PIXEL_COMPONENT_SIZE(fmt) PNG_IMAGE_PIXEL_(PNG_IMAGE_SAMPLE_COMPONENT_SIZE,fmt)
#define PNG_IMAGE_PIXEL_SIZE(fmt) PNG_IMAGE_PIXEL_(PNG_IMAGE_SAMPLE_SIZE,fmt)
#define PNG_IMAGE_ROW_STRIDE(image) (PNG_IMAGE_PIXEL_CHANNELS((image).format) * (image).width)
#define PNG_IMAGE_BUFFER_SIZE(image,row_stride) (PNG_IMAGE_PIXEL_COMPONENT_SIZE((image).format)*(image).height*(row_stride))
#define PNG_IMAGE_SIZE(image) PNG_IMAGE_BUFFER_SIZE(image, PNG_IMAGE_ROW_STRIDE(image))
#define PNG_IMAGE_COLORMAP_SIZE(image) (PNG_IMAGE_SAMPLE_SIZE((image).format) * (image).colormap_entries)
#define PNG_IMAGE_FLAG_COLORSPACE_NOT_sRGB 0x01
#define PNG_IMAGE_FLAG_FAST 0x02
#define PNG_IMAGE_FLAG_16BIT_sRGB 0x04
#ifdef PNG_SIMPLIFIED_READ_SUPPORTED
#ifdef PNG_STDIO_SUPPORTED
#endif
#endif
#ifdef PNG_SIMPLIFIED_WRITE_SUPPORTED
#ifdef PNG_SIMPLIFIED_WRITE_STDIO_SUPPORTED
#endif
#define png_image_write_get_memory_size(image,size,convert_to_8_bit,buffer,row_stride,colormap) png_image_write_to_memory(&(image), 0, &(size), convert_to_8_bit, buffer, row_stride, colormap)
#define PNG_IMAGE_DATA_SIZE(image) (PNG_IMAGE_SIZE(image)+(image).height)
#ifndef PNG_ZLIB_MAX_SIZE
#define PNG_ZLIB_MAX_SIZE(b) ((b)+(((b)+7U)>>3)+(((b)+63U)>>6)+11U)
#endif
#define PNG_IMAGE_COMPRESSED_SIZE_MAX(image) PNG_ZLIB_MAX_SIZE((png_alloc_size_t)PNG_IMAGE_DATA_SIZE(image))
#define PNG_IMAGE_PNG_SIZE_MAX_(image,image_size) ((8U +25U +16U +44U +12U + (((image).format&PNG_FORMAT_FLAG_COLORMAP)? 12U+3U*(image).colormap_entries + (((image).format&PNG_FORMAT_FLAG_ALPHA)? 12U +(image).colormap_entries:0U):0U)+ 12U)+(12U*((image_size)/PNG_ZBUF_SIZE)) +(image_size))
#define PNG_IMAGE_PNG_SIZE_MAX(image) PNG_IMAGE_PNG_SIZE_MAX_(image, PNG_IMAGE_COMPRESSED_SIZE_MAX(image))
#endif
#endif
#ifdef PNG_SET_OPTION_SUPPORTED
#ifdef PNG_ARM_NEON_API_SUPPORTED
#define PNG_ARM_NEON 0
#endif
#define PNG_MAXIMUM_INFLATE_WINDOW 2
#define PNG_SKIP_sRGB_CHECK_PROFILE 4
#ifdef PNG_MIPS_MSA_API_SUPPORTED
#define PNG_MIPS_MSA 6
#endif
#define PNG_IGNORE_ADLER32 8
#ifdef PNG_POWERPC_VSX_API_SUPPORTED
#define PNG_POWERPC_VSX 10
#endif
#define PNG_OPTION_NEXT 12
#define PNG_OPTION_UNSET 0
#define PNG_OPTION_INVALID 1
#define PNG_OPTION_OFF 2
#define PNG_OPTION_ON 3
#endif
#ifdef PNG_EXPORT_LAST_ORDINAL
#endif
#ifdef __cplusplus
#endif
#endif
#endif
