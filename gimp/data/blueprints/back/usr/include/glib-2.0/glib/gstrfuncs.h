// GGHASH:V1zE.D7FC75XI7ZIzLWeLObGidSnAsKbVJGBVnd9Jsp000003347
#ifndef __G_STRFUNCS_H__
#define __G_STRFUNCS_H__ 
#if !defined (__GLIB_H_INSIDE__) && !defined (GLIB_COMPILATION)
#error "Only <glib.h> can be included directly."
#endif
#include <stdarg.h>
#include <glib/gmacros.h>
#include <glib/gtypes.h>
#include <glib/gerror.h>
#define g_ascii_isalnum(c) ((g_ascii_table[(guchar) (c)] & G_ASCII_ALNUM) != 0)
#define g_ascii_isalpha(c) ((g_ascii_table[(guchar) (c)] & G_ASCII_ALPHA) != 0)
#define g_ascii_iscntrl(c) ((g_ascii_table[(guchar) (c)] & G_ASCII_CNTRL) != 0)
#define g_ascii_isdigit(c) ((g_ascii_table[(guchar) (c)] & G_ASCII_DIGIT) != 0)
#define g_ascii_isgraph(c) ((g_ascii_table[(guchar) (c)] & G_ASCII_GRAPH) != 0)
#define g_ascii_islower(c) ((g_ascii_table[(guchar) (c)] & G_ASCII_LOWER) != 0)
#define g_ascii_isprint(c) ((g_ascii_table[(guchar) (c)] & G_ASCII_PRINT) != 0)
#define g_ascii_ispunct(c) ((g_ascii_table[(guchar) (c)] & G_ASCII_PUNCT) != 0)
#define g_ascii_isspace(c) ((g_ascii_table[(guchar) (c)] & G_ASCII_SPACE) != 0)
#define g_ascii_isupper(c) ((g_ascii_table[(guchar) (c)] & G_ASCII_UPPER) != 0)
#define g_ascii_isxdigit(c) ((g_ascii_table[(guchar) (c)] & G_ASCII_XDIGIT) != 0)
#define G_STR_DELIMITERS "_-|> <."
#define G_ASCII_DTOSTR_BUF_SIZE (29 + 10)
#define g_strstrip(string) g_strchomp (g_strchug (string))
#define G_NUMBER_PARSER_ERROR (g_number_parser_error_quark ())
#endif
