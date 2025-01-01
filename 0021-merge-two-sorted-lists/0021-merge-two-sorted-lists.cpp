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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if (!list2)
            return list1;
        if (!list1)
            return list2;

        if (list1->val >= list2->val) {
            list2->next = mergeTwoLists(list1, list2->next);
            return list2;
        }
        else {
            list1->next = mergeTwoLists(list1->next, list2);
            return list1;
        }
    }
    // ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
    //     ListNode* curr1 = list1;
    //     ListNode* list3 = new ListNode(0);
    //     ListNode* curr2 = list2;
    //     if (!curr2)
    //         return list1;
    //     if (!curr1)
    //         return list2;
    //     ListNode* curr3 = list3;

    //     while (curr1 && curr2) {
    //         if (curr1->val >= curr2->val) {
    //             curr3->next = curr2;
    //             curr2 = curr2->next;
    //         } else {
    //             curr3->next = curr1;
    //             curr1 = curr1->next;
    //         }
    //         curr3 = curr3->next;
    //     }
    //     while (curr2) {
    //         curr3->next = curr2;
    //         curr2 = curr2->next;
    //         curr3 = curr3->next;
    //     }
    //     while (curr1) {
    //         curr3->next = curr1;
    //         curr1 = curr1->next;
    //         curr3 = curr3->next;
    //     }
    //     return list3->next;
    // }
};