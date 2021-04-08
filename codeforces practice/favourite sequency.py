for _ in range(int(input())):
	n = int(input())
	l = [int(x) for x in input().split()]
 
	if(n%2==0):
		for i in range(n//2):
			print(l[i],end = ' ')
			print(l[n-i-1],end = ' ')
		print('')
	else:
		for i in range((n-1)//2):
			print(l[i],end = ' ')
			print(l[n-i-1],end = ' ')
		print(l[(n-1)//2])
