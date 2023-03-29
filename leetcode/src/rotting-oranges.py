import queue
class Solution:
    def orangesRotting(self, grid: List[List[int]]) -> int:
        q = queue.Queue()

        m = len(grid)
        n = len(grid[0])
        n_fresh = 0
        for i in range(m):
            for j in range(n):
                if (grid[i][j] == 2):
                    q.put((i, j, 0))
                elif (grid[i][j] == 1):
                    n_fresh += 1
        
        max_depth = 0
        while (not q.empty()):
            r, c, depth = q.get()

            for new_r, new_c in ((r-1, c),(r+1, c),(r, c-1),(r, c+1)):
                if (new_r >= 0 and new_r < m and new_c >= 0 and new_c < n and grid[new_r][new_c] == 1):
                    n_fresh -= 1
                    if (n_fresh == 0):
                        return depth+1
                    grid[new_r][new_c] = 2
                    q.put((new_r, new_c, depth+1))
        
        if (n_fresh == 0):
            return max_depth
        return -1
        