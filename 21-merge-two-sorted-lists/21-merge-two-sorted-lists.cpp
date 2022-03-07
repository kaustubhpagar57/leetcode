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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode *head;

        if(list1==NULL){
            head = list2;
            return head;
        }
        else if(list2==NULL){
            head = list1;
            return head;
        }
        
        if(list1->val > list2->val){
            head = list2;
            list2 = list2->next;
        }
        else{
            head = list1;
            list1 = list1->next;
        }
        ListNode *temp = head;

        while(list1!=NULL && list2!=NULL){
            ListNode *curr;
            if(list1->val > list2->val){
                curr = list2;
                list2 = list2->next;
            }
            else{
                curr = list1;
                list1 = list1->next;
            }
            temp->next = curr;
            temp = temp->next;
        }
        
        if(list1==NULL)
            temp->next = list2;
        else
            temp->next = list1;
        
        
        return head;
    }
};