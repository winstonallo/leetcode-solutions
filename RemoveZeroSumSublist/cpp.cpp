class Solution 
{
    public:
        ListNode* removeZeroSumSublists(ListNode* head) 
        {
            ListNode dummy = ListNode(0, head);
            unordered_map <int, ListNode*> map;
            int prefix = 0;

            for(ListNode* p = &dummy; p != nullptr; p = p->next)
            {
                prefix += p->val;
                map[prefix] = p;
            }

            prefix = 0;

            for(ListNode* p = &dummy; p != nullptr; p = p->next)
            {
                prefix += p->val;
                p->next = map[prefix]->next;
            }
            return dummy.next;
        }
};
