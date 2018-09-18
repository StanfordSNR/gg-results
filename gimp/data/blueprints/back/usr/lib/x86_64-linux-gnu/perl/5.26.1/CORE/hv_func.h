// GGHASH:V.RI0EDi431tmKnot2CTlUHNcO5LPD1.94NZlVzPKoTI00003465
#ifndef PERL_SEEN_HV_FUNC_H
#define PERL_SEEN_HV_FUNC_H 
#if !( 0 || defined(PERL_HASH_FUNC_SIPHASH) || defined(PERL_HASH_FUNC_SIPHASH13) || defined(PERL_HASH_FUNC_HYBRID_OAATHU_SIPHASH13) || defined(PERL_HASH_FUNC_ONE_AT_A_TIME_HARD) )
#if IVSIZE == 8
#define PERL_HASH_FUNC_HYBRID_OAATHU_SIPHASH13 
#else
#define PERL_HASH_FUNC_ONE_AT_A_TIME_HARD 
#endif
#endif
#if defined(PERL_HASH_FUNC_SIPHASH)
#define PERL_HASH_FUNC "SIPHASH_2_4"
#define PERL_HASH_SEED_BYTES 16
#define PERL_HASH_WITH_SEED(seed,hash,str,len) (hash)= S_perl_hash_siphash_2_4((seed),(U8*)(str),(len))
#elif defined(PERL_HASH_FUNC_SIPHASH13)
#define PERL_HASH_FUNC "SIPHASH_1_3"
#define PERL_HASH_SEED_BYTES 16
#define PERL_HASH_WITH_SEED(seed,hash,str,len) (hash)= S_perl_hash_siphash_1_3((seed),(U8*)(str),(len))
#elif defined(PERL_HASH_FUNC_HYBRID_OAATHU_SIPHASH13)
#define PERL_HASH_FUNC "HYBRID_OAATHU_SIPHASH_1_3"
#define PERL_HASH_SEED_BYTES 24
#define PERL_HASH_WITH_SEED(seed,hash,str,len) (hash)= S_perl_hash_oaathu_siphash_1_3((seed),(U8*)(str),(len))
#elif defined(PERL_HASH_FUNC_ONE_AT_A_TIME_HARD)
#define PERL_HASH_FUNC "ONE_AT_A_TIME_HARD"
#define PERL_HASH_SEED_BYTES 8
#define PERL_HASH_WITH_SEED(seed,hash,str,len) (hash)= S_perl_hash_one_at_a_time_hard((seed),(U8*)(str),(len))
#endif
#ifndef PERL_HASH_WITH_SEED
#error "No hash function defined!"
#endif
#ifndef PERL_HASH_SEED_BYTES
#error "PERL_HASH_SEED_BYTES not defined"
#endif
#ifndef PERL_HASH_FUNC
#error "PERL_HASH_FUNC not defined"
#endif
#ifndef PERL_HASH_SEED
# if defined(USE_HASH_SEED) || defined(USE_HASH_SEED_EXPLICIT)
#define PERL_HASH_SEED PL_hash_seed
# elif PERL_HASH_SEED_BYTES == 4
#define PERL_HASH_SEED ((const U8 *)"PeRl")
# elif PERL_HASH_SEED_BYTES == 8
#define PERL_HASH_SEED ((const U8 *)"PeRlHaSh")
# elif PERL_HASH_SEED_BYTES == 16
#define PERL_HASH_SEED ((const U8 *)"PeRlHaShhAcKpErl")
# else
# error "No PERL_HASH_SEED definition for " PERL_HASH_FUNC
# endif
#endif
#define PERL_HASH(hash,str,len) PERL_HASH_WITH_SEED(PERL_HASH_SEED,hash,str,len)
#ifdef PERL_HASH_INTERNAL_ACCESS
#define PERL_HASH_INTERNAL(hash,str,len) PERL_HASH(hash,str,len)
#endif
#if (defined(__GNUC__) && defined(__i386__)) || defined(__WATCOMC__) || defined(_MSC_VER) || defined (__TURBOC__)
#define U8TO16_LE(d) (*((const U16 *) (d)))
#endif
#if !defined (U8TO16_LE)
#define U8TO16_LE(d) ((((const U8 *)(d))[1] << 8) +((const U8 *)(d))[0])
#endif
#if (BYTEORDER == 0x1234 || BYTEORDER == 0x12345678) && U32SIZE == 4
  #define U8TO32_LE(ptr) (*((const U32*)(ptr)))
