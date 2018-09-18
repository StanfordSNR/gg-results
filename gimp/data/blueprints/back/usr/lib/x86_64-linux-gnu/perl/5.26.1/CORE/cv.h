// GGHASH:VAQXwGWfLPm0Q1tPaYEkPB45ZV3Yn3SnhY0jAWU9FbZU00002f0a
#ifndef PERL_CORE
#define Nullcv Null(CV*)
#endif
#define CvSTASH(sv) (0+((XPVCV*)MUTABLE_PTR(SvANY(sv)))->xcv_stash)
#define CvSTASH_set(cv,st) Perl_cvstash_set(aTHX_ cv, st)
#define CvSTART(sv) ((XPVCV*)MUTABLE_PTR(SvANY(sv)))->xcv_start_u.xcv_start
#define CvROOT(sv) ((XPVCV*)MUTABLE_PTR(SvANY(sv)))->xcv_root_u.xcv_root
#define CvXSUB(sv) ((XPVCV*)MUTABLE_PTR(SvANY(sv)))->xcv_root_u.xcv_xsub
#define CvXSUBANY(sv) ((XPVCV*)MUTABLE_PTR(SvANY(sv)))->xcv_start_u.xcv_xsubany
#define CvGV(sv) S_CvGV(aTHX_ (CV *)(sv))
#define CvGV_set(cv,gv) Perl_cvgv_set(aTHX_ cv, gv)
#define CvHASGV(cv) cBOOL(SvANY(cv)->xcv_gv_u.xcv_gv)
#define CvFILE(sv) ((XPVCV*)MUTABLE_PTR(SvANY(sv)))->xcv_file
#ifdef USE_ITHREADS
#define CvFILE_set_from_cop(sv,cop) (CvFILE(sv) = savepv(CopFILE(cop)), CvDYNFILE_on(sv))
#else
#define CvFILE_set_from_cop(sv,cop) (CvFILE(sv) = CopFILE(cop), CvDYNFILE_off(sv))
#endif
#define CvFILEGV(sv) (gv_fetchfile(CvFILE(sv)))
#define CvDEPTH(sv) (*S_CvDEPTHp((const CV *)sv))
#define CvDEPTHunsafe(sv) ((XPVCV*)MUTABLE_PTR(SvANY(sv)))->xcv_depth
#define CvPADLIST(sv) (*(assert_(!CvISXSUB((CV*)(sv))) &(((XPVCV*)MUTABLE_PTR(SvANY(sv)))->xcv_padlist_u.xcv_padlist)))
#ifdef DEBUGGING
#define CvPADLIST_set(sv,padlist) Perl_set_padlist((CV*)sv, padlist)
#else
#define CvPADLIST_set(sv,padlist) (CvPADLIST(sv) = (padlist))
#endif
#define CvHSCXT(sv) *(assert_(CvISXSUB((CV*)(sv))) &(((XPVCV*)MUTABLE_PTR(SvANY(sv)))->xcv_padlist_u.xcv_hscxt))
#ifdef DEBUGGING
# if PTRSIZE == 8
#define PoisonPADLIST(sv) (((XPVCV*)MUTABLE_PTR(SvANY(sv)))->xcv_padlist_u.xcv_padlist = (PADLIST *)UINT64_C(0xEFEFEFEFEFEFEFEF))
# elif PTRSIZE == 4
#define PoisonPADLIST(sv) (((XPVCV*)MUTABLE_PTR(SvANY(sv)))->xcv_padlist_u.xcv_padlist = (PADLIST *)0xEFEFEFEF)
# else
# error unknown pointer size
# endif
#else
#define PoisonPADLIST(sv) NOOP
#endif
#define CvOUTSIDE(sv) ((XPVCV*)MUTABLE_PTR(SvANY(sv)))->xcv_outside
#define CvOUTSIDE_SEQ(sv) ((XPVCV*)MUTABLE_PTR(SvANY(sv)))->xcv_outside_seq
#define CvFLAGS(sv) ((XPVCV*)MUTABLE_PTR(SvANY(sv)))->xcv_flags
#define CvPROTO(sv) ( SvPOK(sv) ? SvTYPE(sv) == SVt_PVCV && CvAUTOLOAD(sv) ? SvEND(sv)+1 : SvPVX_const(sv) : NULL )
#define CvPROTOLEN(sv) ( SvPOK(sv) ? SvTYPE(sv) == SVt_PVCV && CvAUTOLOAD(sv) ? SvLEN(sv)-SvCUR(sv)-2 : SvCUR(sv) : 0 )
#define CVf_METHOD 0x0001
#define CVf_LVALUE 0x0002
#define CVf_CONST 0x0004
#define CVf_ISXSUB 0x0008
#define CVf_WEAKOUTSIDE 0x0010
#define CVf_CLONE 0x0020
#define CVf_CLONED 0x0040
#define CVf_ANON 0x0080
#define CVf_UNIQUE 0x0100
#define CVf_NODEBUG 0x0200
#define CVf_CVGV_RC 0x0400
#ifdef PERL_CORE
#define CVf_SLABBED 0x0800
#endif
#define CVf_DYNFILE 0x1000
#define CVf_AUTOLOAD 0x2000
#define CVf_HASEVAL 0x4000
#define CVf_NAMED 0x8000
#define CVf_LEXICAL 0x10000
#define CVf_ANONCONST 0x20000
#define CVf_BUILTIN_ATTRS (CVf_METHOD|CVf_LVALUE|CVf_ANONCONST)
#define CvCLONE(cv) (CvFLAGS(cv) & CVf_CLONE)
#define CvCLONE_on(cv) (CvFLAGS(cv) |= CVf_CLONE)
#define CvCLONE_off(cv) (CvFLAGS(cv) &= ~CVf_CLONE)
#define CvCLONED(cv) (CvFLAGS(cv) & CVf_CLONED)
#define CvCLONED_on(cv) (CvFLAGS(cv) |= CVf_CLONED)
#define CvCLONED_off(cv) (CvFLAGS(cv) &= ~CVf_CLONED)
#define CvANON(cv) (CvFLAGS(cv) & CVf_ANON)
#define CvANON_on(cv) (CvFLAGS(cv) |= CVf_ANON)
#define CvANON_off(cv) (CvFLAGS(cv) &= ~CVf_ANON)
#define CvUNIQUE(cv) (CvFLAGS(cv) & CVf_UNIQUE)
#define CvUNIQUE_on(cv) (CvFLAGS(cv) |= CVf_UNIQUE)
#define CvUNIQUE_off(cv) (CvFLAGS(cv) &= ~CVf_UNIQUE)
#define CvNODEBUG(cv) (CvFLAGS(cv) & CVf_NODEBUG)
#define CvNODEBUG_on(cv) (CvFLAGS(cv) |= CVf_NODEBUG)
#define CvNODEBUG_off(cv) (CvFLAGS(cv) &= ~CVf_NODEBUG)
#define CvMETHOD(cv) (CvFLAGS(cv) & CVf_METHOD)
#define CvMETHOD_on(cv) (CvFLAGS(cv) |= CVf_METHOD)
#define CvMETHOD_off(cv) (CvFLAGS(cv) &= ~CVf_METHOD)
#define CvLVALUE(cv) (CvFLAGS(cv) & CVf_LVALUE)
#define CvLVALUE_on(cv) (CvFLAGS(cv) |= CVf_LVALUE)
#define CvLVALUE_off(cv) (CvFLAGS(cv) &= ~CVf_LVALUE)
#define CvEVAL(cv) (CvUNIQUE(cv) && !SvFAKE(cv))
#define CvEVAL_on(cv) (CvUNIQUE_on(cv),SvFAKE_off(cv))
#define CvEVAL_off(cv) CvUNIQUE_off(cv)
#define CvSPECIAL(cv) (CvUNIQUE(cv) && SvFAKE(cv))
#define CvSPECIAL_on(cv) (CvUNIQUE_on(cv),SvFAKE_on(cv))
#define CvSPECIAL_off(cv) (CvUNIQUE_off(cv),SvFAKE_off(cv))
#define CvCONST(cv) (CvFLAGS(cv) & CVf_CONST)
#define CvCONST_on(cv) (CvFLAGS(cv) |= CVf_CONST)
#define CvCONST_off(cv) (CvFLAGS(cv) &= ~CVf_CONST)
#define CvWEAKOUTSIDE(cv) (CvFLAGS(cv) & CVf_WEAKOUTSIDE)
#define CvWEAKOUTSIDE_on(cv) (CvFLAGS(cv) |= CVf_WEAKOUTSIDE)
#define CvWEAKOUTSIDE_off(cv) (CvFLAGS(cv) &= ~CVf_WEAKOUTSIDE)
#define CvISXSUB(cv) (CvFLAGS(cv) & CVf_ISXSUB)
#define CvISXSUB_on(cv) (CvFLAGS(cv) |= CVf_ISXSUB)
#define CvISXSUB_off(cv) (CvFLAGS(cv) &= ~CVf_ISXSUB)
#define CvCVGV_RC(cv) (CvFLAGS(cv) & CVf_CVGV_RC)
#define CvCVGV_RC_on(cv) (CvFLAGS(cv) |= CVf_CVGV_RC)
#define CvCVGV_RC_off(cv) (CvFLAGS(cv) &= ~CVf_CVGV_RC)
#ifdef PERL_CORE
#define CvSLABBED(cv) (CvFLAGS(cv) & CVf_SLABBED)
#define CvSLABBED_on(cv) (CvFLAGS(cv) |= CVf_SLABBED)
#define CvSLABBED_off(cv) (CvFLAGS(cv) &= ~CVf_SLABBED)
#endif
#define CvDYNFILE(cv) (CvFLAGS(cv) & CVf_DYNFILE)
#define CvDYNFILE_on(cv) (CvFLAGS(cv) |= CVf_DYNFILE)
#define CvDYNFILE_off(cv) (CvFLAGS(cv) &= ~CVf_DYNFILE)
#define CvAUTOLOAD(cv) (CvFLAGS(cv) & CVf_AUTOLOAD)
#define CvAUTOLOAD_on(cv) (CvFLAGS(cv) |= CVf_AUTOLOAD)
#define CvAUTOLOAD_off(cv) (CvFLAGS(cv) &= ~CVf_AUTOLOAD)
#define CvHASEVAL(cv) (CvFLAGS(cv) & CVf_HASEVAL)
#define CvHASEVAL_on(cv) (CvFLAGS(cv) |= CVf_HASEVAL)
#define CvHASEVAL_off(cv) (CvFLAGS(cv) &= ~CVf_HASEVAL)
#define CvNAMED(cv) (CvFLAGS(cv) & CVf_NAMED)
#define CvNAMED_on(cv) (CvFLAGS(cv) |= CVf_NAMED)
#define CvNAMED_off(cv) (CvFLAGS(cv) &= ~CVf_NAMED)
#define CvLEXICAL(cv) (CvFLAGS(cv) & CVf_LEXICAL)
#define CvLEXICAL_on(cv) (CvFLAGS(cv) |= CVf_LEXICAL)
#define CvLEXICAL_off(cv) (CvFLAGS(cv) &= ~CVf_LEXICAL)
#define CvANONCONST(cv) (CvFLAGS(cv) & CVf_ANONCONST)
#define CvANONCONST_on(cv) (CvFLAGS(cv) |= CVf_ANONCONST)
#define CvANONCONST_off(cv) (CvFLAGS(cv) &= ~CVf_ANONCONST)
#define XS_DYNAMIC_FILENAME 0x01
#define CvNAME_HEK_set(cv,hek) ( CvNAME_HEK((CV *)(cv)) ? unshare_hek(SvANY((CV *)(cv))->xcv_gv_u.xcv_hek) : (void)0, ((XPVCV*)MUTABLE_PTR(SvANY(cv)))->xcv_gv_u.xcv_hek = (hek), CvNAMED_on(cv) )
#define CALL_CHECKER_REQUIRE_GV MGf_REQUIRE_GV
#define CV_NAME_NOTQUAL 1
#ifdef PERL_CORE
#define CV_UNDEF_KEEP_NAME 1
#endif
