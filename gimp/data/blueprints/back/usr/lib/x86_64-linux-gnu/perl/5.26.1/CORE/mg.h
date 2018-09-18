// GGHASH:V9n4WG1_PNgMDHb.xK4PALUVUc0YJk9r0.D7T7h1R1jc00000bc5
#define MGf_TAINTEDDIR 1
#define MGf_MINMATCH 1
#define MGf_REQUIRE_GV 1
#define MGf_REFCOUNTED 2
#define MGf_GSKIP 4
#define MGf_COPY 8
#define MGf_DUP 0x10
#define MGf_LOCAL 0x20
#define MGf_BYTES 0x40
#define MGf_PERSIST 0x80
#define MgTAINTEDDIR(mg) (mg->mg_flags & MGf_TAINTEDDIR)
#define MgTAINTEDDIR_on(mg) (mg->mg_flags |= MGf_TAINTEDDIR)
#define MgTAINTEDDIR_off(mg) (mg->mg_flags &= ~MGf_TAINTEDDIR)
#define MgPV(mg,lp) ((((int)(lp = (mg)->mg_len)) == HEf_SVKEY) ? SvPV(MUTABLE_SV((mg)->mg_ptr),lp) : (mg)->mg_ptr)
#define MgPV_const(mg,lp) ((((int)(lp = (mg)->mg_len)) == HEf_SVKEY) ? SvPV_const(MUTABLE_SV((mg)->mg_ptr),lp) : (const char*)(mg)->mg_ptr)
#define MgPV_nolen_const(mg) (((((int)(mg)->mg_len)) == HEf_SVKEY) ? SvPV_nolen_const(MUTABLE_SV((mg)->mg_ptr)) : (const char*)(mg)->mg_ptr)
#define SvTIED_mg(sv,how) (SvRMAGICAL(sv) ? mg_find((sv),(how)) : NULL)
#define SvTIED_obj(sv,mg) ((mg)->mg_obj ? (mg)->mg_obj : sv_2mortal(newRV(sv)))
#if defined(PERL_CORE) || defined(PERL_EXT)
#define MgBYTEPOS(mg,sv,pv,len) S_MgBYTEPOS(aTHX_ mg,sv,pv,len)
#define MgBYTEPOS_set(mg,sv,pv,off) ( assert_((mg)->mg_type == PERL_MAGIC_regex_global) SvPOK(sv) && (!SvGMAGICAL(sv) || sv_only_taint_gmagic(sv)) ? (mg)->mg_len = (off), (mg)->mg_flags |= MGf_BYTES : ((mg)->mg_len = DO_UTF8(sv) ? (SSize_t)utf8_length((U8 *)(pv), (U8 *)(pv)+(off)) : (SSize_t)(off), (mg)->mg_flags &= ~MGf_BYTES))
#endif
#define whichsig(pv) whichsig_pv(pv)
