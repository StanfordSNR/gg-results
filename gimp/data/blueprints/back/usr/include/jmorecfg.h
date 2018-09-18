// GGHASH:VjnXxbhuqiweXSF1bXuagpLa0i.R_AhdIjoV8Yvs4A1E00003ac9
#define MAX_COMPONENTS 10
#if BITS_IN_JSAMPLE == 8
#ifdef HAVE_UNSIGNED_CHAR
#define GETJSAMPLE(value) ((int) (value))
#else
#ifdef __CHAR_UNSIGNED__
#define GETJSAMPLE(value) ((int) (value))
#else
#define GETJSAMPLE(value) ((int) (value) & 0xFF)
#endif
#endif
#define MAXJSAMPLE 255
#define CENTERJSAMPLE 128
#endif
#if BITS_IN_JSAMPLE == 12
#define GETJSAMPLE(value) ((int) (value))
#define MAXJSAMPLE 4095
#define CENTERJSAMPLE 2048
#endif
#ifdef HAVE_UNSIGNED_CHAR
#define GETJOCTET(value) (value)
#else
#ifdef __CHAR_UNSIGNED__
#define GETJOCTET(value) (value)
#else
#define GETJOCTET(value) ((value) & 0xFF)
#endif
#endif
#ifdef HAVE_UNSIGNED_CHAR
#else
#ifdef __CHAR_UNSIGNED__
#else
#endif
#endif
#ifdef HAVE_UNSIGNED_SHORT
#else
#endif
#ifndef XMD_H
#endif
#ifndef XMD_H
#ifndef _BASETSD_H_
#ifndef _BASETSD_H
#ifndef QGLOBAL_H
#endif
#endif
#endif
#endif
#define JPEG_MAX_DIMENSION 65500L
#define METHODDEF(type) static type
#define LOCAL(type) static type
#define GLOBAL(type) type
#define EXTERN(type) extern type
#define JMETHOD(type,methodname,arglist) type (*methodname) arglist
#undef FAR
#define FAR 
#ifndef HAVE_BOOLEAN
#endif
#ifndef FALSE
#define FALSE 0
#endif
#ifndef TRUE
#define TRUE 1
#endif
#ifdef JPEG_INTERNALS
#define JPEG_INTERNAL_OPTIONS 
#endif
#ifdef JPEG_INTERNAL_OPTIONS
#define DCT_ISLOW_SUPPORTED 
#define DCT_IFAST_SUPPORTED 
#define DCT_FLOAT_SUPPORTED 
#define C_MULTISCAN_FILES_SUPPORTED 
#define C_PROGRESSIVE_SUPPORTED 
#define ENTROPY_OPT_SUPPORTED 
#define INPUT_SMOOTHING_SUPPORTED 
#define D_MULTISCAN_FILES_SUPPORTED 
#define D_PROGRESSIVE_SUPPORTED 
#define SAVE_MARKERS_SUPPORTED 
#define BLOCK_SMOOTHING_SUPPORTED 
#define IDCT_SCALING_SUPPORTED 
#undef UPSAMPLE_SCALING_SUPPORTED
#define UPSAMPLE_MERGING_SUPPORTED 
#define QUANT_1PASS_SUPPORTED 
#define QUANT_2PASS_SUPPORTED 
#define RGB_RED 0
#define RGB_GREEN 1
#define RGB_BLUE 2
#define RGB_PIXELSIZE 3
#define JPEG_NUMCS 17
#define EXT_RGB_RED 0
#define EXT_RGB_GREEN 1
#define EXT_RGB_BLUE 2
#define EXT_RGB_PIXELSIZE 3
#define EXT_RGBX_RED 0
#define EXT_RGBX_GREEN 1
#define EXT_RGBX_BLUE 2
#define EXT_RGBX_PIXELSIZE 4
#define EXT_BGR_RED 2
#define EXT_BGR_GREEN 1
#define EXT_BGR_BLUE 0
#define EXT_BGR_PIXELSIZE 3
#define EXT_BGRX_RED 2
#define EXT_BGRX_GREEN 1
#define EXT_BGRX_BLUE 0
#define EXT_BGRX_PIXELSIZE 4
#define EXT_XBGR_RED 3
#define EXT_XBGR_GREEN 2
#define EXT_XBGR_BLUE 1
#define EXT_XBGR_PIXELSIZE 4
#define EXT_XRGB_RED 1
#define EXT_XRGB_GREEN 2
#define EXT_XRGB_BLUE 3
#define EXT_XRGB_PIXELSIZE 4
#ifndef MULTIPLIER
#ifndef WITH_SIMD
#define MULTIPLIER int
#else
#define MULTIPLIER short
#endif
#endif
#ifndef FAST_FLOAT
#define FAST_FLOAT float
#endif
#endif
