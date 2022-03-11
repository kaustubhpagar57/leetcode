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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head == NULL || head->next == NULL || k==0)
            return head;
        
        ListNode *temp = head;
        int len = 1;
        while(temp->next!=NULL){
            len++;
            temp = temp->next;
        }
        k = k%len;
        
        if(k==0)
            return head;
                
        ListNode *newstart;
        ListNode *newend = head;
        int endpos = len - k - 1;
        while(endpos--){
            newend = newend->next;
        }
        newstart = newend->next;
        temp->next = head;
        newend->next = NULL;
        
        return newstart;
        
        
    }
};