#!/usr/bin/env python3

import os
import sys
import math
import numpy

from datetime import timedelta
from contextlib import contextmanager


PROGRAMS = [
    # 'mosh',
    # 'protobuf',
    # 'llvm',
    # 'llvm-minrel',
    # 'clang-minrel',
    # 'ffmpeg-minrel',
    # 'openssh',
    # 'cmake',
    'ffmpeg',
    'gimp',
    'inkscape',
    'chrome',
    'unittesting',
    'sleep2',
    # 'objectrec',
    # 'excamera'
]

TESTS = [
    ('make', 0),
    ('make-48', 0),
    ('icecc-48', 0),
    ('icecc-48x8', 0),
    ('gg-48x8', 1),
    ('gg-lambda', 1),
    ('make-parallel-4', 0),
    ('make-parallel-48', 0),
    ('gg', 0),
    # ('gg-ec2-64', 1),
    # ('gg-lambda-64', 1),
]

PREP_COUNT = {
    'chrome-gg-48x8': 10,
    'chrome-gg-lambda': 10
}

TEST_NAME = {
    'inkscape-icecc-48x8': 'icecc-48x8-2',
    'unittesting-make': 'make-check'
}

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

def process_logs(log_dir, test_count, suffix=''):
    data = []

    for i in range(test_count):
        log_file = os.path.join(log_dir, '%d%s.log' % (i, suffix))

        if not os.path.exists(log_file):
            data += [timedelta(hours=99,minutes=59,seconds=59)]
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

    seconds_data = [x.total_seconds() for x in data]
    return {
        'mean': timedelta(seconds=numpy.mean(seconds_data)),
        'stdev': timedelta(seconds=numpy.std(seconds_data)),
        'median': timedelta(seconds=numpy.median(seconds_data))
    }

def extract_time(log_file):
    point = None
    with open(log_file, "r") as fin:
        for line in fin:
            line = line.strip()
            if line.startswith(TIME_LINE):
                point = line[len(TIME_LINE):]
                break

    return parse_time(point)


def get_total_time(log_dir, test_number, prep_count):
    total = timedelta()

    main_log_file = os.path.join(log_dir, '%d.log' % test_number)
    if not os.path.exists(main_log_file):
        return total
    total += extract_time(main_log_file)


    for i in range(prep_count):
        log_file = os.path.join(log_dir, '%d-prep%d.log' % (test_number, i))
        if not os.path.exists(log_file):
            raise Exception("inconsistency in %s" % log_dir)

        total += extract_time(log_file)

    return total


def generate_tables(results_dir):
    output = {x: dict() for x in PROGRAMS}

    for program in PROGRAMS:
        for test, prep_count in TESTS:
            nametag = '%s-%s' % (program, test)
            actual_test = TEST_NAME.get(nametag, test)
            prep_count = PREP_COUNT.get(nametag, prep_count)

            data_path = os.path.join(results_dir, program, actual_test)

            if not os.path.exists(data_path):
                output[program][test] = None
                continue

            file_count = len(os.listdir(data_path))
            batch_count = 1 + prep_count

            if file_count % batch_count != 0:
                raise Exception("inconsistency in " + data_path)

            test_count = file_count // batch_count

            values = []
            for i in range(test_count):
                values += [get_total_time(data_path, i, prep_count).total_seconds()]

            output[program][test] = {
                'mean': timedelta(seconds=numpy.mean(values)),
                'stdev': timedelta(seconds=numpy.std(values)),
                'median': timedelta(seconds=numpy.median(values))
            }

    return output

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

def format_timedelta_latex(td):
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

def markdown(data):
    print("tests|%s" % ("|").join(PROGRAMS))
    print("|".join(["---"] * (len(PROGRAMS) + 1)))

    for test, prep_count in TESTS:
        row_data = []
        for p in PROGRAMS:
            if data[p][test]:
                row_data += ["%s *(± %s)*" % (format_timedelta(data[p][test]['median']), format_timedelta(data[p][test]['stdev']))]
            else:
                row_data += ["—"]

        print("|".join([('**%s**' if '@' not in test else '*%s*') % test] + row_data))

target_programs = [
    # ('mosh', 'Mosh'),
    # ('openssh', 'OpenSSH'),
    # ('cmake', 'CMake'),
    # ('protobuf', 'Protobuf'),
    ('ffmpeg', 'FFmpeg'),
    ('gimp', 'GIMP'),
    ('inkscape', 'Inkscape'),
    ('chrome', 'Chrome')
]

@contextmanager
def latex_table(cols):
    print(r'% Auto-generated. Please do not edit this file directly.')
    print(r'%')
    print()
    print(r'\centering\fontsize{9}{10}\selectfont')
    print(r'\begin{tabular}{%s}' % cols)

    yield

    print(r'\end{tabular}')

