// GGHASH:VIpD1yu8EgVh2hoIz8qxc_IzAdXfM0mnZ4bLHvZLLXyY0000073b
#ifndef __ASOUNDLIB_H
#define __ASOUNDLIB_H 
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <string.h>
#include <fcntl.h>
#include <assert.h>
#include <sys/poll.h>
#include <errno.h>
#include <stdarg.h>
#include <endian.h>
#ifndef __GNUC__
#define __inline__ inline
#endif
#include <alsa/asoundef.h>
#include <alsa/version.h>
#include <alsa/global.h>
#include <alsa/input.h>
#include <alsa/output.h>
#include <alsa/error.h>
#include <alsa/conf.h>
#include <alsa/pcm.h>
#include <alsa/rawmidi.h>
#include <alsa/timer.h>
#include <alsa/hwdep.h>
#include <alsa/control.h>
#include <alsa/mixer.h>
#include <alsa/seq_event.h>
#include <alsa/seq.h>
#include <alsa/seqmid.h>
#include <alsa/seq_midi_event.h>
#endif
