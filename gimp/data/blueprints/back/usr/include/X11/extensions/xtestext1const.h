// GGHASH:VCHAhZHp_k76feAtTHikiGpiF0ZH4eBOPzCy7ZWOwi0A0000153f
#ifndef _XTESTEXT1CONST_H
#define _XTESTEXT1CONST_H 1
#define XTestMAX_ACTION_LIST_SIZE 64
#define XTestACTIONS_SIZE 28
#define XTestPRESS 1 << 0
#define XTestRELEASE 1 << 1
#define XTestSTROKE 1 << 2
#define XTestSTROKE_DELAY_TIME 10
#define XTestEXCLUSIVE 1 << 0
#define XTestPACKED_ACTIONS 1 << 1
#define XTestPACKED_MOTION 1 << 2
#define XTestFAKE_ACK_NOT_NEEDED 0
#define XTestFAKE_ACK_REQUEST 1
#define XTestEXTENSION_NAME "XTestExtension1"
#define XTestEVENT_COUNT 2
#define XTestACTION_TYPE_MASK 0x03
#define XTestKEY_STATE_MASK 0x04
#define XTestX_SIGN_BIT_MASK 0x04
#define XTestY_SIGN_BIT_MASK 0x08
#define XTestDEVICE_ID_MASK 0xf0
#define XTestMAX_DEVICE_ID 0x0f
#define XTestPackDeviceID(x) (((x) & XTestMAX_DEVICE_ID) << 4)
#define XTestUnpackDeviceID(x) (((x) & XTestDEVICE_ID_MASK) >> 4)
#define XTestDELAY_ACTION 0
#define XTestKEY_ACTION 1
#define XTestMOTION_ACTION 2
#define XTestJUMP_ACTION 3
#define XTestKEY_UP 0x04
#define XTestKEY_DOWN 0x00
#define XTestMOTION_MAX 15
#define XTestMOTION_MIN -15
#define XTestX_NEGATIVE 0x04
#define XTestY_NEGATIVE 0x08
#define XTestX_MOTION_MASK 0x0f
#define XTestY_MOTION_MASK 0xf0
#define XTestPackXMotionValue(x) ((x) & XTestX_MOTION_MASK)
#define XTestPackYMotionValue(x) (((x) << 4) & XTestY_MOTION_MASK)
#define XTestUnpackXMotionValue(x) ((x) & XTestX_MOTION_MASK)
#define XTestUnpackYMotionValue(x) (((x) & XTestY_MOTION_MASK) >> 4)
#define XTestSHORT_DELAY_TIME 0xffff
#define XTestDELAY_DEVICE_ID 0x0f
#endif
