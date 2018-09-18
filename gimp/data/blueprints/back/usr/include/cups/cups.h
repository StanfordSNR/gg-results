// GGHASH:VU8T45.bsD.bjjHUUCGA9YKgzLCnra49uz.dUvuW1ftA0000636d
#ifndef _CUPS_CUPS_H_
#define _CUPS_CUPS_H_ 
# include <sys/types.h>
# if defined(WIN32) && !defined(__CUPS_SSIZE_T_DEFINED)
#define __CUPS_SSIZE_T_DEFINED 
# include <stddef.h>
# endif
# include "file.h"
# include "ipp.h"
# include "language.h"
# include "pwg.h"
# ifdef __cplusplus
# endif
#define CUPS_VERSION 2.0207
#define CUPS_VERSION_MAJOR 2
#define CUPS_VERSION_MINOR 2
#define CUPS_VERSION_PATCH 7
#define CUPS_BC_FD 3
#define CUPS_DATE_ANY (time_t)-1
#define CUPS_EXCLUDE_NONE (const char *)0
#define CUPS_FORMAT_AUTO "application/octet-stream"
#define CUPS_FORMAT_COMMAND "application/vnd.cups-command"
#define CUPS_FORMAT_JPEG "image/jpeg"
#define CUPS_FORMAT_PDF "application/pdf"
#define CUPS_FORMAT_POSTSCRIPT "application/postscript"
#define CUPS_FORMAT_RAW "application/vnd.cups-raw"
#define CUPS_FORMAT_TEXT "text/plain"
#define CUPS_HTTP_DEFAULT (http_t *)0
#define CUPS_INCLUDE_ALL (const char *)0
#define CUPS_JOBID_ALL -1
#define CUPS_JOBID_CURRENT 0
#define CUPS_LENGTH_VARIABLE (ssize_t)0
#define CUPS_TIMEOUT_DEFAULT 0
#define CUPS_WHICHJOBS_ALL -1
#define CUPS_WHICHJOBS_ACTIVE 0
#define CUPS_WHICHJOBS_COMPLETED 1
#define CUPS_DEST_FLAGS_NONE 0x00
#define CUPS_DEST_FLAGS_UNCONNECTED 0x01
#define CUPS_DEST_FLAGS_MORE 0x02
#define CUPS_DEST_FLAGS_REMOVED 0x04
#define CUPS_DEST_FLAGS_ERROR 0x08
#define CUPS_DEST_FLAGS_RESOLVING 0x10
#define CUPS_DEST_FLAGS_CONNECTING 0x20
#define CUPS_DEST_FLAGS_CANCELED 0x40
#define CUPS_DEST_FLAGS_DEVICE 0x80
#define CUPS_MEDIA_FLAGS_DEFAULT 0x00
#define CUPS_MEDIA_FLAGS_BORDERLESS 0x01
#define CUPS_MEDIA_FLAGS_DUPLEX 0x02
#define CUPS_MEDIA_FLAGS_EXACT 0x04
#define CUPS_MEDIA_FLAGS_READY 0x08
#define CUPS_COPIES "copies"
#define CUPS_COPIES_SUPPORTED "copies-supported"
#define CUPS_FINISHINGS "finishings"
#define CUPS_FINISHINGS_SUPPORTED "finishings-supported"
#define CUPS_FINISHINGS_BIND "7"
#define CUPS_FINISHINGS_COVER "6"
#define CUPS_FINISHINGS_FOLD "10"
#define CUPS_FINISHINGS_NONE "3"
#define CUPS_FINISHINGS_PUNCH "5"
#define CUPS_FINISHINGS_STAPLE "4"
#define CUPS_FINISHINGS_TRIM "11"
#define CUPS_MEDIA "media"
#define CUPS_MEDIA_READY "media-ready"
#define CUPS_MEDIA_SUPPORTED "media-supported"
#define CUPS_MEDIA_3X5 "na_index-3x5_3x5in"
#define CUPS_MEDIA_4X6 "na_index-4x6_4x6in"
#define CUPS_MEDIA_5X7 "na_5x7_5x7in"
#define CUPS_MEDIA_8X10 "na_govt-letter_8x10in"
#define CUPS_MEDIA_A3 "iso_a3_297x420mm"
#define CUPS_MEDIA_A4 "iso_a4_210x297mm"
#define CUPS_MEDIA_A5 "iso_a5_148x210mm"
#define CUPS_MEDIA_A6 "iso_a6_105x148mm"
#define CUPS_MEDIA_ENV10 "na_number-10_4.125x9.5in"
#define CUPS_MEDIA_ENVDL "iso_dl_110x220mm"
#define CUPS_MEDIA_LEGAL "na_legal_8.5x14in"
#define CUPS_MEDIA_LETTER "na_letter_8.5x11in"
#define CUPS_MEDIA_PHOTO_L "oe_photo-l_3.5x5in"
#define CUPS_MEDIA_SUPERBA3 "na_super-b_13x19in"
#define CUPS_MEDIA_TABLOID "na_ledger_11x17in"
#define CUPS_MEDIA_SOURCE "media-source"
#define CUPS_MEDIA_SOURCE_SUPPORTED "media-source-supported"
#define CUPS_MEDIA_SOURCE_AUTO "auto"
#define CUPS_MEDIA_SOURCE_MANUAL "manual"
#define CUPS_MEDIA_TYPE "media-type"
#define CUPS_MEDIA_TYPE_SUPPORTED "media-type-supported"
#define CUPS_MEDIA_TYPE_AUTO "auto"
#define CUPS_MEDIA_TYPE_ENVELOPE "envelope"
#define CUPS_MEDIA_TYPE_LABELS "labels"
#define CUPS_MEDIA_TYPE_LETTERHEAD "stationery-letterhead"
#define CUPS_MEDIA_TYPE_PHOTO "photographic"
#define CUPS_MEDIA_TYPE_PHOTO_GLOSSY "photographic-glossy"
#define CUPS_MEDIA_TYPE_PHOTO_MATTE "photographic-matte"
#define CUPS_MEDIA_TYPE_PLAIN "stationery"
#define CUPS_MEDIA_TYPE_TRANSPARENCY "transparency"
#define CUPS_NUMBER_UP "number-up"
#define CUPS_NUMBER_UP_SUPPORTED "number-up-supported"
#define CUPS_ORIENTATION "orientation-requested"
#define CUPS_ORIENTATION_SUPPORTED "orientation-requested-supported"
#define CUPS_ORIENTATION_PORTRAIT "3"
#define CUPS_ORIENTATION_LANDSCAPE "4"
#define CUPS_PRINT_COLOR_MODE "print-color-mode"
#define CUPS_PRINT_COLOR_MODE_SUPPORTED "print-color-mode-supported"
#define CUPS_PRINT_COLOR_MODE_AUTO "auto"
#define CUPS_PRINT_COLOR_MODE_MONOCHROME "monochrome"
#define CUPS_PRINT_COLOR_MODE_COLOR "color"
#define CUPS_PRINT_QUALITY "print-quality"
#define CUPS_PRINT_QUALITY_SUPPORTED "print-quality-supported"
#define CUPS_PRINT_QUALITY_DRAFT "3"
#define CUPS_PRINT_QUALITY_NORMAL "4"
#define CUPS_PRINT_QUALITY_HIGH "5"
#define CUPS_SIDES "sides"
#define CUPS_SIDES_SUPPORTED "sides-supported"
#define CUPS_SIDES_ONE_SIDED "one-sided"
#define CUPS_SIDES_TWO_SIDED_PORTRAIT "two-sided-long-edge"
#define CUPS_SIDES_TWO_SIDED_LANDSCAPE "two-sided-short-edge"
# ifdef __BLOCKS__
# endif
# ifdef __BLOCKS__
# endif
# ifdef __BLOCKS__
# endif
# ifdef __cplusplus
# endif
#endif
