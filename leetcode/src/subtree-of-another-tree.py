# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def isEqual(self, head1: Optional[TreeNode], head2: Optional[TreeNode]) -> bool:
        if (head1 is None and head2 is None):
            return True
        if (head1 is None or head2 is None):
            return False
        
        return head1.val == head2.val and self.isEqual(head1.right, head2.right) and self.isEqual(head1.left, head2.left)

    def isSubtree(self, root: Optional[TreeNode], subRoot: Optional[TreeNode]) -> bool:
        if (root is None and subRoot is None):
            return True
        if (root is None or subRoot is None):
            return False
        if (self.isEqual(root, subRoot)):
            return True;
        
        return self.isSubtree(root.left, subRoot) or self.isSubtree(root.right, subRoot)
        