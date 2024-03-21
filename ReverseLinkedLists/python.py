class Solution:
    def reverseList(self, head: Optional[ListNode]) -> Optional[ListNode]:
        prev = None

        while head is not None:
            _next = head.next
            head.next = prev
            prev = head
            head = _next
        
        return prev
