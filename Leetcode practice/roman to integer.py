class Solution:
    def romanToInt(self, s: str) -> int:
        di = {'I':1, 'V':5, 'X':10, 'L':50, 'C':100, 'D':500, 'M':1000}
        ans = 0
        s = s[::-1]
    
        for x in range(len(s)):
            if(x == 0):
                ans += di[s[0]]
                
            elif(di[s[x]] >= di[s[x-1]]):
                ans += di[s[x]]
                
            else:
                ans -= di[s[x]]
                
        return ans
        
