# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def flip(self, root: Optional[TreeNode]) -> bool:
        if (root is None):
            return root;
        
        root.right, root.left = self.flip(root.left), self.flip(root.right)

        return root;

    def isEqual(self, root1: Optional[TreeNode], root2: Optional[TreeNode]) -> bool:
        if (root1 is None and root2 is None):
            return True;
        if (root1 is None or root2 is None):
            return False
        
        return root1.val == root2.val and self.isEqual(root1.left, root2.left) and self.isEqual(root1.right, root2.right)
    
    def isSymmetric(self, root: Optional[TreeNode]) -> bool:
        if (root is None):
            return True
        
        if (root.right is None and root.left is None):
            return True
        
        if (root.right is None or root.left is None):
            return False
        
        self.flip(root.right);
        return self.isEqual(root.left, root.right)
        