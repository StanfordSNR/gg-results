// GGHASH:Vhg.rR064DHwp6KfklzvGI2boZyWoYzWeHi7MA.Gd6qo00001be5
#ifndef _ASM_X86_BOOTPARAM_H
#define _ASM_X86_BOOTPARAM_H 
#define SETUP_NONE 0
#define SETUP_E820_EXT 1
#define SETUP_DTB 2
#define SETUP_PCI 3
#define SETUP_EFI 4
#define SETUP_APPLE_PROPERTIES 5
#define RAMDISK_IMAGE_START_MASK 0x07FF
#define RAMDISK_PROMPT_FLAG 0x8000
#define RAMDISK_LOAD_FLAG 0x4000
#define LOADED_HIGH (1<<0)
#define KASLR_FLAG (1<<1)
#define QUIET_FLAG (1<<5)
#define KEEP_SEGMENTS (1<<6)
#define CAN_USE_HEAP (1<<7)
#define XLF_KERNEL_64 (1<<0)
#define XLF_CAN_BE_LOADED_ABOVE_4G (1<<1)
#define XLF_EFI_HANDOVER_32 (1<<2)
#define XLF_EFI_HANDOVER_64 (1<<3)
#define XLF_EFI_KEXEC (1<<4)
#ifndef __ASSEMBLY__
#include <linux/types.h>
#include <linux/screen_info.h>
#include <linux/apm_bios.h>
#include <linux/edd.h>
#include <asm/ist.h>
#include <video/edid.h>
#define E820_MAX_ENTRIES_ZEROPAGE 128
#endif
#endif
