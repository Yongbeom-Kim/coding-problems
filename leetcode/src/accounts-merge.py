class Solution:
    def accountsMerge(self, accounts: List[List[str]]) -> List[List[str]]:
        accounts = [[name, set(emails)] for name, *emails in accounts]
        N = len(accounts)
        uf = UnionFind(N)
        for i in range(N):
            for j in range(i+1,N):
                if len(accounts[i][1] & accounts[j][1]) > 0:
                    uf.union(i, j)
        for i in range(N):
            for j in range(i+1,N):
                if uf.query(i, j):
                    accounts[i][1] |= accounts[j][1]
                    accounts[j][1] = set()
        return [[name, *list(sorted(list(emails)))] for name, emails in accounts if len(emails) > 0]


class UnionFind:
    def __init__(self, n: int):
        self.parents = list(range(n))
        self.heights = [0 for _ in range(n)]
    
    def get_root_node(self, n: int):
        if (self.parents[n] == n):
            return n
        
        self.parents[n] = self.get_root_node(self.parents[n])
        return self.parents[n]
        # return self.get_root_node(self.parents[n])
    
    def union(self, i: int, j: int):
        i = self.get_root_node(i)
        j = self.get_root_node(j)
        if self.heights[i] > self.heights[j]:
            i, j = j, i
        
        self.parents[i] = self.parents[j]
        self.heights[j] = min(self.heights[j], self.heights[i]+1)
    
    def query(self, i: int, j: int):
        return self.get_root_node(i) == self.get_root_node(j)