// GGHASH:V.f5j9NUhRNWlFpexEI6uU.BcZ3g8PAMCCnjVuGQfVWM00001333
#if defined(PERL_CORE) || defined (PERL_EXT)
#define HINT_FEATURE_SHIFT 26
#define FEATURE_BUNDLE_DEFAULT 0
#define FEATURE_BUNDLE_510 1
#define FEATURE_BUNDLE_511 2
#define FEATURE_BUNDLE_515 3
#define FEATURE_BUNDLE_523 4
#define FEATURE_BUNDLE_CUSTOM (HINT_FEATURE_MASK >> HINT_FEATURE_SHIFT)
#define CURRENT_HINTS (PL_curcop == &PL_compiling ? PL_hints : PL_curcop->cop_hints)
#define CURRENT_FEATURE_BUNDLE ((CURRENT_HINTS & HINT_FEATURE_MASK) >> HINT_FEATURE_SHIFT)
#define FEATURE_IS_ENABLED(name) ((CURRENT_HINTS & HINT_LOCALIZE_HH) ? Perl_feature_is_enabled(aTHX_ STR_WITH_LEN(name)) : FALSE)
#define MAX_FEATURE_LEN (sizeof("postderef_qq")-1)
#define FEATURE_FC_IS_ENABLED ( (CURRENT_FEATURE_BUNDLE >= FEATURE_BUNDLE_515 && CURRENT_FEATURE_BUNDLE <= FEATURE_BUNDLE_523) || (CURRENT_FEATURE_BUNDLE == FEATURE_BUNDLE_CUSTOM && FEATURE_IS_ENABLED("fc")) )
#define FEATURE_SAY_IS_ENABLED ( (CURRENT_FEATURE_BUNDLE >= FEATURE_BUNDLE_510 && CURRENT_FEATURE_BUNDLE <= FEATURE_BUNDLE_523) || (CURRENT_FEATURE_BUNDLE == FEATURE_BUNDLE_CUSTOM && FEATURE_IS_ENABLED("say")) )
#define FEATURE_STATE_IS_ENABLED ( (CURRENT_FEATURE_BUNDLE >= FEATURE_BUNDLE_510 && CURRENT_FEATURE_BUNDLE <= FEATURE_BUNDLE_523) || (CURRENT_FEATURE_BUNDLE == FEATURE_BUNDLE_CUSTOM && FEATURE_IS_ENABLED("state")) )
#define FEATURE_SWITCH_IS_ENABLED ( (CURRENT_FEATURE_BUNDLE >= FEATURE_BUNDLE_510 && CURRENT_FEATURE_BUNDLE <= FEATURE_BUNDLE_523) || (CURRENT_FEATURE_BUNDLE == FEATURE_BUNDLE_CUSTOM && FEATURE_IS_ENABLED("switch")) )
#define FEATURE_BITWISE_IS_ENABLED ( CURRENT_FEATURE_BUNDLE == FEATURE_BUNDLE_CUSTOM && FEATURE_IS_ENABLED("bitwise") )
#define FEATURE_EVALBYTES_IS_ENABLED ( (CURRENT_FEATURE_BUNDLE >= FEATURE_BUNDLE_515 && CURRENT_FEATURE_BUNDLE <= FEATURE_BUNDLE_523) || (CURRENT_FEATURE_BUNDLE == FEATURE_BUNDLE_CUSTOM && FEATURE_IS_ENABLED("evalbytes")) )
#define FEATURE_ARYBASE_IS_ENABLED ( CURRENT_FEATURE_BUNDLE <= FEATURE_BUNDLE_511 || (CURRENT_FEATURE_BUNDLE == FEATURE_BUNDLE_CUSTOM && FEATURE_IS_ENABLED("arybase")) )
#define FEATURE_SIGNATURES_IS_ENABLED ( CURRENT_FEATURE_BUNDLE == FEATURE_BUNDLE_CUSTOM && FEATURE_IS_ENABLED("signatures") )
#define FEATURE___SUB___IS_ENABLED ( (CURRENT_FEATURE_BUNDLE >= FEATURE_BUNDLE_515 && CURRENT_FEATURE_BUNDLE <= FEATURE_BUNDLE_523) || (CURRENT_FEATURE_BUNDLE == FEATURE_BUNDLE_CUSTOM && FEATURE_IS_ENABLED("__SUB__")) )
#define FEATURE_REFALIASING_IS_ENABLED ( CURRENT_FEATURE_BUNDLE == FEATURE_BUNDLE_CUSTOM && FEATURE_IS_ENABLED("refaliasing") )
#define FEATURE_POSTDEREF_QQ_IS_ENABLED ( CURRENT_FEATURE_BUNDLE == FEATURE_BUNDLE_523 || (CURRENT_FEATURE_BUNDLE == FEATURE_BUNDLE_CUSTOM && FEATURE_IS_ENABLED("postderef_qq")) )
#define FEATURE_UNIEVAL_IS_ENABLED ( (CURRENT_FEATURE_BUNDLE >= FEATURE_BUNDLE_515 && CURRENT_FEATURE_BUNDLE <= FEATURE_BUNDLE_523) || (CURRENT_FEATURE_BUNDLE == FEATURE_BUNDLE_CUSTOM && FEATURE_IS_ENABLED("unieval")) )
#define FEATURE_MYREF_IS_ENABLED ( CURRENT_FEATURE_BUNDLE == FEATURE_BUNDLE_CUSTOM && FEATURE_IS_ENABLED("myref") )
#define FEATURE_UNICODE_IS_ENABLED ( (CURRENT_FEATURE_BUNDLE >= FEATURE_BUNDLE_511 && CURRENT_FEATURE_BUNDLE <= FEATURE_BUNDLE_523) || (CURRENT_FEATURE_BUNDLE == FEATURE_BUNDLE_CUSTOM && FEATURE_IS_ENABLED("unicode")) )
#endif
#ifdef PERL_IN_OP_C
#endif
