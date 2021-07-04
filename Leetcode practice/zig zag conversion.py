class Solution:
    def convert(self, s: str, numRows: int) -> str:
        l = len(s)
        ans = ''
        n = numRows
        if(n==1):
            return s
        for x in range(1,n+1):
            if(x==1) or (x==n):
                st = x-1
                diff = 2*(n-1) 
                while(st < l):
                    ans += s[st]
                    st += diff
                    
            else:
                st = x-1
                dif1 = 2*(n-x)
                dif2 = 2*(x-1)
                count = 0
                while(st < l):
                    ans += s[st]
                    if(count%2==0):
                        st += dif1
                    else:
                        st += dif2
                        
                    count += 1
                    
        return ans
                        
