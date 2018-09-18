// GGHASH:VJuCale8ES96xgeHMyu4B0bSaMARVld.3fIsHDUbzGrM0001e0c0
#ifndef HANDY_H
#define HANDY_H 
#if !defined(__STDC__)
#ifdef NULL
#undef NULL
#endif
#define NULL 0
#endif
#ifndef PERL_CORE
#define Null(type) ((type)NULL)
#define Nullch Null(char*)
#define Nullfp Null(PerlIO*)
#define Nullsv Null(SV*)
#endif
#ifdef TRUE
#undef TRUE
#endif
#ifdef FALSE
#undef FALSE
#endif
#define TRUE (1)
#define FALSE (0)
#if defined(__GNUC__) && !defined(PERL_GCC_BRACE_GROUPS_FORBIDDEN)
#define MUTABLE_PTR(p) ({ void *_p = (p); _p; })
#else
#define MUTABLE_PTR(p) ((void *) (p))
#endif
#define MUTABLE_AV(p) ((AV *)MUTABLE_PTR(p))
#define MUTABLE_CV(p) ((CV *)MUTABLE_PTR(p))
#define MUTABLE_GV(p) ((GV *)MUTABLE_PTR(p))
#define MUTABLE_HV(p) ((HV *)MUTABLE_PTR(p))
#define MUTABLE_IO(p) ((IO *)MUTABLE_PTR(p))
#define MUTABLE_SV(p) ((SV *)MUTABLE_PTR(p))
#if defined(I_STDBOOL) && !defined(PERL_BOOL_AS_CHAR)
# include <stdbool.h>
# ifndef HAS_BOOL
#define HAS_BOOL 1
# endif
#endif
#ifdef __GNUG__
# ifndef PERL_BOOL_AS_CHAR
# ifndef HAS_BOOL
#define HAS_BOOL 1
# endif
# endif
#endif
#ifndef HAS_BOOL
# ifdef bool
#undef bool
# endif
#define bool char
#define HAS_BOOL 1
#endif
#define cBOOL(cbool) ((cbool) ? (bool)1 : (bool)0)
#if (defined(__STDC_VERSION__) && __STDC_VERSION__ >= 199901L) || (defined(__SUNPRO_C))
#define FUNCTION__ __func__
#else
# if (defined(USING_MSVC6)) || (defined(__DECC_VER))
#define FUNCTION__ ""
# else
#define FUNCTION__ __FUNCTION__
# endif
#endif
#ifdef I_INTTYPES
# include <inttypes.h>
# ifdef INT32_MIN_BROKEN
#undef INT32_MIN
#define INT32_MIN (-2147483647-1)
# endif
# ifdef INT64_MIN_BROKEN
#undef INT64_MIN
#define INT64_MIN (-9223372036854775807LL-1)
# endif
#endif
#ifdef HAS_QUAD
#endif
#if defined(HAS_QUAD)
#undef PeRl_INT64_C
#undef PeRl_UINT64_C
# if QUADKIND == QUAD_IS_INT && INTSIZE == 8
#define PeRl_INT64_C(c) (c)
#define PeRl_UINT64_C(c) CAT2(c,U)
# endif
# if QUADKIND == QUAD_IS_LONG && LONGSIZE == 8
#define PeRl_INT64_C(c) CAT2(c,L)
#define PeRl_UINT64_C(c) CAT2(c,UL)
# endif
# if QUADKIND == QUAD_IS_LONG_LONG && defined(HAS_LONG_LONG)
#define PeRl_INT64_C(c) CAT2(c,LL)
#define PeRl_UINT64_C(c) CAT2(c,ULL)
# endif
# if QUADKIND == QUAD_IS___INT64
#define PeRl_INT64_C(c) CAT2(c,I64)
#define PeRl_UINT64_C(c) CAT2(c,UI64)
# endif
# ifndef PeRl_INT64_C
#define PeRl_INT64_C(c) ((I64)(c))
#define PeRl_UINT64_C(c) ((U64)(c))
# endif
# if defined(PERL_DARWIN) && defined(PERL_GCC_PEDANTIC)
#undef INT64_C
#undef UINT64_C
# endif
# ifndef INT64_C
#define INT64_C(c) PeRl_INT64_C(c)
# endif
# ifndef UINT64_C
#define UINT64_C(c) PeRl_UINT64_C(c)
# endif
#endif
#if defined(UINT8_MAX) && defined(INT16_MAX) && defined(INT32_MAX)
#define U8_MAX UINT8_MAX
#define U8_MIN UINT8_MIN
#define I16_MAX INT16_MAX
#define I16_MIN INT16_MIN
#define U16_MAX UINT16_MAX
#define U16_MIN UINT16_MIN
#define I32_MAX INT32_MAX
#define I32_MIN INT32_MIN
#ifndef UINT32_MAX_BROKEN
#define U32_MAX UINT32_MAX
#else
#define U32_MAX 4294967295U
#endif
#define U32_MIN UINT32_MIN
#else
#define U8_MAX PERL_UCHAR_MAX
#define U8_MIN PERL_UCHAR_MIN
#define I16_MAX PERL_SHORT_MAX
#define I16_MIN PERL_SHORT_MIN
#define U16_MAX PERL_USHORT_MAX
#define U16_MIN PERL_USHORT_MIN
#if LONGSIZE > 4
#define I32_MAX PERL_INT_MAX
#define I32_MIN PERL_INT_MIN
#define U32_MAX PERL_UINT_MAX
#define U32_MIN PERL_UINT_MIN
#else
#define I32_MAX PERL_LONG_MAX
#define I32_MIN PERL_LONG_MIN
#define U32_MAX PERL_ULONG_MAX
#define U32_MIN PERL_ULONG_MIN
#endif
#endif
#define BIT_DIGITS(N) (((N)*146)/485 + 1)
#define TYPE_DIGITS(T) BIT_DIGITS(sizeof(T) * 8)
#define TYPE_CHARS(T) (TYPE_DIGITS(T) + 2)
#define Ctl(ch) ((ch) & 037)
#if defined(PERL_CORE) || defined(PERL_EXT)
# ifndef MIN
#define MIN(a,b) ((a) < (b) ? (a) : (b))
# endif
# ifndef MAX
#define MAX(a,b) ((a) > (b) ? (a) : (b))
# endif
#endif
#if defined(DEBUGGING) && !defined(__COVERITY__)
#define __ASSERT_(statement) assert(statement),
#else
#define __ASSERT_(statement) 
#endif
#define STR_WITH_LEN(s) ("" s ""), (sizeof(s)-1)
#define newSVpvs(str) Perl_newSVpvn(aTHX_ STR_WITH_LEN(str))
#define newSVpvs_flags(str,flags) Perl_newSVpvn_flags(aTHX_ STR_WITH_LEN(str), flags)
#define newSVpvs_share(str) Perl_newSVpvn_share(aTHX_ STR_WITH_LEN(str), 0)
#define sv_catpvs_flags(sv,str,flags) Perl_sv_catpvn_flags(aTHX_ sv, STR_WITH_LEN(str), flags)
#define sv_catpvs_nomg(sv,str) Perl_sv_catpvn_flags(aTHX_ sv, STR_WITH_LEN(str), 0)
#define sv_catpvs(sv,str) Perl_sv_catpvn_flags(aTHX_ sv, STR_WITH_LEN(str), SV_GMAGIC)
#define sv_catpvs_mg(sv,str) Perl_sv_catpvn_flags(aTHX_ sv, STR_WITH_LEN(str), SV_GMAGIC|SV_SMAGIC)
#define sv_setpvs(sv,str) Perl_sv_setpvn(aTHX_ sv, STR_WITH_LEN(str))
#define sv_setpvs_mg(sv,str) Perl_sv_setpvn_mg(aTHX_ sv, STR_WITH_LEN(str))
#define sv_setref_pvs(rv,classname,str) Perl_sv_setref_pvn(aTHX_ rv, classname, STR_WITH_LEN(str))
#define savepvs(str) Perl_savepvn(aTHX_ STR_WITH_LEN(str))
#define savesharedpvs(str) Perl_savesharedpvn(aTHX_ STR_WITH_LEN(str))
#define gv_stashpvs(str,create) Perl_gv_stashpvn(aTHX_ STR_WITH_LEN(str), create)
#define gv_fetchpvs(namebeg,add,sv_type) Perl_gv_fetchpvn_flags(aTHX_ STR_WITH_LEN(namebeg), add, sv_type)
#define gv_fetchpvn(namebeg,len,add,sv_type) Perl_gv_fetchpvn_flags(aTHX_ namebeg, len, add, sv_type)
#define sv_catxmlpvs(dsv,str,utf8) Perl_sv_catxmlpvn(aTHX_ dsv, STR_WITH_LEN(str), utf8)
#define lex_stuff_pvs(pv,flags) Perl_lex_stuff_pvn(aTHX_ STR_WITH_LEN(pv), flags)
#define get_cvs(str,flags) Perl_get_cvn_flags(aTHX_ STR_WITH_LEN(str), (flags))
#define strNE(s1,s2) (strcmp(s1,s2))
#define strEQ(s1,s2) (!strcmp(s1,s2))
#define strLT(s1,s2) (strcmp(s1,s2) < 0)
#define strLE(s1,s2) (strcmp(s1,s2) <= 0)
#define strGT(s1,s2) (strcmp(s1,s2) > 0)
#define strGE(s1,s2) (strcmp(s1,s2) >= 0)
#define strnNE(s1,s2,l) (strncmp(s1,s2,l))
#define strnEQ(s1,s2,l) (!strncmp(s1,s2,l))
#if defined(PERL_IN_DOIO_C) || defined(PERL_IN_GV_C) || defined(PERL_IN_HV_C) || defined(PERL_IN_LOCALE_C) || defined(PERL_IN_PERL_C) || defined(PERL_IN_TOKE_C) || defined(PERL_EXT)
#define strNEs(s1,s2) (strncmp(s1,"" s2 "", sizeof(s2)-1))
#define strEQs(s1,s2) (!strncmp(s1,"" s2 "", sizeof(s2)-1))
#endif
#ifdef HAS_MEMCMP
#define memNE(s1,s2,l) (memcmp(s1,s2,l))
#define memEQ(s1,s2,l) (!memcmp(s1,s2,l))
#else
#define memNE(s1,s2,l) (bcmp(s1,s2,l))
#define memEQ(s1,s2,l) (!bcmp(s1,s2,l))
#endif
#define memEQs(s1,l,s2) (((sizeof(s2)-1) == (l)) && memEQ((s1), ("" s2 ""), (sizeof(s2)-1)))
#define memNEs(s1,l,s2) !memEQs(s1, l, s2)
#define _memEQs(s1,s2) (memEQ((s1), ("" s2 ""), (sizeof(s2)-1)))
#define _memNEs(s1,s2) (memNE((s1),("" s2 ""),(sizeof(s2)-1)))
#define memLT(s1,s2,l) (memcmp(s1,s2,l) < 0)
#define memLE(s1,s2,l) (memcmp(s1,s2,l) <= 0)
#define memGT(s1,s2,l) (memcmp(s1,s2,l) > 0)
#define memGE(s1,s2,l) (memcmp(s1,s2,l) >= 0)
#ifdef HAS_SETLOCALE
# ifndef CTYPE256
#define CTYPE256 
# endif
#endif
#ifdef HAS_QUAD
#define WIDEST_UTYPE U64TYPE
#else
#define WIDEST_UTYPE U32
#endif
#ifndef __COVERITY__
#define FITS_IN_8_BITS(c) ( (sizeof(c) == 1) || !(((WIDEST_UTYPE)((c) | 0)) & ~0xFF))
#else
#define FITS_IN_8_BITS(c) (1)
#endif
#ifdef EBCDIC
# ifndef _ALL_SOURCE
# error _ALL_SOURCE should probably be defined
# endif
#else
#define isASCII(c) ((WIDEST_UTYPE)((c) | 0) < 128)
#endif
#define isOCTAL_A(c) (((WIDEST_UTYPE)((c) | 0) & ~7) == '0')
#ifdef H_PERL
#define _CC_WORDCHAR 0
#define _CC_DIGIT 1
#define _CC_ALPHA 2
#define _CC_LOWER 3
#define _CC_UPPER 4
#define _CC_PUNCT 5
#define _CC_PRINT 6
#define _CC_ALPHANUMERIC 7
#define _CC_GRAPH 8
#define _CC_CASED 9
#define _FIRST_NON_SWASH_CC 10
#define _CC_SPACE 10
#define _CC_PSXSPC _CC_SPACE
#define _CC_BLANK 11
#define _CC_XDIGIT 12
#define _CC_CNTRL 13
#define _CC_ASCII 14
#define _CC_VERTSPACE 15
#define _HIGHEST_REGCOMP_DOT_H_SYNC _CC_VERTSPACE
#define _CC_IDFIRST 16
#define _CC_CHARNAME_CONT 17
#define _CC_NONLATIN1_FOLD 18
#define _CC_NONLATIN1_SIMPLE_FOLD 19
#define _CC_QUOTEMETA 20
#define _CC_NON_FINAL_FOLD 21
#define _CC_IS_IN_SOME_FOLD 22
#define _CC_MNEMONIC_CNTRL 23
#define _CC_IDCONT 24
#define _CC_UTF8_START_BYTE_IS_FOR_AT_LEAST_SURROGATE 28
#define _CC_UTF8_IS_START 29
#define _CC_UTF8_IS_DOWNGRADEABLE_START 30
#define _CC_UTF8_IS_CONTINUATION 31
#if defined(PERL_CORE) || defined(PERL_EXT)
#endif
#define POSIX_SWASH_COUNT _FIRST_NON_SWASH_CC
#define POSIX_CC_COUNT (_HIGHEST_REGCOMP_DOT_H_SYNC + 1)
#if defined(PERL_IN_UTF8_C) || defined(PERL_IN_REGCOMP_C) || defined(PERL_IN_REGEXEC_C)
# if _CC_WORDCHAR != 0 || _CC_DIGIT != 1 || _CC_ALPHA != 2 || _CC_LOWER != 3 || _CC_UPPER != 4 || _CC_PUNCT != 5 || _CC_PRINT != 6 || _CC_ALPHANUMERIC != 7 || _CC_GRAPH != 8 || _CC_CASED != 9
      #error Need to adjust order of swash_property_names[]
