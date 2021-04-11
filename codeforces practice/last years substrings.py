for _ in range(int(input())):
	n = int(input())
	s = input()
 
	c = 0
		
	if(s[:4]=='2020') or (s[n-4:]=='2020'):
		c = 1
 
	if((c!=1) and ( (s[:3]=='202') and (s[-1] =='0') or (s[0]=='2') and (s[n-3:]=='020'))):
		c = 1
 
	if((c!=1) and ( (s[:2]=='20') and (s[n-2:] =='20') or (s[:2]=='20') and (s[n-2:]=='20'))):
		c = 1
 
	if(c==1):
		print('YES')
	else:
		print('NO')
