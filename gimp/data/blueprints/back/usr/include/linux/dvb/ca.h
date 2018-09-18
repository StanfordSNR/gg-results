// GGHASH:Vk3I9IK913f.U7hoSxTno6nQSlLBO.B7_4qmYUXPc_wM00001097
#ifndef _DVBCA_H_
#define _DVBCA_H_ 
#define CA_CI 1
#define CA_CI_LINK 2
#define CA_CI_PHYS 4
#define CA_DESCR 8
#define CA_SC 128
#define CA_CI_MODULE_PRESENT 1
#define CA_CI_MODULE_READY 2
#define CA_ECD 1
#define CA_NDS 2
#define CA_DSS 4
#define CA_RESET _IO('o', 128)
#define CA_GET_CAP _IOR('o', 129, struct ca_caps)
#define CA_GET_SLOT_INFO _IOR('o', 130, struct ca_slot_info)
#define CA_GET_DESCR_INFO _IOR('o', 131, struct ca_descr_info)
#define CA_GET_MSG _IOR('o', 132, struct ca_msg)
#define CA_SEND_MSG _IOW('o', 133, struct ca_msg)
#define CA_SET_DESCR _IOW('o', 134, struct ca_descr)
#endif
