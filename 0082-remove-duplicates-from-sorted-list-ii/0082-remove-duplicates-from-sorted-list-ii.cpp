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
        

      

    // map<int,int>mp;

    // ListNode* p=head;

    // while(p){
    //     mp[p->val]++;
    //     p=p->next;
    // }

    // ListNode *head2=NULL,*tail=NULL;

    // for(auto &it:mp){
    //     if(it.second==1){
    //         ListNode* temp=new ListNode(it.first);


    //         if(!head2){
    //             head2=temp;
    //             tail=head2;
    //         }
    //         else{
    //             tail->next=temp;
    //             tail=tail->next;
    //         }
    //     }
       
    // }

    //   return head2;

      //tc o(n)
      //sc o(n)

      //better optimisied two ptr


        if(head==NULL || head->next==NULL){
            return head;
        }
      ListNode* dummy = new ListNode(0,head);
      ListNode* prev=dummy;
      ListNode* curr=head;

      while(curr){
        while(curr->next && curr->val==curr->next->val){
            curr=curr->next;
        }
        

        if(prev->next!=curr){
            prev->next=curr->next;
        }
        else{
            prev=prev->next;
        }

        curr=curr->next;
      }

      return dummy->next;
    }
};