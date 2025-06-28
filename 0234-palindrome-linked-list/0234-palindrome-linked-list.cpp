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
    ListNode* middleNode(ListNode* mid) {
        ListNode* slow = mid;
        ListNode* fast = mid;
        while (fast != NULL && fast->next != NULL) {
            fast = fast->next->next;
            slow = slow->next;
        }
        return slow;
    }
    bool isPalindrome(ListNode* head) {
        ListNode* mid = middleNode(head);
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