/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* removeNthFromEnd(struct ListNode* head, int n) 
{
    struct ListNode* dummy = malloc(sizeof(struct ListNode));
    dummy->next = head;
    struct ListNode* left = dummy;
    struct ListNode* right = dummy;
    for (int i = 0; i <= n; ++i)
        right = right->next;
    while (right != NULL) 
    {
        right = right->next;
        left = left->next;
    }
    struct ListNode* temp = left->next;
    left->next = left->next->next;
    free(temp);
    return dummy->next;
}