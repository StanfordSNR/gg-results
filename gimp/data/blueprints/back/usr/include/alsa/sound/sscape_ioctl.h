// GGHASH:Vj9AtOM0qmTizQz.NUf_Nl3IatnqZi9iFASl1s6LuwaY00000170
#ifndef SSCAPE_IOCTL_H
#define SSCAPE_IOCTL_H 
#define SSCAPE_MICROCODE_SIZE 65536
#define SND_SSCAPE_LOAD_BOOTB _IOWR('P', 100, struct sscape_bootblock)
#define SND_SSCAPE_LOAD_MCODE _IOW ('P', 101, struct sscape_microcode)
#endif
