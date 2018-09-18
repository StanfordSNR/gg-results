// GGHASH:VmqIbPZSBZBipSTNAGC1_TciJWqamBe.K_3O6cMsHdLk000029d7
#define GvXPVGV(gv) ((XPVGV*)SvANY(gv))
#if defined (DEBUGGING) && defined(__GNUC__) && !defined(PERL_GCC_BRACE_GROUPS_FORBIDDEN) && !defined(__INTEL_COMPILER)
#define GvGP(gv) (0+(*({GV *const _gvgp = (GV *) (gv); assert(SvTYPE(_gvgp) == SVt_PVGV || SvTYPE(_gvgp) == SVt_PVLV); assert(isGV_with_GP(_gvgp)); &((_gvgp)->sv_u.svu_gp);})))
#define GvGP_set(gv,gp) {GV *const _gvgp = (GV *) (gv); assert(SvTYPE(_gvgp) == SVt_PVGV || SvTYPE(_gvgp) == SVt_PVLV); assert(isGV_with_GP(_gvgp)); (_gvgp)->sv_u.svu_gp = (gp); }
#define GvFLAGS(gv) (*({GV *const _gvflags = (GV *) (gv); assert(SvTYPE(_gvflags) == SVt_PVGV || SvTYPE(_gvflags) == SVt_PVLV); assert(isGV_with_GP(_gvflags)); &(GvXPVGV(_gvflags)->xpv_cur);}))
#define GvSTASH(gv) (*({ GV * const _gvstash = (GV *) (gv); assert(isGV_with_GP(_gvstash)); assert(SvTYPE(_gvstash) == SVt_PVGV || SvTYPE(_gvstash) >= SVt_PVLV); &(GvXPVGV(_gvstash)->xnv_u.xgv_stash); }))
#define GvNAME_HEK(gv) (*({ GV * const _gvname_hek = (GV *) (gv); assert(isGV_with_GP(_gvname_hek)); assert(SvTYPE(_gvname_hek) == SVt_PVGV || SvTYPE(_gvname_hek) >= SVt_PVLV); &(GvXPVGV(_gvname_hek)->xiv_u.xivu_namehek); }))
#define GvNAME_get(gv) ({ assert(GvNAME_HEK(gv)); (char *)HEK_KEY(GvNAME_HEK(gv)); })
#define GvNAMELEN_get(gv) ({ assert(GvNAME_HEK(gv)); HEK_LEN(GvNAME_HEK(gv)); })
#define GvNAMEUTF8(gv) ({ assert(GvNAME_HEK(gv)); HEK_UTF8(GvNAME_HEK(gv)); })
#else
#define GvGP(gv) (0+(gv)->sv_u.svu_gp)
#define GvGP_set(gv,gp) ((gv)->sv_u.svu_gp = (gp))
#define GvFLAGS(gv) (GvXPVGV(gv)->xpv_cur)
#define GvSTASH(gv) (GvXPVGV(gv)->xnv_u.xgv_stash)
#define GvNAME_HEK(gv) (GvXPVGV(gv)->xiv_u.xivu_namehek)
#define GvNAME_get(gv) HEK_KEY(GvNAME_HEK(gv))
#define GvNAMELEN_get(gv) HEK_LEN(GvNAME_HEK(gv))
#define GvNAMEUTF8(gv) HEK_UTF8(GvNAME_HEK(gv))
#endif
#define GvNAME(gv) GvNAME_get(gv)
#define GvNAMELEN(gv) GvNAMELEN_get(gv)
#define GvSV(gv) (GvGP(gv)->gp_sv)
#ifdef PERL_DONT_CREATE_GVSV
#define GvSVn(gv) (*(GvGP(gv)->gp_sv ? &(GvGP(gv)->gp_sv) : &(GvGP(gv_SVadd(gv))->gp_sv)))
#else
#define GvSVn(gv) GvSV(gv)
#endif
#define GvREFCNT(gv) (GvGP(gv)->gp_refcnt)
#define GvIO(gv) ( (gv) && ( SvTYPE((const SV*)(gv)) == SVt_PVGV || SvTYPE((const SV*)(gv)) == SVt_PVLV ) && GvGP(gv) ? GvIOp(gv) : NULL )
#define GvIOp(gv) (GvGP(gv)->gp_io)
#define GvIOn(gv) (GvIO(gv) ? GvIOp(gv) : GvIOp(gv_IOadd(gv)))
#define GvFORM(gv) (GvGP(gv)->gp_form)
#define GvAV(gv) (GvGP(gv)->gp_av)
#define GvAVn(gv) (GvGP(gv)->gp_av ? GvGP(gv)->gp_av : GvGP(gv_AVadd(gv))->gp_av)
#define GvHV(gv) ((GvGP(gv))->gp_hv)
#define GvHVn(gv) (GvGP(gv)->gp_hv ? GvGP(gv)->gp_hv : GvGP(gv_HVadd(gv))->gp_hv)
#define GvCV(gv) (0+GvGP(gv)->gp_cv)
#define GvCV_set(gv,cv) (GvGP(gv)->gp_cv = (cv))
#define GvCVGEN(gv) (GvGP(gv)->gp_cvgen)
#define GvCVu(gv) (GvGP(gv)->gp_cvgen ? NULL : GvGP(gv)->gp_cv)
#define GvGPFLAGS(gv) (GvGP(gv)->gp_flags)
#define GvLINE(gv) (GvGP(gv)->gp_line)
#define GvFILE_HEK(gv) (GvGP(gv)->gp_file_hek)
#define GvFILEx(gv) HEK_KEY(GvFILE_HEK(gv))
#define GvFILE(gv) (GvFILE_HEK(gv) ? GvFILEx(gv) : NULL)
#define GvFILEGV(gv) (GvFILE_HEK(gv) ? gv_fetchfile(GvFILEx(gv)) : NULL)
#define GvEGV(gv) (GvGP(gv)->gp_egv)
#define GvEGVx(gv) (isGV_with_GP(gv) ? GvEGV(gv) : NULL)
#define GvENAME(gv) GvNAME(GvEGV(gv) ? GvEGV(gv) : gv)
#define GvENAMELEN(gv) GvNAMELEN(GvEGV(gv) ? GvEGV(gv) : gv)
#define GvENAMEUTF8(gv) GvNAMEUTF8(GvEGV(gv) ? GvEGV(gv) : gv)
#define GvENAME_HEK(gv) GvNAME_HEK(GvEGV(gv) ? GvEGV(gv) : gv)
#define GvESTASH(gv) GvSTASH(GvEGV(gv) ? GvEGV(gv) : gv)
#define GVf_INTRO 0x01
#define GVf_MULTI 0x02
#define GVf_ASSUMECV 0x04
#define GVf_IMPORTED 0xF0
#define GVf_IMPORTED_SV 0x10
#define GVf_IMPORTED_AV 0x20
#define GVf_IMPORTED_HV 0x40
#define GVf_IMPORTED_CV 0x80
#define GvINTRO(gv) (GvFLAGS(gv) & GVf_INTRO)
#define GvINTRO_on(gv) (GvFLAGS(gv) |= GVf_INTRO)
#define GvINTRO_off(gv) (GvFLAGS(gv) &= ~GVf_INTRO)
#define GvMULTI(gv) (GvFLAGS(gv) & GVf_MULTI)
#define GvMULTI_on(gv) (GvFLAGS(gv) |= GVf_MULTI)
#define GvMULTI_off(gv) (GvFLAGS(gv) &= ~GVf_MULTI)
#define GvASSUMECV(gv) (GvFLAGS(gv) & GVf_ASSUMECV)
#define GvASSUMECV_on(gv) (GvFLAGS(gv) |= GVf_ASSUMECV)
#define GvASSUMECV_off(gv) (GvFLAGS(gv) &= ~GVf_ASSUMECV)
#define GvIMPORTED(gv) (GvFLAGS(gv) & GVf_IMPORTED)
#define GvIMPORTED_on(gv) (GvFLAGS(gv) |= GVf_IMPORTED)
#define GvIMPORTED_off(gv) (GvFLAGS(gv) &= ~GVf_IMPORTED)
#define GvIMPORTED_SV(gv) (GvFLAGS(gv) & GVf_IMPORTED_SV)
#define GvIMPORTED_SV_on(gv) (GvFLAGS(gv) |= GVf_IMPORTED_SV)
#define GvIMPORTED_SV_off(gv) (GvFLAGS(gv) &= ~GVf_IMPORTED_SV)
#define GvIMPORTED_AV(gv) (GvFLAGS(gv) & GVf_IMPORTED_AV)
#define GvIMPORTED_AV_on(gv) (GvFLAGS(gv) |= GVf_IMPORTED_AV)
#define GvIMPORTED_AV_off(gv) (GvFLAGS(gv) &= ~GVf_IMPORTED_AV)
#define GvIMPORTED_HV(gv) (GvFLAGS(gv) & GVf_IMPORTED_HV)
#define GvIMPORTED_HV_on(gv) (GvFLAGS(gv) |= GVf_IMPORTED_HV)
#define GvIMPORTED_HV_off(gv) (GvFLAGS(gv) &= ~GVf_IMPORTED_HV)
#define GvIMPORTED_CV(gv) (GvFLAGS(gv) & GVf_IMPORTED_CV)
#define GvIMPORTED_CV_on(gv) (GvFLAGS(gv) |= GVf_IMPORTED_CV)
#define GvIMPORTED_CV_off(gv) (GvFLAGS(gv) &= ~GVf_IMPORTED_CV)
#ifndef PERL_CORE
#define GvIN_PAD(gv) 0
#define GvIN_PAD_on(gv) NOOP
#define GvIN_PAD_off(gv) NOOP
#define Nullgv Null(GV*)
#endif
#define DM_RUID 0x001
#define DM_EUID 0x002
#define DM_UID (DM_RUID|DM_EUID)
#define DM_ARRAY_ISA 0x004
#define DM_RGID 0x010
#define DM_EGID 0x020
#define DM_GID (DM_RGID|DM_EGID)
#define DM_DELAY 0x100
#define GV_ADD 0x01
#define GV_ADDMULTI 0x02
#define GV_ADDWARN 0x04
#define GV_NOINIT 0x10
#define GV_NOADD_NOINIT 0x20
#define GV_NOEXPAND 0x40
#define GV_NOTQUAL 0x80
#define GV_AUTOLOAD 0x100
#define GV_CROAK 0x200
#define GV_ADDMG 0x400
#define GV_NO_SVGMAGIC 0x800
#define GV_CACHE_ONLY 0x1000
#define GV_SUPER 0x1000
#define GV_AUTOLOAD_ISMETHOD 1
#define GV_NOADD_MASK (SVf_UTF8|GV_NOADD_NOINIT|GV_NOEXPAND|GV_NOTQUAL|GV_ADDMG|GV_NO_SVGMAGIC)
#define gv_fullname3(sv,gv,prefix) gv_fullname4(sv,gv,prefix,TRUE)
#define gv_efullname3(sv,gv,prefix) gv_efullname4(sv,gv,prefix,TRUE)
#define gv_fetchmethod(stash,name) gv_fetchmethod_autoload(stash, name, TRUE)
#define gv_fetchsv_nomg(n,f,t) gv_fetchsv(n,(f)|GV_NO_SVGMAGIC,t)
#define gv_init(gv,stash,name,len,multi) gv_init_pvn(gv,stash,name,len,GV_ADDMULTI*!!(multi))
#define gv_fetchmeth(stash,name,len,level) gv_fetchmeth_pvn(stash, name, len, level, 0)
#define gv_fetchmeth_autoload(stash,name,len,level) gv_fetchmeth_pvn_autoload(stash, name, len, level, 0)
#define gv_fetchmethod_flags(stash,name,flags) gv_fetchmethod_pv_flags(stash, name, flags)
#define gv_autoload4(stash,name,len,method) gv_autoload_pvn(stash, name, len, !!(method))
#define newGVgen(pack) newGVgen_flags(pack, 0)
#define gv_method_changed(gv) ( assert_(isGV_with_GP(gv)) GvREFCNT(gv) > 1 ? (void)++PL_sub_generation : mro_method_changed_in(GvSTASH(gv)) )
#define gv_AVadd(gv) gv_add_by_type((gv), SVt_PVAV)
#define gv_HVadd(gv) gv_add_by_type((gv), SVt_PVHV)
#define gv_IOadd(gv) gv_add_by_type((gv), SVt_PVIO)
#define gv_SVadd(gv) gv_add_by_type((gv), SVt_NULL)
