# https://leetcode.com/problems/longest-valid-parentheses/
class Solution:
    def longestValidParentheses(self, s: str) -> int:
        stack = []
        valid = [False for _ in s]
        for i, char in enumerate(s):
            if char == '(':
                stack.append(i)
            elif char == ')':
                if not stack:
                    continue
                j = stack.pop()
                valid[i] = True
                valid[j] = True
        max_len = 0
        cur_len = 0
        for b in valid:
            if b:
                cur_len += 1
            else:
                cur_len = 0
            max_len = max(max_len, cur_len)

        return max_len