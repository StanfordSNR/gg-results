// GGHASH:VsaMXJHRonpVCl7UrIMldg3v01ExGKnqBquAN8KLHcpI0000a6d9
#ifndef _LINUX_WIRELESS_H
#define _LINUX_WIRELESS_H 
#include <linux/types.h>
#include <linux/socket.h>
#include <linux/if.h>
#define WIRELESS_EXT 22
#define SIOCSIWCOMMIT 0x8B00
#define SIOCGIWNAME 0x8B01
#define SIOCSIWNWID 0x8B02
#define SIOCGIWNWID 0x8B03
#define SIOCSIWFREQ 0x8B04
#define SIOCGIWFREQ 0x8B05
#define SIOCSIWMODE 0x8B06
#define SIOCGIWMODE 0x8B07
#define SIOCSIWSENS 0x8B08
#define SIOCGIWSENS 0x8B09
#define SIOCSIWRANGE 0x8B0A
#define SIOCGIWRANGE 0x8B0B
#define SIOCSIWPRIV 0x8B0C
#define SIOCGIWPRIV 0x8B0D
#define SIOCSIWSTATS 0x8B0E
#define SIOCGIWSTATS 0x8B0F
#define SIOCSIWSPY 0x8B10
#define SIOCGIWSPY 0x8B11
#define SIOCSIWTHRSPY 0x8B12
#define SIOCGIWTHRSPY 0x8B13
#define SIOCSIWAP 0x8B14
#define SIOCGIWAP 0x8B15
#define SIOCGIWAPLIST 0x8B17
#define SIOCSIWSCAN 0x8B18
#define SIOCGIWSCAN 0x8B19
#define SIOCSIWESSID 0x8B1A
#define SIOCGIWESSID 0x8B1B
#define SIOCSIWNICKN 0x8B1C
#define SIOCGIWNICKN 0x8B1D
#define SIOCSIWRATE 0x8B20
#define SIOCGIWRATE 0x8B21
#define SIOCSIWRTS 0x8B22
#define SIOCGIWRTS 0x8B23
#define SIOCSIWFRAG 0x8B24
#define SIOCGIWFRAG 0x8B25
#define SIOCSIWTXPOW 0x8B26
#define SIOCGIWTXPOW 0x8B27
#define SIOCSIWRETRY 0x8B28
#define SIOCGIWRETRY 0x8B29
#define SIOCSIWENCODE 0x8B2A
#define SIOCGIWENCODE 0x8B2B
#define SIOCSIWPOWER 0x8B2C
#define SIOCGIWPOWER 0x8B2D
#define SIOCSIWGENIE 0x8B30
#define SIOCGIWGENIE 0x8B31
#define SIOCSIWMLME 0x8B16
#define SIOCSIWAUTH 0x8B32
#define SIOCGIWAUTH 0x8B33
#define SIOCSIWENCODEEXT 0x8B34
#define SIOCGIWENCODEEXT 0x8B35
#define SIOCSIWPMKSA 0x8B36
#define SIOCIWFIRSTPRIV 0x8BE0
#define SIOCIWLASTPRIV 0x8BFF
#define SIOCIWFIRST 0x8B00
#define SIOCIWLAST SIOCIWLASTPRIV
#define IW_IOCTL_IDX(cmd) ((cmd) - SIOCIWFIRST)
#define IW_HANDLER(id,func) [IW_IOCTL_IDX(id)] = func
#define IW_IS_SET(cmd) (!((cmd) & 0x1))
#define IW_IS_GET(cmd) ((cmd) & 0x1)
#define IWEVTXDROP 0x8C00
#define IWEVQUAL 0x8C01
#define IWEVCUSTOM 0x8C02
#define IWEVREGISTERED 0x8C03
#define IWEVEXPIRED 0x8C04
#define IWEVGENIE 0x8C05
#define IWEVMICHAELMICFAILURE 0x8C06
#define IWEVASSOCREQIE 0x8C07
#define IWEVASSOCRESPIE 0x8C08
#define IWEVPMKIDCAND 0x8C09
#define IWEVFIRST 0x8C00
#define IW_EVENT_IDX(cmd) ((cmd) - IWEVFIRST)
#define IW_PRIV_TYPE_MASK 0x7000
#define IW_PRIV_TYPE_NONE 0x0000
#define IW_PRIV_TYPE_BYTE 0x1000
#define IW_PRIV_TYPE_CHAR 0x2000
#define IW_PRIV_TYPE_INT 0x4000
#define IW_PRIV_TYPE_FLOAT 0x5000
#define IW_PRIV_TYPE_ADDR 0x6000
#define IW_PRIV_SIZE_FIXED 0x0800
#define IW_PRIV_SIZE_MASK 0x07FF
#define IW_MAX_FREQUENCIES 32
#define IW_MAX_BITRATES 32
#define IW_MAX_TXPOWER 8
#define IW_MAX_SPY 8
#define IW_MAX_AP 64
#define IW_ESSID_MAX_SIZE 32
#define IW_MODE_AUTO 0
#define IW_MODE_ADHOC 1
#define IW_MODE_INFRA 2
#define IW_MODE_MASTER 3
#define IW_MODE_REPEAT 4
#define IW_MODE_SECOND 5
#define IW_MODE_MONITOR 6
#define IW_MODE_MESH 7
#define IW_QUAL_QUAL_UPDATED 0x01
#define IW_QUAL_LEVEL_UPDATED 0x02
#define IW_QUAL_NOISE_UPDATED 0x04
#define IW_QUAL_ALL_UPDATED 0x07
#define IW_QUAL_DBM 0x08
#define IW_QUAL_QUAL_INVALID 0x10
#define IW_QUAL_LEVEL_INVALID 0x20
#define IW_QUAL_NOISE_INVALID 0x40
#define IW_QUAL_RCPI 0x80
#define IW_QUAL_ALL_INVALID 0x70
#define IW_FREQ_AUTO 0x00
#define IW_FREQ_FIXED 0x01
#define IW_MAX_ENCODING_SIZES 8
#define IW_ENCODING_TOKEN_MAX 64
#define IW_ENCODE_INDEX 0x00FF
#define IW_ENCODE_FLAGS 0xFF00
#define IW_ENCODE_MODE 0xF000
#define IW_ENCODE_DISABLED 0x8000
#define IW_ENCODE_ENABLED 0x0000
#define IW_ENCODE_RESTRICTED 0x4000
#define IW_ENCODE_OPEN 0x2000
#define IW_ENCODE_NOKEY 0x0800
#define IW_ENCODE_TEMP 0x0400
#define IW_POWER_ON 0x0000
#define IW_POWER_TYPE 0xF000
#define IW_POWER_PERIOD 0x1000
#define IW_POWER_TIMEOUT 0x2000
#define IW_POWER_MODE 0x0F00
#define IW_POWER_UNICAST_R 0x0100
#define IW_POWER_MULTICAST_R 0x0200
#define IW_POWER_ALL_R 0x0300
#define IW_POWER_FORCE_S 0x0400
#define IW_POWER_REPEATER 0x0800
#define IW_POWER_MODIFIER 0x000F
#define IW_POWER_MIN 0x0001
#define IW_POWER_MAX 0x0002
#define IW_POWER_RELATIVE 0x0004
#define IW_TXPOW_TYPE 0x00FF
#define IW_TXPOW_DBM 0x0000
#define IW_TXPOW_MWATT 0x0001
#define IW_TXPOW_RELATIVE 0x0002
#define IW_TXPOW_RANGE 0x1000
#define IW_RETRY_ON 0x0000
#define IW_RETRY_TYPE 0xF000
#define IW_RETRY_LIMIT 0x1000
#define IW_RETRY_LIFETIME 0x2000
#define IW_RETRY_MODIFIER 0x00FF
#define IW_RETRY_MIN 0x0001
#define IW_RETRY_MAX 0x0002
#define IW_RETRY_RELATIVE 0x0004
#define IW_RETRY_SHORT 0x0010
#define IW_RETRY_LONG 0x0020
#define IW_SCAN_DEFAULT 0x0000
#define IW_SCAN_ALL_ESSID 0x0001
#define IW_SCAN_THIS_ESSID 0x0002
#define IW_SCAN_ALL_FREQ 0x0004
#define IW_SCAN_THIS_FREQ 0x0008
#define IW_SCAN_ALL_MODE 0x0010
#define IW_SCAN_THIS_MODE 0x0020
#define IW_SCAN_ALL_RATE 0x0040
#define IW_SCAN_THIS_RATE 0x0080
#define IW_SCAN_TYPE_ACTIVE 0
#define IW_SCAN_TYPE_PASSIVE 1
#define IW_SCAN_MAX_DATA 4096
#define IW_SCAN_CAPA_NONE 0x00
#define IW_SCAN_CAPA_ESSID 0x01
#define IW_SCAN_CAPA_BSSID 0x02
#define IW_SCAN_CAPA_CHANNEL 0x04
#define IW_SCAN_CAPA_MODE 0x08
#define IW_SCAN_CAPA_RATE 0x10
#define IW_SCAN_CAPA_TYPE 0x20
#define IW_SCAN_CAPA_TIME 0x40
#define IW_CUSTOM_MAX 256
#define IW_GENERIC_IE_MAX 1024
#define IW_MLME_DEAUTH 0
#define IW_MLME_DISASSOC 1
#define IW_MLME_AUTH 2
#define IW_MLME_ASSOC 3
#define IW_AUTH_INDEX 0x0FFF
#define IW_AUTH_FLAGS 0xF000
#define IW_AUTH_WPA_VERSION 0
#define IW_AUTH_CIPHER_PAIRWISE 1
#define IW_AUTH_CIPHER_GROUP 2
#define IW_AUTH_KEY_MGMT 3
#define IW_AUTH_TKIP_COUNTERMEASURES 4
#define IW_AUTH_DROP_UNENCRYPTED 5
#define IW_AUTH_80211_AUTH_ALG 6
#define IW_AUTH_WPA_ENABLED 7
#define IW_AUTH_RX_UNENCRYPTED_EAPOL 8
#define IW_AUTH_ROAMING_CONTROL 9
#define IW_AUTH_PRIVACY_INVOKED 10
#define IW_AUTH_CIPHER_GROUP_MGMT 11
#define IW_AUTH_MFP 12
#define IW_AUTH_WPA_VERSION_DISABLED 0x00000001
#define IW_AUTH_WPA_VERSION_WPA 0x00000002
#define IW_AUTH_WPA_VERSION_WPA2 0x00000004
#define IW_AUTH_CIPHER_NONE 0x00000001
#define IW_AUTH_CIPHER_WEP40 0x00000002
#define IW_AUTH_CIPHER_TKIP 0x00000004
#define IW_AUTH_CIPHER_CCMP 0x00000008
#define IW_AUTH_CIPHER_WEP104 0x00000010
#define IW_AUTH_CIPHER_AES_CMAC 0x00000020
#define IW_AUTH_KEY_MGMT_802_1X 1
#define IW_AUTH_KEY_MGMT_PSK 2
#define IW_AUTH_ALG_OPEN_SYSTEM 0x00000001
#define IW_AUTH_ALG_SHARED_KEY 0x00000002
#define IW_AUTH_ALG_LEAP 0x00000004
#define IW_AUTH_ROAMING_ENABLE 0
#define IW_AUTH_ROAMING_DISABLE 1
#define IW_AUTH_MFP_DISABLED 0
#define IW_AUTH_MFP_OPTIONAL 1
#define IW_AUTH_MFP_REQUIRED 2
#define IW_ENCODE_SEQ_MAX_SIZE 8
#define IW_ENCODE_ALG_NONE 0
#define IW_ENCODE_ALG_WEP 1
#define IW_ENCODE_ALG_TKIP 2
#define IW_ENCODE_ALG_CCMP 3
#define IW_ENCODE_ALG_PMK 4
#define IW_ENCODE_ALG_AES_CMAC 5
#define IW_ENCODE_EXT_TX_SEQ_VALID 0x00000001
#define IW_ENCODE_EXT_RX_SEQ_VALID 0x00000002
#define IW_ENCODE_EXT_GROUP_KEY 0x00000004
#define IW_ENCODE_EXT_SET_TX_KEY 0x00000008
#define IW_MICFAILURE_KEY_ID 0x00000003
#define IW_MICFAILURE_GROUP 0x00000004
#define IW_MICFAILURE_PAIRWISE 0x00000008
#define IW_MICFAILURE_STAKEY 0x00000010
#define IW_MICFAILURE_COUNT 0x00000060
#define IW_ENC_CAPA_WPA 0x00000001
#define IW_ENC_CAPA_WPA2 0x00000002
#define IW_ENC_CAPA_CIPHER_TKIP 0x00000004
#define IW_ENC_CAPA_CIPHER_CCMP 0x00000008
#define IW_ENC_CAPA_4WAY_HANDSHAKE 0x00000010
#define IW_EVENT_CAPA_BASE(cmd) ((cmd >= SIOCIWFIRSTPRIV) ? (cmd - SIOCIWFIRSTPRIV + 0x60) : (cmd - SIOCIWFIRST))
#define IW_EVENT_CAPA_INDEX(cmd) (IW_EVENT_CAPA_BASE(cmd) >> 5)
#define IW_EVENT_CAPA_MASK(cmd) (1 << (IW_EVENT_CAPA_BASE(cmd) & 0x1F))
#define IW_EVENT_CAPA_K_0 (IW_EVENT_CAPA_MASK(0x8B04) | IW_EVENT_CAPA_MASK(0x8B06) | IW_EVENT_CAPA_MASK(0x8B1A))
#define IW_EVENT_CAPA_K_1 (IW_EVENT_CAPA_MASK(0x8B2A))
#define IW_EVENT_CAPA_SET(event_capa,cmd) (event_capa[IW_EVENT_CAPA_INDEX(cmd)] |= IW_EVENT_CAPA_MASK(cmd))
#define IW_EVENT_CAPA_SET_KERNEL(event_capa) {event_capa[0] |= IW_EVENT_CAPA_K_0; event_capa[1] |= IW_EVENT_CAPA_K_1; }
#define IW_PMKSA_ADD 1
#define IW_PMKSA_REMOVE 2
#define IW_PMKSA_FLUSH 3
#define IW_PMKID_LEN 16
#define IW_PMKID_CAND_PREAUTH 0x00000001
#define IW_EV_LCP_LEN (sizeof(struct iw_event) - sizeof(union iwreq_data))
#define IW_EV_CHAR_LEN (IW_EV_LCP_LEN + IFNAMSIZ)
#define IW_EV_UINT_LEN (IW_EV_LCP_LEN + sizeof(__u32))
#define IW_EV_FREQ_LEN (IW_EV_LCP_LEN + sizeof(struct iw_freq))
#define IW_EV_PARAM_LEN (IW_EV_LCP_LEN + sizeof(struct iw_param))
#define IW_EV_ADDR_LEN (IW_EV_LCP_LEN + sizeof(struct sockaddr))
#define IW_EV_QUAL_LEN (IW_EV_LCP_LEN + sizeof(struct iw_quality))
#define IW_EV_POINT_OFF (((char *) &(((struct iw_point *) NULL)->length)) - (char *) NULL)
#define IW_EV_POINT_LEN (IW_EV_LCP_LEN + sizeof(struct iw_point) - IW_EV_POINT_OFF)
#define IW_EV_LCP_PK_LEN (4)
#define IW_EV_CHAR_PK_LEN (IW_EV_LCP_PK_LEN + IFNAMSIZ)
#define IW_EV_UINT_PK_LEN (IW_EV_LCP_PK_LEN + sizeof(__u32))
#define IW_EV_FREQ_PK_LEN (IW_EV_LCP_PK_LEN + sizeof(struct iw_freq))
#define IW_EV_PARAM_PK_LEN (IW_EV_LCP_PK_LEN + sizeof(struct iw_param))
#define IW_EV_ADDR_PK_LEN (IW_EV_LCP_PK_LEN + sizeof(struct sockaddr))
#define IW_EV_QUAL_PK_LEN (IW_EV_LCP_PK_LEN + sizeof(struct iw_quality))
#define IW_EV_POINT_PK_LEN (IW_EV_LCP_PK_LEN + 4)
#endif
