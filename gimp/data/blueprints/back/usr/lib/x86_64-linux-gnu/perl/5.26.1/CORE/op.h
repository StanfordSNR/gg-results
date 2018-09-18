// GGHASH:VqNYHwi90h0hQJQF506Pdy7w11x2d11CHCj75J8TQhPo00008e43
#include "op_reg_common.h"
#define OPCODE U16
#ifdef PERL_OP_PARENT
#define _OP_SIBPARENT_FIELDNAME op_sibparent
#else
#define _OP_SIBPARENT_FIELDNAME op_sibling
#endif
#ifdef BASEOP_DEFINITION
#define BASEOP BASEOP_DEFINITION
#else
#define BASEOP OP* op_next; OP* _OP_SIBPARENT_FIELDNAME; OP* (*op_ppaddr)(pTHX); PADOFFSET op_targ; PERL_BITFIELD16 op_type:9; PERL_BITFIELD16 op_opt:1; PERL_BITFIELD16 op_slabbed:1; PERL_BITFIELD16 op_savefree:1; PERL_BITFIELD16 op_static:1; PERL_BITFIELD16 op_folded:1; PERL_BITFIELD16 op_moresib:1; PERL_BITFIELD16 op_spare:1; U8 op_flags; U8 op_private;
#endif
#define OP_GIMME(op,dfl) (((op)->op_flags & OPf_WANT) ? ((op)->op_flags & OPf_WANT) : dfl)
#define OP_GIMME_REVERSE(flags) ((flags) & G_WANT)
#define GIMME_V OP_GIMME(PL_op, block_gimme())
#define OPf_WANT 3
#define OPf_WANT_VOID 1
#define OPf_WANT_SCALAR 2
#define OPf_WANT_LIST 3
#define OPf_KIDS 4
#define OPf_PARENS 8
#define OPf_REF 16
#define OPf_MOD 32
#define OPf_STACKED 64
#define OPf_SPECIAL 128
#define OPf_FOLDED (1<<16)
#define OPf_LIST OPf_WANT_LIST
#define OPf_KNOW OPf_WANT
#if !defined(PERL_CORE) && !defined(PERL_EXT)
#define GIMME (PL_op->op_flags & OPf_WANT ? ((PL_op->op_flags & OPf_WANT) == OPf_WANT_LIST ? G_ARRAY : G_SCALAR) : dowantarray())
#endif
#define OPpTRANS_ALL (OPpTRANS_FROM_UTF|OPpTRANS_TO_UTF|OPpTRANS_IDENTICAL|OPpTRANS_SQUASH|OPpTRANS_COMPLEMENT|OPpTRANS_GROWS|OPpTRANS_DELETE)
#define OPpENTERSUB_LVAL_MASK (OPpLVAL_INTRO|OPpENTERSUB_INARGS)
#ifdef USE_ITHREADS
#define UNOP_AUX_item_sv(item) PAD_SVl((item)->pad_offset);
#else
#define UNOP_AUX_item_sv(item) ((item)->sv);
#endif
#ifdef USE_ITHREADS
#else
#endif
#ifdef USE_ITHREADS
#else
#endif
#ifdef USE_ITHREADS
#else
#endif
#ifdef USE_ITHREADS
#define PM_GETRE(o) (SvTYPE(PL_regex_pad[(o)->op_pmoffset]) == SVt_REGEXP ? (REGEXP*)(PL_regex_pad[(o)->op_pmoffset]) : NULL)
#define PM_SETRE(o,r) STMT_START { REGEXP *const _pm_setre = (r); assert(_pm_setre); PL_regex_pad[(o)->op_pmoffset] = MUTABLE_SV(_pm_setre); } STMT_END
#else
#define PM_GETRE(o) ((o)->op_pmregexp)
#define PM_SETRE(o,r) ((o)->op_pmregexp = (r))
#endif
#define PMf_BASE_SHIFT (_RXf_PMf_SHIFT_NEXT+2)
#define PMf_HAS_ERROR (1U<<(PMf_BASE_SHIFT+4))
#define PMf_RETAINT (1U<<(PMf_BASE_SHIFT+5))
#define PMf_ONCE (1U<<(PMf_BASE_SHIFT+6))
#define PMf_USED (1U<<(PMf_BASE_SHIFT+7))
#define PMf_CONST (1U<<(PMf_BASE_SHIFT+8))
#define PMf_KEEP (1U<<(PMf_BASE_SHIFT+9))
#define PMf_GLOBAL (1U<<(PMf_BASE_SHIFT+10))
#define PMf_CONTINUE (1U<<(PMf_BASE_SHIFT+11))
#define PMf_EVAL (1U<<(PMf_BASE_SHIFT+12))
#define PMf_NONDESTRUCT (1U<<(PMf_BASE_SHIFT+13))
#define PMf_HAS_CV (1U<<(PMf_BASE_SHIFT+14))
#define PMf_CODELIST_PRIVATE (1U<<(PMf_BASE_SHIFT+15))
#define PMf_IS_QR (1U<<(PMf_BASE_SHIFT+16))
#define PMf_USE_RE_EVAL (1U<<(PMf_BASE_SHIFT+17))
#if PMf_BASE_SHIFT+17 > 31
# error Too many PMf_ bits used. See above and regnodes.h for any spare in middle
#endif
#ifdef USE_ITHREADS
#define PmopSTASH(o) ((o)->op_pmflags & PMf_ONCE ? PL_stashpad[(o)->op_pmstashstartu.op_pmstashoff] : NULL)
#define PmopSTASH_set(o,hv) (assert_((o)->op_pmflags & PMf_ONCE) (o)->op_pmstashstartu.op_pmstashoff = (hv) ? alloccopstash(hv) : 0)
#else
#define PmopSTASH(o) (((o)->op_pmflags & PMf_ONCE) ? (o)->op_pmstashstartu.op_pmstash : NULL)
# if defined (DEBUGGING) && defined(__GNUC__) && !defined(PERL_GCC_BRACE_GROUPS_FORBIDDEN)
#define PmopSTASH_set(o,hv) ({ assert((o)->op_pmflags & PMf_ONCE); ((o)->op_pmstashstartu.op_pmstash = (hv)); })
# else
#define PmopSTASH_set(o,hv) ((o)->op_pmstashstartu.op_pmstash = (hv))
# endif
#endif
#define PmopSTASHPV(o) (PmopSTASH(o) ? HvNAME_get(PmopSTASH(o)) : NULL)
#define PmopSTASHPV_set(o,pv) PmopSTASH_set((o), gv_stashpv(pv,GV_ADD))
#define cUNOPx(o) ((UNOP*)(o))
#define cUNOP_AUXx(o) ((UNOP_AUX*)(o))
#define cBINOPx(o) ((BINOP*)(o))
#define cLISTOPx(o) ((LISTOP*)(o))
#define cLOGOPx(o) ((LOGOP*)(o))
#define cPMOPx(o) ((PMOP*)(o))
#define cSVOPx(o) ((SVOP*)(o))
#define cPADOPx(o) ((PADOP*)(o))
#define cPVOPx(o) ((PVOP*)(o))
#define cCOPx(o) ((COP*)(o))
#define cLOOPx(o) ((LOOP*)(o))
#define cMETHOPx(o) ((METHOP*)(o))
#define cUNOP cUNOPx(PL_op)
#define cUNOP_AUX cUNOP_AUXx(PL_op)
#define cBINOP cBINOPx(PL_op)
#define cLISTOP cLISTOPx(PL_op)
#define cLOGOP cLOGOPx(PL_op)
#define cPMOP cPMOPx(PL_op)
#define cSVOP cSVOPx(PL_op)
#define cPADOP cPADOPx(PL_op)
#define cPVOP cPVOPx(PL_op)
#define cCOP cCOPx(PL_op)
#define cLOOP cLOOPx(PL_op)
#define cUNOPo cUNOPx(o)
#define cUNOP_AUXo cUNOP_AUXx(o)
#define cBINOPo cBINOPx(o)
#define cLISTOPo cLISTOPx(o)
#define cLOGOPo cLOGOPx(o)
#define cPMOPo cPMOPx(o)
#define cSVOPo cSVOPx(o)
#define cPADOPo cPADOPx(o)
#define cPVOPo cPVOPx(o)
#define cCOPo cCOPx(o)
#define cLOOPo cLOOPx(o)
#define kUNOP cUNOPx(kid)
#define kUNOP_AUX cUNOP_AUXx(kid)
#define kBINOP cBINOPx(kid)
#define kLISTOP cLISTOPx(kid)
#define kLOGOP cLOGOPx(kid)
#define kPMOP cPMOPx(kid)
#define kSVOP cSVOPx(kid)
#define kPADOP cPADOPx(kid)
#define kPVOP cPVOPx(kid)
#define kCOP cCOPx(kid)
#define kLOOP cLOOPx(kid)
#ifdef USE_ITHREADS
#define cGVOPx_gv(o) ((GV*)PAD_SVl(cPADOPx(o)->op_padix))
# ifndef PERL_CORE
#define IS_PADGV(v) (v && isGV(v))
#define IS_PADCONST(v) (v && (SvREADONLY(v) || (SvIsCOW(v) && !SvLEN(v))))
# endif
#define cSVOPx_sv(v) (cSVOPx(v)->op_sv ? cSVOPx(v)->op_sv : PAD_SVl((v)->op_targ))
#define cSVOPx_svp(v) (cSVOPx(v)->op_sv ? &cSVOPx(v)->op_sv : &PAD_SVl((v)->op_targ))
#define cMETHOPx_rclass(v) PAD_SVl(cMETHOPx(v)->op_rclass_targ)
#else
#define cGVOPx_gv(o) ((GV*)cSVOPx(o)->op_sv)
# ifndef PERL_CORE
#define IS_PADGV(v) FALSE
#define IS_PADCONST(v) FALSE
# endif
#define cSVOPx_sv(v) (cSVOPx(v)->op_sv)
#define cSVOPx_svp(v) (&cSVOPx(v)->op_sv)
#define cMETHOPx_rclass(v) (cMETHOPx(v)->op_rclass_sv)
#endif
#define cMETHOPx_meth(v) cSVOPx_sv(v)
#define cGVOP_gv cGVOPx_gv(PL_op)
#define cGVOPo_gv cGVOPx_gv(o)
#define kGVOP_gv cGVOPx_gv(kid)
#define cSVOP_sv cSVOPx_sv(PL_op)
#define cSVOPo_sv cSVOPx_sv(o)
#define kSVOP_sv cSVOPx_sv(kid)
#ifndef PERL_CORE
#define Nullop ((OP*)NULL)
#endif
#define OA_MARK 1
#define OA_FOLDCONST 2
#define OA_RETSCALAR 4
#define OA_TARGET 8
#define OA_TARGLEX 16
#define OA_OTHERINT 32
#define OA_DANGEROUS 64
#define OA_DEFGV 128
#define OCSHIFT 8
#define OA_CLASS_MASK (15 << OCSHIFT)
#define OA_BASEOP (0 << OCSHIFT)
#define OA_UNOP (1 << OCSHIFT)
#define OA_BINOP (2 << OCSHIFT)
#define OA_LOGOP (3 << OCSHIFT)
#define OA_LISTOP (4 << OCSHIFT)
#define OA_PMOP (5 << OCSHIFT)
#define OA_SVOP (6 << OCSHIFT)
#define OA_PADOP (7 << OCSHIFT)
#define OA_PVOP_OR_SVOP (8 << OCSHIFT)
#define OA_LOOP (9 << OCSHIFT)
#define OA_COP (10 << OCSHIFT)
#define OA_BASEOP_OR_UNOP (11 << OCSHIFT)
#define OA_FILESTATOP (12 << OCSHIFT)
#define OA_LOOPEXOP (13 << OCSHIFT)
#define OA_METHOP (14 << OCSHIFT)
#define OA_UNOP_AUX (15 << OCSHIFT)
#define OASHIFT 12
#define OA_SCALAR 1
#define OA_LIST 2
#define OA_AVREF 3
#define OA_HVREF 4
#define OA_CVREF 5
#define OA_FILEREF 6
#define OA_SCALARREF 7
#define OA_OPTIONAL 8
#ifdef USE_ITHREADS
#define OP_REFCNT_INIT MUTEX_INIT(&PL_op_mutex)
# ifdef PERL_CORE
#define OP_REFCNT_LOCK MUTEX_LOCK(&PL_op_mutex)
#define OP_REFCNT_UNLOCK MUTEX_UNLOCK(&PL_op_mutex)
# else
#define OP_REFCNT_LOCK op_refcnt_lock()
#define OP_REFCNT_UNLOCK op_refcnt_unlock()
# endif
#define OP_REFCNT_TERM MUTEX_DESTROY(&PL_op_mutex)
#else
#define OP_REFCNT_INIT NOOP
#define OP_REFCNT_LOCK NOOP
#define OP_REFCNT_UNLOCK NOOP
#define OP_REFCNT_TERM NOOP
#endif
#define OpREFCNT_set(o,n) ((o)->op_targ = (n))
#ifdef PERL_DEBUG_READONLY_OPS
#define OpREFCNT_inc(o) Perl_op_refcnt_inc(aTHX_ o)
#define OpREFCNT_dec(o) Perl_op_refcnt_dec(aTHX_ o)
#else
#define OpREFCNT_inc(o) ((o) ? (++(o)->op_targ, (o)) : NULL)
#define OpREFCNT_dec(o) (--(o)->op_targ)
#endif
#define PERL_LOADMOD_DENY 0x1
#define PERL_LOADMOD_NOIMPORT 0x2
#define PERL_LOADMOD_IMPORT_OPS 0x4
#if defined(PERL_IN_PERLY_C) || defined(PERL_IN_OP_C) || defined(PERL_IN_TOKE_C)
#define ref(o,type) doref(o, type, TRUE)
#endif
#define LINKLIST(o) ((o)->op_next ? (o)->op_next : op_linklist((OP*)o))
#ifndef PERL_CORE
#define cv_ckproto(cv,gv,p) cv_ckproto_len_flags((cv), (gv), (p), (p) ? strlen(p) : 0, 0)
#endif
#ifdef PERL_CORE
#define my(o) my_attrs((o), NULL)
#endif
#ifdef USE_REENTRANT_API
#include "reentr.h"
#endif
#define NewOp(m,var,c,type) (var = (type *) Perl_Slab_Alloc(aTHX_ c*sizeof(type)))
#define NewOpSz(m,var,size) (var = (OP *) Perl_Slab_Alloc(aTHX_ size))
#define FreeOp(p) Perl_Slab_Free(aTHX_ p)
#ifdef PERL_CORE
# ifdef PERL_DEBUG_READONLY_OPS
# endif
#define OPSLOT_HEADER STRUCT_OFFSET(OPSLOT, opslot_op)
#define OPSLOT_HEADER_P (OPSLOT_HEADER/sizeof(I32 *))
#define OpSLOT(o) (assert_(o->op_slabbed) (OPSLOT *)(((char *)o)-OPSLOT_HEADER))
#define OpSLAB(o) OpSLOT(o)->opslot_slab
#define OpslabREFCNT_dec(slab) (((slab)->opslab_refcnt == 1) ? opslab_free_nopad(slab) : (void)--(slab)->opslab_refcnt)
#define OpslabREFCNT_dec_padok(slab) (((slab)->opslab_refcnt == 1) ? opslab_free(slab) : (void)--(slab)->opslab_refcnt)
#endif
#define BhkFLAGS(hk) ((hk)->bhk_flags)
#define BHKf_bhk_start 0x01
#define BHKf_bhk_pre_end 0x02
#define BHKf_bhk_post_end 0x04
#define BHKf_bhk_eval 0x08
#define BhkENTRY(hk,which) ((BhkFLAGS(hk) & BHKf_ ## which) ? ((hk)->which) : NULL)
#define BhkENABLE(hk,which) STMT_START { BhkFLAGS(hk) |= BHKf_ ## which; assert(BhkENTRY(hk, which)); } STMT_END
#define BhkDISABLE(hk,which) STMT_START { BhkFLAGS(hk) &= ~(BHKf_ ## which); } STMT_END
#define BhkENTRY_set(hk,which,ptr) STMT_START { (hk)->which = ptr; BhkENABLE(hk, which); } STMT_END
#define CALL_BLOCK_HOOKS(which,arg) STMT_START { if (PL_blockhooks) { SSize_t i; for (i = av_tindex(PL_blockhooks); i >= 0; i--) { SV *sv = AvARRAY(PL_blockhooks)[i]; BHK *hk; assert(SvIOK(sv)); if (SvUOK(sv)) hk = INT2PTR(BHK *, SvUVX(sv)); else hk = INT2PTR(BHK *, SvIVX(sv)); if (BhkENTRY(hk, which)) BhkENTRY(hk, which)(aTHX_ arg); } } } STMT_END
#define RV2CVOPCV_MARK_EARLY 0x00000001
#define RV2CVOPCV_RETURN_NAME_GV 0x00000002
#define RV2CVOPCV_RETURN_STUB 0x00000004
#ifdef PERL_CORE
#define RV2CVOPCV_MAYBE_NAME_GV 0x00000008
#endif
#define RV2CVOPCV_FLAG_MASK 0x0000000f
#define op_lvalue(op,t) Perl_op_lvalue_flags(aTHX_ op,t,0)
#define OP_LVALUE_NO_CROAK 1
#define XopFLAGS(xop) ((xop)->xop_flags)
#define XOPf_xop_name 0x01
#define XOPf_xop_desc 0x02
#define XOPf_xop_class 0x04
#define XOPf_xop_peep 0x08
#define XOPd_xop_name PL_op_name[OP_CUSTOM]
#define XOPd_xop_desc PL_op_desc[OP_CUSTOM]
#define XOPd_xop_class OA_BASEOP
#define XOPd_xop_peep ((Perl_cpeep_t)0)
#define XopENTRY_set(xop,which,to) STMT_START { (xop)->which = (to); (xop)->xop_flags |= XOPf_ ## which; } STMT_END
#define XopENTRY(xop,which) ((XopFLAGS(xop) & XOPf_ ## which) ? (xop)->which : XOPd_ ## which)
#define XopENTRYCUSTOM(o,which) (Perl_custom_op_get_field(aTHX_ o, XOPe_ ## which).which)
#define XopDISABLE(xop,which) ((xop)->xop_flags &= ~XOPf_ ## which)
#define XopENABLE(xop,which) STMT_START { (xop)->xop_flags |= XOPf_ ## which; assert(XopENTRY(xop, which)); } STMT_END
#define Perl_custom_op_xop(x) (Perl_custom_op_get_field(x, XOPe_xop_ptr).xop_ptr)
#define OP_NAME(o) ((o)->op_type == OP_CUSTOM ? XopENTRYCUSTOM(o, xop_name) : PL_op_name[(o)->op_type])
#define OP_DESC(o) ((o)->op_type == OP_CUSTOM ? XopENTRYCUSTOM(o, xop_desc) : PL_op_desc[(o)->op_type])
#define OP_CLASS(o) ((o)->op_type == OP_CUSTOM ? XopENTRYCUSTOM(o, xop_class) : (PL_opargs[(o)->op_type] & OA_CLASS_MASK))
#define OP_TYPE_IS(o,type) ((o) && (o)->op_type == (type))
#define OP_TYPE_IS_NN(o,type) ((o)->op_type == (type))
#define OP_TYPE_ISNT(o,type) ((o) && (o)->op_type != (type))
#define OP_TYPE_ISNT_NN(o,type) ((o)->op_type != (type))
#define OP_TYPE_IS_OR_WAS_NN(o,type) ( ((o)->op_type == OP_NULL ? (o)->op_targ : (o)->op_type) == (type) )
#define OP_TYPE_IS_OR_WAS(o,type) ( (o) && OP_TYPE_IS_OR_WAS_NN(o, type) )
#define OP_TYPE_ISNT_AND_WASNT_NN(o,type) ( ((o)->op_type == OP_NULL ? (o)->op_targ : (o)->op_type) != (type) )
#define OP_TYPE_ISNT_AND_WASNT(o,type) ( (o) && OP_TYPE_ISNT_AND_WASNT_NN(o, type) )
#ifdef PERL_OP_PARENT
#define OpHAS_SIBLING(o) (cBOOL((o)->op_moresib))
#define OpSIBLING(o) (0 + (o)->op_moresib ? (o)->op_sibparent : NULL)
#define OpMORESIB_set(o,sib) ((o)->op_moresib = 1, (o)->op_sibparent = (sib))
#define OpLASTSIB_set(o,parent) ((o)->op_moresib = 0, (o)->op_sibparent = (parent))
#define OpMAYBESIB_set(o,sib,parent) ((o)->op_sibparent = ((o)->op_moresib = cBOOL(sib)) ? (sib) : (parent))
#else
#define OpHAS_SIBLING(o) (cBOOL((o)->op_sibling))
#define OpSIBLING(o) (0 + (o)->op_sibling)
#define OpMORESIB_set(o,sib) ((o)->op_moresib = 1, (o)->op_sibling = (sib))
#define OpLASTSIB_set(o,parent) ((o)->op_moresib = 0, (o)->op_sibling = NULL)
#define OpMAYBESIB_set(o,sib,parent) ((o)->op_moresib = cBOOL(sib), (o)->op_sibling = (sib))
#endif
#if !defined(PERL_CORE) && !defined(PERL_EXT)
#define OP_SIBLING(o) OpSIBLING(o)
#endif
#define newATTRSUB(f,o,p,a,b) Perl_newATTRSUB_x(aTHX_ f, o, p, a, b, FALSE)
#define newSUB(f,o,p,b) newATTRSUB((f), (o), (p), NULL, (b))
#ifdef USE_ITHREADS
#define OP_CHECK_MUTEX_INIT MUTEX_INIT(&PL_check_mutex)
#define OP_CHECK_MUTEX_LOCK MUTEX_LOCK(&PL_check_mutex)
#define OP_CHECK_MUTEX_UNLOCK MUTEX_UNLOCK(&PL_check_mutex)
#define OP_CHECK_MUTEX_TERM MUTEX_DESTROY(&PL_check_mutex)
#else
#define OP_CHECK_MUTEX_INIT NOOP
#define OP_CHECK_MUTEX_LOCK NOOP
#define OP_CHECK_MUTEX_UNLOCK NOOP
#define OP_CHECK_MUTEX_TERM NOOP
#endif
#define MDEREF_reload 0
#define MDEREF_AV_pop_rv2av_aelem 1
#define MDEREF_AV_gvsv_vivify_rv2av_aelem 2
#define MDEREF_AV_padsv_vivify_rv2av_aelem 3
#define MDEREF_AV_vivify_rv2av_aelem 4
#define MDEREF_AV_padav_aelem 5
#define MDEREF_AV_gvav_aelem 6
#define MDEREF_HV_pop_rv2hv_helem 8
#define MDEREF_HV_gvsv_vivify_rv2hv_helem 9
#define MDEREF_HV_padsv_vivify_rv2hv_helem 10
#define MDEREF_HV_vivify_rv2hv_helem 11
#define MDEREF_HV_padhv_helem 12
#define MDEREF_HV_gvhv_helem 13
#define MDEREF_ACTION_MASK 0xf
#define MDEREF_INDEX_none 0x00
#define MDEREF_INDEX_const 0x10
#define MDEREF_INDEX_padsv 0x20
#define MDEREF_INDEX_gvsv 0x30
#define MDEREF_INDEX_MASK 0x30
#define MDEREF_FLAG_last 0x40
#define MDEREF_MASK 0x7F
#define MDEREF_SHIFT 7
#if defined(PERL_IN_DOOP_C) || defined(PERL_IN_PP_C)
#endif
