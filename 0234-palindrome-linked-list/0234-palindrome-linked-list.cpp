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
    ListNode* middleNode(ListNode* mid) {
        ListNode* slow = mid;
        ListNode* fast = mid;
        while (fast != NULL && fast->next != NULL) {
            fast = fast->next->next;
            // if (fast != NULL)
            // fast = fast->next;
            slow = slow->next;
        }
        return slow;
    }
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
        if (head->next == NULL)
            return true;
        ListNode* middle = middleNode(head);
        ListNode* temp = middle;
        middle = reverse(temp);
        ListNode* head1 = head;
        ListNode* head2 = middle;
        while (head2 != NULL) {
            if (head1->val != head2->val) {
                middle->next = reverse(middle->next);
                return false;
            }
            head1 = head1->next;
            head2 = head2->next;
        }
        middle->next = reverse(middle->next);
        return true;
    }
};