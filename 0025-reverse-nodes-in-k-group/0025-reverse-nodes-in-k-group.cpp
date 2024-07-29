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
    int nodes(ListNode* b) {
        ListNode* a = b;
        int i = 0;
        while (a != NULL) {
            i++;
            a = a->next;
        }
        return i;
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        if (head == NULL)
            return NULL;
            int len=nodes(head);
        if (len<k) {
            return head;
        }
        ListNode* curr = head;
        ListNode* prev = NULL;
        ListNode* forw = NULL;
        int j = 0;
            while (curr != NULL && j < k) {
                forw = curr->next;
                curr->next = prev;
                prev = curr;
                curr = forw;
                j++;
            }
        if (curr != NULL)
            head->next = reverseKGroup(curr, k);
        return prev;
    }
};