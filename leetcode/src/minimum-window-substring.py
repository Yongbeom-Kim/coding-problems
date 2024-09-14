from collections import Counter
class Solution:
    def minWindow(self, s: str, t: str) -> str:
        char_count = Counter(t)
        unique_chars_left = len(char_count)

        min_str = ""
        min_str_len = float('infinity')

        lo = 0
        hi = -1
        while lo < len(s):
            if unique_chars_left > 0:
                # Advance hi
                hi += 1
                if hi == len(s):
                    break
                char = s[hi]
                if char in char_count:
                    char_count[char] -= 1
                    if char_count[char] == 0:
                        unique_chars_left -= 1
            else:
                # Advance lo
                char = s[lo]
                lo += 1
                if lo == len(s):
                    break
                if char in char_count:
                    char_count[char] += 1
                    if char_count[char] == 1:
                        unique_chars_left += 1
            
            if unique_chars_left == 0 and hi-lo+1 < min_str_len:
                min_str = s[lo:hi+1]
                min_str_len = hi-lo+1
        return min_str