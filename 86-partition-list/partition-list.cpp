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
    ListNode* partition(ListNode* head, int x) {
        // Create dummy heads for the two separate partitions
        ListNode lessHead(0);
        ListNode greaterHead(0);
        
        // Pointers to track the tail of each partition
        ListNode* lessTail = &lessHead;
        ListNode* greaterTail = &greaterHead;
        
        ListNode* curr = head;
        
        // Traverse the original list and separate nodes
        while (curr != nullptr) {
            if (curr->val < x) {
                lessTail->next = curr;
                lessTail = lessTail->next;
            } else {
                greaterTail->next = curr;
                greaterTail = greaterTail->next;
            }
            curr = curr->next;
        }
        
        // Terminate the greater partition to avoid cycles
        greaterTail->next = nullptr;
        
        // Connect the 'less' partition with the 'greater' partition
        lessTail->next = greaterHead.next;
        
        return lessHead.next;
    }
};