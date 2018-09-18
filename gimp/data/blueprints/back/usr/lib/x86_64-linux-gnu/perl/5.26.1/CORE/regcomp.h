// GGHASH:V3UvDusWYoN0g2u9MfJVKvENwwrEd_Xlk346h7go1II40000bab4
#include "regcharclass.h"
#define PERL_ENABLE_TRIE_OPTIMISATION 1
#define PERL_ENABLE_EXTENDED_TRIE_OPTIMISATION 1
#define PERL_ENABLE_POSITIVE_ASSERTION_STUDY 0
#define PERL_ENABLE_EXPERIMENTAL_REGEX_OPTIMISATIONS 0
#ifdef DEBUGGING
#define RE_TRACK_PATTERN_OFFSETS 
#endif
#define RXi_SET(x,y) (x)->pprivate = (void*)(y)
#define RXi_GET(x) ((regexp_internal *)((x)->pprivate))
#define RXi_GET_DECL(r,ri) regexp_internal *ri = RXi_GET(r)
#define RXp_INTFLAGS(rx) ((rx)->intflags)
#define RX_INTFLAGS(prog) RXp_INTFLAGS(ReANY(prog))
#define PREGf_SKIP 0x00000001
#define PREGf_IMPLICIT 0x00000002
#define PREGf_NAUGHTY 0x00000004
#define PREGf_VERBARG_SEEN 0x00000008
#define PREGf_CUTGROUP_SEEN 0x00000010
#define PREGf_USE_RE_EVAL 0x00000020
#define PREGf_NOSCAN 0x00000040
#define PREGf_GPOS_SEEN 0x00000100
#define PREGf_GPOS_FLOAT 0x00000200
#define PREGf_ANCH_MBOL 0x00000400
#define PREGf_ANCH_SBOL 0x00000800
#define PREGf_ANCH_GPOS 0x00001000
#define PREGf_RECURSE_SEEN 0x00002000
#define PREGf_ANCH ( PREGf_ANCH_SBOL | PREGf_ANCH_GPOS | PREGf_ANCH_MBOL )
#define NUM_ANYOF_CODE_POINTS (1 << 8)
#define ANYOF_BITMAP_SIZE (NUM_ANYOF_CODE_POINTS / 8)
#define set_ANYOF_SYNTHETIC(n) STMT_START{ OP(n) = ANYOF; NEXT_OFF(n) = 1; } STMT_END
#define is_ANYOF_SYNTHETIC(n) (PL_regkind[OP(n)] == ANYOF && NEXT_OFF(n) == 1)
#if SHORTSIZE > 2
# ifndef REG_INFTY
#define REG_INFTY ((1<<15)-1)
# endif
#endif
#ifndef REG_INFTY
#define REG_INFTY I16_MAX
#endif
#define ARG_VALUE(arg) (arg)
#define ARG__SET(arg,val) ((arg) = (val))
#undef ARG
#undef ARG1
#undef ARG2
#define ARG(p) ARG_VALUE(ARG_LOC(p))
#define ARG1(p) ARG_VALUE(ARG1_LOC(p))
#define ARG2(p) ARG_VALUE(ARG2_LOC(p))
#define ARG2L(p) ARG_VALUE(ARG2L_LOC(p))
#define ARG_SET(p,val) ARG__SET(ARG_LOC(p), (val))
#define ARG1_SET(p,val) ARG__SET(ARG1_LOC(p), (val))
#define ARG2_SET(p,val) ARG__SET(ARG2_LOC(p), (val))
#define ARG2L_SET(p,val) ARG__SET(ARG2L_LOC(p), (val))
#undef NEXT_OFF
#undef NODE_ALIGN
#define NEXT_OFF(p) ((p)->next_off)
#define NODE_ALIGN(node) 
#define NODE_ALIGN_FILL(node) ((node)->flags = 0)
#define SIZE_ALIGN NODE_ALIGN
#undef OP
#undef OPERAND
#undef MASK
#undef STRING
#define OP(p) ((p)->type)
#define FLAGS(p) ((p)->flags)
#define OPERAND(p) (((struct regnode_string *)p)->string)
#define MASK(p) ((char*)OPERAND(p))
#define STR_LEN(p) (((struct regnode_string *)p)->str_len)
#define STRING(p) (((struct regnode_string *)p)->string)
#define STR_SZ(l) ((l + sizeof(regnode) - 1) / sizeof(regnode))
#define NODE_SZ_STR(p) (STR_SZ(STR_LEN(p))+1)
#undef NODE_ALIGN
#undef ARG_LOC
#undef NEXTOPER
#undef PREVOPER
#define NODE_ALIGN(node) 
#define ARG_LOC(p) (((struct regnode_1 *)p)->arg1)
#define ARG1_LOC(p) (((struct regnode_2 *)p)->arg1)
#define ARG2_LOC(p) (((struct regnode_2 *)p)->arg2)
#define ARG2L_LOC(p) (((struct regnode_2L *)p)->arg2)
#define NODE_STEP_REGNODE 1
#define EXTRA_STEP_2ARGS EXTRA_SIZE(struct regnode_2)
#define NODE_STEP_B 4
#define NEXTOPER(p) ((p) + NODE_STEP_REGNODE)
#define PREVOPER(p) ((p) - NODE_STEP_REGNODE)
#define FILL_ADVANCE_NODE(ptr,op) STMT_START { (ptr)->type = op; (ptr)->next_off = 0; (ptr)++; } STMT_END
#define FILL_ADVANCE_NODE_ARG(ptr,op,arg) STMT_START { ARG_SET(ptr, arg); FILL_ADVANCE_NODE(ptr, op); (ptr) += 1; } STMT_END
#define FILL_ADVANCE_NODE_2L_ARG(ptr,op,arg1,arg2) STMT_START { ARG_SET(ptr, arg1); ARG2L_SET(ptr, arg2); FILL_ADVANCE_NODE(ptr, op); (ptr) += 2; } STMT_END
#define REG_MAGIC 0234
#define SIZE_ONLY cBOOL(RExC_emit == (regnode *) & RExC_emit_dummy)
#define PASS1 SIZE_ONLY
#define PASS2 (! SIZE_ONLY)
#define ANYOF_ONLY_HAS_BITMAP ((U32) -1)
#define ANYOF_INVERT 0x01
#define SSC_MATCHES_EMPTY_STRING ANYOF_INVERT
#define ANYOF_MATCHES_POSIXL 0x02
#define ANYOFL_FOLD 0x04
#define ANYOFL_SHARED_UTF8_LOCALE_fold_HAS_MATCHES_nonfold_REQD 0x08
#define ANYOFL_SOME_FOLDS_ONLY_IN_UTF8_LOCALE(flags) ((flags & ( ANYOFL_FOLD |ANYOFL_SHARED_UTF8_LOCALE_fold_HAS_MATCHES_nonfold_REQD)) == ( ANYOFL_FOLD |ANYOFL_SHARED_UTF8_LOCALE_fold_HAS_MATCHES_nonfold_REQD))
#define ANYOFL_UTF8_LOCALE_REQD(flags) ((flags & ( ANYOFL_FOLD |ANYOFL_SHARED_UTF8_LOCALE_fold_HAS_MATCHES_nonfold_REQD)) == ANYOFL_SHARED_UTF8_LOCALE_fold_HAS_MATCHES_nonfold_REQD)
#define ANYOF_MATCHES_ALL_ABOVE_BITMAP 0x20
#define ANYOF_SHARED_d_UPPER_LATIN1_UTF8_STRING_MATCHES_non_d_RUNTIME_USER_PROP 0x40
#define ANYOF_SHARED_d_MATCHES_ALL_NON_UTF8_NON_ASCII_non_d_WARN_SUPER 0x80
#define ANYOF_FLAGS_ALL (0xff & ~0x10)
#define ANYOF_LOCALE_FLAGS (ANYOFL_FOLD | ANYOF_MATCHES_POSIXL)
#define ANYOF_COMMON_FLAGS 0
#define ANYOF_ALPHA ((_CC_ALPHA) * 2)
#define ANYOF_NALPHA ((ANYOF_ALPHA) + 1)
#define ANYOF_ALPHANUMERIC ((_CC_ALPHANUMERIC) * 2)
#define ANYOF_NALPHANUMERIC ((ANYOF_ALPHANUMERIC) + 1)
#define ANYOF_ASCII ((_CC_ASCII) * 2)
#define ANYOF_NASCII ((ANYOF_ASCII) + 1)
#define ANYOF_BLANK ((_CC_BLANK) * 2)
#define ANYOF_NBLANK ((ANYOF_BLANK) + 1)
#define ANYOF_CASED ((_CC_CASED) * 2)
#define ANYOF_NCASED ((ANYOF_CASED) + 1)
#define ANYOF_CNTRL ((_CC_CNTRL) * 2)
#define ANYOF_NCNTRL ((ANYOF_CNTRL) + 1)
#define ANYOF_DIGIT ((_CC_DIGIT) * 2)
#define ANYOF_NDIGIT ((ANYOF_DIGIT) + 1)
#define ANYOF_GRAPH ((_CC_GRAPH) * 2)
#define ANYOF_NGRAPH ((ANYOF_GRAPH) + 1)
#define ANYOF_LOWER ((_CC_LOWER) * 2)
#define ANYOF_NLOWER ((ANYOF_LOWER) + 1)
#define ANYOF_PRINT ((_CC_PRINT) * 2)
#define ANYOF_NPRINT ((ANYOF_PRINT) + 1)
#define ANYOF_PUNCT ((_CC_PUNCT) * 2)
#define ANYOF_NPUNCT ((ANYOF_PUNCT) + 1)
#define ANYOF_SPACE ((_CC_SPACE) * 2)
#define ANYOF_NSPACE ((ANYOF_SPACE) + 1)
#define ANYOF_UPPER ((_CC_UPPER) * 2)
#define ANYOF_NUPPER ((ANYOF_UPPER) + 1)
#define ANYOF_WORDCHAR ((_CC_WORDCHAR) * 2)
#define ANYOF_NWORDCHAR ((ANYOF_WORDCHAR) + 1)
#define ANYOF_XDIGIT ((_CC_XDIGIT) * 2)
#define ANYOF_NXDIGIT ((ANYOF_XDIGIT) + 1)
#define ANYOF_VERTWS ((_CC_VERTSPACE) * 2)
#define ANYOF_NVERTWS ((ANYOF_VERTWS)+1)
#if _CC_VERTSPACE != _HIGHEST_REGCOMP_DOT_H_SYNC
# error Problem with handy.h _HIGHEST_REGCOMP_DOT_H_SYNC #define
#endif
#define ANYOF_POSIXL_MAX (ANYOF_VERTWS)
#define ANYOF_MAX ANYOF_POSIXL_MAX
#if (ANYOF_POSIXL_MAX > 32)
# error Problem with handy.h _CC_foo #defines
#endif
#define ANYOF_HORIZWS ((ANYOF_POSIXL_MAX)+2)
#define ANYOF_NHORIZWS ((ANYOF_POSIXL_MAX)+3)
#define ANYOF_UNIPROP ((ANYOF_POSIXL_MAX)+4)
#define ANYOF_ALNUML ANYOF_ALNUM
#define ANYOF_NALNUML ANYOF_NALNUM
#define ANYOF_SPACEL ANYOF_SPACE
#define ANYOF_NSPACEL ANYOF_NSPACE
#define ANYOF_ALNUM ANYOF_WORDCHAR
#define ANYOF_NALNUM ANYOF_NWORDCHAR
#define ANYOF_FLAGS(p) ((p)->flags)
#define ANYOF_BIT(c) (1U << ((c) & 7))
#define ANYOF_POSIXL_SET(p,c) (((regnode_charclass_posixl*) (p))->classflags |= (1U << (c)))
#define ANYOF_CLASS_SET(p,c) ANYOF_POSIXL_SET((p), (c))
#define ANYOF_POSIXL_CLEAR(p,c) (((regnode_charclass_posixl*) (p))->classflags &= ~ (1U <<(c)))
#define ANYOF_CLASS_CLEAR(p,c) ANYOF_POSIXL_CLEAR((p), (c))
#define ANYOF_POSIXL_TEST(p,c) (((regnode_charclass_posixl*) (p))->classflags & (1U << (c)))
#define ANYOF_CLASS_TEST(p,c) ANYOF_POSIXL_TEST((p), (c))
#define ANYOF_POSIXL_ZERO(ret) STMT_START { ((regnode_charclass_posixl*) (ret))->classflags = 0; } STMT_END
#define ANYOF_CLASS_ZERO(ret) ANYOF_POSIXL_ZERO(ret)
#define ANYOF_POSIXL_SETALL(ret) STMT_START { ((regnode_charclass_posixl*) (ret))->classflags = ((1U << ((ANYOF_POSIXL_MAX) - 1))) - 1; } STMT_END
#define ANYOF_CLASS_SETALL(ret) ANYOF_POSIXL_SETALL(ret)
#define ANYOF_POSIXL_TEST_ANY_SET(p) ((ANYOF_FLAGS(p) & ANYOF_MATCHES_POSIXL) && (((regnode_charclass_posixl*)(p))->classflags))
#define ANYOF_CLASS_TEST_ANY_SET(p) ANYOF_POSIXL_TEST_ANY_SET(p)
#define ANYOF_POSIXL_SSC_TEST_ANY_SET(p) cBOOL(((regnode_ssc*)(p))->classflags)
#define ANYOF_POSIXL_SSC_TEST_ALL_SET(p) (((regnode_ssc*) (p))->classflags == ((1U << ((ANYOF_POSIXL_MAX) - 1))) - 1)
#define ANYOF_POSIXL_TEST_ALL_SET(p) ((ANYOF_FLAGS(p) & ANYOF_MATCHES_POSIXL) && ((regnode_charclass_posixl*) (p))->classflags == ((1U << ((ANYOF_POSIXL_MAX) - 1))) - 1)
#define ANYOF_POSIXL_OR(source,dest) STMT_START { (dest)->classflags |= (source)->classflags ; } STMT_END
#define ANYOF_CLASS_OR(source,dest) ANYOF_POSIXL_OR((source), (dest))
#define ANYOF_POSIXL_AND(source,dest) STMT_START { (dest)->classflags &= (source)->classflags ; } STMT_END
#define ANYOF_BITMAP_ZERO(ret) Zero(((regnode_charclass*)(ret))->bitmap, ANYOF_BITMAP_SIZE, char)
#define ANYOF_BITMAP(p) ((regnode_charclass*)(p))->bitmap
#define ANYOF_BITMAP_BYTE(p,c) BITMAP_BYTE(ANYOF_BITMAP(p), c)
#define ANYOF_BITMAP_SET(p,c) (ANYOF_BITMAP_BYTE(p, c) |= ANYOF_BIT(c))
#define ANYOF_BITMAP_CLEAR(p,c) (ANYOF_BITMAP_BYTE(p, c) &= ~ANYOF_BIT(c))
#define ANYOF_BITMAP_TEST(p,c) cBOOL(ANYOF_BITMAP_BYTE(p, c) & ANYOF_BIT(c))
#define ANYOF_BITMAP_SETALL(p) memset (ANYOF_BITMAP(p), 255, ANYOF_BITMAP_SIZE)
#define ANYOF_BITMAP_CLEARALL(p) Zero (ANYOF_BITMAP(p), ANYOF_BITMAP_SIZE)
#define ANYOF_SKIP EXTRA_SIZE(regnode_charclass)
#define ANYOF_POSIXL_SKIP EXTRA_SIZE(regnode_charclass_posixl)
#ifndef CHARMASK
#define UCHARAT(p) ((int)*(const U8*)(p))
#else
#define UCHARAT(p) ((int)*(p)&CHARMASK)
#endif
#define EXTRA_SIZE(guy) ((sizeof(guy)-1)/sizeof(struct regnode))
#define REG_ZERO_LEN_SEEN 0x00000001
#define REG_LOOKBEHIND_SEEN 0x00000002
#define REG_GPOS_SEEN 0x00000004
#define REG_RECURSE_SEEN 0x00000020
#define REG_TOP_LEVEL_BRANCHES_SEEN 0x00000040
#define REG_VERBARG_SEEN 0x00000080
#define REG_CUTGROUP_SEEN 0x00000100
#define REG_RUN_ON_COMMENT_SEEN 0x00000200
#define REG_UNFOLDED_MULTI_SEEN 0x00000400
#define REG_UNBOUNDED_QUANTIFIER_SEEN 0x00001000
#ifdef PLUGGABLE_RE_EXTENSION
#include "re_nodes.h"
#else
#include "regnodes.h"
#endif
#ifndef PLUGGABLE_RE_EXTENSION
#ifndef DOINIT
#else
#if defined(USE_ITHREADS)
#endif
#endif
#endif
#define anchored_substr substrs->data[0].substr
#define anchored_utf8 substrs->data[0].utf8_substr
#define anchored_offset substrs->data[0].min_offset
#define anchored_end_shift substrs->data[0].end_shift
#define float_substr substrs->data[1].substr
#define float_utf8 substrs->data[1].utf8_substr
#define float_min_offset substrs->data[1].min_offset
#define float_max_offset substrs->data[1].max_offset
#define float_end_shift substrs->data[1].end_shift
#define check_substr substrs->data[2].substr
#define check_utf8 substrs->data[2].utf8_substr
#define check_offset_min substrs->data[2].min_offset
#define check_offset_max substrs->data[2].max_offset
#define check_end_shift substrs->data[2].end_shift
#define RX_ANCHORED_SUBSTR(rx) (ReANY(rx)->anchored_substr)
#define RX_ANCHORED_UTF8(rx) (ReANY(rx)->anchored_utf8)
#define RX_FLOAT_SUBSTR(rx) (ReANY(rx)->float_substr)
#define RX_FLOAT_UTF8(rx) (ReANY(rx)->float_utf8)
#ifdef DEBUGGING
#endif
#define TRIE_WORDS_OFFSET 2
#define TRIE_BITMAP(p) (((reg_trie_data *)(p))->bitmap)
#define TRIE_BITMAP_BYTE(p,c) BITMAP_BYTE(TRIE_BITMAP(p), c)
#define TRIE_BITMAP_SET(p,c) (TRIE_BITMAP_BYTE(p, c) |= ANYOF_BIT((U8)c))
#define TRIE_BITMAP_CLEAR(p,c) (TRIE_BITMAP_BYTE(p, c) &= ~ANYOF_BIT((U8)c))
#define TRIE_BITMAP_TEST(p,c) (TRIE_BITMAP_BYTE(p, c) & ANYOF_BIT((U8)c))
#define IS_ANYOF_TRIE(op) ((op)==TRIEC || (op)==AHOCORASICKC)
#define IS_TRIE_AC(op) ((op)>=AHOCORASICK)
#define BITMAP_BYTE(p,c) (( (U8*) p) [ ( ( (UV) (c)) >> 3) ] )
#define BITMAP_TEST(p,c) (BITMAP_BYTE(p, c) & ANYOF_BIT((U8)c))
#define TRIE_NODENUM(state) (((state)-1)/(trie->uniquecharcount)+1)
#define SAFE_TRIE_NODENUM(state) ((state) ? (((state)-1)/(trie->uniquecharcount)+1) : (state))
#define TRIE_NODEIDX(state) ((state) ? (((state)-1)*(trie->uniquecharcount)+1) : (state))
#ifdef DEBUGGING
#define TRIE_CHARCOUNT(trie) ((trie)->charcount)
#else
#define TRIE_CHARCOUNT(trie) (trie_charcount)
#endif
#define RE_TRIE_MAXBUF_INIT 65536
#define RE_TRIE_MAXBUF_NAME "\022E_TRIE_MAXBUF"
#define RE_DEBUG_FLAGS "\022E_DEBUG_FLAGS"
#define RE_DEBUG_COMPILE_MASK 0x0000FF
#define RE_DEBUG_COMPILE_PARSE 0x000001
#define RE_DEBUG_COMPILE_OPTIMISE 0x000002
#define RE_DEBUG_COMPILE_TRIE 0x000004
#define RE_DEBUG_COMPILE_DUMP 0x000008
#define RE_DEBUG_COMPILE_FLAGS 0x000010
#define RE_DEBUG_COMPILE_TEST 0x000020
#define RE_DEBUG_EXECUTE_MASK 0x00FF00
#define RE_DEBUG_EXECUTE_INTUIT 0x000100
#define RE_DEBUG_EXECUTE_MATCH 0x000200
#define RE_DEBUG_EXECUTE_TRIE 0x000400
#define RE_DEBUG_EXTRA_MASK 0xFF0000
#define RE_DEBUG_EXTRA_TRIE 0x010000
#define RE_DEBUG_EXTRA_OFFSETS 0x020000
#define RE_DEBUG_EXTRA_OFFDEBUG 0x040000
#define RE_DEBUG_EXTRA_STATE 0x080000
#define RE_DEBUG_EXTRA_OPTIMISE 0x100000
#define RE_DEBUG_EXTRA_BUFFERS 0x400000
#define RE_DEBUG_EXTRA_GPOS 0x800000
#define RE_DEBUG_EXTRA_STACK 0x280000
#define RE_DEBUG_FLAG(x) (re_debug_flags & x)
#define DEBUG_COMPILE_r(x) DEBUG_r( if (re_debug_flags & RE_DEBUG_COMPILE_MASK) x )
#define DEBUG_PARSE_r(x) DEBUG_r( if (re_debug_flags & RE_DEBUG_COMPILE_PARSE) x )
#define DEBUG_OPTIMISE_r(x) DEBUG_r( if (re_debug_flags & RE_DEBUG_COMPILE_OPTIMISE) x )
#define DEBUG_PARSE_r(x) DEBUG_r( if (re_debug_flags & RE_DEBUG_COMPILE_PARSE) x )
#define DEBUG_DUMP_r(x) DEBUG_r( if (re_debug_flags & RE_DEBUG_COMPILE_DUMP) x )
#define DEBUG_TRIE_COMPILE_r(x) DEBUG_r( if (re_debug_flags & RE_DEBUG_COMPILE_TRIE) x )
#define DEBUG_FLAGS_r(x) DEBUG_r( if (re_debug_flags & RE_DEBUG_COMPILE_FLAGS) x )
#define DEBUG_TEST_r(x) DEBUG_r( if (re_debug_flags & RE_DEBUG_COMPILE_TEST) x )
#define DEBUG_EXECUTE_r(x) DEBUG_r( if (re_debug_flags & RE_DEBUG_EXECUTE_MASK) x )
#define DEBUG_INTUIT_r(x) DEBUG_r( if (re_debug_flags & RE_DEBUG_EXECUTE_INTUIT) x )
#define DEBUG_MATCH_r(x) DEBUG_r( if (re_debug_flags & RE_DEBUG_EXECUTE_MATCH) x )
#define DEBUG_TRIE_EXECUTE_r(x) DEBUG_r( if (re_debug_flags & RE_DEBUG_EXECUTE_TRIE) x )
#define DEBUG_EXTRA_r(x) DEBUG_r( if (re_debug_flags & RE_DEBUG_EXTRA_MASK) x )
#define DEBUG_OFFSETS_r(x) DEBUG_r( if (re_debug_flags & RE_DEBUG_EXTRA_OFFSETS) x )
#define DEBUG_STATE_r(x) DEBUG_r( if (re_debug_flags & RE_DEBUG_EXTRA_STATE) x )
#define DEBUG_STACK_r(x) DEBUG_r( if (re_debug_flags & RE_DEBUG_EXTRA_STACK) x )
#define DEBUG_BUFFERS_r(x) DEBUG_r( if (re_debug_flags & RE_DEBUG_EXTRA_BUFFERS) x )
#define DEBUG_OPTIMISE_MORE_r(x) DEBUG_r( if ((RE_DEBUG_EXTRA_OPTIMISE|RE_DEBUG_COMPILE_OPTIMISE) == (re_debug_flags & (RE_DEBUG_EXTRA_OPTIMISE|RE_DEBUG_COMPILE_OPTIMISE)) ) x )
#define MJD_OFFSET_DEBUG(x) DEBUG_r( if (re_debug_flags & RE_DEBUG_EXTRA_OFFDEBUG) Perl_warn_nocontext x )
#define DEBUG_TRIE_COMPILE_MORE_r(x) DEBUG_TRIE_COMPILE_r( if (re_debug_flags & RE_DEBUG_EXTRA_TRIE) x )
#define DEBUG_TRIE_EXECUTE_MORE_r(x) DEBUG_TRIE_EXECUTE_r( if (re_debug_flags & RE_DEBUG_EXTRA_TRIE) x )
#define DEBUG_TRIE_r(x) DEBUG_r( if (re_debug_flags & (RE_DEBUG_COMPILE_TRIE | RE_DEBUG_EXECUTE_TRIE )) x )
#define DEBUG_GPOS_r(x) DEBUG_r( if (re_debug_flags & RE_DEBUG_EXTRA_GPOS) x )
#define GET_RE_DEBUG_FLAGS DEBUG_r({ SV * re_debug_flags_sv = NULL; re_debug_flags_sv = PL_curcop ? get_sv(RE_DEBUG_FLAGS, GV_ADD) : NULL; if (re_debug_flags_sv) { if (!SvIOK(re_debug_flags_sv)) sv_setuv(re_debug_flags_sv, RE_DEBUG_COMPILE_DUMP | RE_DEBUG_EXECUTE_MASK ); re_debug_flags=SvIV(re_debug_flags_sv); }})
#ifdef DEBUGGING
#define GET_RE_DEBUG_FLAGS_DECL VOL IV re_debug_flags = 0; PERL_UNUSED_VAR(re_debug_flags); GET_RE_DEBUG_FLAGS;
#define RE_PV_COLOR_DECL(rpv,rlen,isuni,dsv,pv,l,m,c1,c2) const char * const rpv = pv_pretty((dsv), (pv), (l), (PL_dump_re_max_len) ? PL_dump_re_max_len : (m), PL_colors[(c1)],PL_colors[(c2)], PERL_PV_ESCAPE_RE|PERL_PV_ESCAPE_NONASCII |((isuni) ? PERL_PV_ESCAPE_UNI : 0) ); const int rlen = SvCUR(dsv)
#define RE_SV_ESCAPE(rpv,isuni,dsv,sv,m) const char * const rpv = pv_pretty((dsv), (SvPV_nolen_const(sv)), (SvCUR(sv)), (PL_dump_re_max_len) ? PL_dump_re_max_len : (m), PL_colors[(c1)],PL_colors[(c2)], PERL_PV_ESCAPE_RE|PERL_PV_ESCAPE_NONASCII |((isuni) ? PERL_PV_ESCAPE_UNI : 0) )
#define RE_PV_QUOTED_DECL(rpv,isuni,dsv,pv,l,m) const char * const rpv = pv_pretty((dsv), (pv), (l), (PL_dump_re_max_len) ? PL_dump_re_max_len : (m), PL_colors[0], PL_colors[1], ( PERL_PV_PRETTY_QUOTE | PERL_PV_ESCAPE_RE | PERL_PV_ESCAPE_NONASCII | PERL_PV_PRETTY_ELLIPSES | ((isuni) ? PERL_PV_ESCAPE_UNI : 0)) )
#define RE_SV_DUMPLEN(ItEm) (SvCUR(ItEm) - (SvTAIL(ItEm)!=0))
#define RE_SV_TAIL(ItEm) (SvTAIL(ItEm) ? "$" : "")
#else
#define GET_RE_DEBUG_FLAGS_DECL 
#define RE_PV_COLOR_DECL(rpv,rlen,isuni,dsv,pv,l,m,c1,c2) 
#define RE_SV_ESCAPE(rpv,isuni,dsv,sv,m) 
#define RE_PV_QUOTED_DECL(rpv,isuni,dsv,pv,l,m) 
#define RE_SV_DUMPLEN(ItEm) 
#define RE_SV_TAIL(ItEm) 
#endif
