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

    //recursive
    //tc o(n)
    //sc o(h) -- auxilliary
    //lnr
    // void f(TreeNode* root,vector<int>&res){
    //   //recursion
    //   //base case
    //   if(root==NULL){
    //     return;
    //   }

    //   f(root->left,res);
    //   res.push_back(root->val);
    //   f(root->right,res);
    // }
    // vector<int> inorderTraversal(TreeNode* root) {
    //     vector<int>res;
    //     f(root,res);
    //     return res;
    // }


          //iterative
          //tc o(n)
          //sc o(h)

      // vector<int> inorderTraversal(TreeNode* root) {
      //   vector<int>res;
      //     stack<TreeNode*>st;
      //     TreeNode* curr=root;
      //     while(curr!=NULL || !st.empty()){
      //       while(curr!=NULL){
      //         st.push(curr);
      //         curr=curr->left;
      //       }
      //         curr=st.top();
      //         st.pop();
      //         res.push_back(curr->val);
      //         curr=curr->right;

            
      //     }
      //     return res;
      // }


          //morris traversal
        vector<int> inorderTraversal(TreeNode* root) {
          vector<int>inorder;
          TreeNode* curr=root;

          while(curr!=NULL){
            if(curr->left==NULL){
              inorder.push_back(curr->val);
              curr=curr->right;
            }
            else {
              TreeNode* prev=curr->left;
              while(prev->right && prev->right!=curr){
                prev=prev->right;
              }
              if(prev->right==NULL){
                prev->right=curr;
                curr=curr->left;
              }
              else {
                prev->right=NULL;
                inorder.push_back(curr->val);
                curr=curr->right;
              }
            }
          }
          return inorder;

        }
};
