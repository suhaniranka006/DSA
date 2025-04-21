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

//tc o(n)
//sc o(n)
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>>result;

        if(root==NULL){
          return result;
        }

        queue<TreeNode*>q;

        bool lr=true;
        q.push(root);

        while(!q.empty()){
          int n=q.size();
          vector<int>current(n);
          for(int i=0;i<n;i++){
            TreeNode* curr=q.front();
            q.pop();


              int index =  lr ? i:n-i-1;
          current[index]=curr->val;


          
          if(curr->left){
            q.push(curr->left);
          }
          if(curr->right){
            q.push(curr->right);
          }
          
        
        }


        
       lr=!lr;
        result.push_back(current);
        }

        return result;
    }
};