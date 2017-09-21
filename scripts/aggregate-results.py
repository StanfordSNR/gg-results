#!/usr/bin/env python3

import os
import sys
import numpy

from datetime import timedelta

PROGRAMS = [
    'mosh',
    'protobuf',
    'llvm',
    'ffmpeg',
    'openssh',
    'cmake',
]

TESTS = [
    ('make', 0),
    ('make-64', 0),
    ('icecc-make-64', 0),
    ('gg-64', 1),
    ('gg-ec2-64', 1),
    ('gg-lambda-64', 1),
    ('gg-lambda-1000', 1),
    ('ccache-64', 1),
    ('gg-cache-64', 3),
]

TEST_START_IDX = 0
TEST_COUNT = 12
MIN_ACCEPTABLE = 10
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

def process_logs(log_dir, suffix=''):
    data = []
    for i in range(TEST_START_IDX, TEST_COUNT + 1):
        log_file = os.path.join(log_dir, '%d%s.log' % (i, suffix))

        if not os.path.exists(log_file):
            continue

        point = None
        with open(log_file, "r") as fin:
            for line in fin:
                line = line.strip()
                if line.startswith(TIME_LINE):
                    point = line[len(TIME_LINE):]
                    break

        if not point:
            raise Exception("data not found in %s" % log_file)

        data += [parse_time(point)]

    if len(data) < MIN_ACCEPTABLE:
        raise Exception("Too many failed!")

    seconds_data = [x.total_seconds() for x in data]
    return {
        'mean': timedelta(seconds=numpy.mean(seconds_data)),
        'stdev': timedelta(seconds=numpy.std(seconds_data)),
        'median': timedelta(seconds=numpy.median(seconds_data))
    }

def generate_tables(results_dir):
    output = {x: dict() for x in PROGRAMS}

    for program in PROGRAMS:
        for test, prep_count in TESTS:
            data_path = os.path.join(results_dir, program, test)

            if not os.path.exists(data_path):
                for i in range(prep_count):
                    output[program]['%s@prep%d' % (test, i)] = None
                output[program][test] = None
                continue

            for i in range(prep_count):
                output[program]['%s@prep%d' % (test, i)] = process_logs(data_path, '-prep%d' % i)
            output[program][test] = process_logs(data_path)

    return output

def format_timedelta(td):
    res = str(td)
    return res.strip('0').strip(':')

def main():
    data = generate_tables(sys.argv[1])
    print("tests|%s" % ("|").join(PROGRAMS))
    print("|".join(["---"] * (len(PROGRAMS) + 1)))


    for test, prep_count in TESTS:
        for test_name in ['%s@prep%d' % (test, i) for i in range(prep_count)] + [test]:
            row_data = []

            for p in PROGRAMS:
                if data[p][test_name]:
                    row_data += [format_timedelta(data[p][test_name]['median'])]
                else:
                    row_data += ["—"]

            print("|".join([('**%s**' if '@' not in test_name else '*%s*') % test_name] + row_data))


if __name__ == '__main__':
    main()
