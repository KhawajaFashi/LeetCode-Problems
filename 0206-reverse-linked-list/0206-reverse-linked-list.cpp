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
    ListNode* reverseList(ListNode* head) {
        ListNode* tail = head;
        while (tail && tail->next)
            tail = tail->next;
        reversingList(head, NULL);
        return tail;
    }
    void reversingList(ListNode* head, ListNode* prev) {
        if (head == NULL)
            return;
        reversingList(head->next, head);
        head->next = prev;
    }
};