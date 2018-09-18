// GGHASH:V4VuxvYq3SBY648MgG7g1jQE2XjpjY5x34y3bP5.8faA00017805
#ifndef ZLIB_H
#define ZLIB_H 
#include "zconf.h"
#ifdef __cplusplus
#endif
#define ZLIB_VERSION "1.2.11"
#define ZLIB_VERNUM 0x12b0
#define ZLIB_VER_MAJOR 1
#define ZLIB_VER_MINOR 2
#define ZLIB_VER_REVISION 11
#define ZLIB_VER_SUBREVISION 0
#define Z_NO_FLUSH 0
#define Z_PARTIAL_FLUSH 1
#define Z_SYNC_FLUSH 2
#define Z_FULL_FLUSH 3
#define Z_FINISH 4
#define Z_BLOCK 5
#define Z_TREES 6
#define Z_OK 0
#define Z_STREAM_END 1
#define Z_NEED_DICT 2
#define Z_ERRNO (-1)
#define Z_STREAM_ERROR (-2)
#define Z_DATA_ERROR (-3)
#define Z_MEM_ERROR (-4)
#define Z_BUF_ERROR (-5)
#define Z_VERSION_ERROR (-6)
#define Z_NO_COMPRESSION 0
#define Z_BEST_SPEED 1
#define Z_BEST_COMPRESSION 9
#define Z_DEFAULT_COMPRESSION (-1)
#define Z_FILTERED 1
#define Z_HUFFMAN_ONLY 2
#define Z_RLE 3
#define Z_FIXED 4
#define Z_DEFAULT_STRATEGY 0
#define Z_BINARY 0
#define Z_TEXT 1
#define Z_ASCII Z_TEXT
#define Z_UNKNOWN 2
#define Z_DEFLATED 8
#define Z_NULL 0
#define zlib_version zlibVersion()
#ifndef Z_SOLO
#endif
#ifdef Z_PREFIX_SET
#define z_deflateInit(strm,level) deflateInit_((strm), (level), ZLIB_VERSION, (int)sizeof(z_stream))
#define z_inflateInit(strm) inflateInit_((strm), ZLIB_VERSION, (int)sizeof(z_stream))
#define z_deflateInit2(strm,level,method,windowBits,memLevel,strategy) deflateInit2_((strm),(level),(method),(windowBits),(memLevel), (strategy), ZLIB_VERSION, (int)sizeof(z_stream))
#define z_inflateInit2(strm,windowBits) inflateInit2_((strm), (windowBits), ZLIB_VERSION, (int)sizeof(z_stream))
#define z_inflateBackInit(strm,windowBits,window) inflateBackInit_((strm), (windowBits), (window), ZLIB_VERSION, (int)sizeof(z_stream))
#else
#define deflateInit(strm,level) deflateInit_((strm), (level), ZLIB_VERSION, (int)sizeof(z_stream))
#define inflateInit(strm) inflateInit_((strm), ZLIB_VERSION, (int)sizeof(z_stream))
#define deflateInit2(strm,level,method,windowBits,memLevel,strategy) deflateInit2_((strm),(level),(method),(windowBits),(memLevel), (strategy), ZLIB_VERSION, (int)sizeof(z_stream))
#define inflateInit2(strm,windowBits) inflateInit2_((strm), (windowBits), ZLIB_VERSION, (int)sizeof(z_stream))
#define inflateBackInit(strm,windowBits,window) inflateBackInit_((strm), (windowBits), (window), ZLIB_VERSION, (int)sizeof(z_stream))
#endif
#ifndef Z_SOLO
#ifdef Z_PREFIX_SET
#undef z_gzgetc
#define z_gzgetc(g) ((g)->have ? ((g)->have--, (g)->pos++, *((g)->next)++) : (gzgetc)(g))
#else
#define gzgetc(g) ((g)->have ? ((g)->have--, (g)->pos++, *((g)->next)++) : (gzgetc)(g))
#endif
#ifdef Z_LARGE64
#endif
#if !defined(ZLIB_INTERNAL) && defined(Z_WANT64)
# ifdef Z_PREFIX_SET
#define z_gzopen z_gzopen64
#define z_gzseek z_gzseek64
#define z_gztell z_gztell64
#define z_gzoffset z_gzoffset64
#define z_adler32_combine z_adler32_combine64
#define z_crc32_combine z_crc32_combine64
# else
#define gzopen gzopen64
#define gzseek gzseek64
#define gztell gztell64
#define gzoffset gzoffset64
#define adler32_combine adler32_combine64
#define crc32_combine crc32_combine64
# endif
# ifndef Z_LARGE64
# endif
#else
#endif
#else
#endif
#if (defined(_WIN32) || defined(__CYGWIN__)) && !defined(Z_SOLO)
#endif
#if defined(STDC) || defined(Z_HAVE_STDARG_H)
# ifndef Z_SOLO
# endif
#endif
#ifdef __cplusplus
#endif
#endif
