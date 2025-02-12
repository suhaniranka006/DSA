/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<vector<int>>zigzagLevelOrder(TreeNode* root) {
        // vector<vector<int>>result;
        // if(root==NULL){
        //     return result;
        // }

        // queue<TreeNode*>q;
        // q.push(root);

        // bool leftToRight=true;

        // while(!q.empty()){
        //     int size=q.size();

        //     vector<int>ans(size);

        //     //level process
        //     for(int i=0;i<size;i++){
        //         TreeNode* frontNode=q.front();
        //         q.pop();

        //         //normal insert or reverse insert
        //         int index=leftToRight ? i:size-i-1;
        //         ans[index]=frontNode->val;

        //         if(frontNode->left){
        //             q.push(frontNode->left);

        //         }

        //         if(frontNode->right){
        //             q.push(frontNode->right);
        //         }

        //     }
        //         //direction change krni h
        //         leftToRight=!leftToRight;

                
        //             result.push_back(ans);
                
        //     }
        
        //     return result;



        vector<vector<int>>result;


        if(root==NULL){
            return result;
        }

        queue<TreeNode*>q;
        q.push(root);


        bool lr=true;
        

        while(!q.empty()){
           int n=q.size();
           vector<int>ans(n);

           for(int i=0;i<n;i++){
            TreeNode* node=q.front();
            q.pop();


            int index = lr ? i:n-i-1;

            ans[index]=node->val;

            if(node->left){
                q.push(node->left);
            }            

            if(node->right){
                q.push(node->right);
            }
           }


                lr=!lr;
            result.push_back(ans);

        }

        return result;
        
        
    }
};