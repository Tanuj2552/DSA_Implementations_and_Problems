    
    if ( 9*a < b) or b == 0:
        print(-1)
        
    else:
    
        n = b//9
        m = b%9
        
        i = 0
        for j in range(n):
            i = i + 9 * (10**(a-j-1))
            
        i+= m*(10**(a-n-1))
        
        print(i)
        
