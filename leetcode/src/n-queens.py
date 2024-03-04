class Solution:
    def solveNQueens(self, n: int) -> List[List[str]]:
        cols = set()
        posDiag = set()
        negDiag = set()
        solutions = [] 
        state = [["." for _ in range(n)] for _ in range(n)]
        def backtrack(r):
            if r == n:
                solutions.append(["".join(r) for r in state])
                return
            
            for i in range(n):
                if i in cols or r+i in posDiag or r-i in negDiag:
                    continue
                state[r][i] = 'Q'
                cols.add(i)
                posDiag.add(r+i)
                negDiag.add(r-i)

                backtrack(r+1)

                state[r][i] = '.'
                cols.remove(i)
                posDiag.remove(r+i)
                negDiag.remove(r-i)
        backtrack(0)
        return solutions
        

        
