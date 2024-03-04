# https://leetcode.com/problems/palindrome-pairs/description/
# O(kn^2) solution
def get_prefixes(word: str) -> List[str]:
    prefixes = []
    for left in range(len(word)):
        if word[left:] == word[left:][::-1]:
            prefixes.append(word[:left]) 
    return prefixes

def get_suffixes(word: str) -> List[str]:
    suffixes = []
    for right in range(1, len(word)+1):
        if word[:right] == word[:right][::-1]:
            suffixes.append(word[right:]) 
    return suffixes


class Solution:
    def palindromePairs(self, words: List[str]) -> List[List[int]]:
        word_reverse_mapping = {word:i for i, word in enumerate(words)}
        solutions = []

        for i, word in enumerate(words):
            reversed_word = word[::-1]
            if (reversed_word in word_reverse_mapping and word_reverse_mapping[reversed_word] != i):
                solutions.append([i, word_reverse_mapping[reversed_word]])

            for substr in get_prefixes(word):
                reversed_word = substr[::-1]
                if (reversed_word in word_reverse_mapping and word_reverse_mapping[reversed_word] != i):
                    solutions.append([i, word_reverse_mapping[reversed_word]])

            for substr in get_suffixes(word):
                reversed_word = substr[::-1]
                if (reversed_word in word_reverse_mapping and word_reverse_mapping[reversed_word] != i):
                    solutions.append([word_reverse_mapping[reversed_word], i])
            
        return solutions

            
