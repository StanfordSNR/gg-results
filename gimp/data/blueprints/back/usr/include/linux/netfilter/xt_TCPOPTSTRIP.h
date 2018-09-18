// GGHASH:VFfrAJfLvh873OH4qjEq_TtI8pZhoJW443lCV.FfePMM00000197
#ifndef _XT_TCPOPTSTRIP_H
#define _XT_TCPOPTSTRIP_H 
#include <linux/types.h>
#define tcpoptstrip_set_bit(bmap,idx) (bmap[(idx) >> 5] |= 1U << (idx & 31))
#define tcpoptstrip_test_bit(bmap,idx) (((1U << (idx & 31)) & bmap[(idx) >> 5]) != 0)
#endif
