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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *curr1 = l1, *curr2 = l2;
        ListNode *res = NULL, *result;
        int rem, carry = 0;
        while (curr1 != NULL && curr2 != NULL) {
            int sum = curr1->val + curr2->val + carry;
            rem = sum % 10;
            carry = sum / 10;
            if (res == NULL) {
                res = new ListNode(rem);
                result = res;
            } else {
                res->next = new ListNode(rem);
                res = res->next;
            }
            curr1 = curr1->next;
            curr2 = curr2->next;
        }
        while (curr1) {
            int sum = curr1->val + carry;
            rem = sum % 10;
            carry = sum / 10;
            res->next = new ListNode(rem);
            res = res->next;
            curr1 = curr1->next;
        }
        while (curr2) {
            int sum = curr2->val + carry;
            rem = sum % 10;
            carry = sum / 10;
            res->next = new ListNode(rem);
            res = res->next;
            curr2 = curr2->next;
        }
        if (carry)
            res->next = new ListNode(carry);
        return result;
    }
};