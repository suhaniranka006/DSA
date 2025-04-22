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

//brute o(n^2)

//optimal
    int maxPathSum(TreeNode* root) {
      int res=root->val;
      dfs(root,res);
      return res;
        
    }

    int dfs(TreeNode* root,int &res){
      if(root==NULL){
        return 0;
      }

      int left=max(0,dfs(root->left,res));
      int right=max(0,dfs(root->right,res));

      res=max(res,left+right+root->val);
      return max(left,right)+root->val;
    }
};