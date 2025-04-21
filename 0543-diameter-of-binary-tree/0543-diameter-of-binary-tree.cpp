/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    // find height of bt
    // find diameter of left,right and max of op1,op2,op3
    // tc o(n)
    // sc o(n)
    //  int height(TreeNode* root){
    //    if(root==NULL){
    //      return 0;
    //    }

    //   int left=height(root->left);
    //   int right=height(root->right);
    //   int ans= max(left,right)+1;
    //   return ans;
    // }
   // int diameterOfBinaryTree(TreeNode* root) {
        // if(root==NULL){
        //   return 0;
        // }
        // int op1=diameterOfBinaryTree(root->left);
        // int op2=diameterOfBinaryTree(root->right);
        // int op3=height(root->left)+height(root->right);
        // int ans=max(op1,max(op2,op3));
        // return ans;
   // }



      pair<int,int>f(TreeNode*root){
        if(root==NULL){
          return {0,0};
        }

        auto left=f(root->left);
        auto right=f(root->right);

        int diameter=max({left.first,right.first,left.second+right.second});
        int height=max(left.second,right.second)+1;

        return {diameter,height};
      }

    int diameterOfBinaryTree(TreeNode* root) {
      return f(root).first;

    }
};