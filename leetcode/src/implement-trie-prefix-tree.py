class Trie:

    def __init__(self):
        self.children = [None]*26
        self.leaf = False

    def insert(self, word: str) -> None:
        if (len(word) == 0):
            self.leaf = True
            return
        
        index = ord(word[0]) - ord('a')
        if (self.children[index] == None):
            self.children[index] = Trie()
        
        self.children[index].insert(word[1:])

    def search(self, word: str) -> bool:
        if (len(word) == 0):
            return self.leaf
        
        index = ord(word[0]) - ord('a')
        if (self.children[index] == None):
            return False
        return self.children[index].search(word[1:])

    def startsWith(self, prefix: str) -> bool:
        if (len(prefix) == 0):
            return True
        
        index = ord(prefix[0]) - ord('a')
        if (self.children[index] == None):
            return False
        print(self.children)
        return self.children[index].startsWith(prefix[1:])


# Your Trie object will be instantiated and called as such:
# obj = Trie()
# obj.insert(word)
# param_2 = obj.search(word)
# param_3 = obj.startsWith(prefix)