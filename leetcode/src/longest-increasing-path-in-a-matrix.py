# https://leetcode.com/problems/longest-increasing-path-in-a-matrix/description/
from collections import deque
class Solution:
    def longestIncreasingPath(self, matrix: List[List[int]]) -> int:
        R = len(matrix)
        C = len(matrix[0])
        def get_edges(r, c):
            edges = []
            for dr, dc in [(1,0),(-1,0),(0,-1),(0,1)]:
                if r+dr >= 0 and r+dr < R and c+dc >= 0 and c+dc < C:
                    if(matrix[r+dr][c+dc] > matrix[r][c]):
                        edges.append((r+dr, c+dc))
            return edges

        in_degree = [[0 for _ in range(C)] for _ in range(R)]
        max_dist = 0
        dist = [[0 for _ in range(C)] for _ in range(R)]

        for r in range(R):
            for c in range(C):
                for nr, nc in get_edges(r, c):
                    in_degree[nr][nc] += 1

        q = deque()
        for r in range(R):
            for c in range(C):
                if in_degree[r][c] == 0:
                    q.append((r, c))

        while q:
            r, c = q.popleft()
            for nr, nc in get_edges(r, c):
                in_degree[nr][nc] -= 1
                if in_degree[nr][nc] == 0:
                    q.append((nr, nc))
                    dist[nr][nc] = dist[r][c] + 1
                    max_dist = max(max_dist, dist[nr][nc])

        return max_dist + 1