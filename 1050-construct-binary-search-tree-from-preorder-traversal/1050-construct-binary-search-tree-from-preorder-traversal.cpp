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
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        int n=preorder.size();
        int index=0;
        return solve(preorder,index,INT_MIN,INT_MAX);

    }
    TreeNode* solve(vector<int>&preorder,int &index,long min,long max){
      int n=preorder.size();
      if(index>=n){
        return NULL;
      }
      int val=preorder[index];
      if(val<min || val>max){
        return NULL;
      }
      TreeNode* root=new TreeNode(val);
      index++;
      root->left=solve(preorder,index,min,val);
      root->right=solve(preorder,index,val,max);
      return root;
    }
};