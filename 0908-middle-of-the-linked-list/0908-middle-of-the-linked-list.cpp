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
    ListNode* middleNode(ListNode* head) {
        // ListNode* slow=head;
        // ListNode* fast=head;
        // while(fast!=NULL && fast->next!=NULL){
        //     slow=slow->next;
        //     fast=fast->next->next;
        // }
        // return slow;
        //tc:o(n)
        //sc:o(1)

        //other appraoch
        //find length

    //     ListNode* dummy=head;
    //     int cnt=0;
    //     while(dummy!=NULL){
    //         dummy=dummy->next;
    //         cnt++;
    //     }
    //     int j=0;
    //     int ans=cnt/2;
    //     ListNode* temp=head;
    //     while(j<ans){
    //         temp=temp->next;
    //         j++;
    //     }
    //     return temp;
    // }
    // //tc:o(n)
    // //sc:o(1)




//tc o(n)
//sc o(1)
    // ListNode* slow=head;
    // ListNode* fast=head;

    // while(fast!=NULL && fast->next!=NULL){
        
    //     slow=slow->next;
    //     fast=fast->next->next;
        
    // }
    // return slow;


    //other approach
    // int cnt=0;
    // ListNode* temp=head;
    // while(temp!=NULL){
    //     temp=temp->next;
    //     cnt++;
    // }

    // int ans=cnt/2;

    // temp=head;
    // while(ans>0){
    //     temp=temp->next;
    //     ans--;
    // }
    // return temp;


    ListNode* slow=head;
    ListNode* fast=head;
    while(fast!=NULL && fast->next!=NULL ){
        slow=slow->next;
        fast=fast->next->next;

    }
    return slow;


    }

};