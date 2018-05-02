#!/usr/bin/env python3

import os
import sys
import math
import numpy

from datetime import timedelta
from contextlib import contextmanager

TIME_LINE = 'Elapsed (wall clock) time (h:mm:ss or m:ss): '

def parse_time(time_str):
    seconds = 0
    minutes = 0
    hours = 0

    d = time_str.split(':')

    seconds = float(d[-1])

    if len(d) > 1:
        minutes = int(d[-2])
    if len(d) > 2:
        hours = int(d[-3])
    if len(d) > 3:
        raise Exception("wrong time string: %s" % time_str)

    return timedelta(hours=hours, minutes=minutes, seconds=seconds)

def process_log(log_file):
    point = None

    with open(log_file, "r") as fin:
        for line in fin:
            line = line.strip()
            if line.startswith(TIME_LINE):
                point = line[len(TIME_LINE):]
                break

    assert point != None
    return parse_time(point)

def format_timedelta(td):
    ts = td.total_seconds()
    hours = int(ts // 3600)
    ts = ts % 3600
    minutes = int(ts // 60)
    ts = ts % 60
    seconds = int(math.ceil(ts))

    if hours == 0:
        if minutes == 0:
            return '{:02d}s'.format(seconds)
        else:
            return '{:02d}m {:02d}s'.format(minutes, seconds)
    else:
        return '{}h {:02d}m {:02d}s'.format(hours, minutes, seconds)

def main(log_root):
    actions = ['gg-get', 'gg-remodel', 'gg-force']

    for i in range(1, 51):
        total = None
        data = {}
        for j, action in enumerate(actions):
            log_file = os.path.join(log_root, '%d.%d-%s.log' % (i, j + 1, action))
            point = process_log(log_file)
            data[action] = format_timedelta(point)
            total = point if not total else (total + point)
            #print("%s: %s" % (action, format_timedelta(point)))
        print("%02d: %s [get: %s, remodel: %s, force: %s]"
            % (i, format_timedelta(total),
               data['gg-get'], data['gg-remodel'], data['gg-force']))

if __name__ == '__main__':
    main(sys.argv[1])
