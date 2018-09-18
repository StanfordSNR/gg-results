// GGHASH:VwfZRxLXVjvIMjTaE8gdJB72fe2.oQIHecFr5pWj6AxM00000cf8
#ifndef PERL_CORE
#define Nullav Null(AV*)
#endif
#define AvARRAY(av) ((av)->sv_u.svu_array)
#define AvALLOC(av) ((XPVAV*) SvANY(av))->xav_alloc
#define AvMAX(av) ((XPVAV*) SvANY(av))->xav_max
#define AvFILLp(av) ((XPVAV*) SvANY(av))->xav_fill
#define AvARYLEN(av) (*Perl_av_arylen_p(aTHX_ MUTABLE_AV(av)))
#define AvREAL(av) (SvFLAGS(av) & SVpav_REAL)
#define AvREAL_on(av) (SvFLAGS(av) |= SVpav_REAL)
#define AvREAL_off(av) (SvFLAGS(av) &= ~SVpav_REAL)
#define AvREAL_only(av) (AvREIFY_off(av), SvFLAGS(av) |= SVpav_REAL)
#define AvREIFY(av) (SvFLAGS(av) & SVpav_REIFY)
#define AvREIFY_on(av) (SvFLAGS(av) |= SVpav_REIFY)
#define AvREIFY_off(av) (SvFLAGS(av) &= ~SVpav_REIFY)
#define AvREIFY_only(av) (AvREAL_off(av), SvFLAGS(av) |= SVpav_REIFY)
#define AvREALISH(av) (SvFLAGS(av) & (SVpav_REAL|SVpav_REIFY))
#define AvFILL(av) ((SvRMAGICAL((const SV *) (av))) ? mg_size(MUTABLE_SV(av)) : AvFILLp(av))
#define av_tindex(av) av_top_index(av)
#define av_top_index_skip_len_mg(av) (__ASSERT_(SvTYPE(av) == SVt_PVAV) AvFILLp(av))
#define av_tindex_skip_len_mg(av) av_top_index_skip_len_mg(av)
#define NEGATIVE_INDICES_VAR "NEGATIVE_INDICES"
#define newAV() MUTABLE_AV(newSV_type(SVt_PVAV))
