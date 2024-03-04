class TrieNode:
    def __init__(self, char: str):
        self.char = char
        self.isLeaf = False
        self.wordIfLeaf = ''
        self.children: Dict[str, TrieNode] = dict()
    

class Solution:
    def findWords(self, board: List[List[str]], words: List[str]) -> List[str]:
        rootTrieNode = TrieNode('')
        for word in words:
            trieNode = rootTrieNode
            for i, char in enumerate(word):
                if char not in trieNode.children:
                    trieNode.children[char] = TrieNode(char)
                child = trieNode.children[char]
                if (i == len(word)-1):
                    child.isLeaf = True
                    child.wordIfLeaf = word
                trieNode = child
        R = len(board)
        C = len(board[0])
        solutions = set()
        visited = [[False for _ in range(C)] for _ in range(R)]
        def search(r, c, trieNode):
            if trieNode is None:
                return
            if trieNode.isLeaf:
                solutions.add(trieNode.wordIfLeaf)
            
            visited[r][c] = True
            # search(next_r, next_c, child)
            for dr, dc in [(1, 0), (-1, 0), (0, 1), (0, -1)]:
                newr, newc = r + dr, c + dc
                if newr < 0 or newr >= R or newc < 0 or newc >= C or visited[newr][newc]:
                    continue
                if board[newr][newc] in trieNode.children:
                    search(newr, newc, trieNode.children[board[newr][newc]])
            visited[r][c] = False
    
        for r, row in enumerate(board):
            for c, char in enumerate(row):
                if char in rootTrieNode.children:
                    search(r, c, rootTrieNode.children[char])

        return list(solutions)
            
