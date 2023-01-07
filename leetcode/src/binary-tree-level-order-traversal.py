# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
from collections import deque
class Solution:
    def levelOrder(self, root: Optional[TreeNode]) -> List[List[int]]:

        if (root is None):
            return []
    
        frontier = [root]
        result = []
        while (len(frontier) != 0):
            nextFrontier = []
            result.append([])
            for node in frontier:
                result[-1].append(node.val)
                if (node.left != None):
                    nextFrontier.append(node.left)
                if (node.right != None):
                    nextFrontier.append(node.right)
            
            frontier = nextFrontier

        return result        
