#!/bin/python3

import math
import os
import random
import re
import sys



if __name__ == '__main__':
    nm = input().split()

    n = int(nm[0])

    m = int(nm[1])

    arr = []

    for _ in range(n):
        arr.append(list(map(int, input().rstrip().split())))

    b=[]
    k = int(input())
    for x in arr:
        b.append(x[k])
        
    c=[]
    for x in b:
        c.append(x)
    b.sort()
   
    d=[]
    for x in b:
        d.append(c.index(x))
        c[c.index(x)]=-1234567
        
    e=[]
    for x in d:
        e.append(arr[x])
    
    for x in e:
        print(*x)
            
