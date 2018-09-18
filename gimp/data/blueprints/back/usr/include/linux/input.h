// GGHASH:VT0o2InTLeD9lfmpu8JVWOh3cR3uwdbrFK238xcjS27A00003c5e
#ifndef _INPUT_H
#define _INPUT_H 
#include <sys/time.h>
#include <sys/ioctl.h>
#include <sys/types.h>
#include <linux/types.h>
#include "input-event-codes.h"
#define EV_VERSION 0x010001
#define INPUT_KEYMAP_BY_INDEX (1 << 0)
#define EVIOCGVERSION _IOR('E', 0x01, int)
#define EVIOCGID _IOR('E', 0x02, struct input_id)
#define EVIOCGREP _IOR('E', 0x03, unsigned int[2])
#define EVIOCSREP _IOW('E', 0x03, unsigned int[2])
#define EVIOCGKEYCODE _IOR('E', 0x04, unsigned int[2])
#define EVIOCGKEYCODE_V2 _IOR('E', 0x04, struct input_keymap_entry)
#define EVIOCSKEYCODE _IOW('E', 0x04, unsigned int[2])
#define EVIOCSKEYCODE_V2 _IOW('E', 0x04, struct input_keymap_entry)
#define EVIOCGNAME(len) _IOC(_IOC_READ, 'E', 0x06, len)
#define EVIOCGPHYS(len) _IOC(_IOC_READ, 'E', 0x07, len)
#define EVIOCGUNIQ(len) _IOC(_IOC_READ, 'E', 0x08, len)
#define EVIOCGPROP(len) _IOC(_IOC_READ, 'E', 0x09, len)
#define EVIOCGMTSLOTS(len) _IOC(_IOC_READ, 'E', 0x0a, len)
#define EVIOCGKEY(len) _IOC(_IOC_READ, 'E', 0x18, len)
#define EVIOCGLED(len) _IOC(_IOC_READ, 'E', 0x19, len)
#define EVIOCGSND(len) _IOC(_IOC_READ, 'E', 0x1a, len)
#define EVIOCGSW(len) _IOC(_IOC_READ, 'E', 0x1b, len)
#define EVIOCGBIT(ev,len) _IOC(_IOC_READ, 'E', 0x20 + (ev), len)
#define EVIOCGABS(abs) _IOR('E', 0x40 + (abs), struct input_absinfo)
#define EVIOCSABS(abs) _IOW('E', 0xc0 + (abs), struct input_absinfo)
#define EVIOCSFF _IOW('E', 0x80, struct ff_effect)
#define EVIOCRMFF _IOW('E', 0x81, int)
#define EVIOCGEFFECTS _IOR('E', 0x84, int)
#define EVIOCGRAB _IOW('E', 0x90, int)
#define EVIOCREVOKE _IOW('E', 0x91, int)
#define EVIOCGMASK _IOR('E', 0x92, struct input_mask)
#define EVIOCSMASK _IOW('E', 0x93, struct input_mask)
#define EVIOCSCLOCKID _IOW('E', 0xa0, int)
#define ID_BUS 0
#define ID_VENDOR 1
#define ID_PRODUCT 2
#define ID_VERSION 3
#define BUS_PCI 0x01
#define BUS_ISAPNP 0x02
#define BUS_USB 0x03
#define BUS_HIL 0x04
#define BUS_BLUETOOTH 0x05
#define BUS_VIRTUAL 0x06
#define BUS_ISA 0x10
#define BUS_I8042 0x11
#define BUS_XTKBD 0x12
#define BUS_RS232 0x13
#define BUS_GAMEPORT 0x14
#define BUS_PARPORT 0x15
#define BUS_AMIGA 0x16
#define BUS_ADB 0x17
#define BUS_I2C 0x18
#define BUS_HOST 0x19
#define BUS_GSC 0x1A
#define BUS_ATARI 0x1B
#define BUS_SPI 0x1C
#define BUS_RMI 0x1D
#define BUS_CEC 0x1E
#define BUS_INTEL_ISHTP 0x1F
#define MT_TOOL_FINGER 0
#define MT_TOOL_PEN 1
#define MT_TOOL_PALM 2
#define MT_TOOL_MAX 2
#define FF_STATUS_STOPPED 0x00
#define FF_STATUS_PLAYING 0x01
#define FF_STATUS_MAX 0x01
#define FF_RUMBLE 0x50
#define FF_PERIODIC 0x51
#define FF_CONSTANT 0x52
#define FF_SPRING 0x53
#define FF_FRICTION 0x54
#define FF_DAMPER 0x55
#define FF_INERTIA 0x56
#define FF_RAMP 0x57
#define FF_EFFECT_MIN FF_RUMBLE
#define FF_EFFECT_MAX FF_RAMP
#define FF_SQUARE 0x58
#define FF_TRIANGLE 0x59
#define FF_SINE 0x5a
#define FF_SAW_UP 0x5b
#define FF_SAW_DOWN 0x5c
#define FF_CUSTOM 0x5d
#define FF_WAVEFORM_MIN FF_SQUARE
#define FF_WAVEFORM_MAX FF_CUSTOM
#define FF_GAIN 0x60
#define FF_AUTOCENTER 0x61
#define FF_MAX_EFFECTS FF_GAIN
#define FF_MAX 0x7f
#define FF_CNT (FF_MAX+1)
#endif
