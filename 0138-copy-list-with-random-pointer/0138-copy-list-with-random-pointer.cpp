/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;

    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        if (!head)
            return nullptr;

        Node* curr = head;
        while (curr) {
            Node* new_node = new Node(curr->val);
            new_node->next = curr->next;
            curr->next = new_node;
            curr = new_node->next;
        }
        curr = head;
        while (curr) {
            if (curr->random)
                curr->next->random = curr->random->next;
            else
                curr->next->random = NULL;
            curr = curr->next->next;
        }
        curr = head;
        Node* newHead = curr->next;
        while (curr) {
            Node* save = curr->next;
            curr->next = save->next;
            if (curr->next)
                save->next = curr->next->next;
            else
                save->next = NULL;
            curr = curr->next;
        }
        return newHead;
    }
};