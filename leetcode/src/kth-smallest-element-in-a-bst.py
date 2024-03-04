# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def kthSmallest(self, root: Optional[TreeNode], k: int) -> int:
        def add_weight(node):
            if node is None:
                return 0
            
            node.weight = add_weight(node.left) + add_weight(node.right) + 1
            return node.weight
        
        if root is None:
            return
        
        add_weight(root)
        
        def find(node, rank):
            if node.left is None:
                current_rank = 1
            else:
                current_rank = node.left.weight + 1
            
            if (current_rank == rank):
                return node
            elif current_rank < rank:
                return find(node.right, rank - current_rank)
            else:
                return find(node.left, rank)
        
        return find(root, k).val