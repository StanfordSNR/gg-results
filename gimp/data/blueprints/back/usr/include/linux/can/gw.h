// GGHASH:V1MOiL7BeU_YCljsPj7ctok2JrYt9UkkUFd4FiWSrqRQ00001d0e
#ifndef _CAN_GW_H
#define _CAN_GW_H 
#include <linux/types.h>
#include <linux/can.h>
#define CGW_TYPE_MAX (__CGW_TYPE_MAX - 1)
#define CGW_MAX (__CGW_MAX - 1)
#define CGW_FLAGS_CAN_ECHO 0x01
#define CGW_FLAGS_CAN_SRC_TSTAMP 0x02
#define CGW_FLAGS_CAN_IIF_TX_OK 0x04
#define CGW_MOD_FUNCS 4
#define CGW_MOD_ID 0x01
#define CGW_MOD_DLC 0x02
#define CGW_MOD_DATA 0x04
#define CGW_FRAME_MODS 3
#define MAX_MODFUNCTIONS (CGW_MOD_FUNCS * CGW_FRAME_MODS)
#define CGW_MODATTR_LEN sizeof(struct cgw_frame_mod)
#define CGW_CS_XOR_LEN sizeof(struct cgw_csum_xor)
#define CGW_CS_CRC8_LEN sizeof(struct cgw_csum_crc8)
#define CGW_CRC8PRF_MAX (__CGW_CRC8PRF_MAX - 1)
#endif
