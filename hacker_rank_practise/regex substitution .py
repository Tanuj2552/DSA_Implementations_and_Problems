# Enter your code here. Read input from STDIN. Print output to STDOUT
n=int(input())


for x in range(n):
    a=input()
    a=a.replace(' && ',' and ')
    a=a.replace(' || ',' or ')
    a=a.replace(' && ',' and ')
    a=a.replace(' || ',' or ')
    
    print(a)
        

    
