// GGHASH:Vuy5VTX8XBnrBLuO9.ZNkZkEXMwTwoXq3mxvELCAInkw000008f7
#ifndef _FNMATCH_H
#define _FNMATCH_H 1
#ifdef __cplusplus
#endif
#undef FNM_PATHNAME
#undef FNM_NOESCAPE
#undef FNM_PERIOD
#define FNM_PATHNAME (1 << 0)
#define FNM_NOESCAPE (1 << 1)
#define FNM_PERIOD (1 << 2)
#if !defined _POSIX_C_SOURCE || _POSIX_C_SOURCE < 2 || defined _GNU_SOURCE
#define FNM_FILE_NAME FNM_PATHNAME
#define FNM_LEADING_DIR (1 << 3)
#define FNM_CASEFOLD (1 << 4)
#define FNM_EXTMATCH (1 << 5)
#endif
#define FNM_NOMATCH 1
#ifdef _XOPEN_SOURCE
#define FNM_NOSYS (-1)
#endif
#ifdef __cplusplus
#endif
#endif
