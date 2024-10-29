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
    bool hasCycle(ListNode *head) {

//  if(head==NULL){
//         return false;
//     }
//     ListNode* temp=head;
//     map<ListNode*,bool>visited;
//     while(temp!=NULL){
//         if (visited[temp] == true) {
//           return true;
//         }
//         visited[temp] = true;
//         temp = temp->next;
//     }
//     return false;
//     }
    //tc:o(n)
    //sc:o(n)

    //to optimise space complexity to o(1)-- use floyd cycle detection algo
    

//     if(head==NULL || head->next==NULL){
//         return false;
//     }

//     ListNode* slow=head;
//     ListNode* fast=head;
//     while(slow!=NULL && fast!=NULL){
//         fast=fast->next;
//         if(fast==NULL){
//             break;
//         }
//         fast=fast->next;
//         slow=slow->next;

//         if(fast==slow){
//             return true;
//         }
//     }
//     return false;
// }



// if(head==NULL || head->next==NULL){
//     return false;
// }

// ListNode* slow=head;
// ListNode* fast=head;

// while(slow!=NULL && fast!=NULL){
//     fast=fast->next;
//     if(fast==NULL){
//         break;
//     }
//     fast=fast->next;
//     slow=slow->next;

//     if(slow==fast){
//         return true;
        
//     }
    
// }

// return false;
//     }

//tc:o(n)
//sc:o(1)




    unordered_map<ListNode*,int>vis;

    ListNode* temp=head;
    while(temp!=NULL){
        if(vis[temp]==true){
            return true;
            
        }
        else{
            vis[temp]=true;
            temp=temp->next;
        }
    }
    return false;
    }
};