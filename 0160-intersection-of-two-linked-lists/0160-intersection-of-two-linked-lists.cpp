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
    ListNode* getIntersectionNode(ListNode* headA, ListNode* headB) {
        ListNode *curr_sum1 = headA, *curr_sum2 = headB;
        bool check1 = false, check2 = false;
        while (curr_sum1 != curr_sum2) {
            if (!check1 && !curr_sum1) {
                curr_sum1 = headB;
                check1 = true;
            }
            if (!check2 && !curr_sum2) {
                curr_sum2 = headA;
                check2 = true;
            }
            if (curr_sum1 == curr_sum2)
                return curr_sum1;
            curr_sum1 = curr_sum1->next;
            curr_sum2 = curr_sum2->next;
        }
        return curr_sum1;
    }
};