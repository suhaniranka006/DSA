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
    //lnr
    void f(TreeNode* root,vector<int>&res){
      //recursion
      //base case
      if(root==NULL){
        return;
      }

      f(root->left,res);
      res.push_back(root->val);
      f(root->right,res);
    }
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int>res;
        f(root,res);
        return res;
    }
};