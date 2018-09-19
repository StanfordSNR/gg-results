#!/usr/bin/env python3

import time
import pywren

def f(x):
    time.sleep(2)
    return x

wrenexec = pywren.default_executor()
futures = wrenexec.map(f, range(1000))
print(pywren.get_all_results(futures))
