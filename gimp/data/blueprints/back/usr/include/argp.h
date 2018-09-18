// GGHASH:Vx7lXB1oBOpnq3U7z5IpFojX9Za1k_uTbOJlvYrbZH8k00006346
#ifndef _ARGP_H
#define _ARGP_H 
#include <stdio.h>
#include <ctype.h>
#include <getopt.h>
#include <limits.h>
#include <errno.h>
#ifndef __error_t_defined
#define __error_t_defined 1
#endif
#define OPTION_ARG_OPTIONAL 0x1
#define OPTION_HIDDEN 0x2
#define OPTION_ALIAS 0x4
#define OPTION_DOC 0x8
#define OPTION_NO_USAGE 0x10
#define ARGP_ERR_UNKNOWN E2BIG
#define ARGP_KEY_ARG 0
#define ARGP_KEY_ARGS 0x1000006
#define ARGP_KEY_END 0x1000001
#define ARGP_KEY_NO_ARGS 0x1000002
#define ARGP_KEY_INIT 0x1000003
#define ARGP_KEY_FINI 0x1000007
#define ARGP_KEY_SUCCESS 0x1000004
#define ARGP_KEY_ERROR 0x1000005
#define ARGP_KEY_HELP_PRE_DOC 0x2000001
#define ARGP_KEY_HELP_POST_DOC 0x2000002
#define ARGP_KEY_HELP_HEADER 0x2000003
#define ARGP_KEY_HELP_EXTRA 0x2000004
#define ARGP_KEY_HELP_DUP_ARGS_NOTE 0x2000005
#define ARGP_KEY_HELP_ARGS_DOC 0x2000006
#define ARGP_PARSE_ARGV0 0x01
#define ARGP_NO_ERRS 0x02
#define ARGP_NO_ARGS 0x04
#define ARGP_IN_ORDER 0x08
#define ARGP_NO_HELP 0x10
#define ARGP_NO_EXIT 0x20
#define ARGP_LONG_ONLY 0x40
#define ARGP_SILENT (ARGP_NO_EXIT | ARGP_NO_ERRS | ARGP_NO_HELP)
#define ARGP_HELP_USAGE 0x01
#define ARGP_HELP_SHORT_USAGE 0x02
#define ARGP_HELP_SEE 0x04
#define ARGP_HELP_LONG 0x08
#define ARGP_HELP_PRE_DOC 0x10
#define ARGP_HELP_POST_DOC 0x20
#define ARGP_HELP_DOC (ARGP_HELP_PRE_DOC | ARGP_HELP_POST_DOC)
#define ARGP_HELP_BUG_ADDR 0x40
#define ARGP_HELP_LONG_ONLY 0x80
#define ARGP_HELP_EXIT_ERR 0x100
#define ARGP_HELP_EXIT_OK 0x200
#define ARGP_HELP_STD_ERR (ARGP_HELP_SEE | ARGP_HELP_EXIT_ERR)
#define ARGP_HELP_STD_USAGE (ARGP_HELP_SHORT_USAGE | ARGP_HELP_SEE | ARGP_HELP_EXIT_ERR)
#define ARGP_HELP_STD_HELP (ARGP_HELP_SHORT_USAGE | ARGP_HELP_LONG | ARGP_HELP_EXIT_OK | ARGP_HELP_DOC | ARGP_HELP_BUG_ADDR)
#ifdef __USE_EXTERN_INLINES
# if !(defined _LIBC && _LIBC)
#define __argp_usage argp_usage
#define __argp_state_help argp_state_help
#define __option_is_short _option_is_short
#define __option_is_end _option_is_end
# endif
# ifndef ARGP_EI
#define ARGP_EI __extern_inline
# endif
# if !(defined _LIBC && _LIBC)
#undef __argp_usage
#undef __argp_state_help
#undef __option_is_short
#undef __option_is_end
# endif
#endif
#endif
