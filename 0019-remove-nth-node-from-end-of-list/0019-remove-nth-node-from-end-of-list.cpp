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
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
    // Create a dummy node to simplify edge cases
    ListNode* dummy = new ListNode(0);
    dummy->next = head;
    
    // Initialize two pointers
    ListNode* first = dummy;
    ListNode* second = dummy;
    
    // Move first pointer n+1 steps ahead to maintain the gap
    for (int i = 0; i <= n; ++i) {
        first = first->next;
    }
    
    // Move both pointers until first reaches the end
    while (first != nullptr) {
        first = first->next;
        second = second->next;
    }
    
    // Remove the nth node from the end
    ListNode* nodeToDelete = second->next;
    second->next = second->next->next;
    delete nodeToDelete;
    
    // Return the new head, skipping the dummy node
    ListNode* newHead = dummy->next;
    delete dummy;
    
    return newHead;
}

};