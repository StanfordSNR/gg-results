// GGHASH:VY3gLIPeGfKPzlylNhWj3TdT2CSfjmimNC1X2lWEMG5Y00001d2b
#ifndef PERL_CORE
# include "ppport.h"
#endif
#ifndef MUTABLE_PTR
# if defined(__GNUC__) && !defined(PERL_GCC_BRACE_GROUPS_FORBIDDEN)
#define MUTABLE_PTR(p) ({ void *_p = (p); _p; })
# else
#define MUTABLE_PTR(p) ((void *) (p))
# endif
#define MUTABLE_AV(p) ((AV *)MUTABLE_PTR(p))
#define MUTABLE_CV(p) ((CV *)MUTABLE_PTR(p))
#define MUTABLE_GV(p) ((GV *)MUTABLE_PTR(p))
#define MUTABLE_HV(p) ((HV *)MUTABLE_PTR(p))
#define MUTABLE_IO(p) ((IO *)MUTABLE_PTR(p))
#define MUTABLE_SV(p) ((SV *)MUTABLE_PTR(p))
#endif
#ifndef SvPVx_nolen_const
# if defined(__GNUC__) && !defined(PERL_GCC_BRACE_GROUPS_FORBIDDEN)
#define SvPVx_nolen_const(sv) ({SV *_sv = (sv); SvPV_nolen_const(_sv); })
# else
#define SvPVx_nolen_const(sv) (SvPV_nolen_const(sv))
# endif
#endif
#ifndef PERL_ARGS_ASSERT_CK_WARNER
# ifdef vwarner
# else
# endif
#endif
#define PERL_VERSION_DECIMAL(r,v,s) (r*1000000 + v*1000 + s)
#define PERL_DECIMAL_VERSION PERL_VERSION_DECIMAL(PERL_REVISION,PERL_VERSION,PERL_SUBVERSION)
#define PERL_VERSION_LT(r,v,s) (PERL_DECIMAL_VERSION < PERL_VERSION_DECIMAL(r,v,s))
#define PERL_VERSION_GE(r,v,s) (PERL_DECIMAL_VERSION >= PERL_VERSION_DECIMAL(r,v,s))
#if PERL_VERSION_LT(5,15,4)
#define ISA_VERSION_OBJ(v) (sv_isobject(v) && sv_derived_from(v,"version"))
#else
#define ISA_VERSION_OBJ(v) (sv_isobject(v) && sv_derived_from_pvn(v,"version",7,0))
#endif
#ifndef PERL_ARGS_ASSERT_CROAK_XS_USAGE
#define PERL_ARGS_ASSERT_CROAK_XS_USAGE assert(cv); assert(params)
#ifdef PERL_IMPLICIT_CONTEXT
#define croak_xs_usage(a,b) S_croak_xs_usage(aTHX_ a,b)
#else
#define croak_xs_usage S_croak_xs_usage
#endif
#endif
#if PERL_VERSION_GE(5,9,0) && !defined(PERL_CORE)
#define VUTIL_REPLACE_CORE 1
#define SCAN_VERSION(a,b,c) Perl_scan_version2(aTHX_ a,b,c)
#define NEW_VERSION(a) Perl_new_version2(aTHX_ a)
#define UPG_VERSION(a,b) Perl_upg_version2(aTHX_ a, b)
#define VSTRINGIFY(a) Perl_vstringify2(aTHX_ a)
#define VVERIFY(a) Perl_vverify2(aTHX_ a)
#define VNUMIFY(a) Perl_vnumify2(aTHX_ a)
#define VNORMAL(a) Perl_vnormal2(aTHX_ a)
#define VCMP(a,b) Perl_vcmp2(aTHX_ a,b)
#define PRESCAN_VERSION(a,b,c,d,e,f,g) Perl_prescan_version2(aTHX_ a,b,c,d,e,f,g)
#undef is_LAX_VERSION
#define is_LAX_VERSION(a,b) (a != Perl_prescan_version2(aTHX_ a, FALSE, b, NULL, NULL, NULL, NULL))
#undef is_STRICT_VERSION
#define is_STRICT_VERSION(a,b) (a != Perl_prescan_version2(aTHX_ a, TRUE, b, NULL, NULL, NULL, NULL))
#else
#define SCAN_VERSION(a,b,c) Perl_scan_version(aTHX_ a,b,c)
#define NEW_VERSION(a) Perl_new_version(aTHX_ a)
#define UPG_VERSION(a,b) Perl_upg_version(aTHX_ a, b)
#define VSTRINGIFY(a) Perl_vstringify(aTHX_ a)
#define VVERIFY(a) Perl_vverify(aTHX_ a)
#define VNUMIFY(a) Perl_vnumify(aTHX_ a)
#define VNORMAL(a) Perl_vnormal(aTHX_ a)
#define VCMP(a,b) Perl_vcmp(aTHX_ a,b)
#define PRESCAN_VERSION(a,b,c,d,e,f,g) Perl_prescan_version(aTHX_ a,b,c,d,e,f,g)
# ifndef is_LAX_VERSION
#define is_LAX_VERSION(a,b) (a != Perl_prescan_version(aTHX_ a, FALSE, b, NULL, NULL, NULL, NULL))
# endif
# ifndef is_STRICT_VERSION
#define is_STRICT_VERSION(a,b) (a != Perl_prescan_version(aTHX_ a, TRUE, b, NULL, NULL, NULL, NULL))
# endif
#endif
#if PERL_VERSION_LT(5,11,4)
#define BADVERSION(a,b,c) if (b) { *b = c; } return a;
#define PERL_ARGS_ASSERT_PRESCAN_VERSION assert(s); assert(sqv); assert(ssaw_decimal); assert(swidth); assert(salpha);
#define PERL_ARGS_ASSERT_SCAN_VERSION assert(s); assert(rv)
#define PERL_ARGS_ASSERT_NEW_VERSION assert(ver)
#define PERL_ARGS_ASSERT_UPG_VERSION assert(ver)
#define PERL_ARGS_ASSERT_VVERIFY assert(vs)
#define PERL_ARGS_ASSERT_VNUMIFY assert(vs)
#define PERL_ARGS_ASSERT_VNORMAL assert(vs)
#define PERL_ARGS_ASSERT_VSTRINGIFY assert(vs)
#define PERL_ARGS_ASSERT_VCMP assert(lhv); assert(rhv)
#define PERL_ARGS_ASSERT_CK_WARNER assert(pat)
#endif
#if PERL_VERSION_LT(5,19,0)
#undef STORE_NUMERIC_LOCAL_SET_STANDARD
#undef RESTORE_NUMERIC_LOCAL
# ifdef USE_LOCALE
#define STORE_NUMERIC_LOCAL_SET_STANDARD() char *loc = savepv(setlocale(LC_NUMERIC, NULL)); SAVEFREEPV(loc); setlocale(LC_NUMERIC, "C");
#define RESTORE_NUMERIC_LOCAL() setlocale(LC_NUMERIC, loc);
# else
#define STORE_NUMERIC_LOCAL_SET_STANDARD() 
#define RESTORE_NUMERIC_LOCAL() 
# endif
#endif
#ifndef LOCK_NUMERIC_STANDARD
#define LOCK_NUMERIC_STANDARD() 
#endif
#ifndef UNLOCK_NUMERIC_STANDARD
#define UNLOCK_NUMERIC_STANDARD() 
#endif
