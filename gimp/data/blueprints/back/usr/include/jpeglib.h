// GGHASH:V5jsntA.3edXGWiBs6Bolak4I8XO8wpiQE02tT73z3qA0000c2d3
#ifndef JPEGLIB_H
#define JPEGLIB_H 
#ifndef JCONFIG_INCLUDED
#include "jconfig.h"
#endif
#include "jmorecfg.h"
#ifdef __cplusplus
#ifndef DONT_USE_EXTERN_C
#endif
#endif
#define DCTSIZE 8
#define DCTSIZE2 64
#define NUM_QUANT_TBLS 4
#define NUM_HUFF_TBLS 4
#define NUM_ARITH_TBLS 16
#define MAX_COMPS_IN_SCAN 4
#define MAX_SAMP_FACTOR 4
#define C_MAX_BLOCKS_IN_MCU 10
#ifndef D_MAX_BLOCKS_IN_MCU
#define D_MAX_BLOCKS_IN_MCU 10
#endif
#if JPEG_LIB_VERSION >= 70
#else
#endif
#define JCS_EXTENSIONS 1
#define JCS_ALPHA_EXTENSIONS 1
#ifndef JDCT_DEFAULT
#define JDCT_DEFAULT JDCT_ISLOW
#endif
#ifndef JDCT_FASTEST
#define JDCT_FASTEST JDCT_IFAST
#endif
#define jpeg_common_fields struct jpeg_error_mgr *err; struct jpeg_memory_mgr *mem; struct jpeg_progress_mgr *progress; void *client_data; boolean is_decompressor; int global_state
#if JPEG_LIB_VERSION >= 70
#endif
#if JPEG_LIB_VERSION >= 70
#endif
#if JPEG_LIB_VERSION >= 70
#endif
#if JPEG_LIB_VERSION >= 70
#endif
#if JPEG_LIB_VERSION >= 80
#endif
#if JPEG_LIB_VERSION >= 80
#endif
#if JPEG_LIB_VERSION >= 70
#else
#endif
#if JPEG_LIB_VERSION >= 80
#endif
#define JMSG_LENGTH_MAX 200
#define JMSG_STR_PARM_MAX 80
#define JPOOL_PERMANENT 0
#define JPOOL_IMAGE 1
#define JPOOL_NUMPOOLS 2
#define JPP(arglist) arglist
#define jpeg_create_compress(cinfo) jpeg_CreateCompress((cinfo), JPEG_LIB_VERSION, (size_t) sizeof(struct jpeg_compress_struct))
#define jpeg_create_decompress(cinfo) jpeg_CreateDecompress((cinfo), JPEG_LIB_VERSION, (size_t) sizeof(struct jpeg_decompress_struct))
#if JPEG_LIB_VERSION >= 80 || defined(MEM_SRCDST_SUPPORTED)
#endif
#if JPEG_LIB_VERSION >= 70
#endif
#if JPEG_LIB_VERSION >= 70
#endif
#define JPEG_SUSPENDED 0
#define JPEG_HEADER_OK 1
#define JPEG_HEADER_TABLES_ONLY 2
#define JPEG_REACHED_SOS 1
#define JPEG_REACHED_EOI 2
#define JPEG_ROW_COMPLETED 3
#define JPEG_SCAN_COMPLETED 4
#if JPEG_LIB_VERSION >= 80
#endif
#define JPEG_RST0 0xD0
#define JPEG_EOI 0xD9
#define JPEG_APP0 0xE0
#define JPEG_COM 0xFE
#ifdef INCOMPLETE_TYPES_BROKEN
#ifndef JPEG_INTERNALS
#endif
#endif
#ifdef JPEG_INTERNALS
#include "jpegint.h"
#include "jerror.h"
#endif
#ifdef __cplusplus
#ifndef DONT_USE_EXTERN_C
#endif
#endif
#endif
