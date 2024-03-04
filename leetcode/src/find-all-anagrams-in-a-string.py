class Solution:
    def findAnagrams(self, s: str, p: str) -> List[int]:
        target = dict()
        target_len = len(p)
        chars_left = 0
        result = []
        for c in p:
            if c not in target:
                chars_left += 1
            target[c] = target.get(c, 0) + 1
        
        for i in range(len(s)):
            c = s[i]
            
            if c in target:
                target[c] -= 1
                if target[c] == 0:
                    chars_left -= 1
            
            if i >= target_len-1:
                if chars_left == 0:
                    result.append(i-target_len+1)
                if s[i-target_len+1] in target:
                    target[s[i-target_len+1]] += 1
                    if target[s[i-target_len+1]] == 1:
                        chars_left += 1
        

        return result
            
