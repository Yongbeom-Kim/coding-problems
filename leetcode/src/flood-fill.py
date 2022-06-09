"""
https://leetcode.com/problems/flood-fill/
An image is represented by an m x n integer grid image where image[i][j] represents the pixel value of the image.

You are also given three integers sr, sc, and newColor. You should perform a flood fill on the image starting from the pixel image[sr][sc].

To perform a flood fill, consider the starting pixel, plus any pixels connected 4-directionally to the starting pixel of the same color as the starting pixel, plus any pixels connected 4-directionally to those pixels (also with the same color), and so on. Replace the color of all of the aforementioned pixels with newColor.

Return the modified image after performing the flood fill.

 

Example 1:


Input: image = [[1,1,1],[1,1,0],[1,0,1]], sr = 1, sc = 1, newColor = 2
Output: [[2,2,2],[2,2,0],[2,0,1]]
Explanation: From the center of the image with position (sr, sc) = (1, 1) (i.e., the red pixel), all pixels connected by a path of the same color as the starting pixel (i.e., the blue pixels) are colored with the new color.
Note the bottom corner is not colored 2, because it is not 4-directionally connected to the starting pixel.
Example 2:

Input: image = [[0,0,0],[0,0,0]], sr = 0, sc = 0, newColor = 2
Output: [[2,2,2],[2,2,2]]
 

Constraints:

m == image.length
n == image[i].length
1 <= m, n <= 50
0 <= image[i][j], newColor < 216
0 <= sr < m
0 <= sc < n
"""

# Solution 1: Normal BFS
class Solution:
    def floodFill(self, image: List[List[int]], sr: int, sc: int, newColor: int) -> List[List[int]]:
        
        from collections import deque
        
        currentColor = image[sr][sc]
        visited = [[False for j in i] for i in image]
        
        q = deque([(sr, sc)])
        
        while q:
            node = q.pop()
            
            if image[node[0]][node[1]] == currentColor and \
            not visited[node[0]][node[1]]:
                
                image[node[0]][node[1]] = newColor
                visited[node[0]][node[1]] = True
                
                if node[0] > 0:
                    q.appendleft((node[0] - 1, node[1]))
                    
                if node[1] > 0:
                    q.appendleft((node[0], node[1] - 1))
                
                if node[0] < len(image) - 1:
                    q.appendleft((node[0] + 1, node[1]))
                    
                if node[1] < len(image[0]) - 1:
                    q.appendleft((node[0], node[1] + 1))
        
        return image
            
# Solution 2: BFS without visited (return itself if new color is old color)
class Solution:
    def floodFill(self, image: List[List[int]], sr: int, sc: int, newColor: int) -> List[List[int]]:
        
        from collections import deque
        
        currentColor = image[sr][sc]
        
        if currentColor == newColor:
            return image
        
        q = deque([(sr, sc)])
        
        while q:
            node = q.pop()
            
            if image[node[0]][node[1]] == currentColor:
                
                image[node[0]][node[1]] = newColor 
                
                if node[0] > 0:
                    q.appendleft((node[0] - 1, node[1]))
                    
                if node[1] > 0:
                    q.appendleft((node[0], node[1] - 1))
                
                if node[0] < len(image) - 1:
                    q.appendleft((node[0] + 1, node[1]))
                    
                if node[1] < len(image[0]) - 1:
                    q.appendleft((node[0], node[1] + 1))
        
        return image
            





