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
    ListNode* swapPairs(ListNode* head) {
        if(head == NULL || head->next == NULL)
            return head;
        ListNode* prev = head;
        ListNode* curr = head->next;
        ListNode* forw = head->next;
        while(forw != NULL && curr != NULL){
            if(prev == head){
                prev->next = curr->next;
                curr->next = prev;
                head = curr;
                prev = curr->next;
                curr = prev->next;
                if(curr != NULL)
                    forw = curr->next;
            }   
            else{
                curr->next = forw->next;
                forw->next = curr;
                prev->next = forw;
                prev = forw->next;
                curr = curr->next;
                if(curr != NULL)
                    forw = curr->next;
            }         
        }
        return head;
    }
};