class Solution:
    def longestCommonPrefix(self, strs: List[str]) -> str:
        ans = ''
        lmin = len(strs[0])
        imin = 0
        n = len(strs)
        
        for x in range(1,n):
            lt = len(strs[x])
            if(lt < lmin):
                imin = x
                lmin = lt
                
        st = strs[imin]
        strs.remove(st)
        curr = ''
        br = 0
        ls = 0
        for x in range(lmin):
            curr += st[x]
            ls += 1
            for i in strs:
                print(i)
                if(i[:ls] != curr):
                    ls -= 1
                    br = 1
                    break
            if(br):
                break
                    
        return curr[:ls]
                
        
