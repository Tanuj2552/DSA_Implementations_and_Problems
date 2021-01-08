def minion_game(string):
    vo=['A','E','I','O','U']
    s=0
    k=0
    l=string
    for x in range(len(l)):
        if (l[x] in vo):
            k= k + len(l)-x
        else:
            s=s+len(l)-x
    if(s>k):
        print(f'Stuart {s}')
    elif(k>s):
        print(f'Kevin {k}')
    else:
        print("Draw")

