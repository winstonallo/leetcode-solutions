/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
bool hasCycle(struct ListNode *head) 
{
    struct ListNode *left = head, *right = head;

    while (right != NULL && right->next != NULL)
    {
        left = left->next;
        right = right->next->next;

        if (left == right)
            return true;
    }
    return false;
}
