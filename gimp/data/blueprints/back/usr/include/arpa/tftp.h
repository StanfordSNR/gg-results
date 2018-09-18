// GGHASH:VYWCXlM.zQrIpSKxTDGXzrGBXGE6Lf1Z7tPM1W0V8HjE00000beb
#ifndef _ARPA_TFTP_H
#define _ARPA_TFTP_H 1
#define SEGSIZE 512
#define RRQ 01
#define WRQ 02
#define DATA 03
#define ACK 04
#define ERROR 05
#define th_block th_u1.th_u2.th_u3.tu_block
#define th_code th_u1.th_u2.th_u3.tu_code
#define th_stuff th_u1.tu_stuff
#define th_data th_u1.th_u2.tu_data
#define th_msg th_u1.th_u2.tu_data
#define EUNDEF 0
#define ENOTFOUND 1
#define EACCESS 2
#define ENOSPACE 3
#define EBADOP 4
#define EBADID 5
#define EEXISTS 6
#define ENOUSER 7
#endif
