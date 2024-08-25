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
    // ListNode* findMid(ListNode* head) {
    //     ListNode* slow = head;
    //     ListNode* fast = head->next;
    //     while (fast && fast->next) {
    //         slow = slow->next;
    //         fast = fast->next->next;
    //     }
    //     return slow;
    // }
    // ListNode* merge(ListNode* left, ListNode* right) {
    //     if (left == NULL)
    //         return right;
    //     if (right == NULL)
    //         return left;
    //     ListNode* ans = new ListNode(-1);
    //     ListNode* temp = ans;
    //     while (left != NULL && right != NULL) {
    //         if (left->val < right->val) {
    //             temp->next = left;
    //             temp = left;
    //             left = left->next;
    //         } else {
    //             temp->next = right;
    //             temp = right;
    //             right = right->next;
    //         }
    //     }
    //     while (left != NULL) {
    //         temp->next = left;
    //         temp = left;
    //         left = left->next;
    //     }
    //     while (right != NULL) {
    //         temp->next = right;
    //         temp = right;
    //         right = right->next;
    //     }
    //     ans = ans->next;
    //     return ans;
    // }
    ListNode* sortList(ListNode* head) {
        // if (head == nullptr || head->next == nullptr) {
        //     return head;
        // }
        // ListNode* middle = findMid(head);
        // ListNode* left = head;
        // ListNode* right = middle->next;
        // middle->next = NULL;
        // left = sortList(left);
        // right = sortList(right);
        // ListNode* result = merge(left, right);
        // return result;
        ListNode* temp = head;
        vector<int> arr;
        while (temp != NULL) {
            arr.push_back(temp->val);
            temp = temp->next;
        }
        sort(arr.begin(), arr.end());
        temp = head;
        for (int i = 0; i < arr.size(); i++) {
            temp->val = arr[i];
            temp = temp->next;
        }
        return head;
    }
};