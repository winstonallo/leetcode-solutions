class Solution 
{
    public:
        ListNode* reverseList(ListNode* head) 
        {
            ListNode *prev = nullptr, *next = nullptr;

            while (head != nullptr)
            {
                next = head->next;
                head->next = prev;
                prev = head;
                head = next;
            }
            return prev;
        }
};
