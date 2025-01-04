/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode* head) {
        if (!head)
            return false;
        ListNode* slow = head;
        ListNode* fast = head;
        fast = fast->next;
        while (fast != slow && fast) {
            slow = slow->next;
            fast = fast->next;
            if (fast)
                fast = fast->next;
        }
        if (!fast)
            return false;
        return true;
    }
};