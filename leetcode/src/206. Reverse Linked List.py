"""
Given the head of a singly linked list, reverse the list, and return the reversed list.

 

Example 1:


Input: head = [1,2,3,4,5]
Output: [5,4,3,2,1]
Example 2:


Input: head = [1,2]
Output: [2,1]
Example 3:

Input: head = []
Output: []
 

Constraints:

The number of nodes in the list is the range [0, 5000].
-5000 <= Node.val <= 5000
 

Follow up: A linked list can be reversed either iteratively or recursively. Could you implement both?
"""

# Solution 1: iterative

# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

from collections import deque

class Solution:
    def reverseList(self, head: Optional[ListNode]) -> Optional[ListNode]:
        stack = deque()
        
        if head is None:
            return None
        
        while head is not None:
            stack.appendleft(head.val)
            head = head.next
            
        prev_node = None
        while stack:
            top = stack.pop()
            prev_node = ListNode(top, prev_node)
        
        return prev_node
           
# Solution 2: Recursive
