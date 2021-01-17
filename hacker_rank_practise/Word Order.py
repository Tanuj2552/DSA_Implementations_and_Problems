# Enter your code here. Read input from STDIN. Print output to STDOUT
import collections
n=int(input())
l=[]
while(n>0):
    s=input()
    l.append(s)
    n=n-1
t=len(set(l))
print(t)
c=collections.Counter(l)
for x in c:
    print(c[x],end=' ')
        
    

