class Solution 
{
    public:
        ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) 
        {
            ListNode *a_prev = nullptr, *b_post = list1;
            
            for (int i = 0; i <= b; i++) 
            {
                if (i == a - 1) 
                {
                    a_prev = b_post;
                }
                if (i != b)
                {
                    b_post = b_post->next;
                }
            }
            
            a_prev->next = list2;
            
            ListNode* list2_end = list2;

            while (list2_end->next != nullptr)
            {
                list2_end = list2_end->next;
            }
            
            list2_end->next = b_post->next;
            
            return list1;
        }
};
