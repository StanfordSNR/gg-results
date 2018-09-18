// GGHASH:Vx47WnYlzbP0iiOZP_1vceqQK_eMjDPdYAhNHkG16BMw00001842
#ifndef _SYS_GMON_H
#define _SYS_GMON_H 1
#include <features.h>
#include <sys/types.h>
#define HISTCOUNTER unsigned short
#define HISTFRACTION 2
#define HASHFRACTION 2
#define ARCDENSITY 3
#define MINARCS 50
#define ARCINDEX unsigned long
#define MAXARCS (1 << 20)
#define ROUNDDOWN(x,y) (((x)/(y))*(y))
#define ROUNDUP(x,y) ((((x)+(y)-1)/(y))*(y))
#define GMON_PROF_ON 0
#define GMON_PROF_BUSY 1
#define GMON_PROF_ERROR 2
#define GMON_PROF_OFF 3
#define GPROF_STATE 0
#define GPROF_COUNT 1
#define GPROF_FROMS 2
#define GPROF_TOS 3
#define GPROF_GMONPARAM 4
#endif
