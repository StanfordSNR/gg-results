// GGHASH:V7qVHhyt9jbxXGvHnY4vM7QfAGo5AunXeUiu_lwe9wjg000004f7
#undef EXT
#undef dEXT
#undef EXTCONST
#undef dEXTCONST
# if (defined(WIN32) && defined(__MINGW32__)) || defined(__SYMBIAN32__)
# ifdef __cplusplus
#define EXT __declspec(dllexport)
#define dEXT 
#define EXTCONST __declspec(dllexport) extern const
#define dEXTCONST const
# else
#define EXT __declspec(dllexport)
#define dEXT 
#define EXTCONST __declspec(dllexport) const
#define dEXTCONST const
# endif
# else
# ifdef __cplusplus
#define EXT 
#define dEXT 
#define EXTCONST EXTERN_C const
#define dEXTCONST const
# else
#define EXT 
#define dEXT 
#define EXTCONST const
#define dEXTCONST const
# endif
# endif
#undef INIT
#define INIT(x) = x
#define DOINIT 
