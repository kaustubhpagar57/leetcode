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
    ListNode* sortList(ListNode* head) {
        if(head == NULL || head->next == NULL)
            return head;
        
        ListNode* temp = NULL;
        ListNode* fast = head;
        ListNode* slow = head;
        
        while(fast != NULL && fast->next !=NULL){
            temp = slow;
            slow = slow->next;
            fast = fast->next->next;
        }
        
        temp->next = NULL;
        
        ListNode* x = sortList(head);
        ListNode* y = sortList(slow);
        
        return mergeList(x,y);
    }
    
    ListNode* mergeList(ListNode* x, ListNode* y){
        ListNode* ans = NULL;
        
        if(x == NULL)
            return y;
        else if(y == NULL)
            return x;
        
        if(x->val <= y->val){
            ans = x;
            ans->next = mergeList(x->next, y);
        }
        else{
            ans = y;
            ans->next = mergeList(x, y->next);
        }
        
        return ans;
    }
};