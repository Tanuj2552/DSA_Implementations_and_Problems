# Enter your code here. Read input from STDIN. Print output to STDOUT
from itertools import combinations
n=int(input())
l=list(map(str,input().split()))
m=int(input())
c=list(combinations(l,m))
d=0
for x in c:
    if 'a' in x:
        d=d+1

print(d/len(c))
