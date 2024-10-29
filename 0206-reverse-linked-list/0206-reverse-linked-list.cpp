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

    ListNode* reverseList(ListNode* head) {
  

        //iterative tow pointer nhi swap nhi hota
        //pointer ko reverse kr denge
        //tc o(n)
        //sc o(1)   

        //    ListNode* curr=head;
        //    ListNode* prev=NULL;
        //    ListNode* next=NULL;

        //    while(curr!=NULL){
            
        //     next=curr->next;
        //     curr->next=prev;
        //     prev=curr;
        //     curr=next;
        //    }
        //    return prev;




        //by recursion
      ////  tc o(n)
       // sc o(n)

        // if(head==NULL || head->next==NULL){
        //     return head;
        // }

        // ListNode* res=reverseList(head->next);
        // head->next->next=head;
        // head->next=NULL;
        // return res;

        //     }


        ListNode* prev=NULL;
        ListNode* curr=head;
        ListNode* next=NULL;

        while(curr!=NULL){
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        return prev;
    }


    
        

    
};
