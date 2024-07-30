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
    ListNode* detectCycle(ListNode* head) {
        if (head == NULL)
            return NULL;
        map<ListNode*, bool> visited;
        int i = 0;
        ListNode* temp = head;
        while (temp != NULL) {
            if (temp == head)
                i = 0;
            if (visited[temp] == true)
                return temp;
            visited[temp] = true;
            temp = temp->next;
            i++;
        }
        return NULL;
    }
};