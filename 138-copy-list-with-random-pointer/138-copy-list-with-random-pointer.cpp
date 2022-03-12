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
        if(head==NULL)
            return head;
        
        Node *temp = head;
        while(temp!=NULL){
            Node *newNode = new Node(temp->val);
            newNode->next = temp->next;
            temp->next = newNode;
            temp = newNode->next;
        }
        
        temp = head;
        while(temp!=NULL){
            if(temp->random == NULL)
                temp->next->random = NULL;
            else
                temp->next->random = temp->random->next;
            temp = temp->next->next;
        }
        
        temp = head;
        Node *newHead = temp->next;
        temp = head->next;
        while(head!=NULL){
            head->next = temp->next;
            head = head->next;
            if(head==NULL)
                break;
            temp->next = head->next;
            temp = temp->next;
        }
        
        return newHead;
    
    }
};