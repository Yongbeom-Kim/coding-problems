class Solution:
    def wordBreak(self, s: str, wordDict: List[str]) -> bool:
        visited = dict()
        def helper(s, wordDict):
            if s in visited:
                return visited[s]
            
            for prefix in wordDict:
                if s == prefix:
                    visited[s] = True
                    return True

                if s.startswith(prefix):
                    if helper(s[len(prefix):], wordDict):
                        visited[s] = True
                        return True
            visited[s] = False
            return False
        
        return helper(s, wordDict)


class Solution:
    def wordBreak(self, s: str, wordDict: List[str]) -> bool:
        memo = set()
        stack = [s]

        while stack:
            s = stack.pop()
            if s in memo:
                continue
            is_possible = False
            for word in wordDict:
                if s == word:
                    return True
                if s.startswith(word):
                    suffix = s[len(word):]
                    if suffix not in memo:
                        stack.append(s[len(word):])
                        is_possible = True
            
            if not is_possible:
                memo.add(s)

        return False