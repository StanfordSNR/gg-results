// GGHASH:Vs2vqdMTOlNkg1F8.KW6VUufXKoZ_M7BaMkgfrlFeeQ000007409
#ifndef _libmng_types_h_
#define _libmng_types_h_ 
#ifdef __BORLANDC__
#pragma option -AT
#endif
#ifndef WIN32
#if defined(_WIN32) || defined(__WIN32__) || defined(_Windows) || defined(_WINDOWS)
#define WIN32 
#endif
#endif
#ifdef HIDDEN_FOR_NOW
#ifdef WIN32
#ifndef WIN32_LEAN_AND_MEAN
#define WIN32_LEAN_AND_MEAN 
#endif
#endif
#endif
#ifdef MNG_USE_DLL
#ifdef MNG_SKIP_ZLIB
#undef MNG_INCLUDE_ZLIB
#endif
#ifdef MNG_SKIP_LCMS
#undef MNG_INCLUDE_LCMS
#endif
#ifdef MNG_SKIP_IJG6B
#undef MNG_INCLUDE_IJG6B
#endif
#endif
#ifdef MNG_INCLUDE_ZLIB
#include <zlib.h>
#endif
#ifdef MNG_INCLUDE_LCMS
#ifndef ZLIB_DLL
#undef FAR
#endif
#include <lcms2.h>
#endif
#ifdef MNG_INCLUDE_IJG6B
#define JPEG_INTERNAL_OPTIONS 
#ifdef MNG_USE_SETJMP
#include <setjmp.h>
#else
#ifdef WIN32
#endif
#endif
#ifdef FAR
#undef FAR
#endif
#define JPEG_INTERNAL_OPTIONS 
#ifndef _WIN32
#define HAVE_BOOLEAN 
#endif
#include <jpeglib.h>
#endif
#if defined(MNG_INTERNAL_MEMMNGMT) || defined(MNG_INCLUDE_FILTERS)
#include <stdlib.h>
#endif
#include <limits.h>
#ifdef WIN32
#if defined __BORLANDC__
#include <mem.h>
#else
#include <memory.h>
#endif
#include <string.h>
#else
#ifdef BSD
#include <strings.h>
#else
#include <string.h>
#endif
#endif
#if defined(MNG_FULL_CMS) || defined(MNG_GAMMA_ONLY) || defined(MNG_APP_CMS)
#include <math.h>
#endif
#ifndef MNG_DLL
#if defined(MNG_BUILD_DLL) || defined(MNG_USE_DLL)
#define MNG_DLL 
#endif
#endif
#define MNG_LOCAL static
#if defined(MNG_DLL) && defined(WIN32)
#define MNG_DECL __stdcall
#if defined(MNG_BUILD_DLL)
#define MNG_EXT __declspec(dllexport)
#elif defined(MNG_USE_DLL)
#define MNG_EXT __declspec(dllimport)
#else
#define MNG_EXT 
#endif
#ifdef MNG_STRICT_ANSI
#undef MNG_STRICT_ANSI
#endif
#else
#define MNG_DECL 
#define MNG_EXT 
#endif
#if defined(__BORLANDC__) && defined(MNG_STRICT_ANSI)
#pragma option -A
#endif
#if USHRT_MAX == 0xffffffffU
#elif UINT_MAX == 0xffffffffU
#elif ULONG_MAX == 0xffffffffU
#else
#error "Sorry, I can't find any 32-bit integers on this platform."
#endif
#define MNG_FALSE 0
#define MNG_TRUE 1
#define MNG_NULL 0
#define MNG_SUSPENDBUFFERSIZE 32768
#define MNG_SUSPENDREQUESTSIZE 1024
#ifdef MNG_INCLUDE_ZLIB
#define MNG_ZLIB_MAXBUF 8192
#define MNG_ZLIB_LEVEL 9
#define MNG_ZLIB_METHOD Z_DEFLATED
#define MNG_ZLIB_WINDOWBITS 15
#define MNG_ZLIB_MEMLEVEL 9
#define MNG_ZLIB_STRATEGY Z_DEFAULT_STRATEGY
#define MNG_MAX_IDAT_SIZE 4096
#endif
#ifdef MNG_INCLUDE_JNG
#ifdef MNG_INCLUDE_IJG6B
#define MNG_JPEG_DCT JDCT_DEFAULT
#define MNG_JPEG_QUALITY 100
#define MNG_JPEG_SMOOTHING 0
#define MNG_JPEG_PROGRESSIVE MNG_FALSE
#define MNG_JPEG_OPTIMIZED MNG_FALSE
#endif
#define MNG_JPEG_MAXBUF 65500
#define MNG_MAX_JDAT_SIZE 4096
#endif
#ifdef MNG_INCLUDE_LCMS
#ifdef HAVE_LIBLCMS1
#elif defined(HAVE_LIBLCMS2)
#endif
#endif
#ifdef MNG_INCLUDE_MPNG_PROPOSAL
#endif
#ifdef MNG_INCLUDE_ANG_PROPOSAL
#endif
#ifdef MNG_OPTIMIZE_CHUNKREADER
#endif
#ifdef MNG_OPTIMIZE_FOOTPRINT_INIT
#ifdef MNG_INCLUDE_JNG
#endif
#ifndef MNG_NO_16BIT_SUPPORT
#ifdef MNG_INCLUDE_JNG
#endif
#endif
#endif
#ifndef MNG_NO_OPEN_CLOSE_STREAM
#endif
#endif
