class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        maxLength = 0
        if (len(s) <= 1):
            return len(s)
        p1 = 0
        p2 = 0
        chars = {s[0]: 0}
        while (p2 != len(s)-1):
            nextChar = s[p2+1]
            if (nextChar in chars and chars[nextChar] >= p1 and chars[nextChar] <= p2):
                p1 = chars[nextChar]+1
            chars[nextChar] = p2+1
            p2 += 1
            maxLength = max(maxLength, p2-p1+1)
        
        return maxLength