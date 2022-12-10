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

# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def isBalanced(self, root: Optional[TreeNode]) -> bool:
        if root is None:
            return True
        
        heights = {None: -1}
        def getHeight(node: Optional[TreeNode]) -> int:
            if node in heights:
                return heights[node]

            return max(getHeight(node.left), getHeight(node.right)) + 1
        
        
        getHeight(root)
        
        return abs(getHeight(root.left) - getHeight(root.right)) <= 1 and self.isBalanced(root.left) and self.isBalanced(root.right)
        
        
        
# Solution 2: Iterative
# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def isBalanced(self, root: Optional[TreeNode]) -> bool:
        # Iterative solution:
        """
        Do a preorder traversal
        - traverse left (get left height)
        - traverse right (get right height)
        - visit this node
        
        1. preorder traversal with stack, calculate all node heights
        2. Check all nodes for balance
        """
        if root is None:
            return True
        
        stack = [root]
        height_stack = []
        heights = {None: -1}
        
        while stack:
            node = stack.pop()
            if node is None:
                continue
            stack.append(node.right)
            stack.append(node.left)
            
            height_stack.append(node)
        
        while height_stack:
            node = height_stack.pop()
            if abs(heights[node.left] - heights[node.right]) > 1:
                return False
            heights[node] = max(heights[node.left], heights[node.right]) + 1
        return True
        
        
        