# endif
#endif
# ifdef DOINIT
# include "l1_char_class_tab.h"
# else
# endif
#define _CC_mask(classnum) (1U << (classnum))
#define _generic_isCC(c,classnum) cBOOL(FITS_IN_8_BITS(c) && (PL_charclass[(U8) (c)] & _CC_mask(classnum)))
#define _CC_mask_A(classnum) (_CC_mask(classnum) | _CC_mask(_CC_ASCII))
#define _generic_isCC_A(c,classnum) (FITS_IN_8_BITS(c) && ((PL_charclass[(U8) (c)] & _CC_mask_A(classnum)) == _CC_mask_A(classnum)))
#define isALPHA_A(c) _generic_isCC_A(c, _CC_ALPHA)
#define isALPHANUMERIC_A(c) _generic_isCC_A(c, _CC_ALPHANUMERIC)
#define isBLANK_A(c) _generic_isCC_A(c, _CC_BLANK)
#define isCNTRL_A(c) _generic_isCC_A(c, _CC_CNTRL)
#define isDIGIT_A(c) _generic_isCC(c, _CC_DIGIT)
#define isGRAPH_A(c) _generic_isCC_A(c, _CC_GRAPH)
#define isLOWER_A(c) _generic_isCC_A(c, _CC_LOWER)
#define isPRINT_A(c) _generic_isCC_A(c, _CC_PRINT)
#define isPUNCT_A(c) _generic_isCC_A(c, _CC_PUNCT)
#define isSPACE_A(c) _generic_isCC_A(c, _CC_SPACE)
#define isUPPER_A(c) _generic_isCC_A(c, _CC_UPPER)
#define isWORDCHAR_A(c) _generic_isCC_A(c, _CC_WORDCHAR)
#define isXDIGIT_A(c) _generic_isCC(c, _CC_XDIGIT)
#define isIDFIRST_A(c) _generic_isCC_A(c, _CC_IDFIRST)
#define isALPHA_L1(c) _generic_isCC(c, _CC_ALPHA)
#define isALPHANUMERIC_L1(c) _generic_isCC(c, _CC_ALPHANUMERIC)
#define isBLANK_L1(c) _generic_isCC(c, _CC_BLANK)
#define isCHARNAME_CONT(c) _generic_isCC(c, _CC_CHARNAME_CONT)
#define isCNTRL_L1(c) _generic_isCC(c, _CC_CNTRL)
#define isGRAPH_L1(c) _generic_isCC(c, _CC_GRAPH)
#define isLOWER_L1(c) _generic_isCC(c, _CC_LOWER)
#define isPRINT_L1(c) _generic_isCC(c, _CC_PRINT)
#define isPSXSPC_L1(c) isSPACE_L1(c)
#define isPUNCT_L1(c) _generic_isCC(c, _CC_PUNCT)
#define isSPACE_L1(c) _generic_isCC(c, _CC_SPACE)
#define isUPPER_L1(c) _generic_isCC(c, _CC_UPPER)
#define isWORDCHAR_L1(c) _generic_isCC(c, _CC_WORDCHAR)
#define isIDFIRST_L1(c) _generic_isCC(c, _CC_IDFIRST)
# ifdef EBCDIC
#define isASCII(c) _generic_isCC(c, _CC_ASCII)
# endif
#define _HAS_NONLATIN1_SIMPLE_FOLD_CLOSURE_ONLY_FOR_USE_BY_REGCOMP_DOT_C_AND_REGEXEC_DOT_C(c) ((! cBOOL(FITS_IN_8_BITS(c))) || (PL_charclass[(U8) (c)] & _CC_mask(_CC_NONLATIN1_SIMPLE_FOLD)))
#define _HAS_NONLATIN1_FOLD_CLOSURE_ONLY_FOR_USE_BY_REGCOMP_DOT_C_AND_REGEXEC_DOT_C(c) ((! cBOOL(FITS_IN_8_BITS(c))) || (PL_charclass[(U8) (c)] & _CC_mask(_CC_NONLATIN1_FOLD)))
#define _isQUOTEMETA(c) _generic_isCC(c, _CC_QUOTEMETA)
#define _IS_NON_FINAL_FOLD_ONLY_FOR_USE_BY_REGCOMP_DOT_C(c) _generic_isCC(c, _CC_NON_FINAL_FOLD)
#define _IS_IN_SOME_FOLD_ONLY_FOR_USE_BY_REGCOMP_DOT_C(c) _generic_isCC(c, _CC_IS_IN_SOME_FOLD)
#define _IS_MNEMONIC_CNTRL_ONLY_FOR_USE_BY_REGCOMP_DOT_C(c) _generic_isCC(c, _CC_MNEMONIC_CNTRL)
#else
#define isDIGIT_A(c) ((c) <= '9' && (c) >= '0')
#define isBLANK_A(c) ((c) == ' ' || (c) == '\t')
#define isSPACE_A(c) (isBLANK_A(c) || (c) == '\n' || (c) == '\r' || (c) == '\v' || (c) == '\f')
#define isLOWER_A(c) ((c) >= 'a' && (c) <= 'z' && ( (c) <= 'i' || ((c) >= 'j' && (c) <= 'r') || (c) >= 's'))
#define isUPPER_A(c) ((c) >= 'A' && (c) <= 'Z' && ( (c) <= 'I' || ((c) >= 'J' && (c) <= 'R') || (c) >= 'S'))
#define isALPHA_A(c) (isUPPER_A(c) || isLOWER_A(c))
#define isALPHANUMERIC_A(c) (isALPHA_A(c) || isDIGIT_A(c))
#define isWORDCHAR_A(c) (isALPHANUMERIC_A(c) || (c) == '_')
#define isIDFIRST_A(c) (isALPHA_A(c) || (c) == '_')
#define isXDIGIT_A(c) (isDIGIT_A(c) || ((c) >= 'a' && (c) <= 'f') || ((c) <= 'F' && (c) >= 'A'))
#define isPUNCT_A(c) ((c) == '-' || (c) == '!' || (c) == '"' || (c) == '#' || (c) == '$' || (c) == '%' || (c) == '&' || (c) == '\'' || (c) == '(' || (c) == ')' || (c) == '*' || (c) == '+' || (c) == ',' || (c) == '.' || (c) == '/' || (c) == ':' || (c) == ';' || (c) == '<' || (c) == '=' || (c) == '>' || (c) == '?' || (c) == '@' || (c) == '[' || (c) == '\\' || (c) == ']' || (c) == '^' || (c) == '_' || (c) == '`' || (c) == '{' || (c) == '|' || (c) == '}' || (c) == '~')
#define isGRAPH_A(c) (isALPHANUMERIC_A(c) || isPUNCT_A(c))
#define isPRINT_A(c) (isGRAPH_A(c) || (c) == ' ')
# ifdef EBCDIC
#define isCNTRL_A(c) ((c) == '\0' || (c) == '\a' || (c) == '\b' || (c) == '\f' || (c) == '\n' || (c) == '\r' || (c) == '\t' || (c) == '\v' || ((c) <= 3 && (c) >= 1) || (c) == 7 || ((c) <= 0x13 && (c) >= 0x0E) || (c) == 0x18 || (c) == 0x19 || ((c) <= 0x1F && (c) >= 0x1C) || (c) == 0x26 || (c) == 0x27 || (c) == 0x2D || (c) == 0x2E || (c) == 0x32 || (c) == 0x37 || (c) == 0x3C || (c) == 0x3D || (c) == 0x3F)
#define isASCII(c) (isCNTRL_A(c) || isPRINT_A(c))
# else
#define isCNTRL_A(c) (isASCII(c) && ! isPRINT_A(c))
# endif
# if ! defined(EBCDIC) && ! defined(NATIVE_TO_LATIN1)
#define NATIVE_TO_LATIN1(ch) (ch)
# endif
#define isALPHA_L1(c) (isUPPER_L1(c) || isLOWER_L1(c))
#define isALPHANUMERIC_L1(c) (isALPHA_L1(c) || isDIGIT_A(c))
#define isBLANK_L1(c) (isBLANK_A(c) || (FITS_IN_8_BITS(c) && NATIVE_TO_LATIN1((U8) c) == 0xA0))
#define isCNTRL_L1(c) (FITS_IN_8_BITS(c) && (! isPRINT_L1(c)))
#define isGRAPH_L1(c) (isPRINT_L1(c) && (! isBLANK_L1(c)))
#define isLOWER_L1(c) (isLOWER_A(c) || (FITS_IN_8_BITS(c) && ((NATIVE_TO_LATIN1((U8) c) >= 0xDF && NATIVE_TO_LATIN1((U8) c) != 0xF7) || NATIVE_TO_LATIN1((U8) c) == 0xAA || NATIVE_TO_LATIN1((U8) c) == 0xBA || NATIVE_TO_LATIN1((U8) c) == 0xB5)))
#define isPRINT_L1(c) (isPRINT_A(c) || (FITS_IN_8_BITS(c) && NATIVE_TO_LATIN1((U8) c) >= 0xA0))
#define isPUNCT_L1(c) (isPUNCT_A(c) || (FITS_IN_8_BITS(c) && (NATIVE_TO_LATIN1((U8) c) == 0xA1 || NATIVE_TO_LATIN1((U8) c) == 0xA7 || NATIVE_TO_LATIN1((U8) c) == 0xAB || NATIVE_TO_LATIN1((U8) c) == 0xB6 || NATIVE_TO_LATIN1((U8) c) == 0xB7 || NATIVE_TO_LATIN1((U8) c) == 0xBB || NATIVE_TO_LATIN1((U8) c) == 0xBF)))
#define isSPACE_L1(c) (isSPACE_A(c) || (FITS_IN_8_BITS(c) && (NATIVE_TO_LATIN1((U8) c) == 0x85 || NATIVE_TO_LATIN1((U8) c) == 0xA0)))
#define isUPPER_L1(c) (isUPPER_A(c) || (FITS_IN_8_BITS(c) && (NATIVE_TO_LATIN1((U8) c) >= 0xC0 && NATIVE_TO_LATIN1((U8) c) <= 0xDE && NATIVE_TO_LATIN1((U8) c) != 0xD7)))
#define isWORDCHAR_L1(c) (isIDFIRST_L1(c) || isDIGIT_A(c))
#define isIDFIRST_L1(c) (isALPHA_L1(c) || NATIVE_TO_LATIN1(c) == '_')
#define isCHARNAME_CONT(c) (isWORDCHAR_L1(c) || isBLANK_L1(c) || (c) == '-' || (c) == '(' || (c) == ')')
#define _isQUOTEMETA(c) (FITS_IN_8_BITS(c) && ! isWORDCHAR_L1(c))
#define _IS_IN_SOME_FOLD_ONLY_FOR_USE_BY_REGCOMP_DOT_C(c) isALPHA_L1(c)
#define _IS_NON_FINAL_FOLD_ONLY_FOR_USE_BY_REGCOMP_DOT_C(c) 0
#define _HAS_NONLATIN1_SIMPLE_FOLD_CLOSURE_ONLY_FOR_USE_BY_REGCOMP_DOT_C_AND_REGEXEC_DOT_C(c) 0
#define _HAS_NONLATIN1_FOLD_CLOSURE_ONLY_FOR_USE_BY_REGCOMP_DOT_C_AND_REGEXEC_DOT_C(c) 0
#define _generic_isCC(c,classnum) (FITS_IN_8_BITS(c) && S_bootstrap_ctype((U8) (c), (classnum), TRUE))
#define _generic_isCC_A(c,classnum) (FITS_IN_8_BITS(c) && S_bootstrap_ctype((U8) (c), (classnum), FALSE))
#endif
#define isALPHANUMERIC(c) isALPHANUMERIC_A(c)
#define isALPHA(c) isALPHA_A(c)
#define isASCII_A(c) isASCII(c)
#define isASCII_L1(c) isASCII(c)
#define isBLANK(c) isBLANK_A(c)
#define isCNTRL(c) isCNTRL_A(c)
#define isDIGIT(c) isDIGIT_A(c)
#define isGRAPH(c) isGRAPH_A(c)
#define isIDFIRST(c) isIDFIRST_A(c)
#define isLOWER(c) isLOWER_A(c)
#define isPRINT(c) isPRINT_A(c)
#define isPSXSPC_A(c) isSPACE_A(c)
#define isPSXSPC(c) isPSXSPC_A(c)
#define isPSXSPC_L1(c) isSPACE_L1(c)
#define isPUNCT(c) isPUNCT_A(c)
#define isSPACE(c) isSPACE_A(c)
#define isUPPER(c) isUPPER_A(c)
#define isWORDCHAR(c) isWORDCHAR_A(c)
#define isXDIGIT(c) isXDIGIT_A(c)
#define toLOWER(c) (isUPPER(c) ? (U8)((c) + ('a' - 'A')) : (c))
#define toUPPER(c) (isLOWER(c) ? (U8)((c) - ('a' - 'A')) : (c))
#define toFOLD(c) toLOWER(c)
#define toTITLE(c) toUPPER(c)
#define toLOWER_A(c) toLOWER(c)
#define toUPPER_A(c) toUPPER(c)
#define toFOLD_A(c) toFOLD(c)
#define toTITLE_A(c) toTITLE(c)
#define toLOWER_LATIN1(c) ((! FITS_IN_8_BITS(c)) ? (c) : PL_latin1_lc[ (U8) (c) ])
#define toLOWER_L1(c) toLOWER_LATIN1(c)
#define toUPPER_LATIN1_MOD(c) ((! FITS_IN_8_BITS(c)) ? (c) : PL_mod_latin1_uc[ (U8) (c) ])
#define IN_UTF8_CTYPE_LOCALE PL_in_utf8_CTYPE_locale
#define _generic_LC_base(c,utf8_locale_classnum,non_utf8) (! FITS_IN_8_BITS(c) ? 0 : IN_UTF8_CTYPE_LOCALE ? cBOOL(PL_charclass[(U8) (c)] & _CC_mask(utf8_locale_classnum)) : cBOOL(non_utf8))
#define _generic_LC(c,utf8_locale_classnum,non_utf8_func) _generic_LC_base(c,utf8_locale_classnum, non_utf8_func( (_LC_CAST) (c)))
#define _generic_LC_underscore(c,utf8_locale_classnum,non_utf8_func) _generic_LC_base(c, utf8_locale_classnum, (non_utf8_func( (_LC_CAST) (c)) || (char)(c) == '_'))
#define _generic_toLOWER_LC(c,function,cast) (! FITS_IN_8_BITS(c) ? (c) : (IN_UTF8_CTYPE_LOCALE) ? PL_latin1_lc[ (U8) (c) ] : (cast)function((cast)(c)))
#define _generic_toUPPER_LC(c,function,cast) (! FITS_IN_8_BITS(c) ? (c) : ((! IN_UTF8_CTYPE_LOCALE) ? (cast)function((cast)(c)) : ((((U8)(c)) == MICRO_SIGN) ? GREEK_CAPITAL_LETTER_MU : ((((U8)(c)) == LATIN_SMALL_LETTER_Y_WITH_DIAERESIS) ? LATIN_CAPITAL_LETTER_Y_WITH_DIAERESIS : ((((U8)(c)) == LATIN_SMALL_LETTER_SHARP_S) ? (__ASSERT_(0) (c)) : PL_mod_latin1_uc[ (U8) (c) ])))))
#define _generic_toFOLD_LC(c,function,cast) ((UNLIKELY((c) == MICRO_SIGN) && IN_UTF8_CTYPE_LOCALE) ? GREEK_SMALL_LETTER_MU : (__ASSERT_(! IN_UTF8_CTYPE_LOCALE || (c) != LATIN_SMALL_LETTER_SHARP_S) _generic_toLOWER_LC(c, function, cast)))
#if defined(HAS_ISASCII)
#define isASCII_LC(c) (FITS_IN_8_BITS(c) && isascii( (U8) (c)))
#else
#define isASCII_LC(c) isASCII(c)
#endif
#if defined(HAS_ISBLANK)
#define isBLANK_LC(c) _generic_LC(c, _CC_BLANK, isblank)
#else
#define isBLANK_LC(c) ((IN_UTF8_CTYPE_LOCALE) ? isBLANK_L1(c) : isBLANK(c))
#endif
#define _LC_CAST U8
#ifdef WIN32
#define isCNTRL_LC(c) _generic_LC(c, _CC_CNTRL, iscntrl)
#define isSPACE_LC(c) _generic_LC(c, _CC_SPACE, isspace)
#define isALPHA_LC(c) (_generic_LC(c, _CC_ALPHA, isalpha) && isALPHANUMERIC_LC(c))
#define isALPHANUMERIC_LC(c) (_generic_LC(c, _CC_ALPHANUMERIC, isalnum) && ! isPUNCT_LC(c))
#define isDIGIT_LC(c) (_generic_LC(c, _CC_DIGIT, isdigit) && isALPHANUMERIC_LC(c))
#define isGRAPH_LC(c) (_generic_LC(c, _CC_GRAPH, isgraph) && isPRINT_LC(c))
#define isIDFIRST_LC(c) (((c) == '_') || (_generic_LC(c, _CC_IDFIRST, isalpha) && ! isPUNCT_LC(c)))
#define isLOWER_LC(c) (_generic_LC(c, _CC_LOWER, islower) && isALPHA_LC(c))
#define isPRINT_LC(c) (_generic_LC(c, _CC_PRINT, isprint) && ! isCNTRL_LC(c))
#define isPUNCT_LC(c) (_generic_LC(c, _CC_PUNCT, ispunct) && ! isCNTRL_LC(c))
#define isUPPER_LC(c) (_generic_LC(c, _CC_UPPER, isupper) && isALPHA_LC(c))
#define isWORDCHAR_LC(c) (((c) == '_') || isALPHANUMERIC_LC(c))
#define isXDIGIT_LC(c) (_generic_LC(c, _CC_XDIGIT, isxdigit) && isALPHANUMERIC_LC(c))
#define toLOWER_LC(c) _generic_toLOWER_LC((c), tolower, U8)
#define toUPPER_LC(c) _generic_toUPPER_LC((c), toupper, U8)
#define toFOLD_LC(c) _generic_toFOLD_LC((c), tolower, U8)
#elif defined(CTYPE256) || (!defined(isascii) && !defined(HAS_ISASCII))
#define isALPHA_LC(c) _generic_LC(c, _CC_ALPHA, isalpha)
#define isALPHANUMERIC_LC(c) _generic_LC(c, _CC_ALPHANUMERIC, isalnum)
#define isCNTRL_LC(c) _generic_LC(c, _CC_CNTRL, iscntrl)
#define isDIGIT_LC(c) _generic_LC(c, _CC_DIGIT, isdigit)
#define isGRAPH_LC(c) _generic_LC(c, _CC_GRAPH, isgraph)
#define isIDFIRST_LC(c) _generic_LC_underscore(c, _CC_IDFIRST, isalpha)
#define isLOWER_LC(c) _generic_LC(c, _CC_LOWER, islower)
#define isPRINT_LC(c) _generic_LC(c, _CC_PRINT, isprint)
#define isPUNCT_LC(c) _generic_LC(c, _CC_PUNCT, ispunct)
#define isSPACE_LC(c) _generic_LC(c, _CC_SPACE, isspace)
#define isUPPER_LC(c) _generic_LC(c, _CC_UPPER, isupper)
#define isWORDCHAR_LC(c) _generic_LC_underscore(c, _CC_WORDCHAR, isalnum)
#define isXDIGIT_LC(c) _generic_LC(c, _CC_XDIGIT, isxdigit)
#define toLOWER_LC(c) _generic_toLOWER_LC((c), tolower, U8)
#define toUPPER_LC(c) _generic_toUPPER_LC((c), toupper, U8)
#define toFOLD_LC(c) _generic_toFOLD_LC((c), tolower, U8)
#else
#define isALPHA_LC(c) (isascii(c) && isalpha(c))
#define isALPHANUMERIC_LC(c) (isascii(c) && isalnum(c))
#define isCNTRL_LC(c) (isascii(c) && iscntrl(c))
#define isDIGIT_LC(c) (isascii(c) && isdigit(c))
#define isGRAPH_LC(c) (isascii(c) && isgraph(c))
#define isIDFIRST_LC(c) (isascii(c) && (isalpha(c) || (c) == '_'))
#define isLOWER_LC(c) (isascii(c) && islower(c))
#define isPRINT_LC(c) (isascii(c) && isprint(c))
#define isPUNCT_LC(c) (isascii(c) && ispunct(c))
#define isSPACE_LC(c) (isascii(c) && isspace(c))
#define isUPPER_LC(c) (isascii(c) && isupper(c))
#define isWORDCHAR_LC(c) (isascii(c) && (isalnum(c) || (c) == '_'))
#define isXDIGIT_LC(c) (isascii(c) && isxdigit(c))
#define toLOWER_LC(c) (isascii(c) ? tolower(c) : (c))
#define toUPPER_LC(c) (isascii(c) ? toupper(c) : (c))
#define toFOLD_LC(c) (isascii(c) ? tolower(c) : (c))
#endif
#define isIDCONT(c) isWORDCHAR(c)
#define isIDCONT_A(c) isWORDCHAR_A(c)
#define isIDCONT_L1(c) isWORDCHAR_L1(c)
#define isIDCONT_LC(c) isWORDCHAR_LC(c)
#define isPSXSPC_LC(c) isSPACE_LC(c)
#define _generic_uvchr(classnum,above_latin1,c) ((c) < 256 ? _generic_isCC(c, classnum) : above_latin1(c))
#define _generic_swash_uvchr(classnum,c) ((c) < 256 ? _generic_isCC(c, classnum) : _is_uni_FOO(classnum, c))
#define isALPHA_uvchr(c) _generic_swash_uvchr(_CC_ALPHA, c)
#define isALPHANUMERIC_uvchr(c) _generic_swash_uvchr(_CC_ALPHANUMERIC, c)
#define isASCII_uvchr(c) isASCII(c)
#define isBLANK_uvchr(c) _generic_uvchr(_CC_BLANK, is_HORIZWS_cp_high, c)
#define isCNTRL_uvchr(c) isCNTRL_L1(c)
#define isDIGIT_uvchr(c) _generic_swash_uvchr(_CC_DIGIT, c)
#define isGRAPH_uvchr(c) _generic_swash_uvchr(_CC_GRAPH, c)
#define isIDCONT_uvchr(c) _generic_uvchr(_CC_WORDCHAR, _is_uni_perl_idcont, c)
#define isIDFIRST_uvchr(c) _generic_uvchr(_CC_IDFIRST, _is_uni_perl_idstart, c)
#define isLOWER_uvchr(c) _generic_swash_uvchr(_CC_LOWER, c)
#define isPRINT_uvchr(c) _generic_swash_uvchr(_CC_PRINT, c)
#define isPUNCT_uvchr(c) _generic_swash_uvchr(_CC_PUNCT, c)
#define isSPACE_uvchr(c) _generic_uvchr(_CC_SPACE, is_XPERLSPACE_cp_high, c)
#define isPSXSPC_uvchr(c) isSPACE_uvchr(c)
#define isUPPER_uvchr(c) _generic_swash_uvchr(_CC_UPPER, c)
#define isVERTWS_uvchr(c) _generic_uvchr(_CC_VERTSPACE, is_VERTWS_cp_high, c)
#define isWORDCHAR_uvchr(c) _generic_swash_uvchr(_CC_WORDCHAR, c)
#define isXDIGIT_uvchr(c) _generic_uvchr(_CC_XDIGIT, is_XDIGIT_cp_high, c)
#define toFOLD_uvchr(c,s,l) to_uni_fold(c,s,l)
#define toLOWER_uvchr(c,s,l) to_uni_lower(c,s,l)
#define toTITLE_uvchr(c,s,l) to_uni_title(c,s,l)
#define toUPPER_uvchr(c,s,l) to_uni_upper(c,s,l)
#define isALPHA_uni(c) isALPHA_uvchr(c)
#define isALPHANUMERIC_uni(c) isALPHANUMERIC_uvchr(c)
#define isASCII_uni(c) isASCII_uvchr(c)
#define isBLANK_uni(c) isBLANK_uvchr(c)
#define isCNTRL_uni(c) isCNTRL_uvchr(c)
#define isDIGIT_uni(c) isDIGIT_uvchr(c)
#define isGRAPH_uni(c) isGRAPH_uvchr(c)
#define isIDCONT_uni(c) isIDCONT_uvchr(c)
#define isIDFIRST_uni(c) isIDFIRST_uvchr(c)
#define isLOWER_uni(c) isLOWER_uvchr(c)
#define isPRINT_uni(c) isPRINT_uvchr(c)
#define isPUNCT_uni(c) isPUNCT_uvchr(c)
#define isSPACE_uni(c) isSPACE_uvchr(c)
#define isPSXSPC_uni(c) isPSXSPC_uvchr(c)
#define isUPPER_uni(c) isUPPER_uvchr(c)
#define isVERTWS_uni(c) isVERTWS_uvchr(c)
#define isWORDCHAR_uni(c) isWORDCHAR_uvchr(c)
#define isXDIGIT_uni(c) isXDIGIT_uvchr(c)
#define toFOLD_uni(c,s,l) toFOLD_uvchr(c,s,l)
#define toLOWER_uni(c,s,l) toLOWER_uvchr(c,s,l)
#define toTITLE_uni(c,s,l) toTITLE_uvchr(c,s,l)
#define toUPPER_uni(c,s,l) toUPPER_uvchr(c,s,l)
#define _generic_LC_uvchr(latin1,above_latin1,c) (c < 256 ? latin1(c) : above_latin1(c))
#define _generic_LC_swash_uvchr(latin1,classnum,c) (c < 256 ? latin1(c) : _is_uni_FOO(classnum, c))
#define isALPHA_LC_uvchr(c) _generic_LC_swash_uvchr(isALPHA_LC, _CC_ALPHA, c)
#define isALPHANUMERIC_LC_uvchr(c) _generic_LC_swash_uvchr(isALPHANUMERIC_LC, _CC_ALPHANUMERIC, c)
#define isASCII_LC_uvchr(c) isASCII_LC(c)
#define isBLANK_LC_uvchr(c) _generic_LC_uvchr(isBLANK_LC, is_HORIZWS_cp_high, c)
#define isCNTRL_LC_uvchr(c) (c < 256 ? isCNTRL_LC(c) : 0)
#define isDIGIT_LC_uvchr(c) _generic_LC_swash_uvchr(isDIGIT_LC, _CC_DIGIT, c)
#define isGRAPH_LC_uvchr(c) _generic_LC_swash_uvchr(isGRAPH_LC, _CC_GRAPH, c)
#define isIDCONT_LC_uvchr(c) _generic_LC_uvchr(isIDCONT_LC, _is_uni_perl_idcont, c)
#define isIDFIRST_LC_uvchr(c) _generic_LC_uvchr(isIDFIRST_LC, _is_uni_perl_idstart, c)
#define isLOWER_LC_uvchr(c) _generic_LC_swash_uvchr(isLOWER_LC, _CC_LOWER, c)
#define isPRINT_LC_uvchr(c) _generic_LC_swash_uvchr(isPRINT_LC, _CC_PRINT, c)
#define isPSXSPC_LC_uvchr(c) isSPACE_LC_uvchr(c)
#define isPUNCT_LC_uvchr(c) _generic_LC_swash_uvchr(isPUNCT_LC, _CC_PUNCT, c)
#define isSPACE_LC_uvchr(c) _generic_LC_uvchr(isSPACE_LC, is_XPERLSPACE_cp_high, c)
#define isUPPER_LC_uvchr(c) _generic_LC_swash_uvchr(isUPPER_LC, _CC_UPPER, c)
#define isWORDCHAR_LC_uvchr(c) _generic_LC_swash_uvchr(isWORDCHAR_LC, _CC_WORDCHAR, c)
#define isXDIGIT_LC_uvchr(c) _generic_LC_uvchr(isXDIGIT_LC, is_XDIGIT_cp_high, c)
#define isBLANK_LC_uni(c) isBLANK_LC_uvchr(UNI_TO_NATIVE(c))
#define _base_generic_utf8(enum_name,name,p,use_locale) _is_utf8_FOO(CAT2(_CC_, enum_name), (const U8 *) p, "is" STRINGIFY(name) "_utf8", "is" STRINGIFY(name) "_utf8_safe", 1, use_locale, __FILE__,__LINE__)
#define _generic_utf8(name,p) _base_generic_utf8(name, name, p, 0)
#ifdef PERL_IN_TOKE_C
#define _utf8_safe_assert(p,e) ((e) > (p) || ((e) == (p) && *(p) == '\0'))
#else
#define _utf8_safe_assert(p,e) ((e) > (p))
#endif
#define _generic_utf8_safe(classnum,p,e,above_latin1) (__ASSERT_(_utf8_safe_assert(p, e)) (UTF8_IS_INVARIANT(*(p))) ? _generic_isCC(*(p), classnum) : (UTF8_IS_DOWNGRADEABLE_START(*(p)) ? ((LIKELY((e) - (p) > 1 && UTF8_IS_CONTINUATION(*((p)+1)))) ? _generic_isCC(EIGHT_BIT_UTF8_TO_NATIVE(*(p), *((p)+1 )), classnum) : (_force_out_malformed_utf8_message( (U8 *) (p), (U8 *) (e), 0, 1), 0)) : above_latin1))
#define _generic_func_utf8_safe(classnum,above_latin1,p,e) _generic_utf8_safe(classnum, p, e, above_latin1(p, e))
#define _generic_non_swash_utf8_safe(classnum,above_latin1,p,e) _generic_utf8_safe(classnum, p, e, (UNLIKELY((e) - (p) < UTF8SKIP(p)) ? (_force_out_malformed_utf8_message( (U8 *) (p), (U8 *) (e), 0, 1), 0) : above_latin1(p)))
#define _generic_swash_utf8_safe(classnum,p,e) _generic_utf8_safe(classnum, p, e, _is_utf8_FOO_with_len(classnum, p, e))
#define _generic_utf8_safe_no_upper_latin1(classnum,p,e,above_latin1) (__ASSERT_(_utf8_safe_assert(p, e)) (UTF8_IS_INVARIANT(*(p))) ? _generic_isCC(*(p), classnum) : (UTF8_IS_DOWNGRADEABLE_START(*(p))) ? 0 : above_latin1)
#define isALPHA_utf8(p) _generic_utf8(ALPHA, p)
#define isALPHANUMERIC_utf8(p) _generic_utf8(ALPHANUMERIC, p)
#define isASCII_utf8(p) _generic_utf8(ASCII, p)
#define isBLANK_utf8(p) _generic_utf8(BLANK, p)
#define isCNTRL_utf8(p) _generic_utf8(CNTRL, p)
#define isDIGIT_utf8(p) _generic_utf8(DIGIT, p)
#define isGRAPH_utf8(p) _generic_utf8(GRAPH, p)
#define isIDCONT_utf8(p) _generic_utf8(IDCONT, p)
#define isIDFIRST_utf8(p) _generic_utf8(IDFIRST, p)
#define isLOWER_utf8(p) _generic_utf8(LOWER, p)
#define isPRINT_utf8(p) _generic_utf8(PRINT, p)
#define isPSXSPC_utf8(p) _generic_utf8(PSXSPC, p)
#define isPUNCT_utf8(p) _generic_utf8(PUNCT, p)
#define isSPACE_utf8(p) _generic_utf8(SPACE, p)
#define isUPPER_utf8(p) _generic_utf8(UPPER, p)
#define isVERTWS_utf8(p) _generic_utf8(VERTSPACE, p)
#define isWORDCHAR_utf8(p) _generic_utf8(WORDCHAR, p)
#define isXDIGIT_utf8(p) _generic_utf8(XDIGIT, p)
#define isALPHA_utf8_safe(p,e) _generic_swash_utf8_safe(_CC_ALPHA, p, e)
#define isALPHANUMERIC_utf8_safe(p,e) _generic_swash_utf8_safe(_CC_ALPHANUMERIC, p, e)
#define isASCII_utf8_safe(p,e) (__ASSERT_(_utf8_safe_assert(p, e)) isASCII(*(p)))
#define isBLANK_utf8_safe(p,e) _generic_non_swash_utf8_safe(_CC_BLANK, is_HORIZWS_high, p, e)
#ifdef EBCDIC
#define isCNTRL_utf8_safe(p,e) (__ASSERT_(_utf8_safe_assert(p, e)) isCNTRL_L1(*(p)))
#else
#define isCNTRL_utf8_safe(p,e) _generic_utf8_safe(_CC_CNTRL, p, e, 0)
#endif
#define isDIGIT_utf8_safe(p,e) _generic_utf8_safe_no_upper_latin1(_CC_DIGIT, p, e, _is_utf8_FOO_with_len(_CC_DIGIT, p, e))
#define isGRAPH_utf8_safe(p,e) _generic_swash_utf8_safe(_CC_GRAPH, p, e)
#define isIDCONT_utf8_safe(p,e) _generic_func_utf8_safe(_CC_WORDCHAR, _is_utf8_perl_idcont_with_len, p, e)
#define isIDFIRST_utf8_safe(p,e) _generic_func_utf8_safe(_CC_IDFIRST, _is_utf8_perl_idstart_with_len, (U8 *) (p), (U8 *) (e))
#define isLOWER_utf8_safe(p,e) _generic_swash_utf8_safe(_CC_LOWER, p, e)
#define isPRINT_utf8_safe(p,e) _generic_swash_utf8_safe(_CC_PRINT, p, e)
#define isPSXSPC_utf8_safe(p,e) isSPACE_utf8_safe(p, e)
#define isPUNCT_utf8_safe(p,e) _generic_swash_utf8_safe(_CC_PUNCT, p, e)
#define isSPACE_utf8_safe(p,e) _generic_non_swash_utf8_safe(_CC_SPACE, is_XPERLSPACE_high, p, e)
#define isUPPER_utf8_safe(p,e) _generic_swash_utf8_safe(_CC_UPPER, p, e)
#define isVERTWS_utf8_safe(p,e) _generic_non_swash_utf8_safe(_CC_VERTSPACE, is_VERTWS_high, p, e)
#define isWORDCHAR_utf8_safe(p,e) _generic_swash_utf8_safe(_CC_WORDCHAR, p, e)
#define isXDIGIT_utf8_safe(p,e) _generic_utf8_safe_no_upper_latin1(_CC_XDIGIT, p, e, (UNLIKELY((e) - (p) < UTF8SKIP(p)) ? (_force_out_malformed_utf8_message( (U8 *) (p), (U8 *) (e), 0, 1), 0) : is_XDIGIT_high(p)))
#define toFOLD_utf8(p,s,l) to_utf8_fold(p,s,l)
#define toLOWER_utf8(p,s,l) to_utf8_lower(p,s,l)
#define toTITLE_utf8(p,s,l) to_utf8_title(p,s,l)
#define toUPPER_utf8(p,s,l) to_utf8_upper(p,s,l)
#define _toFOLD_utf8_flags(p,e,s,l,f) _to_utf8_fold_flags (p,e,s,l,f, "", 0)
#define _toLOWER_utf8_flags(p,e,s,l,f) _to_utf8_lower_flags(p,e,s,l,f, "", 0)
#define _toTITLE_utf8_flags(p,e,s,l,f) _to_utf8_title_flags(p,e,s,l,f, "", 0)
#define _toUPPER_utf8_flags(p,e,s,l,f) _to_utf8_upper_flags(p,e,s,l,f, "", 0)
#define toFOLD_utf8_safe(p,e,s,l) _toFOLD_utf8_flags(p,e,s,l, FOLD_FLAGS_FULL)
#define toLOWER_utf8_safe(p,e,s,l) _toLOWER_utf8_flags(p,e,s,l, 0)
#define toTITLE_utf8_safe(p,e,s,l) _toTITLE_utf8_flags(p,e,s,l, 0)
#define toUPPER_utf8_safe(p,e,s,l) _toUPPER_utf8_flags(p,e,s,l, 0)
#define _generic_LC_utf8(name,p) _base_generic_utf8(name, name, p, 1)
#define isALPHA_LC_utf8(p) _generic_LC_utf8(ALPHA, p)
#define isALPHANUMERIC_LC_utf8(p) _generic_LC_utf8(ALPHANUMERIC, p)
#define isASCII_LC_utf8(p) _generic_LC_utf8(ASCII, p)
#define isBLANK_LC_utf8(p) _generic_LC_utf8(BLANK, p)
#define isCNTRL_LC_utf8(p) _generic_LC_utf8(CNTRL, p)
#define isDIGIT_LC_utf8(p) _generic_LC_utf8(DIGIT, p)
#define isGRAPH_LC_utf8(p) _generic_LC_utf8(GRAPH, p)
#define isIDCONT_LC_utf8(p) _generic_LC_utf8(IDCONT, p)
#define isIDFIRST_LC_utf8(p) _generic_LC_utf8(IDFIRST, p)
#define isLOWER_LC_utf8(p) _generic_LC_utf8(LOWER, p)
#define isPRINT_LC_utf8(p) _generic_LC_utf8(PRINT, p)
#define isPSXSPC_LC_utf8(p) _generic_LC_utf8(PSXSPC, p)
#define isPUNCT_LC_utf8(p) _generic_LC_utf8(PUNCT, p)
#define isSPACE_LC_utf8(p) _generic_LC_utf8(SPACE, p)
#define isUPPER_LC_utf8(p) _generic_LC_utf8(UPPER, p)
#define isWORDCHAR_LC_utf8(p) _generic_LC_utf8(WORDCHAR, p)
#define isXDIGIT_LC_utf8(p) _generic_LC_utf8(XDIGIT, p)
#define _generic_LC_utf8_safe(macro,p,e,above_latin1) (__ASSERT_(_utf8_safe_assert(p, e)) (UTF8_IS_INVARIANT(*(p))) ? macro(*(p)) : (UTF8_IS_DOWNGRADEABLE_START(*(p)) ? ((LIKELY((e) - (p) > 1 && UTF8_IS_CONTINUATION(*((p)+1)))) ? macro(EIGHT_BIT_UTF8_TO_NATIVE(*(p), *((p)+1))) : (_force_out_malformed_utf8_message( (U8 *) (p), (U8 *) (e), 0, 1), 0)) : above_latin1))
#define _generic_LC_swash_utf8_safe(macro,classnum,p,e) _generic_LC_utf8_safe(macro, p, e, _is_utf8_FOO_with_len(classnum, p, e))
#define _generic_LC_func_utf8_safe(macro,above_latin1,p,e) _generic_LC_utf8_safe(macro, p, e, above_latin1(p, e))
#define _generic_LC_non_swash_utf8_safe(classnum,above_latin1,p,e) _generic_LC_utf8_safe(classnum, p, e, (UNLIKELY((e) - (p) < UTF8SKIP(p)) ? (_force_out_malformed_utf8_message( (U8 *) (p), (U8 *) (e), 0, 1), 0) : above_latin1(p)))
#define isALPHANUMERIC_LC_utf8_safe(p,e) _generic_LC_swash_utf8_safe(isALPHANUMERIC_LC, _CC_ALPHANUMERIC, p, e)
#define isALPHA_LC_utf8_safe(p,e) _generic_LC_swash_utf8_safe(isALPHA_LC, _CC_ALPHA, p, e)
#define isASCII_LC_utf8_safe(p,e) (__ASSERT_(_utf8_safe_assert(p, e)) isASCII_LC(*(p)))
#define isBLANK_LC_utf8_safe(p,e) _generic_LC_non_swash_utf8_safe(isBLANK_LC, is_HORIZWS_high, p, e)
#define isCNTRL_LC_utf8_safe(p,e) _generic_LC_utf8_safe(isCNTRL_LC, p, e, 0)
#define isDIGIT_LC_utf8_safe(p,e) _generic_LC_swash_utf8_safe(isDIGIT_LC, _CC_DIGIT, p, e)
#define isGRAPH_LC_utf8_safe(p,e) _generic_LC_swash_utf8_safe(isGRAPH_LC, _CC_GRAPH, p, e)
#define isIDCONT_LC_utf8_safe(p,e) _generic_LC_func_utf8_safe(isIDCONT_LC, _is_utf8_perl_idcont_with_len, p, e)
#define isIDFIRST_LC_utf8_safe(p,e) _generic_LC_func_utf8_safe(isIDFIRST_LC, _is_utf8_perl_idstart_with_len, p, e)
#define isLOWER_LC_utf8_safe(p,e) _generic_LC_swash_utf8_safe(isLOWER_LC, _CC_LOWER, p, e)
#define isPRINT_LC_utf8_safe(p,e) _generic_LC_swash_utf8_safe(isPRINT_LC, _CC_PRINT, p, e)
#define isPSXSPC_LC_utf8_safe(p,e) isSPACE_LC_utf8_safe(p, e)
#define isPUNCT_LC_utf8_safe(p,e) _generic_LC_swash_utf8_safe(isPUNCT_LC, _CC_PUNCT, p, e)
#define isSPACE_LC_utf8_safe(p,e) _generic_LC_non_swash_utf8_safe(isSPACE_LC, is_XPERLSPACE_high, p, e)
#define isUPPER_LC_utf8_safe(p,e) _generic_LC_swash_utf8_safe(isUPPER_LC, _CC_UPPER, p, e)
#define isWORDCHAR_LC_utf8_safe(p,e) _generic_LC_swash_utf8_safe(isWORDCHAR_LC, _CC_WORDCHAR, p, e)
#define isXDIGIT_LC_utf8_safe(p,e) _generic_LC_non_swash_utf8_safe(isXDIGIT_LC, is_XDIGIT_high, p, e)
#define isALPHAU(c) isALPHA_L1(c)
#define isDIGIT_L1(c) isDIGIT_A(c)
#define isOCTAL(c) isOCTAL_A(c)
#define isOCTAL_L1(c) isOCTAL_A(c)
#define isXDIGIT_L1(c) isXDIGIT_A(c)
#define isALNUM(c) isWORDCHAR(c)
#define isALNUMU(c) isWORDCHAR_L1(c)
#define isALNUM_LC(c) isWORDCHAR_LC(c)
#define isALNUM_uni(c) isWORDCHAR_uni(c)
#define isALNUM_LC_uvchr(c) isWORDCHAR_LC_uvchr(c)
#define isALNUM_utf8(p) isWORDCHAR_utf8(p)
#define isALNUM_LC_utf8(p) isWORDCHAR_LC_utf8(p)
#define isALNUMC_A(c) isALPHANUMERIC_A(c)
#define isALNUMC_L1(c) isALPHANUMERIC_L1(c)
#define isALNUMC(c) isALPHANUMERIC(c)
#define isALNUMC_LC(c) isALPHANUMERIC_LC(c)
#define isALNUMC_uni(c) isALPHANUMERIC_uni(c)
#define isALNUMC_LC_uvchr(c) isALPHANUMERIC_LC_uvchr(c)
#define isALNUMC_utf8(p) isALPHANUMERIC_utf8(p)
#define isALNUMC_LC_utf8(p) isALPHANUMERIC_LC_utf8(p)
#ifndef EBCDIC
#define toCTRL(c) (__ASSERT_(FITS_IN_8_BITS(c)) toUPPER(((U8)(c))) ^ 64)
#else
#define toCTRL(c) (__ASSERT_(FITS_IN_8_BITS(c)) ((isPRINT_A(c)) ? (UNLIKELY((c) == '?') ? QUESTION_MARK_CTRL : (NATIVE_TO_LATIN1(toUPPER((U8) (c))) ^ 64)) : (UNLIKELY((c) == QUESTION_MARK_CTRL) ? '?' : (LATIN1_TO_NATIVE(((U8) (c)) ^ 64)))))
#endif
#define NOLINE ((line_t) 4294967295UL)
#define is_LAX_VERSION(a,b) (a != Perl_prescan_version(aTHX_ a, FALSE, b, NULL, NULL, NULL, NULL))
#define is_STRICT_VERSION(a,b) (a != Perl_prescan_version(aTHX_ a, TRUE, b, NULL, NULL, NULL, NULL))
#define BADVERSION(a,b,c) if (b) { *b = c; } return a;
#define XDIGIT_VALUE(c) (__ASSERT_(isXDIGIT(c)) (0xf & (isDIGIT(c) ? (c) : ((c) + 9))))
#define READ_XDIGIT(s) (__ASSERT_(isXDIGIT(*s)) (0xf & (isDIGIT(*(s)) ? (*(s)++) : (*(s)++ + 9))))
#define OCTAL_VALUE(c) (__ASSERT_(isOCTAL(c)) (7 & (c)))
#define isALPHA_FOLD_EQ(c1,c2) (__ASSERT_(isALPHA_A(c1) || isALPHA_A(c2)) ((c1) & ~('A' ^ 'a')) == ((c2) & ~('A' ^ 'a')))
#define isALPHA_FOLD_NE(c1,c2) (! isALPHA_FOLD_EQ((c1), (c2)))
#ifndef PERL_CORE
#define NEWSV(x,len) newSV(len)
#endif
#define MEM_SIZE_MAX ((MEM_SIZE)~0)
#ifdef PERL_MALLOC_WRAP
#define _MEM_WRAP_NEEDS_RUNTIME_CHECK(n,t) (8 * sizeof(n) + sizeof(t) > sizeof(MEM_SIZE))
#define _MEM_WRAP_WILL_WRAP(n,t) ((_MEM_WRAP_NEEDS_RUNTIME_CHECK(n,t) ? (MEM_SIZE)(n) : MEM_SIZE_MAX/sizeof(t)) > MEM_SIZE_MAX/sizeof(t))
#define MEM_WRAP_CHECK(n,t) (void)(UNLIKELY(_MEM_WRAP_WILL_WRAP(n,t)) && (croak_memory_wrap(),0))
#define MEM_WRAP_CHECK_1(n,t,a) (void)(UNLIKELY(_MEM_WRAP_WILL_WRAP(n,t)) && (Perl_croak_nocontext("%s",(a)),0))
#define MEM_WRAP_CHECK_(n,t) MEM_WRAP_CHECK(n,t),
#define PERL_STRLEN_ROUNDUP(n) ((void)(((n) > MEM_SIZE_MAX - 2 * PERL_STRLEN_ROUNDUP_QUANTUM) ? (croak_memory_wrap(),0):0),((n-1+PERL_STRLEN_ROUNDUP_QUANTUM)&~((MEM_SIZE)PERL_STRLEN_ROUNDUP_QUANTUM-1)))
#else
#define MEM_WRAP_CHECK(n,t) 
#define MEM_WRAP_CHECK_1(n,t,a) 
#define MEM_WRAP_CHECK_2(n,t,a,b) 
#define MEM_WRAP_CHECK_(n,t) 
#define PERL_STRLEN_ROUNDUP(n) (((n-1+PERL_STRLEN_ROUNDUP_QUANTUM)&~((MEM_SIZE)PERL_STRLEN_ROUNDUP_QUANTUM-1)))
#endif
#ifdef PERL_MEM_LOG
# ifdef PERL_CORE
# ifndef PERL_MEM_LOG_NOIMPL
# endif
# if defined(PERL_IN_SV_C)
# endif
# endif
#endif
#ifdef PERL_MEM_LOG
#define MEM_LOG_ALLOC(n,t,a) Perl_mem_log_alloc(n,sizeof(t),STRINGIFY(t),a,__FILE__,__LINE__,FUNCTION__)
#define MEM_LOG_REALLOC(n,t,v,a) Perl_mem_log_realloc(n,sizeof(t),STRINGIFY(t),v,a,__FILE__,__LINE__,FUNCTION__)
#define MEM_LOG_FREE(a) Perl_mem_log_free(a,__FILE__,__LINE__,FUNCTION__)
#endif
#ifndef MEM_LOG_ALLOC
#define MEM_LOG_ALLOC(n,t,a) (a)
#endif
#ifndef MEM_LOG_REALLOC
#define MEM_LOG_REALLOC(n,t,v,a) (a)
#endif
#ifndef MEM_LOG_FREE
#define MEM_LOG_FREE(a) (a)
#endif
#define Newx(v,n,t) (v = (MEM_WRAP_CHECK_(n,t) (t*)MEM_LOG_ALLOC(n,t,safemalloc((MEM_SIZE)((n)*sizeof(t))))))
#define Newxc(v,n,t,c) (v = (MEM_WRAP_CHECK_(n,t) (c*)MEM_LOG_ALLOC(n,t,safemalloc((MEM_SIZE)((n)*sizeof(t))))))
#define Newxz(v,n,t) (v = (MEM_WRAP_CHECK_(n,t) (t*)MEM_LOG_ALLOC(n,t,safecalloc((n),sizeof(t)))))
#ifndef PERL_CORE
#define New(x,v,n,t) Newx(v,n,t)
#define Newc(x,v,n,t,c) Newxc(v,n,t,c)
#define Newz(x,v,n,t) Newxz(v,n,t)
#endif
#define Renew(v,n,t) (v = (MEM_WRAP_CHECK_(n,t) (t*)MEM_LOG_REALLOC(n,t,v,saferealloc((Malloc_t)(v),(MEM_SIZE)((n)*sizeof(t))))))
#define Renewc(v,n,t,c) (v = (MEM_WRAP_CHECK_(n,t) (c*)MEM_LOG_REALLOC(n,t,v,saferealloc((Malloc_t)(v),(MEM_SIZE)((n)*sizeof(t))))))
#ifdef PERL_POISON
#define Safefree(d) ((d) ? (void)(safefree(MEM_LOG_FREE((Malloc_t)(d))), Poison(&(d), 1, Malloc_t)) : (void) 0)
#else
#define Safefree(d) safefree(MEM_LOG_FREE((Malloc_t)(d)))
#endif
#define Move(s,d,n,t) (MEM_WRAP_CHECK_(n,t) (void)memmove((char*)(d),(const char*)(s), (n) * sizeof(t)))
#define Copy(s,d,n,t) (MEM_WRAP_CHECK_(n,t) (void)memcpy((char*)(d),(const char*)(s), (n) * sizeof(t)))
#define Zero(d,n,t) (MEM_WRAP_CHECK_(n,t) (void)memzero((char*)(d), (n) * sizeof(t)))
#define MoveD(s,d,n,t) (MEM_WRAP_CHECK_(n,t) memmove((char*)(d),(const char*)(s), (n) * sizeof(t)))
#define CopyD(s,d,n,t) (MEM_WRAP_CHECK_(n,t) memcpy((char*)(d),(const char*)(s), (n) * sizeof(t)))
#ifdef HAS_MEMSET
#define ZeroD(d,n,t) (MEM_WRAP_CHECK_(n,t) memzero((char*)(d), (n) * sizeof(t)))
#else
#define ZeroD(d,n,t) (MEM_WRAP_CHECK_(n,t) memzero((char*)(d), (n) * sizeof(t)),d)
#endif
#define PoisonWith(d,n,t,b) (MEM_WRAP_CHECK_(n,t) (void)memset((char*)(d), (U8)(b), (n) * sizeof(t)))
#define PoisonNew(d,n,t) PoisonWith(d,n,t,0xAB)
#define PoisonFree(d,n,t) PoisonWith(d,n,t,0xEF)
#define Poison(d,n,t) PoisonFree(d,n,t)
#ifdef PERL_POISON
#define PERL_POISON_EXPR(x) x
#else
#define PERL_POISON_EXPR(x) 
#endif
#ifdef USE_STRUCT_COPY
#define StructCopy(s,d,t) (*((t*)(d)) = *((t*)(s)))
#else
#define StructCopy(s,d,t) Copy(s,d,1,t)
#endif
#define C_ARRAY_LENGTH(a) (sizeof(a)/sizeof((a)[0]))
#define C_ARRAY_END(a) ((a) + C_ARRAY_LENGTH(a))
#ifdef NEED_VA_COPY
# ifdef va_copy
#define Perl_va_copy(s,d) va_copy(d, s)
# else
# if defined(__va_copy)
#define Perl_va_copy(s,d) __va_copy(d, s)
# else
#define Perl_va_copy(s,d) Copy(s, d, 1, va_list)
# endif
# endif
#endif
#ifdef USE_ITHREADS
#define pTHX_FORMAT "Perl interpreter: 0x%p"
#define pTHX__FORMAT ", Perl interpreter: 0x%p"
#define pTHX_VALUE_ (void *)my_perl,
#define pTHX_VALUE (void *)my_perl
#define pTHX__VALUE_ ,(void *)my_perl,
#define pTHX__VALUE ,(void *)my_perl
#else
#define pTHX_FORMAT 
#define pTHX__FORMAT 
#define pTHX_VALUE_ 
#define pTHX_VALUE 
#define pTHX__VALUE_ 
#define pTHX__VALUE 
#endif
#ifdef PERL_CORE
#define deprecate(s) Perl_ck_warner_d(aTHX_ packWARN(WARN_DEPRECATED), "Use of " s " is deprecated")
#define deprecate_disappears_in(when,message) Perl_ck_warner_d(aTHX_ packWARN(WARN_DEPRECATED), message ", and will disappear in Perl " when)
#define deprecate_fatal_in(when,message) Perl_ck_warner_d(aTHX_ packWARN(WARN_DEPRECATED), message ". Its use will be fatal in Perl " when)
#endif
#ifdef PERL_CORE
# if Uid_t_size > IVSIZE
#define sv_setuid(sv,uid) sv_setnv((sv), (NV)(uid))
#define SvUID(sv) SvNV(sv)
# else
# if Uid_t_sign <= 0
#define sv_setuid(sv,uid) sv_setiv((sv), (IV)(uid))
#define SvUID(sv) SvIV(sv)
# else
#define sv_setuid(sv,uid) sv_setuv((sv), (UV)(uid))
#define SvUID(sv) SvUV(sv)
# endif
# endif
# if Gid_t_size > IVSIZE
#define sv_setgid(sv,gid) sv_setnv((sv), (NV)(gid))
#define SvGID(sv) SvNV(sv)
# else
# if Gid_t_sign <= 0
#define sv_setgid(sv,gid) sv_setiv((sv), (IV)(gid))
#define SvGID(sv) SvIV(sv)
# else
#define sv_setgid(sv,gid) sv_setuv((sv), (UV)(gid))
#define SvGID(sv) SvUV(sv)
# endif
# endif
#endif
#endif
