// GGHASH:VbZiwNyAbv7ilahlH0IvoXfseSFDqwvxy74UL4AANq3s00005abb
#ifndef _TIFFIO_
#define _TIFFIO_ 
#include "tiff.h"
#include "tiffvers.h"
#if !defined(__WIN32__) && (defined(_WIN32) || defined(WIN32))
#define __WIN32__ 
#endif
#if defined(_WINDOWS) || defined(__WIN32__) || defined(_Windows)
# if !defined(__CYGWIN) && !defined(AVOID_WIN32_FILEIO) && !defined(USE_WIN32_FILEIO)
#define AVOID_WIN32_FILEIO 
# endif
#endif
#if defined(USE_WIN32_FILEIO)
#define VC_EXTRALEAN 
# include <windows.h>
# ifdef __WIN32__
# else
# endif
#else
#endif
#define TIFFPRINT_NONE 0x0
#define TIFFPRINT_STRIPS 0x1
#define TIFFPRINT_CURVES 0x2
#define TIFFPRINT_COLORMAP 0x4
#define TIFFPRINT_JPEGQTABLES 0x100
#define TIFFPRINT_JPEGACTABLES 0x200
#define TIFFPRINT_JPEGDCTABLES 0x200
#define D65_X0 (95.0470F)
#define D65_Y0 (100.0F)
#define D65_Z0 (108.8827F)
#define D50_X0 (96.4250F)
#define D50_Y0 (100.0F)
#define D50_Z0 (82.4680F)
#define CIELABTORGB_TABLE_RANGE 1500
#define TIFFGetR(abgr) ((abgr) & 0xff)
#define TIFFGetG(abgr) (((abgr) >> 8) & 0xff)
#define TIFFGetB(abgr) (((abgr) >> 16) & 0xff)
#define TIFFGetA(abgr) (((abgr) >> 24) & 0xff)
#include <stdio.h>
#include <stdarg.h>
#ifndef LOGLUV_PUBLIC
#define LOGLUV_PUBLIC 1
#endif
#if !defined(__GNUC__) && !defined(__attribute__)
#define __attribute__(x) 
#endif
#if defined(c_plusplus) || defined(__cplusplus)
#endif
#define TIFF_ANY TIFF_NOTYPE
#define TIFF_VARIABLE -1
#define TIFF_SPP -2
#define TIFF_VARIABLE2 -3
#define FIELD_CUSTOM 65
#if defined(c_plusplus) || defined(__cplusplus)
#else
#endif
# ifdef __WIN32__
# endif
#ifdef LOGLUV_PUBLIC
#define U_NEU 0.210526316
#define V_NEU 0.473684211
#define UVSCALE 410.
#if defined(c_plusplus) || defined(__cplusplus)
#else
#endif
#endif
#if defined(c_plusplus) || defined(__cplusplus)
#endif
#endif
