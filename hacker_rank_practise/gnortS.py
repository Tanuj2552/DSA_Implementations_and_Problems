# Enter your code here. Read input from STDIN. Print output to STDOUT
s=input()
a=[]
b=[]
c=[]
d=[]
for x in s:
    if(x.isalpha()==True):
        if(x.islower()==True):
            a.append(x)
        else:
            b.append(x)
    else:
        i=int(x)
        if(i%2!=0):
            c.append(str(i))
        else:
            d.append(str(i))

a.sort()
b.sort()
c.sort()
d.sort()
t=a+b+c+d
print(''.join(t))

