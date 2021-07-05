class Solution:
    def reverse(self, x: int) -> int:
        
        if(x == 0):
            return 0
        mu = int(x/abs(x))
        x = abs(x)
        while(x%10==0):
            x /= 10
        
        x = int(x)
        st = str(x)
        st = st[::-1]
        ans = mu*int(st)
        print(ans)
        
        if(ans > 2147483647) or (ans < -2147483648):
            return 0
        return mu*int(st)
        
