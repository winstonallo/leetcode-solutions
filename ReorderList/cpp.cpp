class Solution 
{
    public:

        void reorderList(ListNode* head) 
        {
            ListNode *left = head, *right = head;

            while (right->next != nullptr && right->next->next != nullptr)
            {
                left = left->next;
                right = right->next->next;
            }

            ListNode *prev = nullptr;
            right = left->next;

            while (right != nullptr)
            {
                ListNode* next = right->next;
                right->next = prev;
                prev = right;
                right = next;
            }

            left->next = nullptr;

            left = head, right = prev;

            while (right != nullptr)
            {
                ListNode* left_next = left->next;
                left->next = right;

                ListNode* right_next = right->next;
                right->next = left_next;

                left = left_next;
                right = right_next;
            }
        }
};
