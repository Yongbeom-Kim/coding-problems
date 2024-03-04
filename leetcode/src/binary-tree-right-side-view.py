# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def rightSideView(self, root: Optional[TreeNode]) -> List[int]:
        result = []
        def inorder(node, depth):
            if node is None:
                return
            
            inorder(node.left, depth + 1)
            while len(result) <= depth:
                result.append(None)
            result[depth] = node.val
            inorder(node.right, depth + 1)

        inorder(root, 0)

        return result


class Solution:
    def rightSideView(self, root: Optional[TreeNode]) -> List[int]:
        stack = []
        result = []
        if root is None:
            return []
        root = (root, 0)
        while True:
            if root[0] is not None:
                stack.append(root)
                root = (root[0].left, root[1] + 1)
            elif stack:
                root, depth = stack.pop()
                while len(result) <= depth:
                    result.append(None)
                result[depth] = root.val
                root = (root.right, depth + 1)
            else:
                break
        
        return result
                
