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
    int Nodes(ListNode* curr) {
        int nodes = 0;
        while (curr) {
            nodes++;
            curr = curr->next;
        }
        return nodes;
    }
    ListNode* rotateRight(ListNode* head, int k) {
        int nodes = Nodes(head);
        if (nodes <= 1 || (k % nodes) == 0)
            return head;
        int rotation = k % nodes;
        int prev_count = nodes - rotation;
        ListNode *prev = NULL, *curr = head, *forw = curr->next;
        while (prev_count && forw) {
            prev = curr;
            curr = forw;
            forw = forw->next;
            prev_count--;
        }
        while (forw && forw->next)
            forw = forw->next;
        prev->next = NULL;
        if (forw == NULL) {
            curr->next = head;
            head = curr;
            return head;
        }
        forw->next = head;
        head = curr;
        return head;
    }
};