#!/bin/python3

import math
import os
import random
import re
import sys



if __name__ == '__main__':
    s = input()
    from collections import Counter
    lt=list(s)
    lt.sort()
    s=''.join(lt)
    l=Counter(s).most_common(3)
    for x in l:
        print(f'{x[0]} {x[1]}')    
