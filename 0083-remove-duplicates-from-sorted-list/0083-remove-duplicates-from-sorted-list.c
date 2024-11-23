/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* deleteDuplicates(struct ListNode* head) {
    struct ListNode* current = head;
    
    while (current != NULL && current->next != NULL) {
        // if the current value is equal to the next
        if (current->val == current->next->val) {
            // remove the next node
            current->next = current->next->next;
        } else {
            // move to the next node if no duplicates are left
            current = current->next;
        }
    }

    return head;
}