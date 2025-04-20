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
    //sc o(h)
    //lrn

    void f(TreeNode* root,vector<int>&result){
      //base case
      if(root==NULL){
        return ;
      }
      f(root->left,result);
      f(root->right,result);
      result.push_back(root->val);
    }
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int>result;
        f(root,result);
        return result;
    }
};