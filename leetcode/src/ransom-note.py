"""
https://leetcode.com/problems/ransom-note/
Given two strings ransomNote and magazine, return true if ransomNote can be constructed by using the letters from magazine and false otherwise.

Each letter in magazine can only be used once in ransomNote.

 

Example 1:

Input: ransomNote = "a", magazine = "b"
Output: false
Example 2:

Input: ransomNote = "aa", magazine = "ab"
Output: false
Example 3:

Input: ransomNote = "aa", magazine = "aab"
Output: true
 

Constraints:

1 <= ransomNote.length, magazine.length <= 105
ransomNote and magazine consist of lowercase English letters.
"""
#Solution 1: use Dict to count
class Solution:
    def canConstruct(self, ransomNote: str, magazine: str) -> bool:
        letters = {}
        for char in magazine:
            letters[char] = letters.get(char, 0) + 1
        
        for char in ransomNote:
            if char not in letters or letters[char] == 0:
                return False
            letters[char] = letters[char] - 1
        
        return True
            
#Solution 2: Counter class
class Solution:
    def canConstruct(self, ransomNote: str, magazine: str) -> bool:
        from collections import Counter
        rCounter = Counter(ransomNote)
        return rCounter & Counter(magazine) == rCounter
            
