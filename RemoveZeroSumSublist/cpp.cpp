/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
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
