// GGHASH:Voa1C.ldO0yEeMHiO5e.AvCxhif88ydrBFjv8HlLIAZs00006bb9
#define PP(s) OP * Perl_ ##s(pTHX)
#undef SP
#define SP sp
#define MARK mark
#define TARG targ
#define PUSHMARK(p) STMT_START { I32 * mark_stack_entry; if (UNLIKELY((mark_stack_entry = ++PL_markstack_ptr) == PL_markstack_max)) mark_stack_entry = markstack_grow(); *mark_stack_entry = (I32)((p) - PL_stack_base); DEBUG_s(DEBUG_v(PerlIO_printf(Perl_debug_log, "MARK push %p %" IVdf "\n", PL_markstack_ptr, (IV)*mark_stack_entry))); } STMT_END
#define TOPMARK S_TOPMARK(aTHX)
#define POPMARK S_POPMARK(aTHX)
#define INCMARK STMT_START { DEBUG_s(DEBUG_v(PerlIO_printf(Perl_debug_log, "MARK inc  %p %" IVdf "\n", (PL_markstack_ptr+1), (IV)*(PL_markstack_ptr+1)))); PL_markstack_ptr++; } STMT_END
#define dSP SV **sp = PL_stack_sp
#define djSP dSP
#define dMARK SV **mark = PL_stack_base + POPMARK
#define dORIGMARK const I32 origmark = (I32)(mark - PL_stack_base)
#define ORIGMARK (PL_stack_base + origmark)
#define SPAGAIN sp = PL_stack_sp
#define MSPAGAIN STMT_START { sp = PL_stack_sp; mark = ORIGMARK; } STMT_END
#define GETTARGETSTACKED targ = (PL_op->op_flags & OPf_STACKED ? POPs : PAD_SV(PL_op->op_targ))
#define dTARGETSTACKED SV * GETTARGETSTACKED
#define GETTARGET targ = PAD_SV(PL_op->op_targ)
#define dTARGET SV * GETTARGET
#define GETATARGET targ = (PL_op->op_flags & OPf_STACKED ? sp[-1] : PAD_SV(PL_op->op_targ))
#define dATARGET SV * GETATARGET
#define dTARG SV *targ
#define NORMAL PL_op->op_next
#define DIE return Perl_die
#define PUTBACK PL_stack_sp = sp
#define RETURN return (PUTBACK, NORMAL)
#define RETURNOP(o) return (PUTBACK, o)
#define RETURNX(x) return (x, PUTBACK, NORMAL)
#define POPs (*sp--)
#define POPp POPpx
#define POPpx (SvPVx_nolen(POPs))
#define POPpconstx (SvPVx_nolen_const(POPs))
#define POPpbytex (SvPVbytex_nolen(POPs))
#define POPn (SvNVx(POPs))
#define POPi ((IV)SvIVx(POPs))
#define POPu ((UV)SvUVx(POPs))
#define POPl ((long)SvIVx(POPs))
#define POPul ((unsigned long)SvIVx(POPs))
#define TOPs (*sp)
#define TOPm1s (*(sp-1))
#define TOPp1s (*(sp+1))
#define TOPp TOPpx
#define TOPpx (SvPV_nolen(TOPs))
#define TOPn (SvNV(TOPs))
#define TOPi ((IV)SvIV(TOPs))
#define TOPu ((UV)SvUV(TOPs))
#define TOPl ((long)SvIV(TOPs))
#define TOPul ((unsigned long)SvUV(TOPs))
#define _EXTEND_SAFE_N(n) (sizeof(n) > sizeof(SSize_t) && ((SSize_t)(n) != (n)) ? -1 : (n))
#ifdef STRESS_REALLOC
#define EXTEND(p,n) STMT_START { sp = stack_grow(sp,p,_EXTEND_SAFE_N(n)); PERL_UNUSED_VAR(sp); } STMT_END
#define MEXTEND(p,n) STMT_START { const SSize_t markoff = mark - PL_stack_base; sp = stack_grow(sp,p,_EXTEND_SAFE_N(n)); mark = PL_stack_base + markoff; PERL_UNUSED_VAR(sp); } STMT_END
#else
#define _EXTEND_NEEDS_GROW(p,n) ( (n) < 0 || PL_stack_max - p < (n))
#define EXTEND(p,n) STMT_START { if (UNLIKELY(_EXTEND_NEEDS_GROW(p,n))) { sp = stack_grow(sp,p,_EXTEND_SAFE_N(n)); PERL_UNUSED_VAR(sp); } } STMT_END
#define MEXTEND(p,n) STMT_START { if (UNLIKELY(_EXTEND_NEEDS_GROW(p,n))) { const SSize_t markoff = mark - PL_stack_base; sp = stack_grow(sp,p,_EXTEND_SAFE_N(n)); mark = PL_stack_base + markoff; PERL_UNUSED_VAR(sp); } } STMT_END
#endif
#define TARGi(i,do_taint) STMT_START { IV TARGi_iv = i; if (LIKELY( ((SvFLAGS(TARG) & (SVTYPEMASK|SVf_THINKFIRST|SVf_IVisUV)) == SVt_IV) & (do_taint ? !TAINT_get : 1))) { assert(!(SvFLAGS(TARG) & (SVf_OOK|SVf_UTF8|(SVf_OK & ~(SVf_IOK|SVp_IOK))))); SvFLAGS(TARG) |= (SVf_IOK|SVp_IOK); TARG->sv_u.svu_iv = TARGi_iv; } else sv_setiv_mg(targ, TARGi_iv); } STMT_END
#define TARGu(u,do_taint) STMT_START { UV TARGu_uv = u; if (LIKELY( ((SvFLAGS(TARG) & (SVTYPEMASK|SVf_THINKFIRST|SVf_IVisUV)) == SVt_IV) & (do_taint ? !TAINT_get : 1) & (TARGu_uv <= (UV)IV_MAX))) { assert(!(SvFLAGS(TARG) & (SVf_OOK|SVf_UTF8|(SVf_OK & ~(SVf_IOK|SVp_IOK))))); SvFLAGS(TARG) |= (SVf_IOK|SVp_IOK); TARG->sv_u.svu_iv = TARGu_uv; } else sv_setuv_mg(targ, TARGu_uv); } STMT_END
#define TARGn(n,do_taint) STMT_START { NV TARGn_nv = n; if (LIKELY( ((SvFLAGS(TARG) & (SVTYPEMASK|SVf_THINKFIRST)) == SVt_NV) & (do_taint ? !TAINT_get : 1))) { assert(!(SvFLAGS(TARG) & (SVf_OOK|SVf_UTF8|(SVf_OK & ~(SVf_NOK|SVp_NOK))))); SvFLAGS(TARG) |= (SVf_NOK|SVp_NOK); SvNV_set(TARG, TARGn_nv); } else sv_setnv_mg(targ, TARGn_nv); } STMT_END
#define PUSHs(s) (*++sp = (s))
#define PUSHTARG STMT_START { SvSETMAGIC(TARG); PUSHs(TARG); } STMT_END
#define PUSHp(p,l) STMT_START { sv_setpvn(TARG, (p), (l)); PUSHTARG; } STMT_END
#define PUSHn(n) STMT_START { TARGn(n,1); PUSHs(TARG); } STMT_END
#define PUSHi(i) STMT_START { TARGi(i,1); PUSHs(TARG); } STMT_END
#define PUSHu(u) STMT_START { TARGu(u,1); PUSHs(TARG); } STMT_END
#define XPUSHs(s) STMT_START { EXTEND(sp,1); *++sp = (s); } STMT_END
#define XPUSHTARG STMT_START { SvSETMAGIC(TARG); XPUSHs(TARG); } STMT_END
#define XPUSHp(p,l) STMT_START { sv_setpvn(TARG, (p), (l)); XPUSHTARG; } STMT_END
#define XPUSHn(n) STMT_START { TARGn(n,1); XPUSHs(TARG); } STMT_END
#define XPUSHi(i) STMT_START { TARGi(i,1); XPUSHs(TARG); } STMT_END
#define XPUSHu(u) STMT_START { TARGu(u,1); XPUSHs(TARG); } STMT_END
#define XPUSHundef STMT_START { SvOK_off(TARG); XPUSHs(TARG); } STMT_END
#define mPUSHs(s) PUSHs(sv_2mortal(s))
#define PUSHmortal PUSHs(sv_newmortal())
#define mPUSHp(p,l) PUSHs(newSVpvn_flags((p), (l), SVs_TEMP))
#define mPUSHn(n) sv_setnv(PUSHmortal, (NV)(n))
#define mPUSHi(i) sv_setiv(PUSHmortal, (IV)(i))
#define mPUSHu(u) sv_setuv(PUSHmortal, (UV)(u))
#define mXPUSHs(s) XPUSHs(sv_2mortal(s))
#define XPUSHmortal XPUSHs(sv_newmortal())
#define mXPUSHp(p,l) STMT_START { EXTEND(sp,1); mPUSHp((p), (l)); } STMT_END
#define mXPUSHn(n) STMT_START { EXTEND(sp,1); sv_setnv(PUSHmortal, (NV)(n)); } STMT_END
#define mXPUSHi(i) STMT_START { EXTEND(sp,1); sv_setiv(PUSHmortal, (IV)(i)); } STMT_END
#define mXPUSHu(u) STMT_START { EXTEND(sp,1); sv_setuv(PUSHmortal, (UV)(u)); } STMT_END
#define SETs(s) (*sp = s)
#define SETTARG STMT_START { SvSETMAGIC(TARG); SETs(TARG); } STMT_END
#define SETp(p,l) STMT_START { sv_setpvn(TARG, (p), (l)); SETTARG; } STMT_END
#define SETn(n) STMT_START { TARGn(n,1); SETs(TARG); } STMT_END
#define SETi(i) STMT_START { TARGi(i,1); SETs(TARG); } STMT_END
#define SETu(u) STMT_START { TARGu(u,1); SETs(TARG); } STMT_END
#define dTOPss SV *sv = TOPs
#define dPOPss SV *sv = POPs
#define dTOPnv NV value = TOPn
#define dPOPnv NV value = POPn
#define dPOPnv_nomg NV value = (sp--, SvNV_nomg(TOPp1s))
#define dTOPiv IV value = TOPi
#define dPOPiv IV value = POPi
#define dTOPuv UV value = TOPu
#define dPOPuv UV value = POPu
#define dPOPXssrl(X) SV *right = POPs; SV *left = CAT2(X,s)
#define dPOPXnnrl(X) NV right = POPn; NV left = CAT2(X,n)
#define dPOPXiirl(X) IV right = POPi; IV left = CAT2(X,i)
#define USE_LEFT(sv) (SvOK(sv) || !(PL_op->op_flags & OPf_STACKED))
#define dPOPXiirl_ul_nomg(X) IV right = (sp--, SvIV_nomg(TOPp1s)); SV *leftsv = CAT2(X,s); IV left = USE_LEFT(leftsv) ? SvIV_nomg(leftsv) : 0
#define dPOPPOPssrl dPOPXssrl(POP)
#define dPOPPOPnnrl dPOPXnnrl(POP)
#define dPOPPOPiirl dPOPXiirl(POP)
#define dPOPTOPssrl dPOPXssrl(TOP)
#define dPOPTOPnnrl dPOPXnnrl(TOP)
#define dPOPTOPnnrl_nomg NV right = SvNV_nomg(TOPs); NV left = (sp--, SvNV_nomg(TOPs))
#define dPOPTOPiirl dPOPXiirl(TOP)
#define dPOPTOPiirl_ul_nomg dPOPXiirl_ul_nomg(TOP)
#define dPOPTOPiirl_nomg IV right = SvIV_nomg(TOPs); IV left = (sp--, SvIV_nomg(TOPs))
#define RETPUSHYES RETURNX(PUSHs(&PL_sv_yes))
#define RETPUSHNO RETURNX(PUSHs(&PL_sv_no))
#define RETPUSHUNDEF RETURNX(PUSHs(&PL_sv_undef))
#define RETSETYES RETURNX(SETs(&PL_sv_yes))
#define RETSETNO RETURNX(SETs(&PL_sv_no))
#define RETSETUNDEF RETURNX(SETs(&PL_sv_undef))
#define RETSETTARG STMT_START { SETTARG; RETURN; } STMT_END
#define ARGTARG PL_op->op_targ
#define MAXARG (PL_op->op_private & OPpARG4_MASK)
#define SWITCHSTACK(f,t) STMT_START { AvFILLp(f) = sp - PL_stack_base; PL_stack_base = AvARRAY(t); PL_stack_max = PL_stack_base + AvMAX(t); sp = PL_stack_sp = PL_stack_base + AvFILLp(t); PL_curstack = t; } STMT_END
#define EXTEND_MORTAL(n) STMT_START { SSize_t eMiX = PL_tmps_ix + (n); if (UNLIKELY(eMiX >= PL_tmps_max)) (void)Perl_tmps_grow_p(aTHX_ eMiX); } STMT_END
#define AMGf_noright 1
#define AMGf_noleft 2
#define AMGf_assign 4
#define AMGf_unary 8
#define AMGf_numeric 0x10
#define AMGf_set 0x20
#define AMGf_want_list 0x40
#define AMGf_numarg 0x80
#define tryAMAGICun_MG(method,flags) STMT_START { if ( UNLIKELY((SvFLAGS(TOPs) & (SVf_ROK|SVs_GMG))) && Perl_try_amagic_un(aTHX_ method, flags)) return NORMAL; } STMT_END
#define tryAMAGICbin_MG(method,flags) STMT_START { if ( UNLIKELY(((SvFLAGS(TOPm1s)|SvFLAGS(TOPs)) & (SVf_ROK|SVs_GMG))) && Perl_try_amagic_bin(aTHX_ method, flags)) return NORMAL; } STMT_END
#define AMG_CALLunary(sv,meth) amagic_call(sv,&PL_sv_undef, meth, AMGf_noright | AMGf_unary)
#define AMG_CALLun(sv,meth) AMG_CALLunary(sv, CAT2(meth,_amg))
#define tryAMAGICunTARGETlist(meth,jump) STMT_START { dSP; SV *tmpsv; SV *arg= *sp; U8 gimme = GIMME_V; if (UNLIKELY(SvAMAGIC(arg) && (tmpsv = amagic_call(arg, &PL_sv_undef, meth, AMGf_want_list | AMGf_noright |AMGf_unary)))) { SPAGAIN; if (gimme == G_VOID) { NOOP; } else if (gimme == G_ARRAY) { SSize_t i; SSize_t len; assert(SvTYPE(tmpsv) == SVt_PVAV); len = av_tindex((AV *)tmpsv) + 1; (void)POPs; EXTEND(sp, len); for (i = 0; i < len; ++i) PUSHs(av_shift((AV *)tmpsv)); } else { dATARGET; sv_setsv(TARG, tmpsv); if (opASSIGN) sp--; SETTARG; } PUTBACK; if (jump) { OP *jump_o = NORMAL->op_next; while (jump_o->op_type == OP_NULL) jump_o = jump_o->op_next; assert(jump_o->op_type == OP_ENTERSUB); (void)POPMARK; return jump_o->op_next; } return NORMAL; } } STMT_END
#define tryAMAGICunDEREF(meth) STMT_START { sv = amagic_deref_call(*sp, CAT2(meth,_amg)); SPAGAIN; } STMT_END
#define opASSIGN (PL_op->op_flags & OPf_STACKED)
#define LVRET ((PL_op->op_private & OPpMAYBE_LVSUB) && is_lvalue_sub())
#define SvCANEXISTDELETE(sv) (!SvRMAGICAL(sv) || !(mg = mg_find((const SV *) sv, PERL_MAGIC_tied)) || ( (stash = SvSTASH(SvRV(SvTIED_obj(MUTABLE_SV(sv), mg)))) && gv_fetchmethod_autoload(stash, "EXISTS", TRUE) && gv_fetchmethod_autoload(stash, "DELETE", TRUE) ) )
#ifdef PERL_CORE
#define TIED_METHOD_MORTALIZE_NOT_NEEDED 0x04
#define TIED_METHOD_ARGUMENTS_ON_STACK 0x08
#define TIED_METHOD_SAY 0x10
#define MAYBE_DEREF_GV_flags(sv,phlags) ( (void)(phlags & SV_GMAGIC && (SvGETMAGIC(sv),0)), isGV_with_GP(sv) ? (GV *)(sv) : SvROK(sv) && SvTYPE(SvRV(sv)) <= SVt_PVLV && (SvGETMAGIC(SvRV(sv)), isGV_with_GP(SvRV(sv))) ? (GV *)SvRV(sv) : NULL )
#define MAYBE_DEREF_GV(sv) MAYBE_DEREF_GV_flags(sv,SV_GMAGIC)
#define MAYBE_DEREF_GV_nomg(sv) MAYBE_DEREF_GV_flags(sv,0)
#define FIND_RUNCV_padid_eq 1
#define FIND_RUNCV_level_eq 2
#endif
