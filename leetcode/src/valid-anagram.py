"""
https://leetcode.com/problems/valid-anagram/
Given two strings s and t, return true if t is an anagram of s, and false otherwise.

An Anagram is a word or phrase formed by rearranging the letters of a different word or phrase, typically using all the original letters exactly once.

 

Example 1:

Input: s = "anagram", t = "nagaram"
Output: true
Example 2:

Input: s = "rat", t = "car"
Output: false
 

Constraints:

1 <= s.length, t.length <= 5 * 104
s and t consist of lowercase English letters.
 

Follow up: What if the inputs contain Unicode characters? How would you adapt your solution to such a case?
"""
# Solution 1: Compare sorted strings
# O(n log n) time, O(1) space
class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        return sorted(s) == sorted(t)

# Solution 2: Count frequency of letters
# O(n) time, O(n) space
class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        s_char_count = {}
        
        for c in s:
            s_char_count[c] = s_char_count.get(c, 0) + 1
        
        for c in t:
            if c not in s_char_count or s_char_count[c] == 0:
                return False
            
            s_char_count[c] -= 1
        
        for key, value in s_char_count.items():
            if value != 0:
                return False
        
        return True
    
        
