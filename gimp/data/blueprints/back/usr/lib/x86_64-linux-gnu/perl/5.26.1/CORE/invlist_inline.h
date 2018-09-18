// GGHASH:VbbqVRE68G8SdIS9mkba3Pk8cc.Bd_ziTmT.4FUudoFw00000abe
#if defined(PERL_IN_UTF8_C) || defined(PERL_IN_REGCOMP_C) || defined(PERL_IN_REGEXEC_C)
#define ELEMENT_RANGE_MATCHES_INVLIST(i) (! ((i) & 1))
#define PREV_RANGE_MATCHES_INVLIST(i) (! ELEMENT_RANGE_MATCHES_INVLIST(i))
#define TO_INTERNAL_SIZE(x) ((x) * sizeof(UV))
#define FROM_INTERNAL_SIZE(x) ((x)/ sizeof(UV))
# if defined(PERL_IN_UTF8_C) || defined(PERL_IN_REGEXEC_C)
#undef TO_INTERNAL_SIZE
#undef FROM_INTERNAL_SIZE
# endif
#endif
