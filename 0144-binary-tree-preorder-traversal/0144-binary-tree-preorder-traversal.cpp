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

    //nlr
    //recursive
    //tc o(n)
    //sc o(n)

    // void f(TreeNode* root,vector<int>&res){
    //   //base case
    //   if(root==NULL){
    //     return;
    //   }
    //   res.push_back(root->val);
    //   f(root->left,res);
    //   f(root->right,res);

    // }
    // vector<int> preorderTraversal(TreeNode* root) {
    //     vector<int>res;
    //     f(root,res);
    //     return res;
    // }


    //iteratvie
    //tc o(n)
    //sc o(h)
     vector<int> preorderTraversal(TreeNode* root) {
          stack<TreeNode*>st;
          vector<int>res;
          
          if(root==NULL){
            return res;
          }

          st.push(root);

        while(!st.empty()){
          TreeNode* curr=st.top();
          st.pop();

          res.push_back(curr->val);

          if(curr->right){
            st.push(curr->right);
          }
          if(curr->left){
            st.push(curr->left);
          }


        }
            
          
          return res;

     }
};