class Solution:
    def myAtoi(self, s: str) -> int:
        base = ''
        mu = 0
        dig = '0123456789'
        l = len(s)
        st = 0
        
        for x in range(l):
            if(s[x] == ' '):
                if(st == 1):
                    break
                
            elif(s[x] == '-'):
                if(st==1) or (mu == 1):
                    break
                st = 1
                mu = -1
                
            elif(s[x] == '+'):
                if(st==1) or (mu == -1):
                    break
                st = 1
                mu = 1
            
            elif(s[x] in dig):
                base += s[x]
                st = 1
                
            else:
                break
        
        if(mu == 0):
            mu = 1
        if(base == ''):
            ans = 0
        else:
            ans = int(base)
        ans *= mu
        
        if(ans > 2147483647):
            return 2147483647
        if (ans < -2147483648):
            return -2147483648
        
        
        return ans
        
