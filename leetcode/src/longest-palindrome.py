"""
https://leetcode.com/problems/longest-palindrome/
Given a string s which consists of lowercase or uppercase letters, return the length of the longest palindrome that can be built with those letters.

Letters are case sensitive, for example, "Aa" is not considered a palindrome here.

 

Example 1:

Input: s = "abccccdd"
Output: 7
Explanation:
One longest palindrome that can be built is "dccaccd", whose length is 7.
Example 2:

Input: s = "a"
Output: 1
Example 3:

Input: s = "bb"
Output: 2
 

Constraints:

1 <= s.length <= 2000
s consists of lowercase and/or uppercase English letters only.
"""

# Solution:

class Solution:
    def longestPalindrome(self, s: str) -> int:
        from collections import Counter
        
        has_odd = False
        
        count = Counter(s)
        
        longest_length = 0
        
        for freq in count.values():
            if freq % 2 == 1:
                longest_length += freq - 1
                has_odd = True
            else:
                longest_length += freq
        
        if has_odd:
            longest_length += 1
        
        return longest_length
            
