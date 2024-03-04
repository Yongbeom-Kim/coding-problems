class Solution:
    def uniquePaths(self, m: int, n: int) -> int:
        if m > n:
            m, n = n, m
        array = [1 for _ in range(m)]
        for _ in range(n-1):
            for i in range(1, m):
                array[i] = array[i-1] + array[i]

        return array[-1]