class Solution:
    def letterCombinations(self, digits: str) -> List[str]:
        d = {'1':[],'2':['a','b','c'], '3':['d','e','f'], '4':['g','h','i'], '5':['j','k','l'],
            '6':['m','n','o'], '7':['p','q','r','s'], '8':['t','u','v'], '9':['w','x','y','z']
            }
        
        ans = []
        if(digits == ""):
            return ans
        l = 1
        for x in range(len(digits)):
            l *= len(d[digits[x]])
            
        ans = l*['']
        j = 0
        k=1*l
        fix = 1*l
        for x in digits:
            k //= len(d[x])
            print(l,k)
            
            for i in range(fix):
                ans[i] += d[x][int((i%l)/k)]
                print(int((i%l)/k))
            l //= len(d[x])
                
        return ans
