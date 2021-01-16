# Enter your code here. Read input from STDIN. Print output to STDOUT
for i in range(int(input())):
    x=input()
    l=[str(t)*4 for t in range(10)]
    c=0
    if(len(x)==16):
        if (x.isdigit() == True) and ((x[0]=='5') or (x[0]=='6') or (x[0]=='4')) :
            for j in range(len(x)-5):
                if (x[j:j+4] not in l):
                    c=c+1
            
    elif(len(x)==19):
        if(x[4]==x[9]==x[14]=='-'):
            x=x.replace('-','')
            if (x.isdigit() == True) and ((x[0]=='5') or (x[0]=='6') or (x[0]=='4')) :
                for j in range(len(x)-5):
                    if (x[j:j+4] not in l):
                        c=c+1
    if(c==11):
        print('Valid')
    else:
        print('Invalid')
    

    
