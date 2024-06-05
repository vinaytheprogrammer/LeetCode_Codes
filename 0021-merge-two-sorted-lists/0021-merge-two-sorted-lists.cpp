
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
//        if(l1 == NULL ){
//            return l2;
//        }
        
//         if(l2 == NULL ){
//             return l1;
//         }
        
        ListNode dummy(0);
        ListNode* current = &dummy;

    // Traverse both lists
        while (l1 != NULL && l2 != nullptr) {
            if (l1->val <= l2->val) {
                current->next = l1;
                l1 = l1->next;
            } else {
                current->next = l2;
                l2 = l2->next;
            }
            current = current->next;
        }
        
        
        if (l1 != nullptr) {
            current->next = l1;
        } else {
            current->next = l2;
        }
        
        return dummy.next;
         // return current->next;  will not work
    }
};