for _ in range(int(input())):
	n = int(input())
 
	if(n>45):
		print(-1)
 
	else:
		if(n<=9):
			print(n)
 
		else:
			s = ''
 
			l = 9
 
			while(n-l>0):
				ss = l
				s += str(ss)
				n -= l
				l -= 1
 
			ans = 0
			if(n==0):
				ans = int(s[::-1])
			else:
				s += str(n)
				ans = int(s[::-1])
 
			print(ans)
