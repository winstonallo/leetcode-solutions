class Solution:
    def removeZeroSumSublists(self, head: Optional[ListNode]) -> Optional[ListNode]:
        dummy = ListNode(0, head)
        p = dummy
        _map= {}
        prefix = 0

        while p is not None:
            prefix += p.val
            _map[prefix] = p
            p = p.next
        
        prefix = 0
        p = dummy

        while p is not None:
            prefix += p.val
            p.next = _map[prefix].next
            p = p.next

        return dummy.next
