# Enter your code here. Read input from STDIN. Print output to STDOUT
n=int(input())
while(n>0):
   
    t=int(input())
    l=[int(x) for x in input().split()]
    if(l[0]>=l[-1]):
        d=l[0]
    else:
        d=l[-1]
    while (l!=[]):
        if(l[0]<=d) and (l[0]>l[-1]):
            d=l[0]
            del(l[0])
        elif(l[-1]<=d) and (l[-1]>l[0]):
            d=l[-1]
            del(l[-1])
        elif(l[0]==l[-1]):
            d=l[0]
            del(l[-1])
        else:
            print('No')
            break

    if(l==[]):
        print('Yes')
    del(l)
        
    n=n-1
