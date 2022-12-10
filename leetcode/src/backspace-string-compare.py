class Solution:
    def backspaceCompare(self, s: str, t: str) -> bool:
        p1 = len(s)-1
        p2 = len(t)-1
        while (True):
            skip1 = 0
            skip2 = 0

            while (p1 >= 0 and (s[p1] == '#' or skip1 > 0)):
                if (s[p1] == '#'):
                    skip1 += 2
                skip1 -= 1
                p1 -= 1
        
            while (p2 >= 0 and (t[p2] == '#' or skip2 > 0)):
                if (t[p2] == '#'):
                    skip2 += 2
                skip2 -= 1
                p2 -= 1
            
            if (p1 < 0 and p2 < 0):
                return True
            if (p1 < 0 or p2 < 0):
                return False
            if (s[p1] != t[p2]):
                return False
            else:
                p1 -= 1
                p2 -= 1

        return True
        
        