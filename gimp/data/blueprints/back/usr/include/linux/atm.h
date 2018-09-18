// GGHASH:VFTDyjVXBlP_TqhwhVxcApAQyEmchncfwVO.H7aOSpK000001ed0
#ifndef _LINUX_ATM_H
#define _LINUX_ATM_H 
#include <linux/atmapi.h>
#include <linux/atmsap.h>
#include <linux/atmioc.h>
#include <linux/types.h>
#define ATM_CELL_SIZE 53
#define ATM_CELL_PAYLOAD 48
#define ATM_AAL0_SDU 52
#define ATM_MAX_AAL34_PDU 65535
#define ATM_AAL5_TRAILER 8
#define ATM_MAX_AAL5_PDU 65535
#define ATM_MAX_CDV 9999
#define ATM_NOT_RSV_VCI 32
#define ATM_MAX_VPI 255
#define ATM_MAX_VPI_NNI 4096
#define ATM_MAX_VCI 65535
#define ATM_NO_AAL 0
#define ATM_AAL0 13
#define ATM_AAL1 1
#define ATM_AAL2 2
#define ATM_AAL34 3
#define ATM_AAL5 5
#define __SO_ENCODE(l,n,t) ((((l) & 0x1FF) << 22) | ((n) << 16) | sizeof(t))
#define __SO_LEVEL_MATCH(c,m) (((c) >> 22) == ((m) & 0x1FF))
#define __SO_NUMBER(c) (((c) >> 16) & 0x3f)
#define __SO_SIZE(c) ((c) & 0x3fff)
#define SO_SETCLP __SO_ENCODE(SOL_ATM,0,int)
#define SO_CIRANGE __SO_ENCODE(SOL_ATM,1,struct atm_cirange)
#define SO_ATMQOS __SO_ENCODE(SOL_ATM,2,struct atm_qos)
#define SO_ATMSAP __SO_ENCODE(SOL_ATM,3,struct atm_sap)
#define SO_ATMPVC __SO_ENCODE(SOL_ATM,4,struct sockaddr_atmpvc)
#define SO_MULTIPOINT __SO_ENCODE(SOL_ATM, 5, int)
#define ATM_HDR_GFC_MASK 0xf0000000
#define ATM_HDR_GFC_SHIFT 28
#define ATM_HDR_VPI_MASK 0x0ff00000
#define ATM_HDR_VPI_SHIFT 20
#define ATM_HDR_VCI_MASK 0x000ffff0
#define ATM_HDR_VCI_SHIFT 4
#define ATM_HDR_PTI_MASK 0x0000000e
#define ATM_HDR_PTI_SHIFT 1
#define ATM_HDR_CLP 0x00000001
#define ATM_PTI_US0 0
#define ATM_PTI_US1 1
#define ATM_PTI_UCES0 2
#define ATM_PTI_UCES1 3
#define ATM_PTI_SEGF5 4
#define ATM_PTI_E2EF5 5
#define ATM_PTI_RSV_RM 6
#define ATM_PTI_RSV 7
#define ATM_NONE 0
#define ATM_UBR 1
#define ATM_CBR 2
#define ATM_VBR 3
#define ATM_ABR 4
#define ATM_ANYCLASS 5
#define ATM_MAX_PCR -1
#define ATM_ITF_ANY -1
#define ATM_VPI_ANY -1
#define ATM_VCI_ANY -1
#define ATM_VPI_UNSPEC -2
#define ATM_VCI_UNSPEC -2
#define ATM_ESA_LEN 20
#define ATM_E164_LEN 12
#define ATM_AFI_DCC 0x39
#define ATM_AFI_ICD 0x47
#define ATM_AFI_E164 0x45
#define ATM_AFI_LOCAL 0x49
#define ATM_AFI_DCC_GROUP 0xBD
#define ATM_AFI_ICD_GROUP 0xC5
#define ATM_AFI_E164_GROUP 0xC3
#define ATM_AFI_LOCAL_GROUP 0xC7
#define ATM_LIJ_NONE 0
#define ATM_LIJ 1
#define ATM_LIJ_RPJ 2
#define ATM_LIJ_NJ 3
#endif
