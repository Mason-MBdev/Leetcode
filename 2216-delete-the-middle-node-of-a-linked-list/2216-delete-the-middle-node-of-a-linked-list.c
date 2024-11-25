/**
 * Definition for singly-linked list.
* struct ListNode {
*     int val;
*     struct ListNode *next;
* };
 */
struct ListNode* deleteMiddle(struct ListNode* head) {
    
    // check for 0 or 1 elements in list
    if (head == NULL || head->next == NULL) {
        return NULL;
    }

    struct ListNode* slow = head;
    struct ListNode* fast = head;
    struct ListNode* prev = NULL;

    // use slow & fast pointers, when fast reaches the end, slow is at length / 2 (middle node)
    while (fast != NULL && fast->next != NULL) {
        fast = fast->next->next;
        prev = slow;
        slow = slow->next;
    }

    // Delete the middle node @ slow
    prev->next = slow->next;
    free(slow);

    return head;
}
