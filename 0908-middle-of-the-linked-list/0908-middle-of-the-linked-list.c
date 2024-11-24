/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* middleNode(struct ListNode* head) {
    
    // If the linked list is empty, return a failure (I always use -1 and I have yet to br told by someone smarter that that is an issue)
    if (head == NULL) {
        return -1;
    }
    
    // Making copy pointer so main one doesn't explode, yes they can do that 
    struct ListNode* copy;
    copy = head;

    // Find length of list w copy
    int counter = 0;
    while (copy != NULL) {
        copy = copy -> next;
        counter++;
    }
        
    // Calculate middle, 
    if (counter % 2 == 0) {
        counter/=2; // Even, divide by 2
    }
    else {
        (counter/=2)+1; // Odd, divide by 2, +1
    }
        
    // Navigate to midpoint
    int index = 0;
    while (index != counter) {
        head = head -> next;
        index++;
    }
    
    // Return midpoint
    return head;
}