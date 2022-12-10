# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def reverseLL(self, head: Optional[ListNode]) -> Optional[ListNode]:
        if (head is None or head.next is None):
            return head;
        elif (head.next.next is None):
            next = head.next
            next.next = head
            head.next = None
            return next
        
        n = head
        nn = n.next;
        head = None

        while(True):
            n.next = head
            if (nn is None):
                break
            head = n
            n = nn
            nn = nn.next
        
        return n;


    def isPalindrome(self, head: Optional[ListNode]) -> bool:
        len = 0;
        tail = head
        middle = head
        while (tail.next is not None):
            tail = tail.next
            len += 1
            if (len%2 == 0):
                middle = middle.next
        
        middle.next = self.reverseLL(middle.next)
        middle = middle.next
        while (middle is not None):
            if (head.val != middle.val):
                return False
            head = head.next
            middle = middle.next
        
        return True



        
        