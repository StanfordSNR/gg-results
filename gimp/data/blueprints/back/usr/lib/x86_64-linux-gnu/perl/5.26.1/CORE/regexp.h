// GGHASH:VY3mEKXWhS2asHACMbYVI_LqfkLgn3uHGYYbnn72dD8U0000864b
#ifndef PLUGGABLE_RE_EXTENSION
#include "utf8.h"
#ifdef PERL_ANY_COW
#define SV_SAVED_COPY SV *saved_copy;
#else
#define SV_SAVED_COPY 
#endif
#if defined(PERL_IN_REGCOMP_C) || defined(PERL_IN_UTF8_C)
#define _invlist_union(a,b,output) _invlist_union_maybe_complement_2nd(a, b, FALSE, output)
#define _invlist_intersection(a,b,output) _invlist_intersection_maybe_complement_2nd(a, b, FALSE, output)
#define _invlist_subtract(a,b,output) _invlist_intersection_maybe_complement_2nd(a, b, TRUE, output)
#endif
#define _REGEXP_COMMON const struct regexp_engine* engine; REGEXP *mother_re; HV *paren_names; U32 extflags; SSize_t minlen; SSize_t minlenret; STRLEN gofs; struct reg_substr_data *substrs; U32 nparens; U32 intflags; void *pprivate; U32 lastparen; U32 lastcloseparen; regexp_paren_pair *offs; char **recurse_locinput; char *subbeg; SV_SAVED_COPY SSize_t sublen; SSize_t suboffset; SSize_t subcoffset; SSize_t maxlen; PERL_BITFIELD32 pre_prefix:4; PERL_BITFIELD32 compflags:9; CV *qr_anoncv
#define RXp_PAREN_NAMES(rx) ((rx)->paren_names)
#ifdef USE_ITHREADS
#endif
#define RX_BUFF_IDX_CARET_PREMATCH -5
#define RX_BUFF_IDX_CARET_POSTMATCH -4
#define RX_BUFF_IDX_CARET_FULLMATCH -3
#define RX_BUFF_IDX_PREMATCH -2
#define RX_BUFF_IDX_POSTMATCH -1
#define RX_BUFF_IDX_FULLMATCH 0
#define RXapif_FETCH 0x0001
#define RXapif_STORE 0x0002
#define RXapif_DELETE 0x0004
#define RXapif_CLEAR 0x0008
#define RXapif_EXISTS 0x0010
#define RXapif_SCALAR 0x0020
#define RXapif_FIRSTKEY 0x0040
#define RXapif_NEXTKEY 0x0080
#define RXapif_ONE 0x0100
#define RXapif_ALL 0x0200
#define RXapif_REGNAME 0x0400
#define RXapif_REGNAMES 0x0800
#define RXapif_REGNAMES_COUNT 0x1000
#define SvRX(sv) (Perl_get_re_arg(aTHX_ sv))
#define SvRXOK(sv) cBOOL(Perl_get_re_arg(aTHX_ sv))
#include "op_reg_common.h"
#define RXf_PMf_STD_PMMOD (RXf_PMf_MULTILINE|RXf_PMf_SINGLELINE|RXf_PMf_FOLD|RXf_PMf_EXTENDED|RXf_PMf_EXTENDED_MORE|RXf_PMf_NOCAPTURE)
#define CASE_STD_PMMOD_FLAGS_PARSE_SET(pmfl,x_count) case IGNORE_PAT_MOD: *(pmfl) |= RXf_PMf_FOLD; break; case MULTILINE_PAT_MOD: *(pmfl) |= RXf_PMf_MULTILINE; break; case SINGLE_PAT_MOD: *(pmfl) |= RXf_PMf_SINGLELINE; break; case XTENDED_PAT_MOD: if (x_count == 0) { *(pmfl) |= RXf_PMf_EXTENDED; *(pmfl) &= ~RXf_PMf_EXTENDED_MORE; } else { *(pmfl) |= RXf_PMf_EXTENDED |RXf_PMf_EXTENDED_MORE; } (x_count)++; break; case NOCAPTURE_PAT_MOD: *(pmfl) |= RXf_PMf_NOCAPTURE; break;
#define STD_PMMOD_FLAGS_CLEAR(pmfl) *(pmfl) &= ~(RXf_PMf_FOLD|RXf_PMf_MULTILINE|RXf_PMf_SINGLELINE|RXf_PMf_EXTENDED|RXf_PMf_EXTENDED_MORE|RXf_PMf_CHARSET|RXf_PMf_NOCAPTURE)
#define DEFAULT_PAT_MOD '^'
#define EXEC_PAT_MOD 'e'
#define KEEPCOPY_PAT_MOD 'p'
#define NOCAPTURE_PAT_MOD 'n'
#define ONCE_PAT_MOD 'o'
#define GLOBAL_PAT_MOD 'g'
#define CONTINUE_PAT_MOD 'c'
#define MULTILINE_PAT_MOD 'm'
#define SINGLE_PAT_MOD 's'
#define IGNORE_PAT_MOD 'i'
#define XTENDED_PAT_MOD 'x'
#define NONDESTRUCT_PAT_MOD 'r'
#define LOCALE_PAT_MOD 'l'
#define UNICODE_PAT_MOD 'u'
#define DEPENDS_PAT_MOD 'd'
#define ASCII_RESTRICT_PAT_MOD 'a'
#define ONCE_PAT_MODS "o"
#define KEEPCOPY_PAT_MODS "p"
#define NOCAPTURE_PAT_MODS "n"
#define EXEC_PAT_MODS "e"
#define LOOP_PAT_MODS "gc"
#define NONDESTRUCT_PAT_MODS "r"
#define LOCALE_PAT_MODS "l"
#define UNICODE_PAT_MODS "u"
#define DEPENDS_PAT_MODS "d"
#define ASCII_RESTRICT_PAT_MODS "a"
#define ASCII_MORE_RESTRICT_PAT_MODS "aa"
#define STD_PAT_MODS "msixxn"
#define CHARSET_PAT_MODS ASCII_RESTRICT_PAT_MODS DEPENDS_PAT_MODS LOCALE_PAT_MODS UNICODE_PAT_MODS
#define INT_PAT_MODS STD_PAT_MODS KEEPCOPY_PAT_MODS
#define EXT_PAT_MODS ONCE_PAT_MODS KEEPCOPY_PAT_MODS NOCAPTURE_PAT_MODS
#define QR_PAT_MODS STD_PAT_MODS EXT_PAT_MODS CHARSET_PAT_MODS
#define M_PAT_MODS QR_PAT_MODS LOOP_PAT_MODS
#define S_PAT_MODS M_PAT_MODS EXEC_PAT_MODS NONDESTRUCT_PAT_MODS
#define RXf_SPLIT RXf_PMf_SPLIT
#define RXf_BASE_SHIFT (_RXf_PMf_SHIFT_NEXT + 2)
#define RXf_NO_INPLACE_SUBST (1U<<(RXf_BASE_SHIFT+2))
#define RXf_EVAL_SEEN (1U<<(RXf_BASE_SHIFT+3))
#define RXf_UNBOUNDED_QUANTIFIER_SEEN (1U<<(RXf_BASE_SHIFT+4))
#define RXf_CHECK_ALL (1U<<(RXf_BASE_SHIFT+5))
#define RXf_MATCH_UTF8 (1U<<(RXf_BASE_SHIFT+6))
#define RXf_USE_INTUIT_NOML (1U<<(RXf_BASE_SHIFT+7))
#define RXf_USE_INTUIT_ML (1U<<(RXf_BASE_SHIFT+8))
#define RXf_INTUIT_TAIL (1U<<(RXf_BASE_SHIFT+9))
#define RXf_USE_INTUIT (RXf_USE_INTUIT_NOML|RXf_USE_INTUIT_ML)
#define RXf_IS_ANCHORED (1U<<(RXf_BASE_SHIFT+10))
#define RXf_COPY_DONE (1U<<(RXf_BASE_SHIFT+11))
#define RXf_TAINTED_SEEN (1U<<(RXf_BASE_SHIFT+12))
#define RXf_TAINTED (1U<<(RXf_BASE_SHIFT+13))
#define RXf_START_ONLY (1U<<(RXf_BASE_SHIFT+14))
#define RXf_SKIPWHITE (1U<<(RXf_BASE_SHIFT+15))
#define RXf_WHITE (1U<<(RXf_BASE_SHIFT+16))
#define RXf_NULL (1U<<(RXf_BASE_SHIFT+17))
#if RXf_BASE_SHIFT+17 > 31
# error Too many RXf_PMf bits used. See comments at beginning of these for what to do
#endif
#ifdef NO_TAINT_SUPPORT
#define RX_ISTAINTED(prog) 0
#define RX_TAINT_on(prog) NOOP
#define RXp_MATCH_TAINTED(prog) 0
#define RX_MATCH_TAINTED(prog) 0
#define RXp_MATCH_TAINTED_on(prog) NOOP
#define RX_MATCH_TAINTED_on(prog) NOOP
#define RX_MATCH_TAINTED_off(prog) NOOP
#else
#define RX_ISTAINTED(prog) (RX_EXTFLAGS(prog) & RXf_TAINTED)
#define RX_TAINT_on(prog) (RX_EXTFLAGS(prog) |= RXf_TAINTED)
#define RXp_MATCH_TAINTED(prog) (RXp_EXTFLAGS(prog) & RXf_TAINTED_SEEN)
#define RX_MATCH_TAINTED(prog) (RX_EXTFLAGS(prog) & RXf_TAINTED_SEEN)
#define RXp_MATCH_TAINTED_on(prog) (RXp_EXTFLAGS(prog) |= RXf_TAINTED_SEEN)
#define RX_MATCH_TAINTED_on(prog) (RX_EXTFLAGS(prog) |= RXf_TAINTED_SEEN)
#define RX_MATCH_TAINTED_off(prog) (RX_EXTFLAGS(prog) &= ~RXf_TAINTED_SEEN)
#endif
#define RX_HAS_CUTGROUP(prog) ((prog)->intflags & PREGf_CUTGROUP_SEEN)
#define RX_MATCH_TAINTED_set(prog,t) ((t) ? RX_MATCH_TAINTED_on(prog) : RX_MATCH_TAINTED_off(prog))
#define RXp_MATCH_COPIED(prog) (RXp_EXTFLAGS(prog) & RXf_COPY_DONE)
#define RX_MATCH_COPIED(prog) (RX_EXTFLAGS(prog) & RXf_COPY_DONE)
#define RXp_MATCH_COPIED_on(prog) (RXp_EXTFLAGS(prog) |= RXf_COPY_DONE)
#define RX_MATCH_COPIED_on(prog) (RX_EXTFLAGS(prog) |= RXf_COPY_DONE)
#define RXp_MATCH_COPIED_off(prog) (RXp_EXTFLAGS(prog) &= ~RXf_COPY_DONE)
#define RX_MATCH_COPIED_off(prog) (RX_EXTFLAGS(prog) &= ~RXf_COPY_DONE)
#define RX_MATCH_COPIED_set(prog,t) ((t) ? RX_MATCH_COPIED_on(prog) : RX_MATCH_COPIED_off(prog))
#define RXp_EXTFLAGS(rx) ((rx)->extflags)
#define RXp_COMPFLAGS(rx) ((rx)->compflags)
#define RX_PRECOMP(prog) (RX_WRAPPED(prog) + ReANY(prog)->pre_prefix)
#define RX_PRECOMP_const(prog) (RX_WRAPPED_const(prog) + ReANY(prog)->pre_prefix)
#define RX_PRELEN(prog) (RX_WRAPLEN(prog) - ReANY(prog)->pre_prefix - 1)
#define RX_WRAPPED(prog) ReANY(prog)->xpv_len_u.xpvlenu_pv
#define RX_WRAPPED_const(prog) ((const char *)RX_WRAPPED(prog))
#define RX_WRAPLEN(prog) SvCUR(prog)
#define RX_CHECK_SUBSTR(prog) (ReANY(prog)->check_substr)
#define RX_REFCNT(prog) SvREFCNT(prog)
#define RX_EXTFLAGS(prog) RXp_EXTFLAGS(ReANY(prog))
#define RX_COMPFLAGS(prog) RXp_COMPFLAGS(ReANY(prog))
#define RX_ENGINE(prog) (ReANY(prog)->engine)
#define RX_SUBBEG(prog) (ReANY(prog)->subbeg)
#define RX_SUBOFFSET(prog) (ReANY(prog)->suboffset)
#define RX_SUBCOFFSET(prog) (ReANY(prog)->subcoffset)
#define RX_OFFS(prog) (ReANY(prog)->offs)
#define RX_NPARENS(prog) (ReANY(prog)->nparens)
#define RX_SUBLEN(prog) (ReANY(prog)->sublen)
#define RX_MINLEN(prog) (ReANY(prog)->minlen)
#define RX_MINLENRET(prog) (ReANY(prog)->minlenret)
#define RX_GOFS(prog) (ReANY(prog)->gofs)
#define RX_LASTPAREN(prog) (ReANY(prog)->lastparen)
#define RX_LASTCLOSEPAREN(prog) (ReANY(prog)->lastcloseparen)
#define RX_SAVED_COPY(prog) (ReANY(prog)->saved_copy)
#define RX_ZERO_LEN(prog) (RX_OFFS(prog)[0].start + (SSize_t)RX_GOFS(prog) == RX_OFFS(prog)[0].end)
#endif
#ifdef PERL_ANY_COW
#define RX_MATCH_COPY_FREE(rx) STMT_START {if (RX_SAVED_COPY(rx)) { SV_CHECK_THINKFIRST_COW_DROP(RX_SAVED_COPY(rx)); } if (RX_MATCH_COPIED(rx)) { Safefree(RX_SUBBEG(rx)); RX_MATCH_COPIED_off(rx); }} STMT_END
#else
#define RX_MATCH_COPY_FREE(rx) STMT_START {if (RX_MATCH_COPIED(rx)) { Safefree(RX_SUBBEG(rx)); RX_MATCH_COPIED_off(rx); }} STMT_END
#endif
#define RXp_MATCH_UTF8(prog) (RXp_EXTFLAGS(prog) & RXf_MATCH_UTF8)
#define RX_MATCH_UTF8(prog) (RX_EXTFLAGS(prog) & RXf_MATCH_UTF8)
#define RX_MATCH_UTF8_on(prog) (RX_EXTFLAGS(prog) |= RXf_MATCH_UTF8)
#define RX_MATCH_UTF8_off(prog) (RX_EXTFLAGS(prog) &= ~RXf_MATCH_UTF8)
#define RX_MATCH_UTF8_set(prog,t) ((t) ? RX_MATCH_UTF8_on(prog) : RX_MATCH_UTF8_off(prog))
#define RX_UTF8(prog) SvUTF8(prog)
#define REXEC_COPY_STR 0x01
#define REXEC_CHECKED 0x02
#define REXEC_SCREAM 0x04
#define REXEC_IGNOREPOS 0x08
#define REXEC_NOT_FIRST 0x10
#define REXEC_COPY_SKIP_PRE 0x20
#define REXEC_COPY_SKIP_POST 0x40
#define REXEC_FAIL_ON_UNDERFLOW 0x80
#if defined(__GNUC__) && !defined(PERL_GCC_BRACE_GROUPS_FORBIDDEN)
#define ReREFCNT_inc(re) ({ REGEXP *const _rerefcnt_inc = (re); assert(SvTYPE(_rerefcnt_inc) == SVt_REGEXP); SvREFCNT_inc(_rerefcnt_inc); _rerefcnt_inc; })
#define ReREFCNT_dec(re) ({ REGEXP *const _rerefcnt_dec = (re); SvREFCNT_dec(_rerefcnt_dec); })
#else
#define ReREFCNT_dec(re) SvREFCNT_dec(re)
#define ReREFCNT_inc(re) ((REGEXP *) SvREFCNT_inc(re))
#endif
#define ReANY(re) S_ReANY((const REGEXP *)(re))
#define FBMcf_TAIL_DOLLAR 1
#define FBMcf_TAIL_DOLLARM 2
#define FBMcf_TAIL_Z 4
#define FBMcf_TAIL_z 8
#define FBMcf_TAIL (FBMcf_TAIL_DOLLAR|FBMcf_TAIL_DOLLARM|FBMcf_TAIL_Z|FBMcf_TAIL_z)
#define FBMrf_MULTILINE 1
#ifdef PERL_ANY_COW
#endif
#ifndef MAX_RECURSE_EVAL_NOCHANGE_DEPTH
#define MAX_RECURSE_EVAL_NOCHANGE_DEPTH 10
#endif
#define PERL_REGMATCH_SLAB_SLOTS ((4096 - 3 * sizeof (void*)) / sizeof(regmatch_state))
