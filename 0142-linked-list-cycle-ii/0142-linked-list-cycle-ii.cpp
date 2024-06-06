/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
   ListNode *detectCycle(ListNode *head) {
    if (head == nullptr || head->next == nullptr) {
        return nullptr; // No cycle if the list is empty or has only one node
    }

    ListNode* slow = head;
    ListNode* fast = head;

    // Detect if a cycle exists
    while (fast != nullptr && fast->next != nullptr) {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast) {
            // Cycle detected
            break;
        }
    }

    // If no cycle was detected
    if (fast == nullptr || fast->next == nullptr) {
        return nullptr;
    }

    // Find the start of the cycle
    slow = head;
    while (slow != fast) {
        slow = slow->next;
        fast = fast->next;
    }

    return slow; // Both pointers meet at the start of the cycle
}
  

};