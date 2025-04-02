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
        // unordered_set<int>mp;
        // while(headA!=NULL){
        //   mp.insert(headA->val);
        //   headA=headA->next;
        // }
        // while(headB!=NULL){
        // if(mp.find(headB->val)!=mp.end()){
        //   return headB;
        // }
        // headB=headB->next;
        // }
        // return NULL;



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