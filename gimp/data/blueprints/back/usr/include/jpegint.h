// GGHASH:Vkc6Bt1IFSc4H0d8IfomaOpqVO5_S_FN870NHqL2ycTM00003ce2
#define CSTATE_START 100
#define CSTATE_SCANNING 101
#define CSTATE_RAW_OK 102
#define CSTATE_WRCOEFS 103
#define DSTATE_START 200
#define DSTATE_INHEADER 201
#define DSTATE_READY 202
#define DSTATE_PRELOAD 203
#define DSTATE_PRESCAN 204
#define DSTATE_SCANNING 205
#define DSTATE_RAW_OK 206
#define DSTATE_BUFIMAGE 207
#define DSTATE_BUFPOST 208
#define DSTATE_RDCOEFS 209
#define DSTATE_STOPPING 210
#define LEFT_SHIFT(a,b) ((JLONG)((unsigned long)(a) << (b)))
#undef MAX
#define MAX(a,b) ((a) > (b) ? (a) : (b))
#undef MIN
#define MIN(a,b) ((a) < (b) ? (a) : (b))
#ifdef RIGHT_SHIFT_IS_UNSIGNED
#define SHIFT_TEMPS JLONG shift_temp;
#define RIGHT_SHIFT(x,shft) ((shift_temp = (x)) < 0 ? (shift_temp >> (shft)) | ((~((JLONG) 0)) << (32-(shft))) : (shift_temp >> (shft)))
#else
#define SHIFT_TEMPS 
#define RIGHT_SHIFT(x,shft) ((x) >> (shft))
#endif
#if 0
#endif
#ifdef INCOMPLETE_TYPES_BROKEN
#ifndef AM_MEMORY_MANAGER
#endif
#endif
