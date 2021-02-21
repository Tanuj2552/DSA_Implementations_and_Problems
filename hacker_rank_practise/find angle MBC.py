# Enter your code here. Read input from STDIN. Print output to STDOUT
a=int(input())
b=int(input())
c=a/b
import math as m
d=m.atan(c)
print(round(m.degrees(d)),end=u"\N{DEGREE SIGN}")
