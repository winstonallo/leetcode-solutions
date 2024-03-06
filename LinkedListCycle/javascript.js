/**
 * Definition for singly-linked list.
 * function ListNode(val) {
 *     this.val = val;
 *     this.next = null;
 * }
 */

/**
 * @param {ListNode} head
 * @return {boolean}
 */
var hasCycle = function(head) 
{
    var right = head;
    var left = head;

    while (right != null && right.next != null)
    {
        left = left.next;
        right = right.next.next;

        if (left == right)
            return true;
    }
    return false;
};
