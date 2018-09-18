// GGHASH:VEmEOkYSe2olCjc.RCpv2S4CxeRK9GLo0tnIQ1TYlbq4000015ff
#ifndef _PCREPOSIX_H
#define _PCREPOSIX_H 
#include <stdlib.h>
#ifdef __cplusplus
#endif
#define REG_ICASE 0x0001
#define REG_NEWLINE 0x0002
#define REG_NOTBOL 0x0004
#define REG_NOTEOL 0x0008
#define REG_DOTALL 0x0010
#define REG_NOSUB 0x0020
#define REG_UTF8 0x0040
#define REG_STARTEND 0x0080
#define REG_NOTEMPTY 0x0100
#define REG_UNGREEDY 0x0200
#define REG_UCP 0x0400
#define REG_EXTENDED 0
#if defined(_WIN32) && !defined(PCRE_STATIC) && !defined(PCREPOSIX_EXP_DECL)
#define PCREPOSIX_EXP_DECL extern __declspec(dllimport)
#define PCREPOSIX_EXP_DEFN __declspec(dllimport)
#endif
#ifndef PCREPOSIX_EXP_DECL
# ifdef __cplusplus
#define PCREPOSIX_EXP_DECL extern "C"
#define PCREPOSIX_EXP_DEFN extern "C"
# else
#define PCREPOSIX_EXP_DECL extern
#define PCREPOSIX_EXP_DEFN extern
# endif
#endif
#ifdef __cplusplus
#endif
#define regcomp pcreposix_regcomp
#define regexec pcreposix_regexec
#define regerror pcreposix_regerror
#define regfree pcreposix_regfree
#endif