#elif BYTEORDER == 0x4321 || BYTEORDER == 0x87654321
  #if defined(__GNUC__) && (__GNUC__>4 || (__GNUC__==4 && __GNUC_MINOR__>=3))
    #define U8TO32_LE(ptr) (__builtin_bswap32(*((U32*)(ptr))))
  #else
    #define U8TO32_LE(ptr) (ptr[0]|ptr[1]<<8|ptr[2]<<16|ptr[3]<<24)
    #define UNALIGNED_SAFE
  #endif
#else
  #define U8TO32_LE(ptr) (ptr[0]|ptr[1]<<8|ptr[2]<<16|ptr[3]<<24)
  #define UNALIGNED_SAFE
#endif
#ifdef HAS_QUAD
#ifndef U64TYPE
#define U64 uint64_t
#endif
#endif
#if defined(_MSC_VER)
  #include <stdlib.h>
  #define ROTL32(x,r) _rotl(x,r)
  #ifdef HAS_QUAD
    #define ROTL64(x,r) _rotl64(x,r)
  #endif
#else
  #define ROTL32(x,r) (((U32)x << r) | ((U32)x >> (32 - r)))
  #ifdef HAS_QUAD
    #define ROTL64(x,r) (((U64)x << r) | ((U64)x >> (64 - r)))
  #endif
#endif
#ifdef UV_IS_QUAD
#define ROTL_UV(x,r) ROTL64(x,r)
#else
#define ROTL_UV(x,r) ROTL32(x,r)
#endif
#ifdef HAS_QUAD
#define U8TO64_LE(p) (((U64)((p)[0]) ) | ((U64)((p)[1]) << 8) | ((U64)((p)[2]) << 16) | ((U64)((p)[3]) << 24) | ((U64)((p)[4]) << 32) | ((U64)((p)[5]) << 40) | ((U64)((p)[6]) << 48) | ((U64)((p)[7]) << 56))
#define SIPROUND STMT_START { v0 += v1; v1=ROTL64(v1,13); v1 ^= v0; v0=ROTL64(v0,32); v2 += v3; v3=ROTL64(v3,16); v3 ^= v2; v0 += v3; v3=ROTL64(v3,21); v3 ^= v0; v2 += v1; v1=ROTL64(v1,17); v1 ^= v2; v2=ROTL64(v2,32); } STMT_END
#define PERL_SIPHASH_FNC(FNC,SIP_ROUNDS,SIP_FINAL_ROUNDS) PERL_STATIC_INLINE U32 FNC(const unsigned char * const seed, const unsigned char *in, const STRLEN inlen) { U64 v0 = UINT64_C(0x736f6d6570736575); U64 v1 = UINT64_C(0x646f72616e646f6d); U64 v2 = UINT64_C(0x6c7967656e657261); U64 v3 = UINT64_C(0x7465646279746573); U64 b; U64 k0 = ((const U64*)seed)[0]; U64 k1 = ((const U64*)seed)[1]; U64 m; const int left = inlen & 7; const U8 *end = in + inlen - left; b = ( ( U64 )(inlen) ) << 56; v3 ^= k1; v2 ^= k0; v1 ^= k1; v0 ^= k0; for ( ; in != end; in += 8 ) { m = U8TO64_LE( in ); v3 ^= m; SIP_ROUNDS; v0 ^= m; } switch( left ) { case 7: b |= ( ( U64 )in[ 6] ) << 48; case 6: b |= ( ( U64 )in[ 5] ) << 40; case 5: b |= ( ( U64 )in[ 4] ) << 32; case 4: b |= ( ( U64 )in[ 3] ) << 24; case 3: b |= ( ( U64 )in[ 2] ) << 16; case 2: b |= ( ( U64 )in[ 1] ) << 8; case 1: b |= ( ( U64 )in[ 0] ); break; case 0: break; } v3 ^= b; SIP_ROUNDS; v0 ^= b; v2 ^= 0xff; SIP_FINAL_ROUNDS b = v0 ^ v1 ^ v2 ^ v3; return (U32)(b & U32_MAX); }
#endif
#ifdef HAS_QUAD
#endif
#endif
