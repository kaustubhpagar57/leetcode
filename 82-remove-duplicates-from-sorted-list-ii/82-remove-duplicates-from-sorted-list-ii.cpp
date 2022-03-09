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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode *curr = head;
        ListNode newhead(0);
        ListNode *it = &newhead;
               
        while(curr!=NULL){
            int val = curr->val;
            ListNode *temp = curr;
            int count = 0;
            while(curr!=NULL && curr->val == val){
                count++;
                curr = curr->next;
            }
            if(count == 1){
                it->next = temp;
                it = it->next;
            }
        }
        
        it->next = NULL;
        return newhead.next;
        
    }
};