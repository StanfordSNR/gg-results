// GGHASH:VVz62YbAlsIqhbQ2fkSZPU1wqJXWUJN6JMQ44ZJ3f7F80000304f
#ifndef _FC_FS_H_
#define _FC_FS_H_ 
#include <linux/types.h>
#define FC_FRAME_HEADER_LEN 24
#define FC_MAX_PAYLOAD 2112U
#define FC_MIN_MAX_PAYLOAD 256U
#define FC_MAX_FRAME (FC_MAX_PAYLOAD + FC_FRAME_HEADER_LEN)
#define FC_MIN_MAX_FRAME (FC_MIN_MAX_PAYLOAD + FC_FRAME_HEADER_LEN)
#define FC_RCTL_ILS_REQ FC_RCTL_DD_UNSOL_CTL
#define FC_RCTL_ILS_REP FC_RCTL_DD_SOL_CTL
#define FC_RCTL_NAMES_INIT { [FC_RCTL_DD_UNCAT] = "uncat", [FC_RCTL_DD_SOL_DATA] = "sol data", [FC_RCTL_DD_UNSOL_CTL] = "unsol ctl", [FC_RCTL_DD_SOL_CTL] = "sol ctl/reply", [FC_RCTL_DD_UNSOL_DATA] = "unsol data", [FC_RCTL_DD_DATA_DESC] = "data desc", [FC_RCTL_DD_UNSOL_CMD] = "unsol cmd", [FC_RCTL_DD_CMD_STATUS] = "cmd status", [FC_RCTL_ELS_REQ] = "ELS req", [FC_RCTL_ELS_REP] = "ELS rep", [FC_RCTL_ELS4_REQ] = "FC-4 ELS req", [FC_RCTL_ELS4_REP] = "FC-4 ELS rep", [FC_RCTL_BA_NOP] = "BLS NOP", [FC_RCTL_BA_ABTS] = "BLS abort", [FC_RCTL_BA_RMC] = "BLS remove connection", [FC_RCTL_BA_ACC] = "BLS accept", [FC_RCTL_BA_RJT] = "BLS reject", [FC_RCTL_BA_PRMT] = "BLS dedicated connection preempted", [FC_RCTL_ACK_1] = "LC ACK_1", [FC_RCTL_ACK_0] = "LC ACK_0", [FC_RCTL_P_RJT] = "LC port reject", [FC_RCTL_F_RJT] = "LC fabric reject", [FC_RCTL_P_BSY] = "LC port busy", [FC_RCTL_F_BSY] = "LC fabric busy to data frame", [FC_RCTL_F_BSYL] = "LC fabric busy to link control frame", [FC_RCTL_LCR] = "LC link credit reset", [FC_RCTL_END] = "LC end", }
#define FC_FID_WELL_KNOWN_MAX 0xffffff
#define FC_FID_WELL_KNOWN_BASE 0xfffff5
#define FC_FID_DOM_MGR 0xfffc00
#define FC_FID_DOMAIN 0
#define FC_FID_PORT 1
#define FC_FID_LINK 2
#define FC_TYPE_NAMES_INIT { [FC_TYPE_BLS] = "BLS", [FC_TYPE_ELS] = "ELS", [FC_TYPE_IP] = "IP", [FC_TYPE_FCP] = "FCP", [FC_TYPE_CT] = "CT", [FC_TYPE_ILS] = "ILS", [FC_TYPE_NVME] = "NVME", }
#define FC_XID_UNKNOWN 0xffff
#define FC_XID_MIN 0x0
#define FC_XID_MAX 0xfffe
#define FC_FC_EX_CTX (1 << 23)
#define FC_FC_SEQ_CTX (1 << 22)
#define FC_FC_FIRST_SEQ (1 << 21)
#define FC_FC_LAST_SEQ (1 << 20)
#define FC_FC_END_SEQ (1 << 19)
#define FC_FC_END_CONN (1 << 18)
#define FC_FC_RES_B17 (1 << 17)
#define FC_FC_SEQ_INIT (1 << 16)
#define FC_FC_X_ID_REASS (1 << 15)
#define FC_FC_X_ID_INVAL (1 << 14)
#define FC_FC_ACK_1 (1 << 12)
#define FC_FC_ACK_N (2 << 12)
#define FC_FC_ACK_0 (3 << 12)
#define FC_FC_RES_B11 (1 << 11)
#define FC_FC_RES_B10 (1 << 10)
#define FC_FC_RETX_SEQ (1 << 9)
#define FC_FC_UNI_TX (1 << 8)
#define FC_FC_CONT_SEQ(i) ((i) << 6)
#define FC_FC_ABT_SEQ(i) ((i) << 4)
#define FC_FC_REL_OFF (1 << 3)
#define FC_FC_RES2 (1 << 2)
#define FC_FC_FILL(i) ((i) & 3)
#define FC_BA_SEQ_ID_VAL 0x80
#define FC_DEF_E_D_TOV 2000UL
#define FC_DEF_R_A_TOV 10000UL
#endif
