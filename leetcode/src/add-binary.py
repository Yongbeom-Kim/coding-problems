"""
https://leetcode.com/problems/add-binary/
Given two binary strings a and b, return their sum as a binary string.

 

Example 1:

Input: a = "11", b = "1"
Output: "100"
Example 2:

Input: a = "1010", b = "1011"
Output: "10101"
 

Constraints:

1 <= a.length, b.length <= 104
a and b consist only of '0' or '1' characters.
Each string does not contain leading zeros except for the zero itself.
"""

class Solution:
    def addBinary(self, a: str, b: str) -> str:
        if len(a) > len(b):
            b = b.rjust(len(a), '0')
        elif len(b) > len(a):
            a = a.rjust(len(b), '0')
        
        carry_over = 0
        current = 0
        overall = []
        
        for i in range(1, len(a)+1):
            current = carry_over + int(a[-i]) + int(b[-i])
            carry_over = current // 2
            overall.append(str(current % 2))
            
        if carry_over == 1:
            overall.append('1')
        
        return "".join(reversed(overall))
