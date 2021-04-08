# Enter your code here. Read input from STDIN. Print output to STDOU
from itertools import groupby
s=input()
l=[]
for x,y in groupby(s):
    print(f'({len(list(y))}, {x})',end=' ')
    
