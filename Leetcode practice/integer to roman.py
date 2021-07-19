class Solution:
    def intToRoman(self, num: int) -> str:
        di = {1:'I', 5:'V', 10:'X', 50:'L', 100:'C', 500:'D', 1000:'M'}
        ans = ''
        
        mul = 1000
        while(mul >= 1):
            c = num//mul
            if(c <=3 ):
                ans += di[mul]*c
            elif(c == 4):
                ans += di[mul] + di[mul*5]
            elif(c == 5):
                ans += di[mul*5]
            elif(c <= 8):
                ans += di[mul*5] + di[mul]*(c-5)
            elif(c == 9):
                ans += di[mul] + di[mul*10]  
            
            num %= mul
            mul //= 10
            
        return ans
            
        
        
