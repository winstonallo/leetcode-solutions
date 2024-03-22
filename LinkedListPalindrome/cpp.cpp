class Solution 
{
    public:
        bool isPalindrome(ListNode* head) 
        {
            ListNode *left = head, *right = head;

            while (right->next != nullptr && right->next->next != nullptr)
            {
                left = left->next;
                right = right->next->next;
            }

            ListNode *prev = nullptr, *curr = left->next;

            while (curr != nullptr)
            {
                ListNode* next = curr->next;
                curr->next = prev;
                prev = curr;
                curr = next;
            }

            ListNode *first_half = head, *second_half = prev;

            while (second_half != nullptr)
            {
                if (first_half->val != second_half->val)
                {
                    return false;
                }
                first_half = first_half->next;
                second_half = second_half->next;
            }
            return true;
        }
};
