// GGHASH:VWTfSBYyPBntCPvBzq03ANEB1jwIhhCHt13QGA7cpfDU0000435e
#define NOT_IN_PAD ((PADOFFSET) -1)
#if defined(PERL_PADNAME_MINIMAL) && defined (PERL_PADNAME_ALIGNED)
# error PERL_PADNAME_MINIMAL and PERL_PADNAME_ALIGNED are exclusive
#endif
#if !defined(PERL_PADNAME_MINIMAL) && !defined(PERL_PADNAME_ALIGNED)
#define PERL_PADNAME_MINIMAL 
#endif
#define _PADNAME_BASE char * xpadn_pv; HV * xpadn_ourstash; union { HV * xpadn_typestash; CV * xpadn_protocv; } xpadn_type_u; U32 xpadn_low; U32 xpadn_high; U32 xpadn_refcnt; int xpadn_gen; U8 xpadn_len; U8 xpadn_flags
#ifdef PERL_PADNAME_MINIMAL
#else
#endif
#undef _PADNAME_BASE
#define PADNAME_FROM_PV(s) ((PADNAME *)((s) - STRUCT_OFFSET(struct padname_with_str, xpadn_str)))
#define PERL_PADSEQ_INTRO U32_MAX
#define COP_SEQMAX_INC (PL_cop_seqmax++, (void)(PL_cop_seqmax == PERL_PADSEQ_INTRO && PL_cop_seqmax++))
#define COP_SEQ_RANGE_LOW(pn) (pn)->xpadn_low
#define COP_SEQ_RANGE_HIGH(pn) (pn)->xpadn_high
#define PARENT_PAD_INDEX(pn) (pn)->xpadn_low
#define PARENT_FAKELEX_FLAGS(pn) (pn)->xpadn_high
#define PAD_FAKELEX_ANON 1
#define PAD_FAKELEX_MULTI 2
#define padnew_CLONE 1
#define padnew_SAVE 2
#define padnew_SAVESUB 4
#define padadd_OUR 0x01
#define padadd_STATE 0x02
#define padadd_NO_DUP_CHECK 0x04
#define padadd_STALEOK 0x08
#define pad_peg(label) 
#ifdef DEBUGGING
#define ASSERT_CURPAD_LEGAL(label) pad_peg(label); if (PL_comppad ? (AvARRAY(PL_comppad) != PL_curpad) : (PL_curpad != 0)) Perl_croak(aTHX_ "panic: illegal pad in %s: 0x%" UVxf "[0x%" UVxf "]", label, PTR2UV(PL_comppad), PTR2UV(PL_curpad));
#define ASSERT_CURPAD_ACTIVE(label) pad_peg(label); if (!PL_comppad || (AvARRAY(PL_comppad) != PL_curpad)) Perl_croak(aTHX_ "panic: invalid pad in %s: 0x%" UVxf "[0x%" UVxf "]", label, PTR2UV(PL_comppad), PTR2UV(PL_curpad));
#else
#define ASSERT_CURPAD_LEGAL(label) 
#define ASSERT_CURPAD_ACTIVE(label) 
#endif
#define PadlistARRAY(pl) (pl)->xpadl_arr.xpadlarr_alloc
#define PadlistMAX(pl) (pl)->xpadl_max
#define PadlistNAMES(pl) *((PADNAMELIST **)PadlistARRAY(pl))
#define PadlistNAMESARRAY(pl) PadnamelistARRAY(PadlistNAMES(pl))
#define PadlistNAMESMAX(pl) PadnamelistMAX(PadlistNAMES(pl))
#define PadlistREFCNT(pl) 1
#define PadnamelistARRAY(pnl) (pnl)->xpadnl_alloc
#define PadnamelistMAX(pnl) (pnl)->xpadnl_fill
#define PadnamelistMAXNAMED(pnl) (pnl)->xpadnl_max_named
#define PadnamelistREFCNT(pnl) (pnl)->xpadnl_refcnt
#define PadnamelistREFCNT_dec(pnl) Perl_padnamelist_free(aTHX_ pnl)
#define PadARRAY(pad) AvARRAY(pad)
#define PadMAX(pad) AvFILLp(pad)
#define PadnamePV(pn) (pn)->xpadn_pv
#define PadnameLEN(pn) (pn)->xpadn_len
#define PadnameUTF8(pn) 1
#define PadnameSV(pn) newSVpvn_flags(PadnamePV(pn), PadnameLEN(pn), SVs_TEMP|SVf_UTF8)
#define PadnameFLAGS(pn) (pn)->xpadn_flags
#define PadnameIsOUR(pn) (!!(pn)->xpadn_ourstash)
#define PadnameOURSTASH(pn) (pn)->xpadn_ourstash
#define PadnameTYPE(pn) (pn)->xpadn_type_u.xpadn_typestash
#define PadnamePROTOCV(pn) (pn)->xpadn_type_u.xpadn_protocv
#define PadnameREFCNT(pn) (pn)->xpadn_refcnt
#define PadnameREFCNT_dec(pn) Perl_padname_free(aTHX_ pn)
#define PadnameOURSTASH_set(pn,s) (PadnameOURSTASH(pn) = (s))
#define PadnameTYPE_set(pn,s) (PadnameTYPE(pn) = (s))
#define PadnameOUTER(pn) (PadnameFLAGS(pn) & PADNAMEt_OUTER)
#define PadnameIsSTATE(pn) (PadnameFLAGS(pn) & PADNAMEt_STATE)
#define PadnameLVALUE(pn) (PadnameFLAGS(pn) & PADNAMEt_LVALUE)
#define PadnameLVALUE_on(pn) (PadnameFLAGS(pn) |= PADNAMEt_LVALUE)
#define PadnameIsSTATE_on(pn) (PadnameFLAGS(pn) |= PADNAMEt_STATE)
#define PADNAMEt_OUTER 1
#define PADNAMEt_STATE 2
#define PADNAMEt_LVALUE 4
#define PADNAMEt_TYPED 8
#define PADNAMEt_OUR 16
#define SvPAD_STATE PadnameIsSTATE
#define SvPAD_TYPED(pn) (!!PadnameTYPE(pn))
#define SvPAD_OUR(pn) (!!PadnameOURSTASH(pn))
#define SvPAD_STATE_on PadnameIsSTATE_on
#define SvPAD_TYPED_on(pn) (PadnameFLAGS(pn) |= PADNAMEt_TYPED)
#define SvPAD_OUR_on(pn) (PadnameFLAGS(pn) |= PADNAMEt_OUR)
#define SvOURSTASH PadnameOURSTASH
#define SvOURSTASH_set PadnameOURSTASH_set
#define SVpad_STATE PADNAMEt_STATE
#define SVpad_TYPED PADNAMEt_TYPED
#define SVpad_OUR PADNAMEt_OUR
#ifdef DEBUGGING
#define PAD_SV(po) pad_sv(po)
#define PAD_SETSV(po,sv) pad_setsv(po,sv)
#else
#define PAD_SV(po) (PL_curpad[po])
#define PAD_SETSV(po,sv) PL_curpad[po] = (sv)
#endif
#define PAD_SVl(po) (PL_curpad[po])
#define PAD_BASE_SV(padlist,po) (PadlistARRAY(padlist)[1]) ? AvARRAY(MUTABLE_AV((PadlistARRAY(padlist)[1])))[po] : NULL;
#define PAD_SET_CUR_NOSAVE(padlist,nth) PL_comppad = (PAD*) (PadlistARRAY(padlist)[nth]); PL_curpad = AvARRAY(PL_comppad); DEBUG_Xv(PerlIO_printf(Perl_debug_log, "Pad 0x%" UVxf "[0x%" UVxf "] set_cur    depth=%d\n", PTR2UV(PL_comppad), PTR2UV(PL_curpad), (int)(nth)));
#define PAD_SET_CUR(padlist,nth) SAVECOMPPAD(); PAD_SET_CUR_NOSAVE(padlist,nth);
#define PAD_SAVE_SETNULLPAD() SAVECOMPPAD(); PL_comppad = NULL; PL_curpad = NULL; DEBUG_Xv(PerlIO_printf(Perl_debug_log, "Pad set_null\n"));
#define PAD_SAVE_LOCAL(opad,npad) opad = PL_comppad; PL_comppad = (npad); PL_curpad = PL_comppad ? AvARRAY(PL_comppad) : NULL; DEBUG_Xv(PerlIO_printf(Perl_debug_log, "Pad 0x%" UVxf "[0x%" UVxf "] save_local\n", PTR2UV(PL_comppad), PTR2UV(PL_curpad)));
#define PAD_RESTORE_LOCAL(opad) assert(!opad || !SvIS_FREED(opad)); PL_comppad = opad; PL_curpad = PL_comppad ? AvARRAY(PL_comppad) : NULL; DEBUG_Xv(PerlIO_printf(Perl_debug_log, "Pad 0x%" UVxf "[0x%" UVxf "] restore_local\n", PTR2UV(PL_comppad), PTR2UV(PL_curpad)));
#define CX_CURPAD_SAVE(block) (block).oldcomppad = PL_comppad
#define CX_CURPAD_SV(block,po) (AvARRAY(MUTABLE_AV(((block).oldcomppad)))[po])
#define PAD_COMPNAME(po) PAD_COMPNAME_SV(po)
#define PAD_COMPNAME_SV(po) (PadnamelistARRAY(PL_comppad_name)[(po)])
#define PAD_COMPNAME_FLAGS(po) PadnameFLAGS(PAD_COMPNAME(po))
#define PAD_COMPNAME_FLAGS_isOUR(po) SvPAD_OUR(PAD_COMPNAME_SV(po))
#define PAD_COMPNAME_PV(po) PadnamePV(PAD_COMPNAME(po))
#define PAD_COMPNAME_TYPE(po) PadnameTYPE(PAD_COMPNAME(po))
#define PAD_COMPNAME_OURSTASH(po) (SvOURSTASH(PAD_COMPNAME_SV(po)))
#define PAD_COMPNAME_GEN(po) ((STRLEN)PadnamelistARRAY(PL_comppad_name)[po]->xpadn_gen)
#define PAD_COMPNAME_GEN_set(po,gen) (PadnamelistARRAY(PL_comppad_name)[po]->xpadn_gen = (gen))
#define PAD_CLONE_VARS(proto_perl,param) PL_comppad = av_dup(proto_perl->Icomppad, param); PL_curpad = PL_comppad ? AvARRAY(PL_comppad) : NULL; PL_comppad_name = padnamelist_dup(proto_perl->Icomppad_name, param); PL_comppad_name_fill = proto_perl->Icomppad_name_fill; PL_comppad_name_floor = proto_perl->Icomppad_name_floor; PL_min_intro_pending = proto_perl->Imin_intro_pending; PL_max_intro_pending = proto_perl->Imax_intro_pending; PL_padix = proto_perl->Ipadix; PL_padix_floor = proto_perl->Ipadix_floor; PL_pad_reset_pending = proto_perl->Ipad_reset_pending; PL_cop_seqmax = proto_perl->Icop_seqmax;
#define pad_add_name_pvs(name,flags,typestash,ourstash) Perl_pad_add_name_pvn(aTHX_ STR_WITH_LEN(name), flags, typestash, ourstash)
#define pad_findmy_pvs(name,flags) Perl_pad_findmy_pvn(aTHX_ STR_WITH_LEN(name), flags)
