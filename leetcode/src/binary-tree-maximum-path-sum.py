# https://leetcode.com/problems/binary-tree-maximum-path-sum/
# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def maxPathSum(self, root: Optional[TreeNode]) -> int:
        maxPathSum = -float('infinity')
        def maxPathHelper(root: Optional[TreeNode]):
            if root is None:
                return 0
            
            left = max(maxPathHelper(root.left), 0)
            right = max(maxPathHelper(root.right), 0)

            nonlocal maxPathSum
            maxPathSum = max(maxPathSum, left + root.val + right)
            return max(left, right) + root.val
        
        maxPathHelper(root)
        return maxPathSum
        
