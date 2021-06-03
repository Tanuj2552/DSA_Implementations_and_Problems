class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        temp = 0
        ans = 0
        
        temps = []
        for x in s:
            if(x not in temps):
                temps.append(x)
                temp += 1
                
                if(ans < temp):
                    ans = temp
                    
            else:
                lk = temps.index(x) + 1
                temps = temps[lk:]
                temps.append(x)
                temp = temp - lk + 1
                
        return ans