def latex_main_results(data):
    target_tests = [
        ('make', 'make'),
        ('make-48', 'make (48)'),
        ('icecc-48x8', r'Icecream ($48\times8$)'),
        ('gg-48x8', ('gg ($48\times8$)')),
        ('gg-lambda', r'gg-\textlambda'),
    ]

    with latex_table('l %s' % (' '.join(['c'] * len(target_tests)))):
        print('&', ' & '.join([x[1] for x in target_tests]), end='')
        print(r'\\ \hline\hline')

        for pname, plabel in target_programs:
            best = min([data[pname][T]['median'] for T, _ in target_tests])
            print(plabel, '&', ' & '.join([r'{%s%s}' % (r'\cellcolor{blue!10}' if data[pname][T]['median'] == best else '', format_timedelta(data[pname][T]['median'])) for T, _ in target_tests]))
            print(r'\\[1pt]')

def latex_prep_results(data):
    target_tests = [
        ('gg-lambda-2000@prep0', r'gg-\textlambda'),
        ('gg-64@prep0', 'gg (64)'),
        ('gg-remodel', 'remodel'),
    ]

    with latex_table('l %s' % (' '.join(['c'] * len(target_tests)))):
        print('&', ' & '.join([x[1] for x in target_tests]), end='')
        print(r'\\ \hline\hline')

        for pname, plabel in target_programs:
            best = min([data[pname][T]['median'] for T, _ in target_tests])
            print(plabel, '&', ' & '.join([r'{%s}' % (format_timedelta(data[pname][T]['median'])) for T, _ in target_tests]))
            print(r'\\[1pt]')

def latex_excamera_results(data):
    target_programs = [
        ('excamera', 'ExCamera'),
    ]

    target_tests = [
        ('mu', 'mu'),
        ('gg-lambda', r'gg-\textlambda'),
        ('gg-meow', 'gg-meow'),
    ]

    with latex_table('l %s' % (' '.join(['c'] * len(target_tests)))):
        print('&', ' & '.join([x[1] for x in target_tests]), end='')
        print(r'\\ \hline\hline')

        for pname, plabel in target_programs:
            best = min([data[pname][T]['median'] for T, _ in target_tests])
            print(plabel, '&', ' & '.join([r'{%s}' % (format_timedelta(data[pname][T]['median'])) for T, _ in target_tests]))
            print(r'\\[1pt]')

def latex_scanner_results(data):
    target_programs = [
        ('objectrec', 'Object Recognition'),
    ]

    target_tests = [
        ('scanner', 'scanner'),
        ('gg-64-c1', 'gg-64-c1'),
        ('gg-lambda-2000-c1', r'gg-lambda-2000-c1'),
        ('gg-64-c25', 'gg-64-c25'),
        ('gg-lambda-2000-c25', r'gg-lambda-2000-c25'),
    ]

    with latex_table('l %s' % (' '.join(['c'] * len(target_tests)))):
        print('&', ' & '.join([x[1] for x in target_tests]), end='')
        print(r'\\ \hline\hline')

        for pname, plabel in target_programs:
            best = min([data[pname][T]['median'] for T, _ in target_tests])
            print(plabel, '&', ' & '.join([r'{%s}' % (format_timedelta(data[pname][T]['median'])) for T, _ in target_tests]))
            print(r'\\[1pt]')

def latex_cache_results(data):
    target_tests = [
        (('ccache-64',), 'ccache'),
        (('gg-cache-64@prep2', 'gg-cache-64',), 'gg-cache'),
    ]

    with latex_table('l %s' % (' '.join(['c'] * len(target_tests)))):
        print('&', ' & '.join([x[1] for x in target_tests]), end='')
        print(r'\\ \hline\hline')

        for pname, plabel in target_programs:
            print(plabel, '&', ' & '.join([r'{%s}' % (format_timedelta(sum([data[pname][TT]['median'] for TT in T], timedelta(seconds=0)))) for T, _ in target_tests]))
            print(r'\\[1pt]')

def main(output_format, results_dir):
    data = generate_tables(results_dir)

    if output_format == 'markdown':
        markdown(data)
    elif output_format == 'latex-main':
        latex_main_results(data)
    elif output_format == 'latex-prep':
        latex_prep_results(data)
    elif output_format == 'latex-excamera':
        latex_excamera_results(data)
    elif output_format == 'latex-scanner':
        latex_scanner_results(data)
    elif output_format == 'latex-cache':
        latex_cache_results(data)
    else:
        raise Exception("unknown format")

if __name__ == '__main__':
    main(sys.argv[1], sys.argv[2])
