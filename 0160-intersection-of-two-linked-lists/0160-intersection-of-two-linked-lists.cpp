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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {

      //this will not work when duplicate values will be there 
        unordered_set<ListNode*>mp;
        while(headA!=NULL){
          mp.insert(headA);
          headA=headA->next;
        }
        while(headB!=NULL){
        if(mp.find(headB)!=mp.end()){
          return headB;
        }
        headB=headB->next;
        }
        return NULL;



        //tc o(n^2)
        //sc o(1)
        while(headA!=NULL){
          ListNode* temp=headB;
          while(temp!=NULL){
            if(headA==temp){
              return headA;
            }
            temp=temp->next;
          }
          headA=headA->next;
        }
        return NULL;
    }
};