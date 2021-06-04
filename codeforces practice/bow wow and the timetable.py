s = input()
n = len(s)
 
if(s=='0'):
	print(0)
elif(n%2==0):
	print(n//2)
else:
	if(s.count('0') +1 == n):
		print(n//2)
	else:
		print((n+1)//2)
