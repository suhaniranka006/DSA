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
    //     if(!head || !head->next || k==0){
    //         return head;
    //     }

    //     int len=1;
    //     ListNode* temp=head;

    //     while(temp->next){
    //         len++;
    //         temp=temp->next;
    //     }


    //     //check no of rotation
    //     if(k%len==0){
    //         return head;
    //     }

    //     k=k%len;
    //     int p=len-k;


    //     temp->next=head;

    //     ListNode* lastNode=head;
      
    // for (int i = 1; i < p; i++) {
    //     lastNode = lastNode->next;
    // }

    // // Set the new head and break the loop
    // ListNode* newHead = lastNode->next;
    // lastNode->next = NULL;

    //     return newHead;



        if(head==NULL || head->next==NULL || k==0){
          return head;
        }

        //find length
        int len=1;
        ListNode* temp=head;
        while(temp->next!=NULL){
          temp=temp->next;
          len++;
        }

        //effective tail
        if(k%len==0){  //k==0
          return head;
        }

          k=k%len;
        int p=len-k;

        
        temp->next=head;

          //newtail
        ListNode* newtail=head;


        for(int i=1;i<p;i++){
          newtail=newtail->next;
        }

        ListNode* newhead=newtail->next;
        newtail->next=NULL;
        return newhead;



    }
};