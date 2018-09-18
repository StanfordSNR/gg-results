// GGHASH:VC5Otyj5ZPIQpLKontICAYZEz9R0aaTJbqDQ2o7Bizb4000070a7
#ifndef __UTF8_H__
#define __UTF8_H__ 
#include "unicode/umachine.h"
#ifndef __UTF_H__
# include "unicode/utf.h"
#endif
#define U8_COUNT_TRAIL_BYTES(leadByte) (U8_IS_LEAD(leadByte) ? ((uint8_t)(leadByte)>=0xe0)+((uint8_t)(leadByte)>=0xf0)+1 : 0)
#define U8_COUNT_TRAIL_BYTES_UNSAFE(leadByte) (((uint8_t)(leadByte)>=0xc2)+((uint8_t)(leadByte)>=0xe0)+((uint8_t)(leadByte)>=0xf0))
#define U8_MASK_LEAD_BYTE(leadByte,countTrailBytes) ((leadByte)&=(1<<(6-(countTrailBytes)))-1)
#define U8_LEAD3_T1_BITS "\x20\x30\x30\x30\x30\x30\x30\x30\x30\x30\x30\x30\x30\x10\x30\x30"
#define U8_IS_VALID_LEAD3_AND_T1(lead,t1) (U8_LEAD3_T1_BITS[(lead)&0xf]&(1<<((uint8_t)(t1)>>5)))
#define U8_LEAD4_T1_BITS "\x00\x00\x00\x00\x00\x00\x00\x00\x1E\x0F\x0F\x0F\x00\x00\x00\x00"
#define U8_IS_VALID_LEAD4_AND_T1(lead,t1) (U8_LEAD4_T1_BITS[(uint8_t)(t1)>>4]&(1<<((lead)&7)))
#define U8_IS_SINGLE(c) (((c)&0x80)==0)
#define U8_IS_LEAD(c) ((uint8_t)((c)-0xc2)<=0x32)
#define U8_IS_TRAIL(c) ((int8_t)(c)<-0x40)
#define U8_LENGTH(c) ((uint32_t)(c)<=0x7f ? 1 : ((uint32_t)(c)<=0x7ff ? 2 : ((uint32_t)(c)<=0xd7ff ? 3 : ((uint32_t)(c)<=0xdfff || (uint32_t)(c)>0x10ffff ? 0 : ((uint32_t)(c)<=0xffff ? 3 : 4) ) ) ) )
#define U8_MAX_LENGTH 4
#define U8_GET_UNSAFE(s,i,c) { int32_t _u8_get_unsafe_index=(int32_t)(i); U8_SET_CP_START_UNSAFE(s, _u8_get_unsafe_index); U8_NEXT_UNSAFE(s, _u8_get_unsafe_index, c); }
#define U8_GET(s,start,i,length,c) { int32_t _u8_get_index=(i); U8_SET_CP_START(s, start, _u8_get_index); U8_NEXT(s, _u8_get_index, length, c); }
#define U8_GET_OR_FFFD(s,start,i,length,c) { int32_t _u8_get_index=(i); U8_SET_CP_START(s, start, _u8_get_index); U8_NEXT_OR_FFFD(s, _u8_get_index, length, c); }
#define U8_NEXT_UNSAFE(s,i,c) { (c)=(uint8_t)(s)[(i)++]; if(!U8_IS_SINGLE(c)) { if((c)<0xe0) { (c)=(((c)&0x1f)<<6)|((s)[(i)++]&0x3f); } else if((c)<0xf0) { (c)=(UChar)(((c)<<12)|(((s)[i]&0x3f)<<6)|((s)[(i)+1]&0x3f)); (i)+=2; } else { (c)=(((c)&7)<<18)|(((s)[i]&0x3f)<<12)|(((s)[(i)+1]&0x3f)<<6)|((s)[(i)+2]&0x3f); (i)+=3; } } }
#define U8_NEXT(s,i,length,c) { (c)=(uint8_t)(s)[(i)++]; if(!U8_IS_SINGLE(c)) { uint8_t __t1, __t2; if( (0xe0<=(c) && (c)<0xf0) && (((i)+1)<(length) || (length)<0) && U8_IS_VALID_LEAD3_AND_T1((c), __t1=(s)[i]) && (__t2=(s)[(i)+1]-0x80)<=0x3f) { (c)=(((c)&0xf)<<12)|((__t1&0x3f)<<6)|__t2; (i)+=2; } else if( ((c)<0xe0 && (c)>=0xc2) && ((i)!=(length)) && (__t1=(s)[i]-0x80)<=0x3f) { (c)=(((c)&0x1f)<<6)|__t1; ++(i); } else { (c)=utf8_nextCharSafeBody((const uint8_t *)s, &(i), (length), c, -1); } } }
#define U8_NEXT_OR_FFFD(s,i,length,c) { (c)=(uint8_t)(s)[(i)++]; if(!U8_IS_SINGLE(c)) { uint8_t __t1, __t2; if( (0xe0<=(c) && (c)<0xf0) && (((i)+1)<(length) || (length)<0) && U8_IS_VALID_LEAD3_AND_T1((c), __t1=(s)[i]) && (__t2=(s)[(i)+1]-0x80)<=0x3f) { (c)=(((c)&0xf)<<12)|((__t1&0x3f)<<6)|__t2; (i)+=2; } else if( ((c)<0xe0 && (c)>=0xc2) && ((i)!=(length)) && (__t1=(s)[i]-0x80)<=0x3f) { (c)=(((c)&0x1f)<<6)|__t1; ++(i); } else { (c)=utf8_nextCharSafeBody((const uint8_t *)s, &(i), (length), c, -3); } } }
#define U8_APPEND_UNSAFE(s,i,c) { if((uint32_t)(c)<=0x7f) { (s)[(i)++]=(uint8_t)(c); } else { if((uint32_t)(c)<=0x7ff) { (s)[(i)++]=(uint8_t)(((c)>>6)|0xc0); } else { if((uint32_t)(c)<=0xffff) { (s)[(i)++]=(uint8_t)(((c)>>12)|0xe0); } else { (s)[(i)++]=(uint8_t)(((c)>>18)|0xf0); (s)[(i)++]=(uint8_t)((((c)>>12)&0x3f)|0x80); } (s)[(i)++]=(uint8_t)((((c)>>6)&0x3f)|0x80); } (s)[(i)++]=(uint8_t)(((c)&0x3f)|0x80); } }
#define U8_APPEND(s,i,capacity,c,isError) { if((uint32_t)(c)<=0x7f) { (s)[(i)++]=(uint8_t)(c); } else if((uint32_t)(c)<=0x7ff && (i)+1<(capacity)) { (s)[(i)++]=(uint8_t)(((c)>>6)|0xc0); (s)[(i)++]=(uint8_t)(((c)&0x3f)|0x80); } else if((uint32_t)(c)<=0xd7ff && (i)+2<(capacity)) { (s)[(i)++]=(uint8_t)(((c)>>12)|0xe0); (s)[(i)++]=(uint8_t)((((c)>>6)&0x3f)|0x80); (s)[(i)++]=(uint8_t)(((c)&0x3f)|0x80); } else { (i)=utf8_appendCharSafeBody(s, (i), (capacity), c, &(isError)); } }
#define U8_FWD_1_UNSAFE(s,i) { (i)+=1+U8_COUNT_TRAIL_BYTES_UNSAFE((s)[i]); }
#define U8_FWD_1(s,i,length) { uint8_t __b=(s)[(i)++]; if(U8_IS_LEAD(__b) && (i)!=(length)) { uint8_t __t1=(s)[i]; if((0xe0<=__b && __b<0xf0)) { if(U8_IS_VALID_LEAD3_AND_T1(__b, __t1) && ++(i)!=(length) && U8_IS_TRAIL((s)[i])) { ++(i); } } else if(__b<0xe0) { if(U8_IS_TRAIL(__t1)) { ++(i); } } else { if(U8_IS_VALID_LEAD4_AND_T1(__b, __t1) && ++(i)!=(length) && U8_IS_TRAIL((s)[i]) && ++(i)!=(length) && U8_IS_TRAIL((s)[i])) { ++(i); } } } }
#define U8_FWD_N_UNSAFE(s,i,n) { int32_t __N=(n); while(__N>0) { U8_FWD_1_UNSAFE(s, i); --__N; } }
#define U8_FWD_N(s,i,length,n) { int32_t __N=(n); while(__N>0 && ((i)<(length) || ((length)<0 && (s)[i]!=0))) { U8_FWD_1(s, i, length); --__N; } }
#define U8_SET_CP_START_UNSAFE(s,i) { while(U8_IS_TRAIL((s)[i])) { --(i); } }
#define U8_SET_CP_START(s,start,i) { if(U8_IS_TRAIL((s)[(i)])) { (i)=utf8_back1SafeBody(s, start, (i)); } }
#define U8_PREV_UNSAFE(s,i,c) { (c)=(uint8_t)(s)[--(i)]; if(U8_IS_TRAIL(c)) { uint8_t __b, __count=1, __shift=6; (c)&=0x3f; for(;;) { __b=(s)[--(i)]; if(__b>=0xc0) { U8_MASK_LEAD_BYTE(__b, __count); (c)|=(UChar32)__b<<__shift; break; } else { (c)|=(UChar32)(__b&0x3f)<<__shift; ++__count; __shift+=6; } } } }
#define U8_PREV(s,start,i,c) { (c)=(uint8_t)(s)[--(i)]; if(!U8_IS_SINGLE(c)) { (c)=utf8_prevCharSafeBody((const uint8_t *)s, start, &(i), c, -1); } }
#define U8_PREV_OR_FFFD(s,start,i,c) { (c)=(uint8_t)(s)[--(i)]; if(!U8_IS_SINGLE(c)) { (c)=utf8_prevCharSafeBody((const uint8_t *)s, start, &(i), c, -3); } }
#define U8_BACK_1_UNSAFE(s,i) { while(U8_IS_TRAIL((s)[--(i)])) {} }
#define U8_BACK_1(s,start,i) { if(U8_IS_TRAIL((s)[--(i)])) { (i)=utf8_back1SafeBody(s, start, (i)); } }
#define U8_BACK_N_UNSAFE(s,i,n) { int32_t __N=(n); while(__N>0) { U8_BACK_1_UNSAFE(s, i); --__N; } }
#define U8_BACK_N(s,start,i,n) { int32_t __N=(n); while(__N>0 && (i)>(start)) { U8_BACK_1(s, start, i); --__N; } }
#define U8_SET_CP_LIMIT_UNSAFE(s,i) { U8_BACK_1_UNSAFE(s, i); U8_FWD_1_UNSAFE(s, i); }
#define U8_SET_CP_LIMIT(s,start,i,length) { if((start)<(i) && ((i)<(length) || (length)<0)) { U8_BACK_1(s, start, i); U8_FWD_1(s, i, length); } }
#endif
