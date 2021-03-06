for k in range(int(input())):
	n = int(input())
 
	l = [int(x) for x in input().split()]
 
	#print(f'Case:{k}')
 
	if(n==1):
		print(1)
	else:
		ll = tuple(l)
		l.sort()
		flag = 0
		c = 0
 
		if(l[0]!=l[1]):
				print(ll.index(l[0])+1)
				flag = 1
 
 
		if(flag == 0):
			for i in range(1,n-1):
				if(l[i] == l[i+1]) or (l[i]==l[i-1]):
					c+=1
				else:
					print(ll.index(l[i])+1)
					flag = 1
					break
 
			if(flag == 0):
				if(l[-1]!=l[-2]):
					print(ll.index(l[-1])+1)
				else:
					print(-1)
