class Solution {
public:
    ListNode* rotation(ListNode* prev, ListNode* curr, ListNode*& head, int k,
                       int count) {
        if (curr == NULL)
            return prev;
        curr = rotation(curr, curr->next, head, k, count - 1);
        if (k < count)
            return head;
        if (curr != NULL) {
            prev->next = curr->next;
            // curr = curr->next;
            curr->next = head;
            head = curr;
            cout << curr->next->val << "     " << head->val << "     " << count
                 << endl;
        }
        // cout << prev->next->val << endl;
        return prev;
    }
    ListNode* rotateRight(ListNode* head, int k) {
        if (head == NULL || head->next == NULL)
            return head;
        ListNode* curr = head;
        ListNode* check = head;
        ListNode* prev = NULL;
        int count = 0;
        while (check != NULL) {
            count++;
            check = check->next;
        }
        k %= count;
        head = rotation(prev, curr, head, k, count);
        return head;
    }
    // ListNode* rotateRight(ListNode* head, int k) {
    //     if (!head)
    //         return head;

    //     int len = 1; // number of nodes
    //     ListNode *newH, *tail;
    //     newH = tail = head;

    //     while (tail->next) // get the number of nodes in the list
    //     {
    //         tail = tail->next;
    //         len++;
    //     }
    //     tail->next = head; // circle the link

    //     if (k %= len) {
    //         for (auto i = 0; i < len - k; i++)
    //             tail = tail->next; // the tail node is the (len-k)-th node
    //             (1st
    //                                // node is head)
    //     }
    //     newH = tail->next;
    //     tail->next = NULL;
    //     return newH;
    // }
};