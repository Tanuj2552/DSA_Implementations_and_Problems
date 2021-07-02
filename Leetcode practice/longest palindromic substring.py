class Solution:
    def longestPalindrome(self, s: str) -> str:
        std = s
        s = s.lower()
        n = len(s)
        ans = 0
        finans = []
        
        for x in range(n):
            temp = 1
            
            l,r = x-1, x+1
            while(l>=0 and r <= n-1):
                if(s[l] == s[r]):
                    temp += 2
                    l -= 1
                    r += 1
                else:
                    break
                    
            if(ans < temp):
                L = l
                R = r
                ans = temp
                
        for k in range(n):
            x = k + 0.5
            temp = 0
            l,r = int(x-0.5), int(x+0.5)
            while(l>=0 and r <= n-1):
                if(s[l] == s[r]):
                    temp += 2
                    l -= 1
                    r += 1
                else:
                    break
                    
            if(ans < temp):
                ans = temp
                L = l
                R = r
        
        print(ans)
        print(L,R)
        return std[L+1:R]
            
        
