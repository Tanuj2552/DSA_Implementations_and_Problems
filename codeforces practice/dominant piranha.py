for x in range(int(input())):
	n = int(input())
	l = [int(i) for i in input().split()]
 
	m = max(l)
	a = l
	if(len(list(set(a))) == 1):
		print(-1)
 
	else:
		
		for i in range(n):
			if(l[i] == m):
				if(i<n-1) and i!=0:
					if(l[i+1] !=m) or (l[i-1] !=m):
						print(i+1)
						break
				elif(i==0):
					if(l[i+1] != m):
						print(i+1)
						break
				elif(i==n-1):
					if(l[i-1]!=m):
						print(i+1)
