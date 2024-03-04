# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def reverseKGroup(self, head: Optional[ListNode], k: int) -> Optional[ListNode]:
        def has_k_nodes(node, k):
            for _ in range(k):
                if node is None:
                    return False
                node = node.next
            
            return True
        
        if not has_k_nodes(head, k):
            return head
        
        new_tail = head # Since reversed
        current = head
        prev = None
        next = None
        for i in range(k):
            next = current.next
            current.next = prev
            prev = current
            current = next
        
        new_head = prev

        rest = self.reverseKGroup(next, k)
        new_tail.next = rest

        return new_head
