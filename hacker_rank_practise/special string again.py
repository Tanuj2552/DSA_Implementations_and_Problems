#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the substrCount function below.
def odd_count(s,x):
    n = len(s)
    if((x==0) or (x==n-1)):
        return 0
    i = 1
    j = x
    re = 0
    c = s[j-1]
    while((j-i>=0) and (j+i<=n-1)):
        if((s[j-i] == s[j+i]) and (c==s[j-i]) and (c!=s[j])):
            re += 1
            i += 1
        else:
            break
    return re      

def substrCount(n, s):
    ans = n
    ans += sum([odd_count(s,x) for x in range(n)])
    
    c = 1
    for x in range(n-1):
        if((s[x] == s[x+1])):
            c+=1
            
        else:
            ans += (c*(c-1))//2
            c = 1
            
    ans += (c*(c-1))//2
    
    return ans
    
if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    n = int(input())

    s = input()

    result = substrCount(n, s)

    fptr.write(str(result) + '\n')

    fptr.close()
