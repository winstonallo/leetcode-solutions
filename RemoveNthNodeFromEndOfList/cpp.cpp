class Solution 
{
    public:
        ListNode* removeNthFromEnd(ListNode* head, int n) 
        {
            ListNode* dummy = new ListNode(0);
            dummy->next = head;
            ListNode* left = dummy;
            ListNode* right = dummy;
            for (int i = 0; i <= n; ++i)
                right = right->next;
            while (right != nullptr) 
            {
                right = right->next;
                left = left->next;
            }
            ListNode* temp = left->next;
            left->next = left->next->next;
            delete temp;

            return dummy->next;
        }
};
