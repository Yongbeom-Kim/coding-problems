'''
recursive
'''
# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

MIN = -float('inf')
MAX = float('inf')

class Solution:
    def isValidBST(self, root: Optional[TreeNode]) -> bool:
        def helper(root: Optional[TreeNode], min_val, max_val) -> bool:
            if (root is None):
                return True
            
            return root.val > min_val and root.val < max_val and helper(root.left, min_val, root.val) and helper(root.right, root.val, max_val)
    
        return helper(root, MIN, MAX)
        


'''
Iterative
'''
# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

MIN = -float('inf')
MAX = float('inf')

class Solution:
    def isValidBST(self, root: Optional[TreeNode]) -> bool:
        stack = [(root, MIN, MAX)]
        while(len(stack) > 0):
            node, min_val, max_val = stack.pop()
            
            if (node is None):
                continue
            if (node.val <= min_val or node.val >= max_val):
                return False
            
            stack.append((node.left, min_val, node.val))
            stack.append((node.right, node.val, max_val))
        
        return True