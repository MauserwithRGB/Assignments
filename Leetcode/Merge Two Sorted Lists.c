#include <stdlib.h> // For NULL

/**
 * Definition for singly-linked list.
 * struct ListNode {
 * int val;
 * struct ListNode *next;
 * };
 */
struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2) {
    
    // 1. Create a dummy node to act as the start of the new list.
    struct ListNode dummy;
    
    // 2. 'current' will point to the last node in our merged list.
    //    We start it at the dummy node.
    struct ListNode* current = &dummy;
    
    // 3. Loop while both lists still have nodes.
    while (list1 != NULL && list2 != NULL) {
        
        if (list1->val <= list2->val) {
            // 4. Attach list1's node to our new list.
            current->next = list1;
            // Advance list1 to the next node.
            list1 = list1->next;
        } else {
            // 4. Attach list2's node to our new list.
            current->next = list2;
            // Advance list2 to the next node.
            list2 = list2->next;
        }
        
        // 5. Move our 'current' pointer to the node we just added.
        current = current->next;
    }
    
    // 6. At least one list is now NULL.
    //    Append the remaining nodes from the other list.
    //    (If both are NULL, this correctly appends NULL).
    if (list1 != NULL) {
        current->next = list1;
    } else {
        current->next = list2;
    }
    
    // 7. The merged list starts *after* our dummy node.
    return dummy.next;
}
