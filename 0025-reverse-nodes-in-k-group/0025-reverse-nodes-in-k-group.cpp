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
    ListNode* reverse(ListNode* prev, ListNode* curr, ListNode* forw) {
        ListNode* current = curr;
        ListNode* previous = NULL;
        ListNode* forward = NULL;
        while (current != forw) {
            forward = current->next;
            current->next = previous;
            previous = current;
            current = forward;
        }
        curr->next = forw;
        return previous;
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* curr = head;
        ListNode* end = head;
        ListNode* prev = NULL;
        ListNode* prev_prev = NULL;
        ListNode* forw = NULL;
        bool save_head = false;
        while (end && end->next) {
            int count = k;
            while (count != 1 && end) {
                end = end->next;
                count--;
            }
            if (!end)
                break;
            forw = end->next;
            prev_prev = prev;
            prev = reverse(prev, curr, forw);
            if (prev_prev)
                prev_prev->next = prev;
            end = forw;
            if (!save_head) {
                head = prev;
                save_head = true;
            }
            prev = curr;
            curr = forw;
        }
        return head;
    }
};