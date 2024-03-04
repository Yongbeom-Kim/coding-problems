class Solution:
    def solveSudoku(self, board: List[List[str]]) -> None:
        """
        Do not return anything, modify board in-place instead.
        """
        cols = [set() for _ in range(9)]
        rows = [set() for _ in range(9)]
        grid = [[set() for _ in range(3)] for _ in range(3)]

        for r in range(9):
            for c in range(9):
                if board[r][c] == '.':
                    continue
                num = int(board[r][c])
                rows[r].add(num)
                cols[c].add(num)
                grid[r//3][c//3].add(num)
        

        solved = False

        def backtrack(r, c):
            nonlocal solved
            if r == 9:
                solved = True
                return
            if board[r][c] != '.':
                backtrack(r+(c+1)//9,(c+1)%9)
                return
                
            for i in range(1,10):
                if i in rows[r] or i in cols[c] or i in grid[r//3][c//3]:
                    continue
                board[r][c] = str(i)
                rows[r].add(i)
                cols[c].add(i)
                grid[r//3][c//3].add(i)

                backtrack(r+(c+1)//9,(c+1)%9)
                if solved:
                    return

                board[r][c] = '.'
                rows[r].remove(i)
                cols[c].remove(i)
                grid[r//3][c//3].remove(i)


        backtrack(0,0)
