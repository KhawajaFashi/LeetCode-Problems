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
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        int n = 0;
        ListNode* count = head;
        while (count) {
            count = count->next;
            n++;
        }
        vector<ListNode*> arr(k, NULL);
        ListNode* prev = NULL;
        int part = n / k, r = n % k;
        ListNode* curr = head;
        for (int i = 0; curr && i < k; i++, r--) {
            arr[i] = curr;
            for (int j = 0; j < part + (r > 0); j++) {
                prev = curr;
                curr = curr->next;
            }
            prev->next = NULL;
        }
        return arr;
    }
};