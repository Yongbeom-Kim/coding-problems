class Solution:
    def minimumLength(self, s: str) -> int:
        lo = 0
        hi = len(s)-1
        while lo < hi:
            if s[lo] != s[hi]:
                return hi-lo+1
            char = s[lo]
            while lo <= hi and s[lo] == char:
                lo+= 1
            while lo <= hi and s[hi] == char:
                hi-=1

        # if lo == hi:
        #     return 1
        # else:
        #     return 0
        return int(lo == hi)