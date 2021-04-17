# Enter your code here. Read input from STDIN. Print output to STDOUT
x,y=input().split()
y=int(y)
a=[]
for i in range(int(x)):
    c=[int(k) for k in input().split()]
    a.append(c[1:])

a.sort(key=len)
n=len(a)
for i in range(7-n):
    a.append([0])

b=[(p**2 +q**2 +r**2 +s**2 +t**2 +u**2 +v**2)%y for p in a[0] for q in a[1] for r in a[2] for s in a[3] for t in a[4] for u in a[5] for v in a[6] ]

print(max(b))
