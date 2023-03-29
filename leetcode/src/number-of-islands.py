import queue
class Solution:
    def numIslands(self, grid: List[List[str]]) -> int:
        m = len(grid)
        n = len(grid[0])
        visited = [[False]*n]*m

        def bfs(src_row, src_col):
            if (grid[src_row][src_col] == "0"):
                return 0
            q = queue.Queue()
            q.put((src_row, src_col))
            while (not q.empty()):
                r, c = q.get()
                if (grid[r][c] == "1"):
                    grid[r][c] = "0"
                    if (r-1 >= 0):
                        q.put((r-1, c))
                    if (r+1 < m):
                        q.put((r+1, c))
                    if (c+1 < n):
                        q.put((r, c+1))
                    if (c-1 >= 0):
                        q.put((r, c-1))
                
            return 1

        
        islands = 0
        for i in range(m):
            for j in range(n):
                islands += bfs(i, j)

        return islands