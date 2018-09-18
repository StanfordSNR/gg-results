// GGHASH:VjPmAofYW3.bzcYu4svV6mUoeTGp6znT1a70Lejd3r4g0000078a
#ifndef _LINUX_TOSHIBA_H
#define _LINUX_TOSHIBA_H 
#define TOSH_PROC "/proc/toshiba"
#define TOSH_DEVICE "/dev/toshiba"
#define TOSHIBA_ACPI_PROC "/proc/acpi/toshiba"
#define TOSHIBA_ACPI_DEVICE "/dev/toshiba_acpi"
#define TOSH_SMM _IOWR('t', 0x90, SMMRegisters)
#define TOSHIBA_ACPI_SCI _IOWR('t', 0x91, SMMRegisters)
#endif
