from collections import deque

class Solution:
    def alienOrder(self, words: List[str]) -> str:
        letter_graph = dict()
        in_degree = dict()
        all_letters = set("".join(words))

        for letter in all_letters:
            letter_graph[letter] = set()
            in_degree[letter] = 0

        for word_idx in range(len(words)-1):
            word = words[word_idx]
            next_word = words[word_idx+1]

            for letter, next_letter in zip(word, next_word):
                if letter == next_letter:
                    continue
                if next_letter in letter_graph[letter]:
                    break
                letter_graph[letter].add(next_letter)
                in_degree[next_letter] += 1
                break
            else: #nobreak
                if len(next_word) < len(word):
                    return ""

        q = deque()
        topological_order = []
        for l, deg in in_degree.items():
            if deg == 0:
                q.append(l)

        while q:
            letter = q.popleft()
            topological_order.append(letter)
            for neighbour in letter_graph[letter]:
                in_degree[neighbour] -= 1
                if in_degree[neighbour] == 0:
                    q.append(neighbour)

        
        for _, deg in in_degree.items():
            if deg != 0:
                return ""

        return "".join(topological_order)
