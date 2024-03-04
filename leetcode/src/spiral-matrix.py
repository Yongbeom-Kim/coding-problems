class Solution:
    def spiralOrder(self, matrix: List[List[int]]) -> List[int]:
        left = 0
        right = len(matrix[0])-1
        top = 0
        bottom = len(matrix)-1

        result = []
        while True:
            for i in range(left, right+1):
                result.append(matrix[top][i])
            top += 1
            if bottom == top-1:
                break
            for i in range(top, bottom+1):
                result.append(matrix[i][right])
            right -= 1
            if right == left-1:
                break
            for i in reversed(range(left, right+1)):
                result.append(matrix[bottom][i])
            bottom -= 1
            if bottom == top-1:
                break
            for i in reversed(range(top, bottom+1)):
                result.append(matrix[i][left])
            left += 1
            if right == left-1:
                break
        return result