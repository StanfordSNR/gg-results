// GGHASH:VjZhMBvzwYm0.jSpoRdB.D711_FYGAdrFxB7f_hvqoZw00002580
#ifndef PERL_UTIL_H_
#define PERL_UTIL_H_ 
#ifdef VMS
#define PERL_FILE_IS_ABSOLUTE(f) (*(f) == '/' || (strchr(f,':') || ((*(f) == '[' || *(f) == '<') && (isWORDCHAR((f)[1]) || strchr("$-_]>",(f)[1])))))
#else
# if defined(WIN32) || defined(__CYGWIN__)
#define PERL_FILE_IS_ABSOLUTE(f) (*(f) == '/' || *(f) == '\\' || ((f)[0] && (f)[1] == ':'))
# else
# ifdef NETWARE
#define PERL_FILE_IS_ABSOLUTE(f) (((f)[0] && (f)[1] == ':') || ((f)[0] == '\\' && (f)[1] == '\\') || ((f)[3] == ':'))
# else
# if defined(DOSISH) || defined(__SYMBIAN32__)
#define PERL_FILE_IS_ABSOLUTE(f) (*(f) == '/' || ((f)[0] && (f)[1] == ':'))
# else
#define PERL_FILE_IS_ABSOLUTE(f) (*(f) == '/')
# endif
# endif
# endif
#endif
#define ibcmp(s1,s2,len) cBOOL(! foldEQ(s1, s2, len))
#define ibcmp_locale(s1,s2,len) cBOOL(! foldEQ_locale(s1, s2, len))
#if defined(U64TYPE) && !defined(USING_MSVC6)
#define PERL_DRAND48_QUAD 
#endif
#ifdef PERL_DRAND48_QUAD
#else
#endif
#define PL_RANDOM_STATE_TYPE perl_drand48_t
#define Perl_drand48_init(seed) (Perl_drand48_init_r(&PL_random_state, (seed)))
#define Perl_drand48() (Perl_drand48_r(&PL_random_state))
#ifdef USE_C_BACKTRACE
#define Perl_free_c_backtrace(bt) Safefree(bt)
#endif
#define HSm_APIVERLEN 0x0000001F
#define HS_APIVERLEN_MAX HSm_APIVERLEN
#define HSm_XSVERLEN 0x0000FF00
#define HS_XSVERLEN_MAX 0xFF
#define HSf_SETXSUBFN 0x00000020
#define HSf_POPMARK 0x00000040
#define HSf_IMP_CXT 0x00000080
#define HSm_INTRPSIZE 0xFFFF0000
#define HSm_KEY_MATCH (HSm_INTRPSIZE|HSf_IMP_CXT)
#define HSf_NOCHK HSm_KEY_MATCH
#define HS_GETINTERPSIZE(key) ((key) >> 16)
#define HS_GETXSVERLEN(key) ((key) >> 8 & 0xFF)
#define HS_GETAPIVERLEN(key) ((key) & HSm_APIVERLEN)
#define HS_KEYp(interpsize,cxt,setxsubfn,popmark,apiverlen,xsverlen) (((interpsize) << 16) | ((xsverlen) > HS_XSVERLEN_MAX ? (Perl_croak_nocontext("panic: handshake overflow"), HS_XSVERLEN_MAX) : (xsverlen) << 8) | (cBOOL(setxsubfn) ? HSf_SETXSUBFN : 0) | (cBOOL(cxt) ? HSf_IMP_CXT : 0) | (cBOOL(popmark) ? HSf_POPMARK : 0) | ((apiverlen) > HS_APIVERLEN_MAX ? (Perl_croak_nocontext("panic: handshake overflow"), HS_APIVERLEN_MAX) : (apiverlen)))
#ifdef PERL_IMPLICIT_CONTEXT
#define HS_KEY(setxsubfn,popmark,apiver,xsver) HS_KEYp(sizeof(PerlInterpreter), TRUE, setxsubfn, popmark, sizeof("" apiver "")-1, sizeof("" xsver "")-1)
#define HS_CXT aTHX
#else
#define HS_KEY(setxsubfn,popmark,apiver,xsver) HS_KEYp(sizeof(struct PerlHandShakeInterpreter), FALSE, setxsubfn, popmark, sizeof("" apiver "")-1, sizeof("" xsver "")-1)
#define HS_CXT cv
#endif
#define instr(haystack,needle) strstr(haystack, needle)
#ifdef HAS_MEMMEM
#define ninstr(big,bigend,little,lend) ((char *) memmem(big, bigend - big, little, lend - little))
#endif
#endif
