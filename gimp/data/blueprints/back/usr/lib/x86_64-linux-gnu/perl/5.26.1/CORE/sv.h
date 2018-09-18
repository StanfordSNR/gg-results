// GGHASH:VFcYc9Lz_1WTVQgFHn3raz6dqgxPGaqsnVV_cqsD8S6c00014920
#ifdef sv_flags
#undef sv_flags
#endif
#define SVt_MASK 0xf
#ifndef PERL_CORE
#define SVt_PVBM SVt_PVMG
#define SVt_RV SVt_IV
#endif
#if defined(PERL_IN_HV_C) || defined(PERL_IN_XS_APITEST)
#define HE_SVSLOT SVt_NULL
#endif
#ifdef PERL_IN_SV_C
#define SVt_FIRST SVt_NULL
#endif
#define PERL_ARENA_ROOTS_SIZE (SVt_LAST)
#define _SV_HEAD(ptrtype) ptrtype sv_any; U32 sv_refcnt; U32 sv_flags
#if NVSIZE <= IVSIZE
#define _NV_BODYLESS_UNION NV svu_nv;
#else
#define _NV_BODYLESS_UNION 
#endif
#define _SV_HEAD_UNION union { char* svu_pv; IV svu_iv; UV svu_uv; _NV_BODYLESS_UNION SV* svu_rv; struct regexp* svu_rx; SV** svu_array; HE** svu_hash; GP* svu_gp; PerlIO *svu_fp; } sv_u _SV_HEAD_DEBUG
#ifdef DEBUG_LEAKING_SCALARS
#define _SV_HEAD_DEBUG ; PERL_BITFIELD32 sv_debug_optype:9; PERL_BITFIELD32 sv_debug_inpad:1; PERL_BITFIELD32 sv_debug_line:16; UV sv_debug_serial; char * sv_debug_file; SV * sv_debug_parent
#else
#define _SV_HEAD_DEBUG 
#endif
#undef _SV_HEAD
#undef _SV_HEAD_UNION
#define SvANY(sv) (sv)->sv_any
#define SvFLAGS(sv) (sv)->sv_flags
#define SvREFCNT(sv) (sv)->sv_refcnt
#define SvREFCNT_inc(sv) S_SvREFCNT_inc(MUTABLE_SV(sv))
#define SvREFCNT_inc_simple(sv) SvREFCNT_inc(sv)
#define SvREFCNT_inc_NN(sv) S_SvREFCNT_inc_NN(MUTABLE_SV(sv))
#define SvREFCNT_inc_void(sv) S_SvREFCNT_inc_void(MUTABLE_SV(sv))
#define SvREFCNT_inc_simple_void(sv) STMT_START { if (sv) SvREFCNT(sv)++; } STMT_END
#define SvREFCNT_inc_simple_NN(sv) (++(SvREFCNT(sv)),MUTABLE_SV(sv))
#define SvREFCNT_inc_void_NN(sv) (void)(++SvREFCNT(MUTABLE_SV(sv)))
#define SvREFCNT_inc_simple_void_NN(sv) (void)(++SvREFCNT(MUTABLE_SV(sv)))
#define SvREFCNT_dec(sv) S_SvREFCNT_dec(aTHX_ MUTABLE_SV(sv))
#define SvREFCNT_dec_NN(sv) S_SvREFCNT_dec_NN(aTHX_ MUTABLE_SV(sv))
#define SVTYPEMASK 0xff
#define SvTYPE(sv) ((svtype)((sv)->sv_flags & SVTYPEMASK))
#define SvIS_FREED(sv) UNLIKELY(((sv)->sv_flags == SVTYPEMASK))
#define SvUPGRADE(sv,mt) ((void)(SvTYPE(sv) >= (mt) || (sv_upgrade(sv, mt),1)))
#define SVf_IOK 0x00000100
#define SVf_NOK 0x00000200
#define SVf_POK 0x00000400
#define SVf_ROK 0x00000800
#define SVp_IOK 0x00001000
#define SVp_NOK 0x00002000
#define SVp_POK 0x00004000
#define SVp_SCREAM 0x00008000
#define SVphv_CLONEABLE SVp_SCREAM
#define SVpgv_GP SVp_SCREAM
#define SVprv_PCS_IMPORTED SVp_SCREAM
#define SVf_PROTECT 0x00010000
#define SVs_PADTMP 0x00020000
#define SVs_PADSTALE 0x00040000
#define SVs_TEMP 0x00080000
#define SVs_OBJECT 0x00100000
#define SVs_GMG 0x00200000
#define SVs_SMG 0x00400000
#define SVs_RMG 0x00800000
#define SVf_FAKE 0x01000000
#define SVf_OOK 0x02000000
#define SVf_BREAK 0x04000000
#define SVf_READONLY 0x08000000
#define SVf_THINKFIRST (SVf_READONLY|SVf_PROTECT|SVf_ROK|SVf_FAKE |SVs_RMG|SVf_IsCOW)
#define SVf_OK (SVf_IOK|SVf_NOK|SVf_POK|SVf_ROK| SVp_IOK|SVp_NOK|SVp_POK|SVpgv_GP)
#define PRIVSHIFT 4
#define SVf_AMAGIC 0x10000000
#define SVf_IsCOW 0x10000000
#define SVf_UTF8 0x20000000
#define SVphv_SHAREKEYS 0x20000000
#define SVpav_REAL 0x40000000
#define SVphv_LAZYDEL 0x40000000
#define SVf_IVisUV 0x80000000
#define SVpav_REIFY 0x80000000
#define SVphv_HASKFLAGS 0x80000000
#define SVprv_WEAKREF 0x80000000
#define _XPV_HEAD HV* xmg_stash; union _xmgu xmg_u; STRLEN xpv_cur; union { STRLEN xpvlenu_len; char * xpvlenu_pv; } xpv_len_u
#define xpv_len xpv_len_u.xpvlenu_len
#define xiv_iv xiv_u.xivu_iv
#define xuv_uv xuv_u.xivu_uv
#define xlv_targoff xlv_targoff_u.xlvu_targoff
#define _XPVCV_COMMON HV * xcv_stash; union { OP * xcv_start; ANY xcv_xsubany; } xcv_start_u; union { OP * xcv_root; void (*xcv_xsub) (pTHX_ CV*); } xcv_root_u; union { GV * xcv_gv; HEK * xcv_hek; } xcv_gv_u; char * xcv_file; union { PADLIST * xcv_padlist; void * xcv_hscxt; } xcv_padlist_u; CV * xcv_outside; U32 xcv_outside_seq; cv_flags_t xcv_flags; I32 xcv_depth
#define xio_dirp xio_dirpu.xiou_dirp
#define xio_any xio_dirpu.xiou_any
#define IOf_ARGV 1
#define IOf_START 2
#define IOf_FLUSH 4
#define IOf_DIDTOP 8
#define IOf_UNTAINT 16
#define IOf_NOLINE 32
#define IOf_FAKE_DIRP 64
#define SvNIOK(sv) (SvFLAGS(sv) & (SVf_IOK|SVf_NOK))
#define SvNIOKp(sv) (SvFLAGS(sv) & (SVp_IOK|SVp_NOK))
#define SvNIOK_off(sv) (SvFLAGS(sv) &= ~(SVf_IOK|SVf_NOK| SVp_IOK|SVp_NOK|SVf_IVisUV))
#define assert_not_ROK(sv) assert_(!SvROK(sv) || !SvRV(sv))
#define assert_not_glob(sv) assert_(!isGV_with_GP(sv))
#define SvOK(sv) (SvFLAGS(sv) & SVf_OK || isREGEXP(sv))
#define SvOK_off(sv) (assert_not_ROK(sv) assert_not_glob(sv) SvFLAGS(sv) &= ~(SVf_OK| SVf_IVisUV|SVf_UTF8), SvOOK_off(sv))
#define SvOK_off_exc_UV(sv) (assert_not_ROK(sv) SvFLAGS(sv) &= ~(SVf_OK| SVf_UTF8), SvOOK_off(sv))
#define SvOKp(sv) (SvFLAGS(sv) & (SVp_IOK|SVp_NOK|SVp_POK))
#define SvIOKp(sv) (SvFLAGS(sv) & SVp_IOK)
#define SvIOKp_on(sv) (assert_not_glob(sv) SvFLAGS(sv) |= SVp_IOK)
#define SvNOKp(sv) (SvFLAGS(sv) & SVp_NOK)
#define SvNOKp_on(sv) (assert_not_glob(sv) SvFLAGS(sv) |= SVp_NOK)
#define SvPOKp(sv) (SvFLAGS(sv) & SVp_POK)
#define SvPOKp_on(sv) (assert_not_ROK(sv) assert_not_glob(sv) SvFLAGS(sv) |= SVp_POK)
#define SvIOK(sv) (SvFLAGS(sv) & SVf_IOK)
#define SvIOK_on(sv) (assert_not_glob(sv) SvFLAGS(sv) |= (SVf_IOK|SVp_IOK))
#define SvIOK_off(sv) (SvFLAGS(sv) &= ~(SVf_IOK|SVp_IOK|SVf_IVisUV))
#define SvIOK_only(sv) (SvOK_off(sv), SvFLAGS(sv) |= (SVf_IOK|SVp_IOK))
#define SvIOK_only_UV(sv) (assert_not_glob(sv) SvOK_off_exc_UV(sv), SvFLAGS(sv) |= (SVf_IOK|SVp_IOK))
#define SvIOK_UV(sv) ((SvFLAGS(sv) & (SVf_IOK|SVf_IVisUV)) == (SVf_IOK|SVf_IVisUV))
#define SvUOK(sv) SvIOK_UV(sv)
#define SvIOK_notUV(sv) ((SvFLAGS(sv) & (SVf_IOK|SVf_IVisUV)) == SVf_IOK)
#define SvIsUV(sv) (SvFLAGS(sv) & SVf_IVisUV)
#define SvIsUV_on(sv) (SvFLAGS(sv) |= SVf_IVisUV)
#define SvIsUV_off(sv) (SvFLAGS(sv) &= ~SVf_IVisUV)
#define SvNOK(sv) (SvFLAGS(sv) & SVf_NOK)
#define SvNOK_on(sv) (assert_not_glob(sv) SvFLAGS(sv) |= (SVf_NOK|SVp_NOK))
#define SvNOK_off(sv) (SvFLAGS(sv) &= ~(SVf_NOK|SVp_NOK))
#define SvNOK_only(sv) (SvOK_off(sv), SvFLAGS(sv) |= (SVf_NOK|SVp_NOK))
#define SvUTF8(sv) (SvFLAGS(sv) & SVf_UTF8)
#define SvUTF8_on(sv) (SvFLAGS(sv) |= (SVf_UTF8))
#define SvUTF8_off(sv) (SvFLAGS(sv) &= ~(SVf_UTF8))
#define SvPOK(sv) (SvFLAGS(sv) & SVf_POK)
#define SvPOK_on(sv) (assert_not_ROK(sv) assert_not_glob(sv) SvFLAGS(sv) |= (SVf_POK|SVp_POK))
#define SvPOK_off(sv) (SvFLAGS(sv) &= ~(SVf_POK|SVp_POK))
#define SvPOK_only(sv) (assert_not_ROK(sv) assert_not_glob(sv) SvFLAGS(sv) &= ~(SVf_OK| SVf_IVisUV|SVf_UTF8), SvFLAGS(sv) |= (SVf_POK|SVp_POK))
#define SvPOK_only_UTF8(sv) (assert_not_ROK(sv) assert_not_glob(sv) SvFLAGS(sv) &= ~(SVf_OK| SVf_IVisUV), SvFLAGS(sv) |= (SVf_POK|SVp_POK))
#define SvVOK(sv) (SvMAGICAL(sv) && mg_find(sv,PERL_MAGIC_vstring))
#define SvVSTRING_mg(sv) (SvMAGICAL(sv) ? mg_find(sv,PERL_MAGIC_vstring) : NULL)
#define SvOOK(sv) (SvFLAGS(sv) & SVf_OOK)
#define SvOOK_on(sv) (SvFLAGS(sv) |= SVf_OOK)
#define SvOOK_off(sv) ((void)(SvOOK(sv) && (sv_backoff(sv),0)))
#define SvFAKE(sv) (SvFLAGS(sv) & SVf_FAKE)
#define SvFAKE_on(sv) (SvFLAGS(sv) |= SVf_FAKE)
#define SvFAKE_off(sv) (SvFLAGS(sv) &= ~SVf_FAKE)
#define SvROK(sv) (SvFLAGS(sv) & SVf_ROK)
#define SvROK_on(sv) (SvFLAGS(sv) |= SVf_ROK)
#define SvROK_off(sv) (SvFLAGS(sv) &= ~(SVf_ROK))
#define SvMAGICAL(sv) (SvFLAGS(sv) & (SVs_GMG|SVs_SMG|SVs_RMG))
#define SvMAGICAL_on(sv) (SvFLAGS(sv) |= (SVs_GMG|SVs_SMG|SVs_RMG))
#define SvMAGICAL_off(sv) (SvFLAGS(sv) &= ~(SVs_GMG|SVs_SMG|SVs_RMG))
#define SvGMAGICAL(sv) (SvFLAGS(sv) & SVs_GMG)
#define SvGMAGICAL_on(sv) (SvFLAGS(sv) |= SVs_GMG)
#define SvGMAGICAL_off(sv) (SvFLAGS(sv) &= ~SVs_GMG)
#define SvSMAGICAL(sv) (SvFLAGS(sv) & SVs_SMG)
#define SvSMAGICAL_on(sv) (SvFLAGS(sv) |= SVs_SMG)
#define SvSMAGICAL_off(sv) (SvFLAGS(sv) &= ~SVs_SMG)
#define SvRMAGICAL(sv) (SvFLAGS(sv) & SVs_RMG)
#define SvRMAGICAL_on(sv) (SvFLAGS(sv) |= SVs_RMG)
#define SvRMAGICAL_off(sv) (SvFLAGS(sv) &= ~SVs_RMG)
#define SvAMAGIC(sv) (SvROK(sv) && SvOBJECT(SvRV(sv)) && HvAMAGIC(SvSTASH(SvRV(sv))))
#define HvAMAGIC(hv) (SvFLAGS(hv) & SVf_AMAGIC)
#define HvAMAGIC_on(hv) (SvFLAGS(hv) |= SVf_AMAGIC)
#define HvAMAGIC_off(hv) (SvFLAGS(hv) &=~ SVf_AMAGIC)
#define SvPOK_nog(sv) ((SvFLAGS(sv) & (SVf_POK|SVs_GMG)) == SVf_POK)
#define SvIOK_nog(sv) ((SvFLAGS(sv) & (SVf_IOK|SVs_GMG)) == SVf_IOK)
#define SvUOK_nog(sv) ((SvFLAGS(sv) & (SVf_IOK|SVf_IVisUV|SVs_GMG)) == (SVf_IOK|SVf_IVisUV))
#define SvNOK_nog(sv) ((SvFLAGS(sv) & (SVf_NOK|SVs_GMG)) == SVf_NOK)
#define SvNIOK_nog(sv) (SvNIOK(sv) && !(SvFLAGS(sv) & SVs_GMG))
#define SvPOK_nogthink(sv) ((SvFLAGS(sv) & (SVf_POK|SVf_THINKFIRST|SVs_GMG)) == SVf_POK)
#define SvIOK_nogthink(sv) ((SvFLAGS(sv) & (SVf_IOK|SVf_THINKFIRST|SVs_GMG)) == SVf_IOK)
#define SvUOK_nogthink(sv) ((SvFLAGS(sv) & (SVf_IOK|SVf_IVisUV|SVf_THINKFIRST|SVs_GMG)) == (SVf_IOK|SVf_IVisUV))
#define SvNOK_nogthink(sv) ((SvFLAGS(sv) & (SVf_NOK|SVf_THINKFIRST|SVs_GMG)) == SVf_NOK)
#define SvNIOK_nogthink(sv) (SvNIOK(sv) && !(SvFLAGS(sv) & (SVf_THINKFIRST|SVs_GMG)))
#define SvPOK_utf8_nog(sv) ((SvFLAGS(sv) & (SVf_POK|SVf_UTF8|SVs_GMG)) == (SVf_POK|SVf_UTF8))
#define SvPOK_utf8_nogthink(sv) ((SvFLAGS(sv) & (SVf_POK|SVf_UTF8|SVf_THINKFIRST|SVs_GMG)) == (SVf_POK|SVf_UTF8))
#define SvPOK_byte_nog(sv) ((SvFLAGS(sv) & (SVf_POK|SVf_UTF8|SVs_GMG)) == SVf_POK)
#define SvPOK_byte_nogthink(sv) ((SvFLAGS(sv) & (SVf_POK|SVf_UTF8|SVf_THINKFIRST|SVs_GMG)) == SVf_POK)
#define SvPOK_pure_nogthink(sv) ((SvFLAGS(sv) & (SVf_POK|SVf_IOK|SVf_NOK|SVf_ROK|SVpgv_GP|SVf_THINKFIRST|SVs_GMG)) == SVf_POK)
#define SvPOK_utf8_pure_nogthink(sv) ((SvFLAGS(sv) & (SVf_POK|SVf_UTF8|SVf_IOK|SVf_NOK|SVf_ROK|SVpgv_GP|SVf_THINKFIRST|SVs_GMG)) == (SVf_POK|SVf_UTF8))
#define SvPOK_byte_pure_nogthink(sv) ((SvFLAGS(sv) & (SVf_POK|SVf_UTF8|SVf_IOK|SVf_NOK|SVf_ROK|SVpgv_GP|SVf_THINKFIRST|SVs_GMG)) == SVf_POK)
#define SvGAMAGIC(sv) (SvGMAGICAL(sv) || SvAMAGIC(sv))
#define Gv_AMG(stash) (HvNAME(stash) && Gv_AMupdate(stash,FALSE) ? 1 : (HvAMAGIC_off(stash), 0))
#define SvWEAKREF(sv) ((SvFLAGS(sv) & (SVf_ROK|SVprv_WEAKREF)) == (SVf_ROK|SVprv_WEAKREF))
#define SvWEAKREF_on(sv) (SvFLAGS(sv) |= (SVf_ROK|SVprv_WEAKREF))
#define SvWEAKREF_off(sv) (SvFLAGS(sv) &= ~(SVf_ROK|SVprv_WEAKREF))
#define SvPCS_IMPORTED(sv) ((SvFLAGS(sv) & (SVf_ROK|SVprv_PCS_IMPORTED)) == (SVf_ROK|SVprv_PCS_IMPORTED))
#define SvPCS_IMPORTED_on(sv) (SvFLAGS(sv) |= (SVf_ROK|SVprv_PCS_IMPORTED))
#define SvPCS_IMPORTED_off(sv) (SvFLAGS(sv) &= ~(SVf_ROK|SVprv_PCS_IMPORTED))
#define SvTHINKFIRST(sv) (SvFLAGS(sv) & SVf_THINKFIRST)
#define SVs_PADMY 0
#define SvPADMY(sv) !(SvFLAGS(sv) & SVs_PADTMP)
#ifndef PERL_CORE
#define SvPADMY_on(sv) SvPADTMP_off(sv)
#endif
#define SvPADTMP(sv) (SvFLAGS(sv) & (SVs_PADTMP))
#define SvPADSTALE(sv) (SvFLAGS(sv) & (SVs_PADSTALE))
#define SvPADTMP_on(sv) (SvFLAGS(sv) |= SVs_PADTMP)
#define SvPADTMP_off(sv) (SvFLAGS(sv) &= ~SVs_PADTMP)
#define SvPADSTALE_on(sv) S_SvPADSTALE_on(MUTABLE_SV(sv))
#define SvPADSTALE_off(sv) S_SvPADSTALE_off(MUTABLE_SV(sv))
#define SvTEMP(sv) (SvFLAGS(sv) & SVs_TEMP)
#define SvTEMP_on(sv) (SvFLAGS(sv) |= SVs_TEMP)
#define SvTEMP_off(sv) (SvFLAGS(sv) &= ~SVs_TEMP)
#define SvOBJECT(sv) (SvFLAGS(sv) & SVs_OBJECT)
#define SvOBJECT_on(sv) (SvFLAGS(sv) |= SVs_OBJECT)
#define SvOBJECT_off(sv) (SvFLAGS(sv) &= ~SVs_OBJECT)
#define SvREADONLY(sv) (SvFLAGS(sv) & (SVf_READONLY|SVf_PROTECT))
#ifdef PERL_CORE
#define SvREADONLY_on(sv) (SvFLAGS(sv) |= (SVf_READONLY|SVf_PROTECT))
#define SvREADONLY_off(sv) (SvFLAGS(sv) &=~(SVf_READONLY|SVf_PROTECT))
#else
#define SvREADONLY_on(sv) (SvFLAGS(sv) |= SVf_READONLY)
#define SvREADONLY_off(sv) (SvFLAGS(sv) &= ~SVf_READONLY)
#endif
#define SvSCREAM(sv) ((SvFLAGS(sv) & (SVp_SCREAM|SVp_POK)) == (SVp_SCREAM|SVp_POK))
#define SvSCREAM_on(sv) (SvFLAGS(sv) |= SVp_SCREAM)
#define SvSCREAM_off(sv) (SvFLAGS(sv) &= ~SVp_SCREAM)
#ifndef PERL_CORE
#define SvCOMPILED(sv) 0
#define SvCOMPILED_on(sv) 
#define SvCOMPILED_off(sv) 
#endif
#if defined (DEBUGGING) && defined(__GNUC__) && !defined(PERL_GCC_BRACE_GROUPS_FORBIDDEN)
#define SvTAIL(sv) ({ const SV *const _svtail = (const SV *)(sv); assert(SvTYPE(_svtail) != SVt_PVAV); assert(SvTYPE(_svtail) != SVt_PVHV); assert(!(SvFLAGS(_svtail) & (SVf_NOK|SVp_NOK))); assert(SvVALID(_svtail)); ((XPVNV*)SvANY(_svtail))->xnv_u.xnv_bm_tail; })
#else
#define SvTAIL(_svtail) (((XPVNV*)SvANY(_svtail))->xnv_u.xnv_bm_tail)
#endif
#define SvVALID(_svvalid) ( SvPOKp(_svvalid) && SvSMAGICAL(_svvalid) && SvMAGIC(_svvalid) && (SvMAGIC(_svvalid)->mg_type == PERL_MAGIC_bm || mg_find(_svvalid, PERL_MAGIC_bm)) )
#define SvRVx(sv) SvRV(sv)
#ifdef PERL_DEBUG_COW
#define SvIVX(sv) (0 + ((XPVIV*) SvANY(sv))->xiv_iv)
#define SvUVX(sv) (0 + ((XPVUV*) SvANY(sv))->xuv_uv)
#define SvNVX(sv) (-0.0 + ((XPVNV*) SvANY(sv))->xnv_u.xnv_nv)
#define SvRV(sv) (0 + (sv)->sv_u.svu_rv)
#define SvRV_const(sv) (0 + (sv)->sv_u.svu_rv)
# if defined (PERL_CORE) && PERL_DEBUG_COW > 1
#define SvPVX(sv) (0 + (assert_(!SvREADONLY(sv)) (sv)->sv_u.svu_pv))
# else
#define SvPVX(sv) SvPVX_mutable(sv)
# endif
#define SvCUR(sv) (0 + ((XPV*) SvANY(sv))->xpv_cur)
#define SvLEN(sv) (0 + ((XPV*) SvANY(sv))->xpv_len)
#define SvEND(sv) ((sv)->sv_u.svu_pv + ((XPV*)SvANY(sv))->xpv_cur)
#define SvMAGIC(sv) (0 + *(assert_(SvTYPE(sv) >= SVt_PVMG) &((XPVMG*) SvANY(sv))->xmg_u.xmg_magic))
#define SvSTASH(sv) (0 + *(assert_(SvTYPE(sv) >= SVt_PVMG) &((XPVMG*) SvANY(sv))->xmg_stash))
#else
#define SvLEN(sv) ((XPV*) SvANY(sv))->xpv_len
#define SvEND(sv) ((sv)->sv_u.svu_pv + ((XPV*)SvANY(sv))->xpv_cur)
# if defined (DEBUGGING) && defined(__GNUC__) && !defined(PERL_GCC_BRACE_GROUPS_FORBIDDEN)
#define SvPVX(sv) (*({ SV *const _svpvx = MUTABLE_SV(sv); assert(PL_valid_types_PVX[SvTYPE(_svpvx) & SVt_MASK]); assert(!isGV_with_GP(_svpvx)); assert(!(SvTYPE(_svpvx) == SVt_PVIO && !(IoFLAGS(_svpvx) & IOf_FAKE_DIRP))); &((_svpvx)->sv_u.svu_pv); }))
#define SvCUR(sv) (*({ const SV *const _svcur = (const SV *)(sv); assert(PL_valid_types_PVX[SvTYPE(_svcur) & SVt_MASK] || SvTYPE(_svcur) == SVt_REGEXP); assert(!isGV_with_GP(_svcur)); assert(!(SvTYPE(_svcur) == SVt_PVIO && !(IoFLAGS(_svcur) & IOf_FAKE_DIRP))); &(((XPV*) MUTABLE_PTR(SvANY(_svcur)))->xpv_cur); }))
#define SvIVX(sv) (*({ const SV *const _svivx = (const SV *)(sv); assert(PL_valid_types_IVX[SvTYPE(_svivx) & SVt_MASK]); assert(!isGV_with_GP(_svivx)); &(((XPVIV*) MUTABLE_PTR(SvANY(_svivx)))->xiv_iv); }))
#define SvUVX(sv) (*({ const SV *const _svuvx = (const SV *)(sv); assert(PL_valid_types_IVX[SvTYPE(_svuvx) & SVt_MASK]); assert(!isGV_with_GP(_svuvx)); &(((XPVUV*) MUTABLE_PTR(SvANY(_svuvx)))->xuv_uv); }))
#define SvNVX(sv) (*({ const SV *const _svnvx = (const SV *)(sv); assert(PL_valid_types_NVX[SvTYPE(_svnvx) & SVt_MASK]); assert(!isGV_with_GP(_svnvx)); &(((XPVNV*) MUTABLE_PTR(SvANY(_svnvx)))->xnv_u.xnv_nv); }))
#define SvRV(sv) (*({ SV *const _svrv = MUTABLE_SV(sv); assert(PL_valid_types_RV[SvTYPE(_svrv) & SVt_MASK]); assert(!isGV_with_GP(_svrv)); assert(!(SvTYPE(_svrv) == SVt_PVIO && !(IoFLAGS(_svrv) & IOf_FAKE_DIRP))); &((_svrv)->sv_u.svu_rv); }))
#define SvRV_const(sv) ({ const SV *const _svrv = (const SV *)(sv); assert(PL_valid_types_RV[SvTYPE(_svrv) & SVt_MASK]); assert(!isGV_with_GP(_svrv)); assert(!(SvTYPE(_svrv) == SVt_PVIO && !(IoFLAGS(_svrv) & IOf_FAKE_DIRP))); (_svrv)->sv_u.svu_rv; })
#define SvMAGIC(sv) (*({ const SV *const _svmagic = (const SV *)(sv); assert(SvTYPE(_svmagic) >= SVt_PVMG); &(((XPVMG*) MUTABLE_PTR(SvANY(_svmagic)))->xmg_u.xmg_magic); }))
#define SvSTASH(sv) (*({ const SV *const _svstash = (const SV *)(sv); assert(SvTYPE(_svstash) >= SVt_PVMG); &(((XPVMG*) MUTABLE_PTR(SvANY(_svstash)))->xmg_stash); }))
# else
#define SvPVX(sv) ((sv)->sv_u.svu_pv)
#define SvCUR(sv) ((XPV*) SvANY(sv))->xpv_cur
#define SvIVX(sv) ((XPVIV*) SvANY(sv))->xiv_iv
#define SvUVX(sv) ((XPVUV*) SvANY(sv))->xuv_uv
#define SvNVX(sv) ((XPVNV*) SvANY(sv))->xnv_u.xnv_nv
#define SvRV(sv) ((sv)->sv_u.svu_rv)
#define SvRV_const(sv) (0 + (sv)->sv_u.svu_rv)
#define SvMAGIC(sv) ((XPVMG*) SvANY(sv))->xmg_u.xmg_magic
#define SvSTASH(sv) ((XPVMG*) SvANY(sv))->xmg_stash
# endif
#endif
#ifndef PERL_POISON
#define SvPVX_mutable(sv) (0 + (sv)->sv_u.svu_pv)
#define SvPVX_const(sv) ((const char*)(0 + (sv)->sv_u.svu_pv))
#else
#define SvPVX_mutable(sv) ((sv)->sv_u.svu_pv)
#define SvPVX_const(sv) ((const char*)((sv)->sv_u.svu_pv))
#endif
#define SvIVXx(sv) SvIVX(sv)
#define SvUVXx(sv) SvUVX(sv)
#define SvNVXx(sv) SvNVX(sv)
#define SvPVXx(sv) SvPVX(sv)
#define SvLENx(sv) SvLEN(sv)
#define SvENDx(sv) ((PL_Sv = (sv)), SvEND(PL_Sv))
#define SvIV_please(sv) STMT_START {if (!SvIOKp(sv) && (SvFLAGS(sv) & (SVf_NOK|SVf_POK))) (void) SvIV(sv); } STMT_END
#define SvIV_please_nomg(sv) (!(SvFLAGS(sv) & (SVf_IOK|SVp_IOK)) && (SvFLAGS(sv) & (SVf_NOK|SVf_POK)) ? (sv_2iv_flags(sv, 0), SvIOK(sv)) : SvIOK(sv))
#define SvIV_set(sv,val) STMT_START { assert(PL_valid_types_IV_set[SvTYPE(sv) & SVt_MASK]); assert(!isGV_with_GP(sv)); (((XPVIV*) SvANY(sv))->xiv_iv = (val)); } STMT_END
#define SvNV_set(sv,val) STMT_START { assert(PL_valid_types_NV_set[SvTYPE(sv) & SVt_MASK]); assert(!isGV_with_GP(sv)); (((XPVNV*)SvANY(sv))->xnv_u.xnv_nv = (val)); } STMT_END
#define SvPV_set(sv,val) STMT_START { assert(PL_valid_types_PVX[SvTYPE(sv) & SVt_MASK]); assert(!isGV_with_GP(sv)); assert(!(SvTYPE(sv) == SVt_PVIO && !(IoFLAGS(sv) & IOf_FAKE_DIRP))); ((sv)->sv_u.svu_pv = (val)); } STMT_END
#define SvUV_set(sv,val) STMT_START { assert(PL_valid_types_IV_set[SvTYPE(sv) & SVt_MASK]); assert(!isGV_with_GP(sv)); (((XPVUV*)SvANY(sv))->xuv_uv = (val)); } STMT_END
#define SvRV_set(sv,val) STMT_START { assert(PL_valid_types_RV[SvTYPE(sv) & SVt_MASK]); assert(!isGV_with_GP(sv)); assert(!(SvTYPE(sv) == SVt_PVIO && !(IoFLAGS(sv) & IOf_FAKE_DIRP))); ((sv)->sv_u.svu_rv = (val)); } STMT_END
#define SvMAGIC_set(sv,val) STMT_START { assert(SvTYPE(sv) >= SVt_PVMG); (((XPVMG*)SvANY(sv))->xmg_u.xmg_magic = (val)); } STMT_END
#define SvSTASH_set(sv,val) STMT_START { assert(SvTYPE(sv) >= SVt_PVMG); (((XPVMG*) SvANY(sv))->xmg_stash = (val)); } STMT_END
#define SvCUR_set(sv,val) STMT_START { assert(PL_valid_types_PVX[SvTYPE(sv) & SVt_MASK] || SvTYPE(sv) == SVt_REGEXP); assert(!isGV_with_GP(sv)); assert(!(SvTYPE(sv) == SVt_PVIO && !(IoFLAGS(sv) & IOf_FAKE_DIRP))); (((XPV*) SvANY(sv))->xpv_cur = (val)); } STMT_END
#define SvLEN_set(sv,val) STMT_START { assert(PL_valid_types_PVX[SvTYPE(sv) & SVt_MASK]); assert(!isGV_with_GP(sv)); assert(!(SvTYPE(sv) == SVt_PVIO && !(IoFLAGS(sv) & IOf_FAKE_DIRP))); (((XPV*) SvANY(sv))->xpv_len = (val)); } STMT_END
#define SvEND_set(sv,val) STMT_START { assert(SvTYPE(sv) >= SVt_PV); SvCUR_set(sv, (val) - SvPVX(sv)); } STMT_END
#define SvPV_renew(sv,n) STMT_START { SvLEN_set(sv, n); SvPV_set((sv), (MEM_WRAP_CHECK_(n,char) (char*)saferealloc((Malloc_t)SvPVX(sv), (MEM_SIZE)((n))))); } STMT_END
#define SvPV_shrink_to_cur(sv) STMT_START { const STRLEN _lEnGtH = SvCUR(sv) + 1; SvPV_renew(sv, _lEnGtH); } STMT_END
#define SvPV_free(sv) STMT_START { assert(SvTYPE(sv) >= SVt_PV); if (SvLEN(sv)) { assert(!SvROK(sv)); if(UNLIKELY(SvOOK(sv))) { STRLEN zok; SvOOK_offset(sv, zok); SvPV_set(sv, SvPVX_mutable(sv) - zok); SvFLAGS(sv) &= ~SVf_OOK; } Safefree(SvPVX(sv)); } } STMT_END
#ifdef PERL_CORE
#define prepare_SV_for_RV(sv) STMT_START { if (SvTYPE(sv) < SVt_PV && SvTYPE(sv) != SVt_IV) sv_upgrade(sv, SVt_IV); else if (SvTYPE(sv) >= SVt_PV) { SvPV_free(sv); SvLEN_set(sv, 0); SvCUR_set(sv, 0); } } STMT_END
#endif
#ifndef PERL_CORE
#define BmFLAGS(sv) (SvTAIL(sv) ? FBMcf_TAIL : 0)
#endif
#if defined (DEBUGGING) && defined(__GNUC__) && !defined(PERL_GCC_BRACE_GROUPS_FORBIDDEN)
#define BmUSEFUL(sv) (*({ SV *const _bmuseful = MUTABLE_SV(sv); assert(SvTYPE(_bmuseful) >= SVt_PVIV); assert(SvVALID(_bmuseful)); assert(!SvIOK(_bmuseful)); &(((XPVIV*) SvANY(_bmuseful))->xiv_u.xivu_iv); }))
#else
#define BmUSEFUL(sv) ((XPVIV*) SvANY(sv))->xiv_u.xivu_iv
#endif
#ifndef PERL_CORE
#define BmRARE(sv) 0
#define BmPREVIOUS(sv) 0
#endif
#define FmLINES(sv) ((XPVIV*) SvANY(sv))->xiv_iv
#define LvTYPE(sv) ((XPVLV*) SvANY(sv))->xlv_type
#define LvTARG(sv) ((XPVLV*) SvANY(sv))->xlv_targ
#define LvTARGOFF(sv) ((XPVLV*) SvANY(sv))->xlv_targoff
#define LvSTARGOFF(sv) ((XPVLV*) SvANY(sv))->xlv_targoff_u.xlvu_stargoff
#define LvTARGLEN(sv) ((XPVLV*) SvANY(sv))->xlv_targlen
#define LvFLAGS(sv) ((XPVLV*) SvANY(sv))->xlv_flags
#define IoIFP(sv) (sv)->sv_u.svu_fp
#define IoOFP(sv) ((XPVIO*) SvANY(sv))->xio_ofp
#define IoDIRP(sv) ((XPVIO*) SvANY(sv))->xio_dirp
#define IoANY(sv) ((XPVIO*) SvANY(sv))->xio_any
#define IoLINES(sv) ((XPVIO*) SvANY(sv))->xiv_u.xivu_iv
#define IoPAGE(sv) ((XPVIO*) SvANY(sv))->xio_page
#define IoPAGE_LEN(sv) ((XPVIO*) SvANY(sv))->xio_page_len
#define IoLINES_LEFT(sv) ((XPVIO*) SvANY(sv))->xio_lines_left
#define IoTOP_NAME(sv) ((XPVIO*) SvANY(sv))->xio_top_name
#define IoTOP_GV(sv) ((XPVIO*) SvANY(sv))->xio_top_gv
#define IoFMT_NAME(sv) ((XPVIO*) SvANY(sv))->xio_fmt_name
#define IoFMT_GV(sv) ((XPVIO*) SvANY(sv))->xio_fmt_gv
#define IoBOTTOM_NAME(sv) ((XPVIO*) SvANY(sv))->xio_bottom_name
#define IoBOTTOM_GV(sv) ((XPVIO*) SvANY(sv))->xio_bottom_gv
#define IoTYPE(sv) ((XPVIO*) SvANY(sv))->xio_type
#define IoFLAGS(sv) ((XPVIO*) SvANY(sv))->xio_flags
#define IoTYPE_RDONLY '<'
#define IoTYPE_WRONLY '>'
#define IoTYPE_RDWR '+'
#define IoTYPE_APPEND 'a'
#define IoTYPE_PIPE '|'
#define IoTYPE_STD '-'
#define IoTYPE_SOCKET 's'
#define IoTYPE_CLOSED ' '
#define IoTYPE_IMPLICIT 'I'
#define IoTYPE_NUMERIC '#'
#define sv_taint(sv) sv_magic((sv), NULL, PERL_MAGIC_taint, NULL, 0)
#ifdef NO_TAINT_SUPPORT
#define SvTAINTED(sv) 0
#else
#define SvTAINTED(sv) (SvMAGICAL(sv) && sv_tainted(sv))
#endif
#define SvTAINTED_on(sv) STMT_START{ if(UNLIKELY(TAINTING_get)){sv_taint(sv);} }STMT_END
#define SvTAINTED_off(sv) STMT_START{ if(UNLIKELY(TAINTING_get)){sv_untaint(sv);} }STMT_END
#define SvTAINT(sv) STMT_START { assert(TAINTING_get || !TAINT_get); if (UNLIKELY(TAINT_get)) SvTAINTED_on(sv); } STMT_END
#define SvIV(sv) (SvIOK_nog(sv) ? SvIVX(sv) : sv_2iv(sv))
#define SvUV(sv) (SvUOK_nog(sv) ? SvUVX(sv) : sv_2uv(sv))
#define SvNV(sv) (SvNOK_nog(sv) ? SvNVX(sv) : sv_2nv(sv))
#define SvIV_nomg(sv) (SvIOK(sv) ? SvIVX(sv) : sv_2iv_flags(sv, 0))
#define SvUV_nomg(sv) (SvIOK(sv) ? SvUVX(sv) : sv_2uv_flags(sv, 0))
#define SvNV_nomg(sv) (SvNOK(sv) ? SvNVX(sv) : sv_2nv_flags(sv, 0))
#define SvPV(sv,lp) SvPV_flags(sv, lp, SV_GMAGIC)
#define SvPV_const(sv,lp) SvPV_flags_const(sv, lp, SV_GMAGIC)
#define SvPV_mutable(sv,lp) SvPV_flags_mutable(sv, lp, SV_GMAGIC)
#define SvPV_flags(sv,lp,flags) (SvPOK_nog(sv) ? ((lp = SvCUR(sv)), SvPVX(sv)) : sv_2pv_flags(sv, &lp, flags))
#define SvPV_flags_const(sv,lp,flags) (SvPOK_nog(sv) ? ((lp = SvCUR(sv)), SvPVX_const(sv)) : (const char*) sv_2pv_flags(sv, &lp, (flags|SV_CONST_RETURN)))
#define SvPV_flags_const_nolen(sv,flags) (SvPOK_nog(sv) ? SvPVX_const(sv) : (const char*) sv_2pv_flags(sv, 0, (flags|SV_CONST_RETURN)))
#define SvPV_flags_mutable(sv,lp,flags) (SvPOK_nog(sv) ? ((lp = SvCUR(sv)), SvPVX_mutable(sv)) : sv_2pv_flags(sv, &lp, (flags|SV_MUTABLE_RETURN)))
#define SvPV_force(sv,lp) SvPV_force_flags(sv, lp, SV_GMAGIC)
#define SvPV_force_nolen(sv) SvPV_force_flags_nolen(sv, SV_GMAGIC)
#define SvPV_force_mutable(sv,lp) SvPV_force_flags_mutable(sv, lp, SV_GMAGIC)
#define SvPV_force_nomg(sv,lp) SvPV_force_flags(sv, lp, 0)
#define SvPV_force_nomg_nolen(sv) SvPV_force_flags_nolen(sv, 0)
#define SvPV_force_flags(sv,lp,flags) (SvPOK_pure_nogthink(sv) ? ((lp = SvCUR(sv)), SvPVX(sv)) : sv_pvn_force_flags(sv, &lp, flags))
#define SvPV_force_flags_nolen(sv,flags) (SvPOK_pure_nogthink(sv) ? SvPVX(sv) : sv_pvn_force_flags(sv, 0, flags))
#define SvPV_force_flags_mutable(sv,lp,flags) (SvPOK_pure_nogthink(sv) ? ((lp = SvCUR(sv)), SvPVX_mutable(sv)) : sv_pvn_force_flags(sv, &lp, flags|SV_MUTABLE_RETURN))
#define SvPV_nolen(sv) (SvPOK_nog(sv) ? SvPVX(sv) : sv_2pv_flags(sv, 0, SV_GMAGIC))
#define SvPV_nomg_nolen(sv) (SvPOK_nog(sv) ? SvPVX(sv) : sv_2pv_flags(sv, 0, 0))
#define SvPV_nolen_const(sv) (SvPOK_nog(sv) ? SvPVX_const(sv) : sv_2pv_flags(sv, 0, SV_GMAGIC|SV_CONST_RETURN))
#define SvPV_nomg(sv,lp) SvPV_flags(sv, lp, 0)
#define SvPV_nomg_const(sv,lp) SvPV_flags_const(sv, lp, 0)
#define SvPV_nomg_const_nolen(sv) SvPV_flags_const_nolen(sv, 0)
#define SvPVutf8(sv,lp) (SvPOK_utf8_nog(sv) ? ((lp = SvCUR(sv)), SvPVX(sv)) : sv_2pvutf8(sv, &lp))
#define SvPVutf8_force(sv,lp) (SvPOK_utf8_pure_nogthink(sv) ? ((lp = SvCUR(sv)), SvPVX(sv)) : sv_pvutf8n_force(sv, &lp))
#define SvPVutf8_nolen(sv) (SvPOK_utf8_nog(sv) ? SvPVX(sv) : sv_2pvutf8(sv, 0))
#define SvPVbyte(sv,lp) (SvPOK_byte_nog(sv) ? ((lp = SvCUR(sv)), SvPVX(sv)) : sv_2pvbyte(sv, &lp))
#define SvPVbyte_force(sv,lp) (SvPOK_byte_pure_nogthink(sv) ? ((lp = SvCUR(sv)), SvPVX(sv)) : sv_pvbyten_force(sv, &lp))
#define SvPVbyte_nolen(sv) (SvPOK_byte_nog(sv) ? SvPVX(sv) : sv_2pvbyte(sv, 0))
#define SvPVx_force(sv,lp) sv_pvn_force(sv, &lp)
#define SvPVutf8x_force(sv,lp) sv_pvutf8n_force(sv, &lp)
#define SvPVbytex_force(sv,lp) sv_pvbyten_force(sv, &lp)
#define SvTRUE(sv) (LIKELY(sv) && (UNLIKELY(SvGMAGICAL(sv)) ? sv_2bool(sv) : SvTRUE_common(sv, sv_2bool_nomg(sv))))
#define SvTRUE_nomg(sv) (LIKELY(sv) && ( SvTRUE_common(sv, sv_2bool_nomg(sv))))
#define SvTRUE_NN(sv) (UNLIKELY(SvGMAGICAL(sv)) ? sv_2bool(sv) : SvTRUE_common(sv, sv_2bool_nomg(sv)))
#define SvTRUE_nomg_NN(sv) ( SvTRUE_common(sv, sv_2bool_nomg(sv)))
#define SvTRUE_common(sv,fallback) ( !SvOK(sv) ? 0 : SvPOK(sv) ? SvPVXtrue(sv) : (SvFLAGS(sv) & (SVf_IOK|SVf_NOK)) ? ( (SvIOK(sv) && SvIVX(sv) != 0) || (SvNOK(sv) && SvNVX(sv) != 0.0)) : (fallback))
#if defined(__GNUC__) && !defined(PERL_GCC_BRACE_GROUPS_FORBIDDEN)
#define SvIVx(sv) ({SV *_sv = MUTABLE_SV(sv); SvIV(_sv); })
#define SvUVx(sv) ({SV *_sv = MUTABLE_SV(sv); SvUV(_sv); })
#define SvNVx(sv) ({SV *_sv = MUTABLE_SV(sv); SvNV(_sv); })
#define SvPVx(sv,lp) ({SV *_sv = (sv); SvPV(_sv, lp); })
#define SvPVx_const(sv,lp) ({SV *_sv = (sv); SvPV_const(_sv, lp); })
#define SvPVx_nolen(sv) ({SV *_sv = (sv); SvPV_nolen(_sv); })
#define SvPVx_nolen_const(sv) ({SV *_sv = (sv); SvPV_nolen_const(_sv); })
#define SvPVutf8x(sv,lp) ({SV *_sv = (sv); SvPVutf8(_sv, lp); })
#define SvPVbytex(sv,lp) ({SV *_sv = (sv); SvPVbyte(_sv, lp); })
#define SvPVbytex_nolen(sv) ({SV *_sv = (sv); SvPVbyte_nolen(_sv); })
#define SvTRUEx(sv) ({SV *_sv = (sv); SvTRUE(_sv); })
#define SvTRUEx_nomg(sv) ({SV *_sv = (sv); SvTRUE_nomg(_sv); })
#else
#define SvIVx(sv) ((PL_Sv = (sv)), SvIV(PL_Sv))
#define SvUVx(sv) ((PL_Sv = (sv)), SvUV(PL_Sv))
#define SvNVx(sv) ((PL_Sv = (sv)), SvNV(PL_Sv))
#define SvPVx(sv,lp) ((PL_Sv = (sv)), SvPV(PL_Sv, lp))
#define SvPVx_const(sv,lp) ((PL_Sv = (sv)), SvPV_const(PL_Sv, lp))
#define SvPVx_nolen(sv) ((PL_Sv = (sv)), SvPV_nolen(PL_Sv))
#define SvPVx_nolen_const(sv) ((PL_Sv = (sv)), SvPV_nolen_const(PL_Sv))
#define SvPVutf8x(sv,lp) ((PL_Sv = (sv)), SvPVutf8(PL_Sv, lp))
#define SvPVbytex(sv,lp) ((PL_Sv = (sv)), SvPVbyte(PL_Sv, lp))
#define SvPVbytex_nolen(sv) ((PL_Sv = (sv)), SvPVbyte_nolen(PL_Sv))
#define SvTRUEx(sv) ((PL_Sv = (sv)), SvTRUE(PL_Sv))
#define SvTRUEx_nomg(sv) ((PL_Sv = (sv)), SvTRUE_nomg(PL_Sv))
#endif
#define SvPVXtrue(sv) ( ((XPV*)SvANY((sv))) && ( ((XPV*)SvANY((sv)))->xpv_cur > 1 || ( ((XPV*)SvANY((sv)))->xpv_cur && *(sv)->sv_u.svu_pv != '0' ) ) )
#define SvIsCOW(sv) (SvFLAGS(sv) & SVf_IsCOW)
#define SvIsCOW_on(sv) (SvFLAGS(sv) |= SVf_IsCOW)
#define SvIsCOW_off(sv) (SvFLAGS(sv) &= ~SVf_IsCOW)
#define SvIsCOW_shared_hash(sv) (SvIsCOW(sv) && SvLEN(sv) == 0)
#define SvSHARED_HEK_FROM_PV(pvx) ((struct hek*)(pvx - STRUCT_OFFSET(struct hek, hek_key)))
#define SvSHARED_HASH(sv) (0 + SvSHARED_HEK_FROM_PV(SvPVX_const(sv))->hek_hash)
#define SV_UTF8_NO_ENCODING 0
#define SV_IMMEDIATE_UNREF 1
#define SV_GMAGIC 2
#define SV_COW_DROP_PV 4
#define SV_NOSTEAL 16
#define SV_CONST_RETURN 32
#define SV_MUTABLE_RETURN 64
#define SV_SMAGIC 128
#define SV_HAS_TRAILING_NUL 256
#define SV_COW_SHARED_HASH_KEYS 512
#define SV_COW_OTHER_PVS 1024
#define SV_UNDEF_RETURNS_NULL 2048
#define SV_FORCE_UTF8_UPGRADE 4096
#define SV_SKIP_OVERLOAD 8192
#define SV_CATBYTES 16384
#define SV_CATUTF8 32768
#ifdef PERL_CORE
# ifndef SV_DO_COW_SVSETSV
#define SV_DO_COW_SVSETSV SV_COW_SHARED_HASH_KEYS|SV_COW_OTHER_PVS
# endif
#endif
#ifndef SV_DO_COW_SVSETSV
#define SV_DO_COW_SVSETSV 0
#endif
#define sv_unref(sv) sv_unref_flags(sv, 0)
#define sv_force_normal(sv) sv_force_normal_flags(sv, 0)
#define sv_usepvn(sv,p,l) sv_usepvn_flags(sv, p, l, 0)
#define sv_usepvn_mg(sv,p,l) sv_usepvn_flags(sv, p, l, SV_SMAGIC)
#define SV_CHECK_THINKFIRST_COW_DROP(sv) if (SvTHINKFIRST(sv)) sv_force_normal_flags(sv, SV_COW_DROP_PV)
#ifdef PERL_COPY_ON_WRITE
#define SvCANCOW(sv) (SvIsCOW(sv) ? SvLEN(sv) ? CowREFCNT(sv) != SV_COW_REFCNT_MAX : 1 : (SvFLAGS(sv) & CAN_COW_MASK) == CAN_COW_FLAGS && SvCUR(sv)+1 < SvLEN(sv))
#define CowREFCNT(sv) (*(U8 *)(SvPVX(sv)+SvLEN(sv)-1))
#define SV_COW_REFCNT_MAX ((1 << sizeof(U8)*8) - 1)
#define CAN_COW_MASK (SVf_POK|SVf_ROK|SVp_POK|SVf_FAKE| SVf_OOK|SVf_BREAK|SVf_READONLY|SVf_PROTECT)
#endif
#define CAN_COW_FLAGS (SVp_POK|SVf_POK)
#define SV_CHECK_THINKFIRST(sv) if (SvTHINKFIRST(sv)) sv_force_normal_flags(sv, 0)
#define sv_pv(sv) SvPV_nolen(sv)
#define sv_pvutf8(sv) SvPVutf8_nolen(sv)
#define sv_pvbyte(sv) SvPVbyte_nolen(sv)
#define sv_pvn_force_nomg(sv,lp) sv_pvn_force_flags(sv, lp, 0)
#define sv_utf8_upgrade_flags(sv,flags) sv_utf8_upgrade_flags_grow(sv, flags, 0)
#define sv_utf8_upgrade_nomg(sv) sv_utf8_upgrade_flags(sv, 0)
#define sv_catpvn_nomg(dsv,sstr,slen) sv_catpvn_flags(dsv, sstr, slen, 0)
#define sv_catpv_nomg(dsv,sstr) sv_catpv_flags(dsv, sstr, 0)
#define sv_setsv(dsv,ssv) sv_setsv_flags(dsv, ssv, SV_GMAGIC|SV_DO_COW_SVSETSV)
#define sv_setsv_nomg(dsv,ssv) sv_setsv_flags(dsv, ssv, SV_DO_COW_SVSETSV)
#define sv_catsv(dsv,ssv) sv_catsv_flags(dsv, ssv, SV_GMAGIC)
#define sv_catsv_nomg(dsv,ssv) sv_catsv_flags(dsv, ssv, 0)
#define sv_catsv_mg(dsv,ssv) sv_catsv_flags(dsv, ssv, SV_GMAGIC|SV_SMAGIC)
#define sv_catpvn(dsv,sstr,slen) sv_catpvn_flags(dsv, sstr, slen, SV_GMAGIC)
#define sv_catpvn_mg(sv,sstr,slen) sv_catpvn_flags(sv, sstr, slen, SV_GMAGIC|SV_SMAGIC);
#define sv_copypv(dsv,ssv) sv_copypv_flags(dsv, ssv, SV_GMAGIC)
#define sv_copypv_nomg(dsv,ssv) sv_copypv_flags(dsv, ssv, 0)
#define sv_2pv(sv,lp) sv_2pv_flags(sv, lp, SV_GMAGIC)
#define sv_2pv_nolen(sv) sv_2pv(sv, 0)
#define sv_2pvbyte_nolen(sv) sv_2pvbyte(sv, 0)
#define sv_2pvutf8_nolen(sv) sv_2pvutf8(sv, 0)
#define sv_2pv_nomg(sv,lp) sv_2pv_flags(sv, lp, 0)
#define sv_pvn_force(sv,lp) sv_pvn_force_flags(sv, lp, SV_GMAGIC)
#define sv_utf8_upgrade(sv) sv_utf8_upgrade_flags(sv, SV_GMAGIC)
#define sv_2iv(sv) sv_2iv_flags(sv, SV_GMAGIC)
#define sv_2uv(sv) sv_2uv_flags(sv, SV_GMAGIC)
#define sv_2nv(sv) sv_2nv_flags(sv, SV_GMAGIC)
#define sv_eq(sv1,sv2) sv_eq_flags(sv1, sv2, SV_GMAGIC)
#define sv_cmp(sv1,sv2) sv_cmp_flags(sv1, sv2, SV_GMAGIC)
#define sv_cmp_locale(sv1,sv2) sv_cmp_locale_flags(sv1, sv2, SV_GMAGIC)
#define sv_collxfrm(sv,nxp) sv_cmp_flags(sv, nxp, SV_GMAGIC)
#define sv_2bool(sv) sv_2bool_flags(sv, SV_GMAGIC)
#define sv_2bool_nomg(sv) sv_2bool_flags(sv, 0)
#define sv_insert(bigstr,offset,len,little,littlelen) Perl_sv_insert_flags(aTHX_ (bigstr),(offset), (len), (little), (littlelen), SV_GMAGIC)
#define sv_mortalcopy(sv) Perl_sv_mortalcopy_flags(aTHX_ sv, SV_GMAGIC|SV_DO_COW_SVSETSV)
#define sv_cathek(sv,hek) STMT_START { HEK * const bmxk = hek; sv_catpvn_flags(sv, HEK_KEY(bmxk), HEK_LEN(bmxk), HEK_UTF8(bmxk) ? SV_CATUTF8 : SV_CATBYTES); } STMT_END
#define sv_catpvn_nomg_utf8_upgrade(dsv,sstr,slen,nsv) STMT_START { if (!(nsv)) nsv = newSVpvn_flags(sstr, slen, SVs_TEMP); else sv_setpvn(nsv, sstr, slen); SvUTF8_off(nsv); sv_utf8_upgrade(nsv); sv_catsv_nomg(dsv, nsv); } STMT_END
#define sv_catpvn_nomg_maybeutf8(dsv,sstr,slen,is_utf8) sv_catpvn_flags(dsv, sstr, slen, (is_utf8)?SV_CATUTF8:SV_CATBYTES)
#if defined(PERL_CORE) || defined(PERL_EXT)
#define sv_or_pv_len_utf8(sv,pv,bytelen) (SvGAMAGIC(sv) ? utf8_length((U8 *)(pv), (U8 *)(pv)+(bytelen)) : sv_len_utf8(sv))
#endif
#define newRV_inc(sv) newRV(sv)
#define SvPVCLEAR(sv) sv_setpv_bufsize(sv,0,0)
#define SvSHARE(sv) PL_sharehook(aTHX_ sv)
#define SvLOCK(sv) PL_lockhook(aTHX_ sv)
#define SvUNLOCK(sv) PL_unlockhook(aTHX_ sv)
#define SvDESTROYABLE(sv) PL_destroyhook(aTHX_ sv)
#define SvGETMAGIC(x) ((void)(UNLIKELY(SvGMAGICAL(x)) && mg_get(x)))
#define SvSETMAGIC(x) STMT_START { if (UNLIKELY(SvSMAGICAL(x))) mg_set(x); } STMT_END
#define SvSetSV_and(dst,src,finally) STMT_START { if (LIKELY((dst) != (src))) { sv_setsv(dst, src); finally; } } STMT_END
#define SvSetSV_nosteal_and(dst,src,finally) STMT_START { if (LIKELY((dst) != (src))) { sv_setsv_flags(dst, src, SV_GMAGIC | SV_NOSTEAL | SV_DO_COW_SVSETSV); finally; } } STMT_END
#define SvSetSV(dst,src) SvSetSV_and(dst,src, ;)
#define SvSetSV_nosteal(dst,src) SvSetSV_nosteal_and(dst,src, ;)
#define SvSetMagicSV(dst,src) SvSetSV_and(dst,src,SvSETMAGIC(dst))
#define SvSetMagicSV_nosteal(dst,src) SvSetSV_nosteal_and(dst,src,SvSETMAGIC(dst))
#if !defined(SKIP_DEBUGGING)
#define SvPEEK(sv) sv_peek(sv)
#else
#define SvPEEK(sv) ""
#endif
#define SvIMMORTAL(sv) (SvREADONLY(sv) && ((sv)==&PL_sv_undef || (sv)==&PL_sv_yes || (sv)==&PL_sv_no || (sv)==&PL_sv_placeholder))
#ifdef DEBUGGING
#define SvREFCNT_IMMORTAL 1000
#else
#define SvREFCNT_IMMORTAL ((~(U32)0)/2)
#endif
#define boolSV(b) ((b) ? &PL_sv_yes : &PL_sv_no)
#define isGV(sv) (SvTYPE(sv) == SVt_PVGV)
#define isGV_with_GP(pwadak) (((SvFLAGS(pwadak) & (SVp_POK|SVpgv_GP)) == SVpgv_GP) && (SvTYPE(pwadak) == SVt_PVGV || SvTYPE(pwadak) == SVt_PVLV))
#define isGV_with_GP_on(sv) STMT_START { assert (SvTYPE(sv) == SVt_PVGV || SvTYPE(sv) == SVt_PVLV); assert (!SvPOKp(sv)); assert (!SvIOKp(sv)); (SvFLAGS(sv) |= SVpgv_GP); } STMT_END
#define isGV_with_GP_off(sv) STMT_START { assert (SvTYPE(sv) == SVt_PVGV || SvTYPE(sv) == SVt_PVLV); assert (!SvPOKp(sv)); assert (!SvIOKp(sv)); (SvFLAGS(sv) &= ~SVpgv_GP); } STMT_END
#define isREGEXP(sv) (SvTYPE(sv) == SVt_REGEXP || (SvFLAGS(sv) & (SVTYPEMASK|SVp_POK|SVpgv_GP|SVf_FAKE)) == (SVt_PVLV|SVf_FAKE))
#ifdef PERL_ANY_COW
#define SvGROW(sv,len) (SvIsCOW(sv) || SvLEN(sv) < (len) ? sv_grow(sv,len) : SvPVX(sv))
#else
#define SvGROW(sv,len) (SvLEN(sv) < (len) ? sv_grow(sv,len) : SvPVX(sv))
#endif
#define SvGROW_mutable(sv,len) (SvLEN(sv) < (len) ? sv_grow(sv,len) : SvPVX_mutable(sv))
#define Sv_Grow sv_grow
#define CLONEf_COPY_STACKS 1
#define CLONEf_KEEP_PTR_TABLE 2
#define CLONEf_CLONE_HOST 4
#define CLONEf_JOIN_IN 8
#define newSVpvn_utf8(s,len,u) newSVpvn_flags((s), (len), (u) ? SVf_UTF8 : 0)
#define newSVpadname(pn) newSVpvn_utf8(PadnamePV(pn), PadnameLEN(pn), TRUE)
#ifdef DEBUGGING
#define SvOOK_offset(sv,offset) STMT_START { assert(sizeof(offset) == sizeof(STRLEN)); if (SvOOK(sv)) { const U8 *_crash = (U8*)SvPVX_const(sv); (offset) = *--_crash; if (!(offset)) { _crash -= sizeof(STRLEN); Copy(_crash, (U8 *)&(offset), sizeof(STRLEN), U8); } { const U8 *const _bonk = (U8*)SvPVX_const(sv) - (offset); while (_crash > _bonk) { --_crash; assert (*_crash == (U8)PTR2UV(_crash)); } } } else { (offset) = 0; } } STMT_END
#else
#define SvOOK_offset(sv,offset) STMT_START { assert(sizeof(offset) == sizeof(STRLEN)); if (SvOOK(sv)) { (offset) = ((U8*)SvPVX_const(sv))[-1]; if (!(offset)) { Copy(SvPVX_const(sv) - 1 - sizeof(STRLEN), (U8*)&(offset), sizeof(STRLEN), U8); } } else { (offset) = 0; } } STMT_END
#endif
#define newIO() MUTABLE_IO(newSV_type(SVt_PVIO))
#define SV_CONST(name) PL_sv_consts[SV_CONST_ ##name] ? PL_sv_consts[SV_CONST_ ##name] : (PL_sv_consts[SV_CONST_ ##name] = newSVpv_share(#name, 0))
#define SV_CONST_TIESCALAR 0
#define SV_CONST_TIEARRAY 1
#define SV_CONST_TIEHASH 2
#define SV_CONST_TIEHANDLE 3
#define SV_CONST_FETCH 4
#define SV_CONST_FETCHSIZE 5
#define SV_CONST_STORE 6
#define SV_CONST_STORESIZE 7
#define SV_CONST_EXISTS 8
#define SV_CONST_PUSH 9
#define SV_CONST_POP 10
#define SV_CONST_SHIFT 11
#define SV_CONST_UNSHIFT 12
#define SV_CONST_SPLICE 13
#define SV_CONST_EXTEND 14
#define SV_CONST_FIRSTKEY 15
#define SV_CONST_NEXTKEY 16
#define SV_CONST_SCALAR 17
#define SV_CONST_OPEN 18
#define SV_CONST_WRITE 19
#define SV_CONST_PRINT 20
#define SV_CONST_PRINTF 21
#define SV_CONST_READ 22
#define SV_CONST_READLINE 23
#define SV_CONST_GETC 24
#define SV_CONST_SEEK 25
#define SV_CONST_TELL 26
#define SV_CONST_EOF 27
#define SV_CONST_BINMODE 28
#define SV_CONST_FILENO 29
#define SV_CONST_CLOSE 30
#define SV_CONST_DELETE 31
#define SV_CONST_CLEAR 32
#define SV_CONST_UNTIE 33
#define SV_CONST_DESTROY 34
#define SV_CONSTS_COUNT 35
#ifdef PERL_CORE
#define SET_SVANY_FOR_BODYLESS_IV(sv) SvANY(sv) = (XPVIV*)((char*)&(sv->sv_u.svu_iv) - STRUCT_OFFSET(XPVIV, xiv_iv))
#define SET_SVANY_FOR_BODYLESS_NV(sv) SvANY(sv) = (XPVNV*)((char*)&(sv->sv_u.svu_nv) - STRUCT_OFFSET(XPVNV, xnv_u.xnv_nv))
#endif
