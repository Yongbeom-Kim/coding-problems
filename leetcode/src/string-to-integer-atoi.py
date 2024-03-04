class Solution:
    def myAtoi(self, s: str) -> int:
        i = 0
        while(i < len(s) and s[i].isspace()):
            i+= 1
        
        if i == len(s):
            return 0
        
        positive = True
        if s[i] == '+' or s[i] == '-':
            positive = s[i] == '+'
            i += 1
        
        if i == len(s):
            return 0
            
        num = 0
        while (i < len(s) and s[i].isdigit()):
            num *= 10
            num += int(s[i])
            i+= 1
        
        if not positive:
            num = -num
        
        return min((1<<31)-1, max(-(1<<31), num))


            