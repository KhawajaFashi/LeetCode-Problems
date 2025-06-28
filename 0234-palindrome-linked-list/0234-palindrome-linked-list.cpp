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
    ListNode* reverse(ListNode* mid) {
        ListNode* curr = mid;
        ListNode* prev = NULL;
        ListNode* forw = NULL;
        while (curr != NULL) {
            forw = curr->next;
            curr->next = prev;
            prev = curr;
            curr = forw;
        }
        return prev;
    }
    bool isPalindrome(ListNode* head) {
        ListNode* mid = head;
        int totalNodes = 0;
        for (ListNode* curr = head; curr; curr = curr->next)
            totalNodes++;
        int middle = totalNodes / 2;
        while (middle) {
            mid = mid->next;
            middle--;
        }
        ListNode* current = reverse(mid);
        ListNode* curr = head;
        while (curr && current) {
            if (current->val != curr->val)
                return false;
            current = current->next;
            curr = curr->next;
        }
        return true;
    }
};