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
void recursive(ListNode *prev, ListNode *curr, ListNode *&head)
{
    if (curr == NULL){
        head=prev;
        return;
    }
    ListNode* forw = curr->next;
    curr->next = prev;
    recursive(curr, forw, head);
}
ListNode *reverseList(ListNode *head)
{
    if (head == NULL || head->next == NULL)
        return head;
    ListNode *prev = NULL;
    ListNode *curr = head;
    recursive(prev, curr, head);
    return head;
}
// ListNode *reverseList(ListNode *head)
// {
//     if (head == NULL || head->next == NULL)
//         return head;
//     ListNode *prev = NULL;
//     ListNode *curr = head;
//     ListNode *forw = new ListNode(0);
//     while (forw != NULL)
//     {
//         forw = curr->next;
//         curr->next = prev;
//         prev = curr;
//         curr = forw;
//     }
//     return prev;
// }
};