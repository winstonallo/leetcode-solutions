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
        ListNode* middleNode(ListNode* head) 
        {
            ListNode *left = head, *right = head;

            while (right != nullptr and right->next != nullptr)
            {
                left = left->next;
                right = right->next->next;
            }

            return left;
        }
};
