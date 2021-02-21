for x in range(int(input())):
    n = int(input())
    l = [int(i) for i in input().split()]
    
    l2 = []
    max = l[-1]
    for i in range(n-1, -1 ,-1):
        if (l[i] >= max):
            max = l[i]
            l2.append(l[i])
    l2.reverse()
    for i in l2:
        print(i, end = ' ')
    print('')
