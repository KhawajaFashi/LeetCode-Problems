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
    ListNode* reverse(ListNode* prev, ListNode* curr, ListNode* head,
                      ListNode* forw) {
        // if (forw)
        // cout << curr->val << "     " << head->val << "      " << forw->val
        //          << endl;
        ListNode* current = curr;
        ListNode* previous = NULL;
        ListNode* forward = NULL;
        while (current != forw) {
            forward = current->next;
            current->next = previous;
            previous = current;
            current = forward;
            // if(current&&previous&&forward)
            // cout << current->val << "     " << previous->val << "      "
            //      << forward->val << endl;
        }
        curr->next = forw;
        // cout << "Next\n";
        // ListNode* c = head;
        // while (c) {
        //     cout << c->val << "      ";
        //     c = c->next;
        // }
        // cout << "\nOut of reverse Next\n";
        return previous;
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* curr = head;
        ListNode* end = head;
        ListNode* prev = NULL;
        ListNode* prevkaprev = NULL;
        ListNode* forw = NULL;
        bool save_head = false;
        while (end && end->next) {
            int count = k;
            while (count!=1 && end) {
                end = end->next;
                count--;
            }
            if (end == NULL)
                break;
            forw = end->next;
            // if (forw)
            //     cout << curr->val << "     " << end->val << "      "
            //          << forw->val << endl;
            prevkaprev=prev;
            prev = reverse(prev, curr, head, forw);
            if(prevkaprev)
            prevkaprev->next =prev;
            end = forw;
            if (!save_head) {
                head = prev;
                save_head = true;
            }
            // if(prevkaprev)
            // cout<<prevkaprev->val <<"     "<<prev->val<<endl;
            prev = curr;
            curr = forw;
        }
        return head;
    }
};