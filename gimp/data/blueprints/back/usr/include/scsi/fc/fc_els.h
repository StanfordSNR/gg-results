// GGHASH:VpLygN9Ukx4DBFXgSb7oglqf0H.eY4JDV6RN_z.w.rYI0000682b
#ifndef _FC_ELS_H_
#define _FC_ELS_H_ 
#include <linux/types.h>
#define FC_ELS_CMDS_INIT { [ELS_LS_RJT] = "LS_RJT", [ELS_LS_ACC] = "LS_ACC", [ELS_PLOGI] = "PLOGI", [ELS_FLOGI] = "FLOGI", [ELS_LOGO] = "LOGO", [ELS_ABTX] = "ABTX", [ELS_RCS] = "RCS", [ELS_RES] = "RES", [ELS_RSS] = "RSS", [ELS_RSI] = "RSI", [ELS_ESTS] = "ESTS", [ELS_ESTC] = "ESTC", [ELS_ADVC] = "ADVC", [ELS_RTV] = "RTV", [ELS_RLS] = "RLS", [ELS_ECHO] = "ECHO", [ELS_TEST] = "TEST", [ELS_RRQ] = "RRQ", [ELS_REC] = "REC", [ELS_SRR] = "SRR", [ELS_PRLI] = "PRLI", [ELS_PRLO] = "PRLO", [ELS_SCN] = "SCN", [ELS_TPLS] = "TPLS", [ELS_TPRLO] = "TPRLO", [ELS_LCLM] = "LCLM", [ELS_GAID] = "GAID", [ELS_FACT] = "FACT", [ELS_FDACDT] = "FDACDT", [ELS_NACT] = "NACT", [ELS_NDACT] = "NDACT", [ELS_QOSR] = "QOSR", [ELS_RVCS] = "RVCS", [ELS_PDISC] = "PDISC", [ELS_FDISC] = "FDISC", [ELS_ADISC] = "ADISC", [ELS_RNC] = "RNC", [ELS_FARP_REQ] = "FARP_REQ", [ELS_FARP_REPL] = "FARP_REPL", [ELS_RPS] = "RPS", [ELS_RPL] = "RPL", [ELS_RPBC] = "RPBC", [ELS_FAN] = "FAN", [ELS_RSCN] = "RSCN", [ELS_SCR] = "SCR", [ELS_RNFT] = "RNFT", [ELS_CSR] = "CSR", [ELS_CSU] = "CSU", [ELS_LINIT] = "LINIT", [ELS_LSTS] = "LSTS", [ELS_RNID] = "RNID", [ELS_RLIR] = "RLIR", [ELS_LIRR] = "LIRR", [ELS_SRL] = "SRL", [ELS_SBRP] = "SBRP", [ELS_RPSC] = "RPSC", [ELS_QSA] = "QSA", [ELS_EVFP] = "EVFP", [ELS_LKA] = "LKA", [ELS_AUTH_ELS] = "AUTH_ELS", }
#define sp_tot_seq sp_u.sp_plogi._sp_tot_seq
#define sp_rel_off sp_u.sp_plogi._sp_rel_off
#define sp_r_a_tov sp_u.sp_flogi_acc._sp_r_a_tov
#define FC_SP_BB_DATA_MASK 0xfff
#define FC_SP_MIN_MAX_PAYLOAD FC_MIN_MAX_PAYLOAD
#define FC_SP_MAX_MAX_PAYLOAD FC_MAX_PAYLOAD
#define FC_SP_FT_NPIV 0x8000
#define FC_SP_FT_CIRO 0x8000
#define FC_SP_FT_CLAD 0x8000
#define FC_SP_FT_RAND 0x4000
#define FC_SP_FT_VAL 0x2000
#define FC_SP_FT_NPIV_ACC 0x2000
#define FC_SP_FT_FPORT 0x1000
#define FC_SP_FT_ABB 0x0800
#define FC_SP_FT_EDTR 0x0400
#define FC_SP_FT_MCAST 0x0200
#define FC_SP_FT_BCAST 0x0100
#define FC_SP_FT_HUNT 0x0080
#define FC_SP_FT_SIMP 0x0040
#define FC_SP_FT_SEC 0x0020
#define FC_SP_FT_CSYN 0x0010
#define FC_SP_FT_RTTOV 0x0008
#define FC_SP_FT_HALF 0x0004
#define FC_SP_FT_SEQC 0x0002
#define FC_SP_FT_PAYL 0x0001
#define FC_CPC_VALID 0x8000
#define FC_CPC_IMIX 0x4000
#define FC_CPC_SEQ 0x0800
#define FC_CPC_CAMP 0x0200
#define FC_CPC_PRI 0x0080
#define FC_CPI_CSYN 0x0010
#define FC_CPR_CSYN 0x0008
#define FC_SPP_OPA_VAL 0x80
#define FC_SPP_RPA_VAL 0x40
#define FC_SPP_EST_IMG_PAIR 0x20
#define FC_SPP_RESP_MASK 0x0f
#define FC_ELS_RTV_EDRES (1 << 26)
#define FC_ELS_RTV_RTTOV (1 << 19)
#define ELS_RSCN_EV_QUAL_BIT 2
#define ELS_RSCN_EV_QUAL_MASK 0xf
#define ELS_RSCN_ADDR_FMT_BIT 0
#define ELS_RSCN_ADDR_FMT_MASK 0x3
#endif
