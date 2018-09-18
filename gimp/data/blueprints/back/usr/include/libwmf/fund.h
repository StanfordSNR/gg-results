// GGHASH:V70v4t_BZx1j_t1kySdWLTR5cu9zKnuodUGN8gVxwft4000006df
#ifndef LIBWMF_FUND_H
#define LIBWMF_FUND_H 
#ifndef U32
#define U32 unsigned int
#endif
#ifndef S32
#define S32 int
#endif
#ifndef U16
#define U16 unsigned short
#endif
#ifndef S16
#define S16 short
#endif
#ifndef U8
#define U8 unsigned char
#endif
#ifdef U16_2_S16
#undef U16_2_S16
#endif
#define U16_2_S16(X) (((X) & 0x8000) ? ((S16) ((S32) (X) - (S32) 0x10000)) : ((S16) (X)))
#ifdef U16_2_S32
#undef U16_2_S32
#endif
#define U16_2_S32(X) (((X) & 0x8000) ? ((S32) (X) - (S32) 0x10000) : ((S32) (X)))
#endif
