/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode* slow=head;
        ListNode* fast=head;

        while(slow!=NULL && fast!=NULL){
            fast=fast->next;
            if(fast==NULL){
                break;
            }
            fast=fast->next;
            slow=slow->next;
            if(fast==slow){
                slow=head;
            


        while(slow!=fast){
            fast=fast->next;
            slow=slow->next;
        }
        return slow;
            }
        }
        return NULL;

    
}

   
};