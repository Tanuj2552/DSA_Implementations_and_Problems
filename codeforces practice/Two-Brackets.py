for _ in range(int(input())):
	s = input()
	cbl = 0
	cbr = 0
	sbl = 0
	sbr = 0
	c = 0
	for i in s:
		if(i=='('):
			cbl += 1
		elif(i=='['):
			sbl += 1
		elif(i==')'):
			if(cbl>0):
				cbl -= 1
				c += 1
		elif(i==']'):
			if(sbl>0):
				sbl -= 1
				c += 1
	print(c)
