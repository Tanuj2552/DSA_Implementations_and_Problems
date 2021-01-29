import string
def print_rangoli(size):
    al = list(string.ascii_lowercase)
    b= 4*size - 3
    for i in range(1,size+1):
        c = (b+3 - 4*i)//2
        ab=al[size-i+1:size]
        ab='-'.join(ab)
        ac=''
        for x in ab:
            ac=ac+x
        ad=str(al[size-i])
        if(i==1):
            print('-'*c + ac[-1::-1]+ad+ ac+'-'*c)
        else:
            print('-'*c + ac[-1::-1]+'-'+ad+'-'+ ac+'-'*c)
            
    for i in range (size-1,0,-1):
        c = (b+3 - 4*i)//2
        ab=al[size-i+1:size]
        ab='-'.join(ab)
        ac=''
        for x in ab:
            ac=ac+x
        ad=str(al[size-i])
        if(i==1):
            print('-'*c + ac[-1::-1]+ad+ ac+'-'*c)
        else:
            print('-'*c + ac[-1::-1]+'-'+ad+'-'+ ac+'-'*c)
        




