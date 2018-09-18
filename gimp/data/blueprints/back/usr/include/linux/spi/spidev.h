// GGHASH:V5juUhHZJfs7wfTRmqKPwXN21L0kWY_MKFUNlt4yJJ1I000013d4
#ifndef SPIDEV_H
#define SPIDEV_H 
#include <linux/types.h>
#include <linux/ioctl.h>
#define SPI_CPHA 0x01
#define SPI_CPOL 0x02
#define SPI_MODE_0 (0|0)
#define SPI_MODE_1 (0|SPI_CPHA)
#define SPI_MODE_2 (SPI_CPOL|0)
#define SPI_MODE_3 (SPI_CPOL|SPI_CPHA)
#define SPI_CS_HIGH 0x04
#define SPI_LSB_FIRST 0x08
#define SPI_3WIRE 0x10
#define SPI_LOOP 0x20
#define SPI_NO_CS 0x40
#define SPI_READY 0x80
#define SPI_TX_DUAL 0x100
#define SPI_TX_QUAD 0x200
#define SPI_RX_DUAL 0x400
#define SPI_RX_QUAD 0x800
#define SPI_IOC_MAGIC 'k'
#define SPI_MSGSIZE(N) ((((N)*(sizeof (struct spi_ioc_transfer))) < (1 << _IOC_SIZEBITS)) ? ((N)*(sizeof (struct spi_ioc_transfer))) : 0)
#define SPI_IOC_MESSAGE(N) _IOW(SPI_IOC_MAGIC, 0, char[SPI_MSGSIZE(N)])
#define SPI_IOC_RD_MODE _IOR(SPI_IOC_MAGIC, 1, __u8)
#define SPI_IOC_WR_MODE _IOW(SPI_IOC_MAGIC, 1, __u8)
#define SPI_IOC_RD_LSB_FIRST _IOR(SPI_IOC_MAGIC, 2, __u8)
#define SPI_IOC_WR_LSB_FIRST _IOW(SPI_IOC_MAGIC, 2, __u8)
#define SPI_IOC_RD_BITS_PER_WORD _IOR(SPI_IOC_MAGIC, 3, __u8)
#define SPI_IOC_WR_BITS_PER_WORD _IOW(SPI_IOC_MAGIC, 3, __u8)
#define SPI_IOC_RD_MAX_SPEED_HZ _IOR(SPI_IOC_MAGIC, 4, __u32)
#define SPI_IOC_WR_MAX_SPEED_HZ _IOW(SPI_IOC_MAGIC, 4, __u32)
#define SPI_IOC_RD_MODE32 _IOR(SPI_IOC_MAGIC, 5, __u32)
#define SPI_IOC_WR_MODE32 _IOW(SPI_IOC_MAGIC, 5, __u32)
#endif
