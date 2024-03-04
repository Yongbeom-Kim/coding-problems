class Solution:
    def longestPalindrome(self, s: str) -> str:
        max_str = ''
        max_str_len = 0
        N = len(s)
        for i in range(N):
            lo = i
            hi = i
            while (lo >= 0 and hi < len(s) and s[lo] == s[hi]):
                if (hi-lo+1 > max_str_len):
                    max_str = s[lo:hi+1]
                    max_str_len = hi-lo+1
                lo-= 1
                hi += 1
        for i in range(N-1):
            lo = i
            hi = i+1
            while (lo >= 0 and hi < len(s) and s[lo] == s[hi]):
                if (hi-lo+1 > max_str_len):
                    max_str = s[lo:hi+1]
                    max_str_len = hi-lo+1
                lo-= 1
                hi += 1
        
        return max_str