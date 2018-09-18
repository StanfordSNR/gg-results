// GGHASH:VjQUi010oJZvbCZ.6nlNR6U9G_uHwpf2mQKq1A3ASo34000009a4
#ifndef _DRI2_TOKENS_H_
#define _DRI2_TOKENS_H_ 
#define DRI2BufferFrontLeft 0
#define DRI2BufferBackLeft 1
#define DRI2BufferFrontRight 2
#define DRI2BufferBackRight 3
#define DRI2BufferDepth 4
#define DRI2BufferStencil 5
#define DRI2BufferAccum 6
#define DRI2BufferFakeFrontLeft 7
#define DRI2BufferFakeFrontRight 8
#define DRI2BufferDepthStencil 9
#define DRI2BufferHiz 10
#define DRI2DriverPrimeMask 7
#define DRI2DriverPrimeShift 16
#define DRI2DriverPrimeId(x) (((x) >> DRI2DriverPrimeShift) & (DRI2DriverPrimeMask))
#define DRI2DriverDRI 0
#define DRI2DriverVDPAU 1
#define DRI2_EXCHANGE_COMPLETE 0x1
#define DRI2_BLIT_COMPLETE 0x2
#define DRI2_FLIP_COMPLETE 0x3
#endif
