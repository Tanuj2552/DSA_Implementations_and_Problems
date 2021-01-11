# Enter your code here. Read input from STDIN. Print output to STDOUT
m,n =map(int,input().split())
l=list(map(int,input().split()))
a=set(map(int,input().split()))
b=set(map(int,input().split()))
c=0
for x in l:
    if x in a:
        c=c+1
    elif (x in b):
        c=c-1
print(c)
