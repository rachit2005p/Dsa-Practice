/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(x) : val(x), next(nullptr) {}
 *     ListNode(x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        if (!head || !head->next) return true;
        
       
        ListNode* slow = head;
        ListNode* fast = head;
        while (fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;
        }
    
        ListNode* prev = nullptr;
        ListNode* curr = slow;
        while (curr) {
            ListNode* nextNode = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nextNode;
        }
        
        // 3. Compare the first half and reversed second half
        ListNode* firstHalf = head;
        ListNode* secondHalf = prev; // prev now points to the head of the reversed half
        bool palindrome = true;
        
        while (secondHalf) {
            if (firstHalf->val != secondHalf->val) {
                palindrome = false;
                break;
            }
            firstHalf = firstHalf->next;
            secondHalf = secondHalf->next;
        }
        
        return palindrome;
    }
};