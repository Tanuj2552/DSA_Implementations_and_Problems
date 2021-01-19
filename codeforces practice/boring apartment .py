ll = []
for x in range(1,10):
	for y in range(1,5):
		ll.append(str(x)*y)
 
for x in range(int(input())):
	n = input()
	c = ll.index(n) + 1
 
	q = c//4
	r = c%4
 
	m = r*(r+1)/2
 
	print(int(q*10) + int(m))
