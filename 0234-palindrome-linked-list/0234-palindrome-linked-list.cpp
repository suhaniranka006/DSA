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

//no two ptr approach as there is no previous end
    bool isPalindrome(ListNode* head) {
     //brute force
    //done by myself
    //  if(head==NULL || head->next==NULL){
    //     return true;
    //  }
    //  vector<int>v;
    //  ListNode* tempn=head;
    //  while(tempn!=NULL){
    //     v.push_back(tempn->val);
    //     tempn=tempn->next;
    //  }

    //  vector<int>temp;
    //  for(int i=0;i<v.size();i++){
    //     temp.push_back(v[i]);
    //  }

    //  reverse(v.begin(),v.end());
    //  for(int i=0;i<v.size();i++){
    //     if(v[i]!=temp[i]){
    //         return false;
    //     }
    //  }
    //  return true;


        vector<int>v;

        while(head!=NULL){
            v.push_back(head->val);
            head=head->next;
        }
        int slow=0;
        int fast=v.size()-1;

        while(slow<=fast){
            if(v[slow]==v[fast]){
                slow++;
                fast--;
            }
            else{
                return false;
            }
        }
        return true;


    
    }
};