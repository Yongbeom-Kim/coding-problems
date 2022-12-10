class Solution:
    def getDigit(self, x: int, digit: int) -> int:
        return int((x/(10**(digit-1)))%10);

    def isPalindrome(self, x: int) -> bool:
        if (x < 0):
            return False
        
        y = x;
        digits = 0;
        while (y > 0):
            y //= 10
            digits += 1;
        for i in range(digits//2):
            if (self.getDigit(x, i+1) != self.getDigit(x, digits-i)):
                return False
        return True
        