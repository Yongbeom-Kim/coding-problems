# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def sortedArrayToBST(self, nums: List[int]) -> Optional[TreeNode]:
        if (len(nums) == 0):
            return None
        elif (len(nums) == 1):
            return TreeNode(nums[0])
        
        median = len(nums)//2
        head = TreeNode(nums[median])
        head.left = self.sortedArrayToBST(nums[0:median])
        head.right = self.sortedArrayToBST(nums[median+1:len(nums)])
        return head
        