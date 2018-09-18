// GGHASH:V7u6ZFQUqYl3Sz7jszDzQxeV1pVxa.9fpys95OmNYuds000006b2
#undef EXT
#undef dEXT
#undef EXTCONST
#undef dEXTCONST
# if (defined(WIN32) || defined(__SYMBIAN32__)) && !defined(PERL_STATIC_SYMS)
# if defined(PERL_IS_MINIPERL) && !defined(UNDER_CE) && defined(_MSC_VER)
#define EXT extern
#define dEXT 
#define EXTCONST extern const
#define dEXTCONST const
# else
# if defined(PERLDLL) || defined(__SYMBIAN32__)
#define EXT EXTERN_C __declspec(dllexport)
#define dEXT 
#define EXTCONST EXTERN_C __declspec(dllexport) const
#define dEXTCONST const
# else
#define EXT EXTERN_C __declspec(dllimport)
#define dEXT 
#define EXTCONST EXTERN_C __declspec(dllimport) const
#define dEXTCONST const
# endif
# endif
# else
# if defined(__CYGWIN__) && defined(USEIMPORTLIB)
#define EXT extern __declspec(dllimport)
#define dEXT 
#define EXTCONST extern __declspec(dllimport) const
#define dEXTCONST const
# else
#define EXT extern
#define dEXT 
#define EXTCONST extern const
#define dEXTCONST const
# endif
# endif
#undef INIT
#define INIT(x) 
#undef DOINIT
