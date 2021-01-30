def fun(s):
    if(s.count('@')==1) and (s.count('.')==1):
        l=s.split('.')
        if(len(l[1])<=3) and (str(''.join(l[1])).isalnum()==True):
            p=l[0].split('@')
            if(str(''.join(p[1])).isalnum()==True):
                lt=p[0]
                if ('-' in lt) or ('_' in lt):
                    lt=lt.replace('-','')
                    lt=lt.replace('_','')
                if(lt.isalnum()==True):
                    return True
                            
    return False





