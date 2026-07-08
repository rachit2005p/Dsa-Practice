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
    ListNode* oddEvenList(ListNode* head) {
        if (head == nullptr || head->next == nullptr) return head;
        
        ListNode *odd = head;
        ListNode *even = head->next;
        ListNode *evenHead = even;
        
        // Traverse the list and separate odd and even nodes
        while (even != nullptr && even->next != nullptr) {
            odd->next = even->next;    // Connect current odd node to next odd node
            odd = odd->next;           // Move odd pointer forward
            
            even->next = odd->next;    // Connect current even node to next even node
            even = even->next;         // Move even pointer forward
        }
        
        odd->next = evenHead;          // Connect the end of odd list to the head of even list
        return head;
    }
};