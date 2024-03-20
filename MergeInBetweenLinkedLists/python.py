class Solution:
    def mergeInBetween(self, list1: ListNode, a: int, b: int, list2: ListNode) -> ListNode:
        a_prev, b_post = None, list1

        for i in range(0, b + 1):
            if i == a - 1:
                a_prev = b_post
            if i != b:
                b_post = b_post.next
        
        a_prev.next = list2

        list2_end = list2

        while list2_end.next is not None:
            list2_end = list2_end.next
        
        list2_end.next = b_post.next

        return list1
