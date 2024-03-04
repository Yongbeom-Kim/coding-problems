# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution:
    def lowestCommonAncestor(self, root: 'TreeNode', p: 'TreeNode', q: 'TreeNode') -> 'TreeNode':
        if root is None:
            return None
        if root == p or root == q:
            return root
        
        left = self.lowestCommonAncestor(root.left, p, q)
        right = self.lowestCommonAncestor(root.right, p, q)

        if (left is not None and right is not None):
            return root
        if (left is None):
            return right
        if (right is None):
            return left
        
        return None

# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution:
    def lowestCommonAncestor(self, root: 'TreeNode', p: 'TreeNode', q: 'TreeNode') -> 'TreeNode':
        stack1 = [root]
        stack2 = []
        while stack1:
            node = stack1.pop()
            if node is not None:
                stack2.append(node)
                stack1.append(node.left)
                stack1.append(node.right)
        print([x.val for x in stack2])
        cache = dict()
        while stack2:
            node = stack2.pop()
            if (node.val == p.val or node.val == q.val):
                cache[node] = node
                continue
            if (cache.get(node.left, None) is not None) and (cache.get(node.right, None) is not None):
                cache[node] = node
                continue
            cache[node] = cache.get(node.left, None) or cache.get(node.right, None)
        
        return cache[root]
