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
        if(head == nullptr) return head;
        Node* currentNode=head;
        Node* storesNext;
        while (currentNode) {
            storesNext=currentNode->next;
            currentNode->next= new Node(currentNode->val, NULL, NULL);
            currentNode->next->next=storesNext;
            currentNode=storesNext;
        }
        currentNode=head;
        while (currentNode) {
            if (currentNode->random)
                currentNode->next->random=currentNode->random->next;
            currentNode=currentNode->next->next;
        }
        Node* original = head;
        Node* copy = head->next;
        currentNode = copy;
        
        while(original && copy)
        {
            original->next = original->next ? original->next->next : original->next;
            copy->next = copy->next ? copy->next->next : copy->next;
            
            original = original->next;
            copy = copy->next;
        }
        return currentNode;
    }
};