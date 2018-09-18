// GGHASH:Vco4ScDt3TO34ZWIptW3djagUN8EcsI5.iYItaY2QLWs0000e6e7
#ifndef H_UTF8
#define H_UTF8 1
#ifdef USE_UTF8_SCRIPTS
#define USE_UTF8_IN_NAMES (!IN_BYTES)
#else
#define USE_UTF8_IN_NAMES (PL_hints & HINT_UTF8)
#endif
#include "regcharclass.h"
#include "unicode_constants.h"
#define FOLD_FLAGS_LOCALE 0x1
#define FOLD_FLAGS_FULL 0x2
#define FOLD_FLAGS_NOMIX_ASCII 0x4
#define _CORE_SWASH_INIT_USER_DEFINED_PROPERTY 0x1
#define _CORE_SWASH_INIT_RETURN_IF_UNDEF 0x2
#define _CORE_SWASH_INIT_ACCEPT_INVLIST 0x4
#define is_ascii_string(s,len) is_utf8_invariant_string(s, len)
#define is_invariant_string(s,len) is_utf8_invariant_string(s, len)
#define uvchr_to_utf8(a,b) uvchr_to_utf8_flags(a,b,0)
#define uvchr_to_utf8_flags(d,uv,flags) uvoffuni_to_utf8_flags(d,NATIVE_TO_UNI(uv),flags)
#define utf8_to_uvchr_buf(s,e,lenp) utf8n_to_uvchr(s, (U8*)(e) - (U8*)(s), lenp, ckWARN_d(WARN_UTF8) ? 0 : UTF8_ALLOW_ANY)
#define utf8n_to_uvchr(s,len,lenp,flags) utf8n_to_uvchr_error(s, len, lenp, flags, 0)
#define to_uni_fold(c,p,lenp) _to_uni_fold_flags(c, p, lenp, FOLD_FLAGS_FULL)
#define to_utf8_fold(s,r,lenr) _to_utf8_fold_flags (s, NULL, r, lenr, FOLD_FLAGS_FULL, __FILE__, __LINE__)
#define to_utf8_lower(s,r,lenr) _to_utf8_lower_flags(s, NULL, r ,lenr, 0, __FILE__, __LINE__)
#define to_utf8_upper(s,r,lenr) _to_utf8_upper_flags(s, NULL, r, lenr, 0, __FILE__, __LINE__)
#define to_utf8_title(s,r,lenr) _to_utf8_title_flags(s, NULL, r, lenr ,0, __FILE__, __LINE__)
#define foldEQ_utf8(s1,pe1,l1,u1,s2,pe2,l2,u2) foldEQ_utf8_flags(s1, pe1, l1, u1, s2, pe2, l2, u2, 0)
#define FOLDEQ_UTF8_NOMIX_ASCII (1 << 0)
#define FOLDEQ_LOCALE (1 << 1)
#define FOLDEQ_S1_ALREADY_FOLDED (1 << 2)
#define FOLDEQ_S2_ALREADY_FOLDED (1 << 3)
#define FOLDEQ_S1_FOLDS_SANE (1 << 4)
#define FOLDEQ_S2_FOLDS_SANE (1 << 5)
#define ibcmp_utf8(s1,pe1,l1,u1,s2,pe2,l2,u2) cBOOL(! foldEQ_utf8(s1, pe1, l1, u1, s2, pe2, l2, u2))
#ifdef EBCDIC
#include "utfebcdic.h"
#else
#define UTF8_MAXBYTES 13
#ifdef DOINIT
#else
#endif
#if defined(_MSC_VER) && _MSC_VER < 1400
#define PERL_SMALL_MACRO_BUFFER 
#endif
#ifdef PERL_SMALL_MACRO_BUFFER
#define NATIVE_TO_LATIN1(ch) ((U8)(ch))
#define LATIN1_TO_NATIVE(ch) ((U8)(ch))
#else
#define NATIVE_TO_LATIN1(ch) (__ASSERT_(FITS_IN_8_BITS(ch)) ((U8) (ch)))
#define LATIN1_TO_NATIVE(ch) (__ASSERT_(FITS_IN_8_BITS(ch)) ((U8) (ch)))
#endif
#ifdef PERL_SMALL_MACRO_BUFFER
#define NATIVE_UTF8_TO_I8(ch) ((U8) (ch))
#define I8_TO_NATIVE_UTF8(ch) ((U8) (ch))
#else
#define NATIVE_UTF8_TO_I8(ch) (__ASSERT_(FITS_IN_8_BITS(ch)) ((U8) (ch)))
#define I8_TO_NATIVE_UTF8(ch) (__ASSERT_(FITS_IN_8_BITS(ch)) ((U8) (ch)))
#endif
#define UNI_TO_NATIVE(ch) ((UV) (ch))
#define NATIVE_TO_UNI(ch) ((UV) (ch))
#if defined(UV_IS_QUAD)
#define HIGHEST_REPRESENTABLE_UTF8 "\xFF\x80\x8F\xBF\xBF\xBF\xBF\xBF\xBF\xBF\xBF\xBF\xBF"
#else
#define HIGHEST_REPRESENTABLE_UTF8 "\xFE\x83\xBF\xBF\xBF\xBF\xBF"
#endif
#define OFFUNI_IS_INVARIANT(cp) isASCII(cp)
#define UVCHR_IS_INVARIANT(cp) OFFUNI_IS_INVARIANT(cp)
#define UTF_CONTINUATION_MARK 0x80
#define UTF8_IS_CONTINUED(c) (((U8)((c) | 0)) & UTF_CONTINUATION_MARK)
#define UTF8_IS_START(c) (((U8)((c) | 0)) >= 0xc2)
#define UTF_IS_CONTINUATION_MASK 0xC0
#define UTF8_IS_CONTINUATION(c) ((((U8)((c) | 0)) & UTF_IS_CONTINUATION_MASK) == UTF_CONTINUATION_MARK)
#define UTF8_IS_DOWNGRADEABLE_START(c) ((((U8)((c) | 0)) & 0xfe) == 0xc2)
#define UTF8_IS_ABOVE_LATIN1(c) (((U8)((c) | 0)) >= 0xc4)
#define UTF_ACCUMULATION_SHIFT 6
#define QUESTION_MARK_CTRL DEL_NATIVE
#define isUTF8_POSSIBLY_PROBLEMATIC(c) ((U8) c >= 0xED)
#define is_UTF8_CHAR_utf8_no_length_checks(s) ( ( 0xC2 <= ((const U8*)s)[0] && ((const U8*)s)[0] <= 0xDF ) ? ( LIKELY( ( ((const U8*)s)[1] & 0xC0 ) == 0x80 ) ? 2 : 0 ) : ( 0xE0 == ((const U8*)s)[0] ) ? ( LIKELY( ( ( ((const U8*)s)[1] & 0xE0 ) == 0xA0 ) && ( ( ((const U8*)s)[2] & 0xC0 ) == 0x80 ) ) ? 3 : 0 ): ( 0xE1 <= ((const U8*)s)[0] && ((const U8*)s)[0] <= 0xEF ) ? ( LIKELY( ( ( ((const U8*)s)[1] & 0xC0 ) == 0x80 ) && ( ( ((const U8*)s)[2] & 0xC0 ) == 0x80 ) ) ? 3 : 0 ): ( 0xF0 == ((const U8*)s)[0] ) ? ( LIKELY( ( ( 0x90 <= ((const U8*)s)[1] && ((const U8*)s)[1] <= 0xBF ) && ( ( ((const U8*)s)[2] & 0xC0 ) == 0x80 ) ) && ( ( ((const U8*)s)[3] & 0xC0 ) == 0x80 ) ) ? 4 : 0 ): ( ( ( ( 0xF1 <= ((const U8*)s)[0] && ((const U8*)s)[0] <= 0xF7 ) && LIKELY( ( ((const U8*)s)[1] & 0xC0 ) == 0x80 ) ) && LIKELY( ( ((const U8*)s)[2] & 0xC0 ) == 0x80 ) ) && LIKELY( ( ((const U8*)s)[3] & 0xC0 ) == 0x80 ) ) ? 4 : 0 )
#define _IS_UTF8_CHAR_HIGHEST_START_BYTE 0xF7
#define is_STRICT_UTF8_CHAR_utf8_no_length_checks(s) ( ( 0xC2 <= ((const U8*)s)[0] && ((const U8*)s)[0] <= 0xDF ) ? ( LIKELY( ( ((const U8*)s)[1] & 0xC0 ) == 0x80 ) ? 2 : 0 ) : ( 0xE0 == ((const U8*)s)[0] ) ? ( LIKELY( ( ( ((const U8*)s)[1] & 0xE0 ) == 0xA0 ) && ( ( ((const U8*)s)[2] & 0xC0 ) == 0x80 ) ) ? 3 : 0 ): ( ( 0xE1 <= ((const U8*)s)[0] && ((const U8*)s)[0] <= 0xEC ) || 0xEE == ((const U8*)s)[0] ) ? ( ( ( ( ((const U8*)s)[1] & 0xC0 ) == 0x80 ) && ( ( ((const U8*)s)[2] & 0xC0 ) == 0x80 ) ) ? 3 : 0 ): ( 0xED == ((const U8*)s)[0] ) ? ( LIKELY( ( ( ((const U8*)s)[1] & 0xE0 ) == 0x80 ) && ( ( ((const U8*)s)[2] & 0xC0 ) == 0x80 ) ) ? 3 : 0 ): ( 0xEF == ((const U8*)s)[0] ) ? ( ( ( 0x80 <= ((const U8*)s)[1] && ((const U8*)s)[1] <= 0xB6 ) || ( 0xB8 <= ((const U8*)s)[1] && ((const U8*)s)[1] <= 0xBE ) ) ? ( LIKELY( ( ((const U8*)s)[2] & 0xC0 ) == 0x80 ) ? 3 : 0 ) : ( 0xB7 == ((const U8*)s)[1] ) ? ( LIKELY( ( ((const U8*)s)[2] & 0xF0 ) == 0x80 || ( ((const U8*)s)[2] & 0xF0 ) == 0xB0 ) ? 3 : 0 ) : ( ( 0xBF == ((const U8*)s)[1] ) && ( 0x80 <= ((const U8*)s)[2] && ((const U8*)s)[2] <= 0xBD ) ) ? 3 : 0 ): ( 0xF0 == ((const U8*)s)[0] ) ? ( ( ( 0x90 <= ((const U8*)s)[1] && ((const U8*)s)[1] <= 0x9E ) || ( 0xA0 <= ((const U8*)s)[1] && ((const U8*)s)[1] <= 0xAE ) || ( 0xB0 <= ((const U8*)s)[1] && ((const U8*)s)[1] <= 0xBE ) ) ? ( LIKELY( ( ( ((const U8*)s)[2] & 0xC0 ) == 0x80 ) && ( ( ((const U8*)s)[3] & 0xC0 ) == 0x80 ) ) ? 4 : 0 ) : ( ((const U8*)s)[1] == 0x9F || ( ( ((const U8*)s)[1] & 0xEF ) == 0xAF ) ) ? ( ( 0x80 <= ((const U8*)s)[2] && ((const U8*)s)[2] <= 0xBE ) ? ( LIKELY( ( ((const U8*)s)[3] & 0xC0 ) == 0x80 ) ? 4 : 0 ) : LIKELY( ( 0xBF == ((const U8*)s)[2] ) && ( 0x80 <= ((const U8*)s)[3] && ((const U8*)s)[3] <= 0xBD ) ) ? 4 : 0 ) : 0 ) : ( 0xF1 <= ((const U8*)s)[0] && ((const U8*)s)[0] <= 0xF3 ) ? ( ( ( ( ((const U8*)s)[1] & 0xC8 ) == 0x80 ) || ( ( ((const U8*)s)[1] & 0xCC ) == 0x88 ) || ( ( ((const U8*)s)[1] & 0xCE ) == 0x8C ) || ( ( ((const U8*)s)[1] & 0xCF ) == 0x8E ) ) ? ( LIKELY( ( ( ((const U8*)s)[2] & 0xC0 ) == 0x80 ) && ( ( ((const U8*)s)[3] & 0xC0 ) == 0x80 ) ) ? 4 : 0 ) : ( ( ((const U8*)s)[1] & 0xCF ) == 0x8F ) ? ( ( 0x80 <= ((const U8*)s)[2] && ((const U8*)s)[2] <= 0xBE ) ? ( LIKELY( ( ((const U8*)s)[3] & 0xC0 ) == 0x80 ) ? 4 : 0 ) : LIKELY( ( 0xBF == ((const U8*)s)[2] ) && ( 0x80 <= ((const U8*)s)[3] && ((const U8*)s)[3] <= 0xBD ) ) ? 4 : 0 ) : 0 ) : ( 0xF4 == ((const U8*)s)[0] ) ? ( ( 0x80 <= ((const U8*)s)[1] && ((const U8*)s)[1] <= 0x8E ) ? ( LIKELY( ( ( ((const U8*)s)[2] & 0xC0 ) == 0x80 ) && ( ( ((const U8*)s)[3] & 0xC0 ) == 0x80 ) ) ? 4 : 0 ) : ( 0x8F == ((const U8*)s)[1] ) ? ( ( 0x80 <= ((const U8*)s)[2] && ((const U8*)s)[2] <= 0xBE ) ? ( LIKELY( ( ((const U8*)s)[3] & 0xC0 ) == 0x80 ) ? 4 : 0 ) : LIKELY( ( 0xBF == ((const U8*)s)[2] ) && ( 0x80 <= ((const U8*)s)[3] && ((const U8*)s)[3] <= 0xBD ) ) ? 4 : 0 ) : 0 ) : 0 )
#define is_C9_STRICT_UTF8_CHAR_utf8_no_length_checks(s) ( ( 0xC2 <= ((const U8*)s)[0] && ((const U8*)s)[0] <= 0xDF ) ? ( LIKELY( ( ((const U8*)s)[1] & 0xC0 ) == 0x80 ) ? 2 : 0 ) : ( 0xE0 == ((const U8*)s)[0] ) ? ( LIKELY( ( ( ((const U8*)s)[1] & 0xE0 ) == 0xA0 ) && ( ( ((const U8*)s)[2] & 0xC0 ) == 0x80 ) ) ? 3 : 0 ): ( ( 0xE1 <= ((const U8*)s)[0] && ((const U8*)s)[0] <= 0xEC ) || ( ((const U8*)s)[0] & 0xFE ) == 0xEE ) ? ( LIKELY( ( ( ((const U8*)s)[1] & 0xC0 ) == 0x80 ) && ( ( ((const U8*)s)[2] & 0xC0 ) == 0x80 ) ) ? 3 : 0 ): ( 0xED == ((const U8*)s)[0] ) ? ( LIKELY( ( ( ((const U8*)s)[1] & 0xE0 ) == 0x80 ) && ( ( ((const U8*)s)[2] & 0xC0 ) == 0x80 ) ) ? 3 : 0 ): ( 0xF0 == ((const U8*)s)[0] ) ? ( LIKELY( ( ( 0x90 <= ((const U8*)s)[1] && ((const U8*)s)[1] <= 0xBF ) && ( ( ((const U8*)s)[2] & 0xC0 ) == 0x80 ) ) && ( ( ((const U8*)s)[3] & 0xC0 ) == 0x80 ) ) ? 4 : 0 ): ( 0xF1 <= ((const U8*)s)[0] && ((const U8*)s)[0] <= 0xF3 ) ? ( LIKELY( ( ( ( ((const U8*)s)[1] & 0xC0 ) == 0x80 ) && ( ( ((const U8*)s)[2] & 0xC0 ) == 0x80 ) ) && ( ( ((const U8*)s)[3] & 0xC0 ) == 0x80 ) ) ? 4 : 0 ): LIKELY( ( ( ( 0xF4 == ((const U8*)s)[0] ) && ( ( ((const U8*)s)[1] & 0xF0 ) == 0x80 ) ) && ( ( ((const U8*)s)[2] & 0xC0 ) == 0x80 ) ) && ( ( ((const U8*)s)[3] & 0xC0 ) == 0x80 ) ) ? 4 : 0 )
#endif
#define UTF_CONTINUATION_MASK ((U8) ((1U << UTF_ACCUMULATION_SHIFT) - 1))
#define __COMMON_UNI_SKIP(uv) (UV) (uv) < (32 * (1U << ( UTF_ACCUMULATION_SHIFT))) ? 2 : (UV) (uv) < (16 * (1U << (2 * UTF_ACCUMULATION_SHIFT))) ? 3 : (UV) (uv) < ( 8 * (1U << (3 * UTF_ACCUMULATION_SHIFT))) ? 4 : (UV) (uv) < ( 4 * (1U << (4 * UTF_ACCUMULATION_SHIFT))) ? 5 : (UV) (uv) < ( 2 * (1U << (5 * UTF_ACCUMULATION_SHIFT))) ? 6 :
#if defined(UV_IS_QUAD) || defined(EBCDIC)
#define __BASE_UNI_SKIP(uv) (__COMMON_UNI_SKIP(uv) (UV) (uv) < ((UV) 1U << (6 * UTF_ACCUMULATION_SHIFT)) ? 7 : UTF8_MAXBYTES)
#else
#define __BASE_UNI_SKIP(uv) (__COMMON_UNI_SKIP(uv) 7)
#endif
#define OFFUNISKIP(uv) (OFFUNI_IS_INVARIANT(uv) ? 1 : __BASE_UNI_SKIP(uv))
#define UVCHR_SKIP(uv) ( UVCHR_IS_INVARIANT(uv) ? 1 : __BASE_UNI_SKIP(uv))
#define MAX_UTF8_TWO_BYTE (32 * (1U << UTF_ACCUMULATION_SHIFT) - 1)
#define MAX_PORTABLE_UTF8_TWO_BYTE (32 * (1U << 5) - 1)
#define UTF8_MAXBYTES_CASE (UTF8_MAXBYTES >= (UTF8_MAX_FOLD_CHAR_EXPAND * OFFUNISKIP(0x10FFFF)) ? UTF8_MAXBYTES : (UTF8_MAX_FOLD_CHAR_EXPAND * OFFUNISKIP(0x10FFFF)))
#define NATIVE_TO_ASCII(ch) NATIVE_TO_LATIN1(ch)
#define ASCII_TO_NATIVE(ch) LATIN1_TO_NATIVE(ch)
#define NATIVE_TO_UTF(ch) NATIVE_UTF8_TO_I8(ch)
#define NATIVE_TO_I8(ch) NATIVE_UTF8_TO_I8(ch)
#define UTF_TO_NATIVE(ch) I8_TO_NATIVE_UTF8(ch)
#define I8_TO_NATIVE(ch) I8_TO_NATIVE_UTF8(ch)
#define NATIVE8_TO_UNI(ch) NATIVE_TO_LATIN1(ch)
#define UTF_START_MARK(len) (((len) > 7) ? 0xFF : (0xFF & (0xFE << (7-(len)))))
#define UTF_START_MASK(len) (((len) >= 7) ? 0x00 : (0x1F >> ((len)-2)))
#define UTF8_ACCUMULATE(old,new) (((old) << UTF_ACCUMULATION_SHIFT) | ((NATIVE_UTF8_TO_I8((U8)new)) & UTF_CONTINUATION_MASK))
#define UTF8_IS_NEXT_CHAR_DOWNGRADEABLE(s,e) ( UTF8_IS_DOWNGRADEABLE_START(*(s)) && ( (e) - (s) > 1) && UTF8_IS_CONTINUATION(*((s)+1)))
#define NATIVE_SKIP(uv) UVCHR_SKIP(uv)
#define UNISKIP(uv) UVCHR_SKIP(uv)
#define UTF8_IS_ABOVE_LATIN1_START(c) UTF8_IS_ABOVE_LATIN1(c)
#define EIGHT_BIT_UTF8_TO_NATIVE(HI,LO) ( __ASSERT_(UTF8_IS_DOWNGRADEABLE_START(HI)) __ASSERT_(UTF8_IS_CONTINUATION(LO)) LATIN1_TO_NATIVE(UTF8_ACCUMULATE(( NATIVE_UTF8_TO_I8(HI) & UTF_START_MASK(2)), (LO))))
#define TWO_BYTE_UTF8_TO_NATIVE(HI,LO) ( __ASSERT_(PL_utf8skip[HI] == 2) __ASSERT_(UTF8_IS_CONTINUATION(LO)) UNI_TO_NATIVE(UTF8_ACCUMULATE((NATIVE_UTF8_TO_I8(HI) & UTF_START_MASK(2)), (LO))))
#define TWO_BYTE_UTF8_TO_UNI(HI,LO) NATIVE_TO_UNI(TWO_BYTE_UTF8_TO_NATIVE(HI, LO))
#define UTF8SKIP(s) PL_utf8skip[*(const U8*)(s)]
#define UTF8_SKIP(s) UTF8SKIP(s)
#define UNI_IS_INVARIANT(cp) UVCHR_IS_INVARIANT(cp)
#define UTF8_IS_INVARIANT(c) UVCHR_IS_INVARIANT((c) | 0)
#define NATIVE_BYTE_IS_INVARIANT(c) UVCHR_IS_INVARIANT(c)
#define __BASE_TWO_BYTE_HI(c,translate_function) (__ASSERT_(! UVCHR_IS_INVARIANT(c)) I8_TO_NATIVE_UTF8((translate_function(c) >> UTF_ACCUMULATION_SHIFT) | UTF_START_MARK(2)))
#define __BASE_TWO_BYTE_LO(c,translate_function) (__ASSERT_(! UVCHR_IS_INVARIANT(c)) I8_TO_NATIVE_UTF8((translate_function(c) & UTF_CONTINUATION_MASK) | UTF_CONTINUATION_MARK))
#define UTF8_TWO_BYTE_HI_nocast(c) __BASE_TWO_BYTE_HI(c, NATIVE_TO_UNI)
#define UTF8_TWO_BYTE_LO_nocast(c) __BASE_TWO_BYTE_LO(c, NATIVE_TO_UNI)
#define UTF8_EIGHT_BIT_HI(c) (__ASSERT_(FITS_IN_8_BITS(c)) ( __BASE_TWO_BYTE_HI(c, NATIVE_TO_LATIN1)))
#define UTF8_EIGHT_BIT_LO(c) (__ASSERT_(FITS_IN_8_BITS(c)) (__BASE_TWO_BYTE_LO(c, NATIVE_TO_LATIN1)))
#define UTF8_TWO_BYTE_HI(c) (__ASSERT_((sizeof(c) == 1) || !(((WIDEST_UTYPE)(c)) & ~MAX_UTF8_TWO_BYTE)) (__BASE_TWO_BYTE_HI(c, NATIVE_TO_UNI)))
#define UTF8_TWO_BYTE_LO(c) (__ASSERT_((sizeof(c) == 1) || !(((WIDEST_UTYPE)(c)) & ~MAX_UTF8_TWO_BYTE)) (__BASE_TWO_BYTE_LO(c, NATIVE_TO_UNI)))
#define ILLEGAL_UTF8_BYTE I8_TO_NATIVE_UTF8(0xC1)
#define isIDFIRST_lazy_if(p,UTF) _is_utf8_FOO(_CC_IDFIRST, (const U8 *) p, "isIDFIRST_lazy_if", "isIDFIRST_lazy_if_safe", cBOOL(UTF && ! IN_BYTES), 0, __FILE__,__LINE__)
#define isIDFIRST_lazy_if_safe(p,e,UTF) ((IN_BYTES || !UTF) ? isIDFIRST(*(p)) : isIDFIRST_utf8_safe(p, e))
#define isWORDCHAR_lazy_if(p,UTF) _is_utf8_FOO(_CC_IDFIRST, (const U8 *) p, "isWORDCHAR_lazy_if", "isWORDCHAR_lazy_if_safe", cBOOL(UTF && ! IN_BYTES), 0, __FILE__,__LINE__)
#define isWORDCHAR_lazy_if_safe(p,e,UTF) ((IN_BYTES || !UTF) ? isWORDCHAR(*(p)) : isWORDCHAR_utf8_safe((U8 *) p, (U8 *) e))
#define isALNUM_lazy_if(p,UTF) _is_utf8_FOO(_CC_IDFIRST, (const U8 *) p, "isALNUM_lazy_if", "isWORDCHAR_lazy_if_safe", cBOOL(UTF && ! IN_BYTES), 0, __FILE__,__LINE__)
#define UTF8_MAXLEN UTF8_MAXBYTES
#define UTF8_MAX_FOLD_CHAR_EXPAND 3
#define IN_BYTES UNLIKELY(CopHINTS_get(PL_curcop) & HINT_BYTES)
#define DO_UTF8(sv) (SvUTF8(sv) && !IN_BYTES)
#define IN_UNI_8_BIT (( ( (CopHINTS_get(PL_curcop) & HINT_UNI_8_BIT)) || ( CopHINTS_get(PL_curcop) & HINT_LOCALE_PARTIAL && _is_in_locale_category(FALSE, -1))) && (! IN_BYTES))
#define UTF8_ALLOW_EMPTY 0x0001
#define UTF8_GOT_EMPTY UTF8_ALLOW_EMPTY
#define UTF8_ALLOW_CONTINUATION 0x0002
#define UTF8_GOT_CONTINUATION UTF8_ALLOW_CONTINUATION
#define UTF8_ALLOW_NON_CONTINUATION 0x0004
#define UTF8_GOT_NON_CONTINUATION UTF8_ALLOW_NON_CONTINUATION
#define UTF8_ALLOW_SHORT 0x0008
#define UTF8_GOT_SHORT UTF8_ALLOW_SHORT
#define UTF8_ALLOW_LONG 0x0010
#define UTF8_ALLOW_LONG_AND_ITS_VALUE (UTF8_ALLOW_LONG|0x0020)
#define UTF8_GOT_LONG UTF8_ALLOW_LONG
#define UTF8_ALLOW_OVERFLOW 0x0080
#define UTF8_GOT_OVERFLOW UTF8_ALLOW_OVERFLOW
#define UTF8_DISALLOW_SURROGATE 0x0100
#define UTF8_GOT_SURROGATE UTF8_DISALLOW_SURROGATE
#define UTF8_WARN_SURROGATE 0x0200
#define UTF8_DISALLOW_NONCHAR 0x0400
#define UTF8_GOT_NONCHAR UTF8_DISALLOW_NONCHAR
#define UTF8_WARN_NONCHAR 0x0800
#define UTF8_DISALLOW_SUPER 0x1000
#define UTF8_GOT_SUPER UTF8_DISALLOW_SUPER
#define UTF8_WARN_SUPER 0x2000
#define UTF8_DISALLOW_ABOVE_31_BIT 0x4000
#define UTF8_GOT_ABOVE_31_BIT UTF8_DISALLOW_ABOVE_31_BIT
#define UTF8_WARN_ABOVE_31_BIT 0x8000
#define UTF8_DISALLOW_FE_FF UTF8_DISALLOW_ABOVE_31_BIT
#define UTF8_WARN_FE_FF UTF8_WARN_ABOVE_31_BIT
#define UTF8_CHECK_ONLY 0x10000
#define _UTF8_NO_CONFIDENCE_IN_CURLEN 0x20000
#define UTF8_ALLOW_FFFF 0
#define UTF8_ALLOW_SURROGATE 0
#define UTF8_DISALLOW_ILLEGAL_C9_INTERCHANGE (UTF8_DISALLOW_SUPER|UTF8_DISALLOW_SURROGATE)
#define UTF8_WARN_ILLEGAL_C9_INTERCHANGE (UTF8_WARN_SUPER|UTF8_WARN_SURROGATE)
#define UTF8_DISALLOW_ILLEGAL_INTERCHANGE (UTF8_DISALLOW_ILLEGAL_C9_INTERCHANGE|UTF8_DISALLOW_NONCHAR)
#define UTF8_WARN_ILLEGAL_INTERCHANGE (UTF8_WARN_ILLEGAL_C9_INTERCHANGE|UTF8_WARN_NONCHAR)
#define UTF8_ALLOW_ANY ( UTF8_ALLOW_CONTINUATION |UTF8_ALLOW_NON_CONTINUATION |UTF8_ALLOW_SHORT |UTF8_ALLOW_LONG |UTF8_ALLOW_OVERFLOW)
#define UTF8_ALLOW_ANYUV 0
#define UTF8_ALLOW_DEFAULT UTF8_ALLOW_ANYUV
#define UTF8_IS_SURROGATE(s,e) is_SURROGATE_utf8_safe(s, e)
#define UTF8_IS_REPLACEMENT(s,send) is_REPLACEMENT_utf8_safe(s,send)
#ifdef EBCDIC
#define UTF8_IS_SUPER(s,e) (( LIKELY((e) > (s) + 4) && NATIVE_UTF8_TO_I8(*(s)) >= 0xF9 && ( NATIVE_UTF8_TO_I8(*(s)) > 0xF9 || (NATIVE_UTF8_TO_I8(*((s) + 1)) >= 0xA2)) && LIKELY((s) + UTF8SKIP(s) <= (e))) ? _is_utf8_char_helper(s, s + UTF8SKIP(s), 0) : 0)
#else
#define UTF8_IS_SUPER(s,e) (( LIKELY((e) > (s) + 3) && (*(U8*) (s)) >= 0xF4 && ((*(U8*) (s)) > 0xF4 || (*((U8*) (s) + 1) >= 0x90)) && LIKELY((s) + UTF8SKIP(s) <= (e))) ? _is_utf8_char_helper(s, s + UTF8SKIP(s), 0) : 0)
#endif
#define UTF8_IS_NONCHAR_GIVEN_THAT_NON_SUPER_AND_GE_PROBLEMATIC(s,e) cBOOL(is_NONCHAR_utf8_safe(s,e))
#define UTF8_IS_NONCHAR(s,e) UTF8_IS_NONCHAR_GIVEN_THAT_NON_SUPER_AND_GE_PROBLEMATIC(s, e)
#define UNICODE_SURROGATE_FIRST 0xD800
#define UNICODE_SURROGATE_LAST 0xDFFF
#define UNICODE_REPLACEMENT 0xFFFD
#define UNICODE_BYTE_ORDER_MARK 0xFEFF
#define PERL_UNICODE_MAX 0x10FFFF
#define UNICODE_WARN_SURROGATE 0x0001
#define UNICODE_WARN_NONCHAR 0x0002
#define UNICODE_WARN_SUPER 0x0004
#define UNICODE_WARN_ABOVE_31_BIT 0x0008
#define UNICODE_DISALLOW_SURROGATE 0x0010
#define UNICODE_DISALLOW_NONCHAR 0x0020
#define UNICODE_DISALLOW_SUPER 0x0040
#define UNICODE_DISALLOW_ABOVE_31_BIT 0x0080
#define UNICODE_WARN_ILLEGAL_C9_INTERCHANGE (UNICODE_WARN_SURROGATE|UNICODE_WARN_SUPER)
#define UNICODE_WARN_ILLEGAL_INTERCHANGE (UNICODE_WARN_ILLEGAL_C9_INTERCHANGE|UNICODE_WARN_NONCHAR)
#define UNICODE_DISALLOW_ILLEGAL_C9_INTERCHANGE (UNICODE_DISALLOW_SURROGATE|UNICODE_DISALLOW_SUPER)
#define UNICODE_DISALLOW_ILLEGAL_INTERCHANGE (UNICODE_DISALLOW_ILLEGAL_C9_INTERCHANGE|UNICODE_DISALLOW_NONCHAR)
#define UNICODE_ALLOW_SURROGATE 0
#define UNICODE_ALLOW_SUPER 0
#define UNICODE_ALLOW_ANY 0
#define UNICODE_IS_SURROGATE(uv) (((UV) (uv) & (~0xFFFF | 0xF800)) == 0xD800)
#define UNICODE_IS_REPLACEMENT(uv) ((UV) (uv) == UNICODE_REPLACEMENT)
#define UNICODE_IS_BYTE_ORDER_MARK(uv) ((UV) (uv) == UNICODE_BYTE_ORDER_MARK)
#define UNICODE_IS_32_CONTIGUOUS_NONCHARS(uv) ((UV) (uv) >= 0xFDD0 && (UV) (uv) <= 0xFDEF)
#define UNICODE_IS_END_PLANE_NONCHAR_GIVEN_NOT_SUPER(uv) (((UV) (uv) & 0xFFFE) == 0xFFFE)
#define UNICODE_IS_NONCHAR(uv) ( UNICODE_IS_32_CONTIGUOUS_NONCHARS(uv) || ( LIKELY( ! UNICODE_IS_SUPER(uv)) && UNICODE_IS_END_PLANE_NONCHAR_GIVEN_NOT_SUPER(uv)))
#define UNICODE_IS_SUPER(uv) ((UV) (uv) > PERL_UNICODE_MAX)
#define UNICODE_IS_ABOVE_31_BIT(uv) ((UV) (uv) > 0x7FFFFFFF)
#define LATIN_SMALL_LETTER_SHARP_S LATIN_SMALL_LETTER_SHARP_S_NATIVE
#define LATIN_SMALL_LETTER_Y_WITH_DIAERESIS LATIN_SMALL_LETTER_Y_WITH_DIAERESIS_NATIVE
#define MICRO_SIGN MICRO_SIGN_NATIVE
#define LATIN_CAPITAL_LETTER_A_WITH_RING_ABOVE LATIN_CAPITAL_LETTER_A_WITH_RING_ABOVE_NATIVE
#define LATIN_SMALL_LETTER_A_WITH_RING_ABOVE LATIN_SMALL_LETTER_A_WITH_RING_ABOVE_NATIVE
#define UNICODE_GREEK_CAPITAL_LETTER_SIGMA 0x03A3
#define UNICODE_GREEK_SMALL_LETTER_FINAL_SIGMA 0x03C2
#define UNICODE_GREEK_SMALL_LETTER_SIGMA 0x03C3
#define GREEK_SMALL_LETTER_MU 0x03BC
#define GREEK_CAPITAL_LETTER_MU 0x039C
#define LATIN_CAPITAL_LETTER_Y_WITH_DIAERESIS 0x0178
#ifdef LATIN_CAPITAL_LETTER_SHARP_S_UTF8
#define LATIN_CAPITAL_LETTER_SHARP_S 0x1E9E
#endif
#define LATIN_CAPITAL_LETTER_I_WITH_DOT_ABOVE 0x130
#define LATIN_SMALL_LETTER_DOTLESS_I 0x131
#define LATIN_SMALL_LETTER_LONG_S 0x017F
#define LATIN_SMALL_LIGATURE_LONG_S_T 0xFB05
#define LATIN_SMALL_LIGATURE_ST 0xFB06
#define KELVIN_SIGN 0x212A
#define ANGSTROM_SIGN 0x212B
#define UNI_DISPLAY_ISPRINT 0x0001
#define UNI_DISPLAY_BACKSLASH 0x0002
#define UNI_DISPLAY_QQ (UNI_DISPLAY_ISPRINT|UNI_DISPLAY_BACKSLASH)
#define UNI_DISPLAY_REGEX (UNI_DISPLAY_ISPRINT|UNI_DISPLAY_BACKSLASH)
#define ANYOF_FOLD_SHARP_S(node,input,end) (ANYOF_BITMAP_TEST(node, LATIN_SMALL_LETTER_SHARP_S) && (ANYOF_NONBITMAP(node)) && (ANYOF_FLAGS(node) & ANYOF_LOC_NONBITMAP_FOLD) && ((end) > (input) + 1) && isALPHA_FOLD_EQ((input)[0], 's'))
#define SHARP_S_SKIP 2
#define isUTF8_CHAR(s,e) (UNLIKELY((e) <= (s)) ? 0 : (UTF8_IS_INVARIANT(*s)) ? 1 : UNLIKELY(((e) - (s)) < UTF8SKIP(s)) ? 0 : LIKELY(NATIVE_UTF8_TO_I8(*s) <= _IS_UTF8_CHAR_HIGHEST_START_BYTE) ? is_UTF8_CHAR_utf8_no_length_checks(s) : _is_utf8_char_helper(s, e, 0))
#define is_utf8_char_buf(buf,buf_end) isUTF8_CHAR(buf, buf_end)
#define isSTRICT_UTF8_CHAR(s,e) (UNLIKELY((e) <= (s)) ? 0 : (UTF8_IS_INVARIANT(*s)) ? 1 : UNLIKELY(((e) - (s)) < UTF8SKIP(s)) ? 0 : is_STRICT_UTF8_CHAR_utf8_no_length_checks(s))
#define isC9_STRICT_UTF8_CHAR(s,e) (UNLIKELY((e) <= (s)) ? 0 : (UTF8_IS_INVARIANT(*s)) ? 1 : UNLIKELY(((e) - (s)) < UTF8SKIP(s)) ? 0 : is_C9_STRICT_UTF8_CHAR_utf8_no_length_checks(s))
#define isUTF8_CHAR_flags(s,e,flags) (UNLIKELY((e) <= (s)) ? 0 : (UTF8_IS_INVARIANT(*s)) ? 1 : UNLIKELY(((e) - (s)) < UTF8SKIP(s)) ? 0 : _is_utf8_char_helper(s, e, flags))
#define IS_UTF8_CHAR(p,n) (isUTF8_CHAR(p, (p) + (n)) == n)
#endif
