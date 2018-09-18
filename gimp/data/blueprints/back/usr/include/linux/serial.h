// GGHASH:V5kr88icKbfahaujIxPgAXAPXGA_tDPwcZgdnxh3MRUI00000d5d
#ifndef _LINUX_SERIAL_H
#define _LINUX_SERIAL_H 
#include <linux/types.h>
#include <linux/tty_flags.h>
#define ASYNC_CLOSING_WAIT_INF 0
#define ASYNC_CLOSING_WAIT_NONE 65535
#define PORT_UNKNOWN 0
#define PORT_8250 1
#define PORT_16450 2
#define PORT_16550 3
#define PORT_16550A 4
#define PORT_CIRRUS 5
#define PORT_16650 6
#define PORT_16650V2 7
#define PORT_16750 8
#define PORT_STARTECH 9
#define PORT_16C950 10
#define PORT_16654 11
#define PORT_16850 12
#define PORT_RSA 13
#define PORT_MAX 13
#define SERIAL_IO_PORT 0
#define SERIAL_IO_HUB6 1
#define SERIAL_IO_MEM 2
#define SERIAL_IO_MEM32 3
#define SERIAL_IO_AU 4
#define SERIAL_IO_TSI 5
#define SERIAL_IO_MEM32BE 6
#define SERIAL_IO_MEM16 7
#define UART_CLEAR_FIFO 0x01
#define UART_USE_FIFO 0x02
#define UART_STARTECH 0x04
#define UART_NATSEMI 0x08
#define SER_RS485_ENABLED (1 << 0)
#define SER_RS485_RTS_ON_SEND (1 << 1)
#define SER_RS485_RTS_AFTER_SEND (1 << 2)
#define SER_RS485_RX_DURING_TX (1 << 4)
#define SER_RS485_TERMINATE_BUS (1 << 5)
#endif
