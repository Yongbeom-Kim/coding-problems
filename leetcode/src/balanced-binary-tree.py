"""
https://leetcode.com/problems/balanced-binary-tree/
Given a binary tree, determine if it is height-balanced.

For this problem, a height-balanced binary tree is defined as:

a binary tree in which the left and right subtrees of every node differ in height by no more than 1.

 

Example 1:


Input: root = [3,9,20,null,null,15,7]
Output: true
Example 2:


Input: root = [1,2,2,3,3,null,null,4,4]
Output: false
Example 3:

Input: root = []
Output: true
 

Constraints:

The number of nodes in the tree is in the range [0, 5000].
-104 <= Node.val <= 104
"""

Solution 1: Recursive
  # Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def isBalanced(self, root: Optional[TreeNode]) -> bool:
        
        def check(self):
            """
            Checks if node is height-balanced and returns node height
            Null trees have height -1
            Returns -2 if node is not balanced
            """
            if self is None:
                return -1
            
            leftHeight = check(self.left)
            if leftHeight == -2:
                return -2
            
            rightHeight = check(self.right)
            if rightHeight == -2:
                return -2
            
            if abs(leftHeight - rightHeight) > 1:
                return -2
            
            return max(leftHeight, rightHeight) + 1
        
        return not check(root) == -2
        
# Solution 2: Iterative
