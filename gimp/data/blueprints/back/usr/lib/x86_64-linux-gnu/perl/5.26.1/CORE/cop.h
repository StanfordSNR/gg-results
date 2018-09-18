// GGHASH:VDTs0xSaY.fOofr9ZnArZSQSTkb6HlqXLToj7h2TAQ5U00009a70
#define JMPENV_BOOTSTRAP STMT_START { PERL_POISON_EXPR(PoisonNew(&PL_start_env, 1, JMPENV)); PL_top_env = &PL_start_env; PL_start_env.je_prev = NULL; PL_start_env.je_ret = -1; PL_start_env.je_mustcatch = TRUE; PL_start_env.je_old_delaymagic = 0; } STMT_END
#define dJMPENV JMPENV cur_env
#define JMPENV_PUSH(v) STMT_START { DEBUG_l({ int i = 0; JMPENV *p = PL_top_env; while (p) { i++; p = p->je_prev; } Perl_deb(aTHX_ "JUMPENV_PUSH level=%d at %s:%d\n", i, __FILE__, __LINE__);}) cur_env.je_prev = PL_top_env; cur_env.je_ret = PerlProc_setjmp(cur_env.je_buf, SCOPE_SAVES_SIGNAL_MASK); PL_top_env = &cur_env; cur_env.je_mustcatch = FALSE; cur_env.je_old_delaymagic = PL_delaymagic; (v) = cur_env.je_ret; } STMT_END
#define JMPENV_POP STMT_START { DEBUG_l({ int i = -1; JMPENV *p = PL_top_env; while (p) { i++; p = p->je_prev; } Perl_deb(aTHX_ "JUMPENV_POP level=%d at %s:%d\n", i, __FILE__, __LINE__);}) assert(PL_top_env == &cur_env); PL_delaymagic = cur_env.je_old_delaymagic; PL_top_env = cur_env.je_prev; } STMT_END
#define JMPENV_JUMP(v) STMT_START { DEBUG_l({ int i = -1; JMPENV *p = PL_top_env; while (p) { i++; p = p->je_prev; } Perl_deb(aTHX_ "JUMPENV_JUMP(%d) level=%d at %s:%d\n", (int)v, i, __FILE__, __LINE__);}) if (PL_top_env->je_prev) PerlProc_longjmp(PL_top_env->je_buf, (v)); if ((v) == 2) PerlProc_exit(STATUS_EXIT); PerlIO_printf(PerlIO_stderr(), "panic: top_env, v=%d\n", (int)v); PerlProc_exit(1); } STMT_END
#define CATCH_GET (PL_top_env->je_mustcatch)
#define CATCH_SET(v) STMT_START { DEBUG_l( Perl_deb(aTHX_ "JUMPLEVEL set catch %d => %d (for %p) at %s:%d\n", PL_top_env->je_mustcatch, v, (void*)PL_top_env, __FILE__, __LINE__);) PL_top_env->je_mustcatch = (v); } STMT_END
#define COPHH_KEY_UTF8 REFCOUNTED_HE_KEY_UTF8
#define cophh_fetch_pvn(cophh,keypv,keylen,hash,flags) Perl_refcounted_he_fetch_pvn(aTHX_ cophh, keypv, keylen, hash, flags)
#define cophh_fetch_pvs(cophh,key,flags) Perl_refcounted_he_fetch_pvn(aTHX_ cophh, STR_WITH_LEN(key), 0, flags)
#define cophh_fetch_pv(cophh,key,hash,flags) Perl_refcounted_he_fetch_pv(aTHX_ cophh, key, hash, flags)
#define cophh_fetch_sv(cophh,key,hash,flags) Perl_refcounted_he_fetch_sv(aTHX_ cophh, key, hash, flags)
#define cophh_2hv(cophh,flags) Perl_refcounted_he_chain_2hv(aTHX_ cophh, flags)
#define cophh_copy(cophh) Perl_refcounted_he_inc(aTHX_ cophh)
#define cophh_free(cophh) Perl_refcounted_he_free(aTHX_ cophh)
#define cophh_new_empty() ((COPHH *)NULL)
#define cophh_store_pvn(cophh,keypv,keylen,hash,value,flags) Perl_refcounted_he_new_pvn(aTHX_ cophh, keypv, keylen, hash, value, flags)
#define cophh_store_pvs(cophh,key,value,flags) Perl_refcounted_he_new_pvn(aTHX_ cophh, STR_WITH_LEN(key), 0, value, flags)
#define cophh_store_pv(cophh,key,hash,value,flags) Perl_refcounted_he_new_pv(aTHX_ cophh, key, hash, value, flags)
#define cophh_store_sv(cophh,key,hash,value,flags) Perl_refcounted_he_new_sv(aTHX_ cophh, key, hash, value, flags)
#define cophh_delete_pvn(cophh,keypv,keylen,hash,flags) Perl_refcounted_he_new_pvn(aTHX_ cophh, keypv, keylen, hash, (SV *)NULL, flags)
#define cophh_delete_pvs(cophh,key,flags) Perl_refcounted_he_new_pvn(aTHX_ cophh, STR_WITH_LEN(key), 0, (SV *)NULL, flags)
#define cophh_delete_pv(cophh,key,hash,flags) Perl_refcounted_he_new_pv(aTHX_ cophh, key, hash, (SV *)NULL, flags)
#define cophh_delete_sv(cophh,key,hash,flags) Perl_refcounted_he_new_sv(aTHX_ cophh, key, hash, (SV *)NULL, flags)
#include "mydtrace.h"
#ifdef USE_ITHREADS
#else
#endif
#ifdef USE_ITHREADS
#define CopFILE(c) ((c)->cop_file)
#define CopFILEGV(c) (CopFILE(c) ? gv_fetchfile(CopFILE(c)) : NULL)
# ifdef NETWARE
#define CopFILE_set(c,pv) ((c)->cop_file = savepv(pv))
#define CopFILE_setn(c,pv,l) ((c)->cop_file = savepvn((pv),(l)))
# else
#define CopFILE_set(c,pv) ((c)->cop_file = savesharedpv(pv))
#define CopFILE_setn(c,pv,l) ((c)->cop_file = savesharedpvn((pv),(l)))
# endif
#define CopFILESV(c) (CopFILE(c) ? GvSV(gv_fetchfile(CopFILE(c))) : NULL)
#define CopFILEAV(c) (CopFILE(c) ? GvAV(gv_fetchfile(CopFILE(c))) : NULL)
#define CopFILEAVx(c) (assert_(CopFILE(c)) GvAV(gv_fetchfile(CopFILE(c))))
#define CopSTASH(c) PL_stashpad[(c)->cop_stashoff]
#define CopSTASH_set(c,hv) ((c)->cop_stashoff = (hv) ? alloccopstash(hv) : 0)
# ifdef NETWARE
#define CopFILE_free(c) SAVECOPFILE_FREE(c)
# else
#define CopFILE_free(c) (PerlMemShared_free(CopFILE(c)),(CopFILE(c) = NULL))
# endif
#else
#define CopFILEGV(c) ((c)->cop_filegv)
#define CopFILEGV_set(c,gv) ((c)->cop_filegv = (GV*)SvREFCNT_inc(gv))
#define CopFILE_set(c,pv) CopFILEGV_set((c), gv_fetchfile(pv))
#define CopFILE_setn(c,pv,l) CopFILEGV_set((c), gv_fetchfile_flags((pv),(l),0))
#define CopFILESV(c) (CopFILEGV(c) ? GvSV(CopFILEGV(c)) : NULL)
#define CopFILEAV(c) (CopFILEGV(c) ? GvAV(CopFILEGV(c)) : NULL)
# ifdef DEBUGGING
#define CopFILEAVx(c) (assert(CopFILEGV(c)), GvAV(CopFILEGV(c)))
# else
#define CopFILEAVx(c) (GvAV(CopFILEGV(c)))
# endif
#define CopFILE(c) (CopFILEGV(c) ? GvNAME(CopFILEGV(c))+2 : NULL)
#define CopSTASH(c) ((c)->cop_stash)
#define CopSTASH_set(c,hv) ((c)->cop_stash = (hv))
#define CopFILE_free(c) (SvREFCNT_dec(CopFILEGV(c)),(CopFILEGV(c) = NULL))
#endif
#define CopSTASHPV(c) (CopSTASH(c) ? HvNAME_get(CopSTASH(c)) : NULL)
#define CopSTASHPV_set(c,pv) CopSTASH_set((c), gv_stashpv(pv,GV_ADD))
#define CopSTASH_eq(c,hv) (CopSTASH(c) == (hv))
#define CopHINTHASH_get(c) ((COPHH*)((c)->cop_hints_hash))
#define CopHINTHASH_set(c,h) ((c)->cop_hints_hash = (h))
#define cop_hints_fetch_pvn(cop,keypv,keylen,hash,flags) cophh_fetch_pvn(CopHINTHASH_get(cop), keypv, keylen, hash, flags)
#define cop_hints_fetch_pvs(cop,key,flags) cophh_fetch_pvs(CopHINTHASH_get(cop), key, flags)
#define cop_hints_fetch_pv(cop,key,hash,flags) cophh_fetch_pv(CopHINTHASH_get(cop), key, hash, flags)
#define cop_hints_fetch_sv(cop,key,hash,flags) cophh_fetch_sv(CopHINTHASH_get(cop), key, hash, flags)
#define cop_hints_2hv(cop,flags) cophh_2hv(CopHINTHASH_get(cop), flags)
#define CopLABEL(c) Perl_cop_fetch_label(aTHX_ (c), NULL, NULL)
#define CopLABEL_len(c,len) Perl_cop_fetch_label(aTHX_ (c), len, NULL)
#define CopLABEL_len_flags(c,len,flags) Perl_cop_fetch_label(aTHX_ (c), len, flags)
#define CopLABEL_alloc(pv) ((pv)?savepv(pv):NULL)
#define CopSTASH_ne(c,hv) (!CopSTASH_eq(c,hv))
#define CopLINE(c) ((c)->cop_line)
#define CopLINE_inc(c) (++CopLINE(c))
#define CopLINE_dec(c) (--CopLINE(c))
#define CopLINE_set(c,l) (CopLINE(c) = (l))
#define OutCopFILE(c) CopFILE(c)
#define CopHINTS_get(c) ((c)->cop_hints + 0)
#define CopHINTS_set(c,h) STMT_START { (c)->cop_hints = (h); } STMT_END
#define CX_CUR() (&cxstack[cxstack_ix])
#define CX_LEAVE_SCOPE(cx) LEAVE_SCOPE(cx->blk_oldsaveix)
#ifdef DEBUGGING
#define CX_POP(cx) assert(CX_CUR() == cx); cxstack_ix--; cx = NULL;
#else
#define CX_POP(cx) cxstack_ix--;
#endif
#define CX_PUSHSUB_GET_LVALUE_MASK(func) ( (PL_op->op_flags & OPf_WANT) ? OPpENTERSUB_LVAL_MASK : !(PL_op->op_private & OPpENTERSUB_LVAL_MASK) ? 0 : (U8)func(aTHX) )
#define CX_POP_SAVEARRAY(cx) STMT_START { AV *cx_pop_savearray_av = GvAV(PL_defgv); GvAV(PL_defgv) = cx->blk_sub.savearray; cx->blk_sub.savearray = NULL; SvREFCNT_dec(cx_pop_savearray_av); } STMT_END
#define CLEAR_ARGARRAY(ary) STMT_START { AvMAX(ary) += AvARRAY(ary) - AvALLOC(ary); AvARRAY(ary) = AvALLOC(ary); AvFILLp(ary) = -1; } STMT_END
#define CxOLD_IN_EVAL(cx) (((cx)->blk_u16) & 0x3F)
#define CxEVAL_TXT_REFCNTED(cx) (((cx)->blk_u16) & 0x40)
#define CxOLD_OP_TYPE(cx) (((cx)->blk_u16) >> 7)
#ifdef USE_ITHREADS
#endif
#define CxITERVAR(c) (CxPADLOOP(c) ? (c)->blk_loop.itervar_u.svp : ((c)->cx_type & CXp_FOR_GV) ? &GvSV((c)->blk_loop.itervar_u.gv) : (SV **)&(c)->blk_loop.itervar_u.gv)
#define CxLABEL(c) (0 + CopLABEL((c)->blk_oldcop))
#define CxLABEL_len(c,len) (0 + CopLABEL_len((c)->blk_oldcop, len))
#define CxLABEL_len_flags(c,len,flags) (0 + CopLABEL_len_flags((c)->blk_oldcop, len, flags))
#define CxHASARGS(c) (((c)->cx_type & CXp_HASARGS) == CXp_HASARGS)
#define CxLVAL(c) (0 + ((c)->blk_u16 & 0xff))
#define blk_oldsp cx_u.cx_blk.blku_oldsp
#define blk_oldcop cx_u.cx_blk.blku_oldcop
#define blk_oldmarksp cx_u.cx_blk.blku_oldmarksp
#define blk_oldscopesp cx_u.cx_blk.blku_oldscopesp
#define blk_oldpm cx_u.cx_blk.blku_oldpm
#define blk_gimme cx_u.cx_blk.blku_gimme
#define blk_u16 cx_u.cx_blk.blku_u16
#define blk_oldsaveix cx_u.cx_blk.blku_oldsaveix
#define blk_old_tmpsfloor cx_u.cx_blk.blku_old_tmpsfloor
#define blk_sub cx_u.cx_blk.blk_u.blku_sub
#define blk_format cx_u.cx_blk.blk_u.blku_format
#define blk_eval cx_u.cx_blk.blk_u.blku_eval
#define blk_loop cx_u.cx_blk.blk_u.blku_loop
#define blk_givwhen cx_u.cx_blk.blk_u.blku_givwhen
#define CX_DEBUG(cx,action) DEBUG_l( Perl_deb(aTHX_ "CX %ld %s %s (scope %ld,%ld) (save %ld,%ld) at %s:%d\n", (long)cxstack_ix, action, PL_block_type[CxTYPE(cx)], (long)PL_scopestack_ix, (long)(cx->blk_oldscopesp), (long)PL_savestack_ix, (long)(cx->blk_oldsaveix), __FILE__, __LINE__));
#define sb_iters cx_u.cx_subst.sbu_iters
#define sb_maxiters cx_u.cx_subst.sbu_maxiters
#define sb_rflags cx_u.cx_subst.sbu_rflags
#define sb_rxtainted cx_u.cx_subst.sbu_rxtainted
#define sb_orig cx_u.cx_subst.sbu_orig
#define sb_dstr cx_u.cx_subst.sbu_dstr
#define sb_targ cx_u.cx_subst.sbu_targ
#define sb_s cx_u.cx_subst.sbu_s
#define sb_m cx_u.cx_subst.sbu_m
#define sb_strend cx_u.cx_subst.sbu_strend
#define sb_rxres cx_u.cx_subst.sbu_rxres
#define sb_rx cx_u.cx_subst.sbu_rx
#ifdef PERL_CORE
#define CX_PUSHSUBST(cx) CXINC, cx = CX_CUR(), cx->blk_oldsaveix = oldsave, cx->sb_iters = iters, cx->sb_maxiters = maxiters, cx->sb_rflags = r_flags, cx->sb_rxtainted = rxtainted, cx->sb_orig = orig, cx->sb_dstr = dstr, cx->sb_targ = targ, cx->sb_s = s, cx->sb_m = m, cx->sb_strend = strend, cx->sb_rxres = NULL, cx->sb_rx = rx, cx->cx_type = CXt_SUBST | (once ? CXp_ONCE : 0); rxres_save(&cx->sb_rxres, rx); (void)ReREFCNT_inc(rx); SvREFCNT_inc_void_NN(targ)
#define CX_POPSUBST(cx) STMT_START { REGEXP *re; assert(CxTYPE(cx) == CXt_SUBST); rxres_free(&cx->sb_rxres); re = cx->sb_rx; cx->sb_rx = NULL; ReREFCNT_dec(re); SvREFCNT_dec_NN(cx->sb_targ); } STMT_END
#endif
#define CxONCE(cx) ((cx)->cx_type & CXp_ONCE)
#define cx_type cx_u.cx_subst.sbu_type
#define CXTYPEMASK 0xf
#define CXt_NULL 0
#define CXt_WHEN 1
#define CXt_BLOCK 2
#define CXt_GIVEN 3
#define CXt_LOOP_ARY 4
#define CXt_LOOP_LAZYSV 5
#define CXt_LOOP_LAZYIV 6
#define CXt_LOOP_LIST 7
#define CXt_LOOP_PLAIN 8
#define CXt_SUB 9
#define CXt_FORMAT 10
#define CXt_EVAL 11
#define CXt_SUBST 12
#define CXp_MULTICALL 0x10
#define CXp_HASARGS 0x20
#define CXp_SUB_RE 0x40
#define CXp_SUB_RE_FAKE 0x80
#define CXp_REAL 0x20
#define CXp_TRYBLOCK 0x40
#define CXp_FOR_DEF 0x10
#define CXp_FOR_LVREF 0x20
#define CXp_FOR_GV 0x40
#define CXp_FOR_PAD 0x80
#define CxPADLOOP(c) ((c)->cx_type & CXp_FOR_PAD)
#define CXp_ONCE 0x10
#define CxTYPE(c) ((c)->cx_type & CXTYPEMASK)
#define CxTYPE_is_LOOP(c) ( CxTYPE(cx) >= CXt_LOOP_ARY && CxTYPE(cx) <= CXt_LOOP_PLAIN)
#define CxMULTICALL(c) ((c)->cx_type & CXp_MULTICALL)
#define CxREALEVAL(c) (((c)->cx_type & (CXTYPEMASK|CXp_REAL)) == (CXt_EVAL|CXp_REAL))
#define CxTRYBLOCK(c) (((c)->cx_type & (CXTYPEMASK|CXp_TRYBLOCK)) == (CXt_EVAL|CXp_TRYBLOCK))
#define CxFOREACH(c) ( CxTYPE(cx) >= CXt_LOOP_ARY && CxTYPE(cx) <= CXt_LOOP_LIST)
#define CXINC (cxstack_ix < cxstack_max ? ++cxstack_ix : (cxstack_ix = cxinc()))
#define G_SCALAR 2
#define G_ARRAY 3
#define G_VOID 1
#define G_WANT 3
#define G_DISCARD 4
#define G_EVAL 8
#define G_NOARGS 16
#define G_KEEPERR 32
#define G_NODEBUG 64
#define G_METHOD 128
#define G_FAKINGEVAL 256
#define G_UNDEF_FILL 512
#define G_WRITING_TO_STDERR 1024
#define G_RE_REPARSING 0x800
#define G_METHOD_NAMED 4096
#define EVAL_NULL 0
#define EVAL_INEVAL 1
#define EVAL_WARNONLY 2
#define EVAL_KEEPERR 4
#define EVAL_INREQUIRE 8
#define EVAL_RE_REPARSING 0x10
#define PERLSI_UNKNOWN -1
#define PERLSI_UNDEF 0
#define PERLSI_MAIN 1
#define PERLSI_MAGIC 2
#define PERLSI_SORT 3
#define PERLSI_SIGNAL 4
#define PERLSI_OVERLOAD 5
#define PERLSI_DESTROY 6
#define PERLSI_WARNHOOK 7
#define PERLSI_DIEHOOK 8
#define PERLSI_REQUIRE 9
#define PERLSI_MULTICALL 10
#define cxstack (PL_curstackinfo->si_cxstack)
#define cxstack_ix (PL_curstackinfo->si_cxix)
#define cxstack_max (PL_curstackinfo->si_cxmax)
#ifdef DEBUGGING
#define SET_MARK_OFFSET PL_curstackinfo->si_markoff = PL_markstack_ptr - PL_markstack
#else
#define SET_MARK_OFFSET NOOP
#endif
#define PUSHSTACKi(type) STMT_START { PERL_SI *next = PL_curstackinfo->si_next; DEBUG_l({ int i = 0; PERL_SI *p = PL_curstackinfo; while (p) { i++; p = p->si_prev; } Perl_deb(aTHX_ "push STACKINFO %d at %s:%d\n", i, __FILE__, __LINE__);}) if (!next) { next = new_stackinfo(32, 2048/sizeof(PERL_CONTEXT) - 1); next->si_prev = PL_curstackinfo; PL_curstackinfo->si_next = next; } next->si_type = type; next->si_cxix = -1; AvFILLp(next->si_stack) = 0; SWITCHSTACK(PL_curstack,next->si_stack); PL_curstackinfo = next; SET_MARK_OFFSET; } STMT_END
#define PUSHSTACK PUSHSTACKi(PERLSI_UNKNOWN)
#define POPSTACK STMT_START { dSP; PERL_SI * const prev = PL_curstackinfo->si_prev; DEBUG_l({ int i = -1; PERL_SI *p = PL_curstackinfo; while (p) { i++; p = p->si_prev; } Perl_deb(aTHX_ "pop  STACKINFO %d at %s:%d\n", i, __FILE__, __LINE__);}) if (!prev) { Perl_croak_popstack(); } SWITCHSTACK(PL_curstack,prev->si_stack); PL_curstackinfo = prev; } STMT_END
#define POPSTACK_TO(s) STMT_START { while (PL_curstack != s) { dounwind(-1); POPSTACK; } } STMT_END
#define IN_PERL_COMPILETIME cBOOL(PL_curcop == &PL_compiling)
#define IN_PERL_RUNTIME cBOOL(PL_curcop != &PL_compiling)
#define dMULTICALL OP *multicall_cop; bool multicall_oldcatch
#define PUSH_MULTICALL(the_cv) PUSH_MULTICALL_FLAGS(the_cv, 0)
#define PUSH_MULTICALL_FLAGS(the_cv,flags) STMT_START { PERL_CONTEXT *cx; CV * const _nOnclAshIngNamE_ = the_cv; CV * const cv = _nOnclAshIngNamE_; PADLIST * const padlist = CvPADLIST(cv); multicall_oldcatch = CATCH_GET; CATCH_SET(TRUE); PUSHSTACKi(PERLSI_MULTICALL); cx = cx_pushblock((CXt_SUB|CXp_MULTICALL|flags), (U8)gimme, PL_stack_sp, PL_savestack_ix); cx_pushsub(cx, cv, NULL, 0); SAVEOP(); if (!(flags & CXp_SUB_RE_FAKE)) CvDEPTH(cv)++; if (CvDEPTH(cv) >= 2) Perl_pad_push(aTHX_ padlist, CvDEPTH(cv)); PAD_SET_CUR_NOSAVE(padlist, CvDEPTH(cv)); multicall_cop = CvSTART(cv); } STMT_END
#define MULTICALL STMT_START { PL_op = multicall_cop; CALLRUNOPS(aTHX); } STMT_END
#define POP_MULTICALL STMT_START { PERL_CONTEXT *cx; cx = CX_CUR(); CX_LEAVE_SCOPE(cx); cx_popsub_common(cx); gimme = cx->blk_gimme; PERL_UNUSED_VAR(gimme); cx_popblock(cx); CX_POP(cx); POPSTACK; CATCH_SET(multicall_oldcatch); SPAGAIN; } STMT_END
#define CHANGE_MULTICALL_FLAGS(the_cv,flags) STMT_START { CV * const _nOnclAshIngNamE_ = the_cv; CV * const cv = _nOnclAshIngNamE_; PADLIST * const padlist = CvPADLIST(cv); PERL_CONTEXT *cx = CX_CUR(); assert(CxMULTICALL(cx)); cx_popsub_common(cx); cx->cx_type = (CXt_SUB|CXp_MULTICALL|flags); cx_pushsub(cx, cv, NULL, 0); if (!(flags & CXp_SUB_RE_FAKE)) CvDEPTH(cv)++; if (CvDEPTH(cv) >= 2) Perl_pad_push(aTHX_ padlist, CvDEPTH(cv)); PAD_SET_CUR_NOSAVE(padlist, CvDEPTH(cv)); multicall_cop = CvSTART(cv); } STMT_END
